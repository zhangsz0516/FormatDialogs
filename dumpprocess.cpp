// copyright (c) 2019-2020 hors<horsicq@gmail.com>
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
#include "dumpprocess.h"

DumpProcess::DumpProcess(QObject *pParent) : QObject(pParent)
{
    connect(&binary,SIGNAL(errorMessage(QString)),this,SIGNAL(errorMessage(QString)));
    connect(&binary,SIGNAL(dumpProgressValueChanged(qint32)),this,SIGNAL(progressValueChanged(qint32)));
    connect(&binary,SIGNAL(dumpProgressMinimumChanged(qint32)),this,SIGNAL(progressValueMinimum(qint32)));
    connect(&binary,SIGNAL(dumpProgressMaximumChanged(qint32)),this,SIGNAL(progressValueMaximum(qint32)));
}

void DumpProcess::setData(QIODevice *pDevice, qint64 nOffset, qint64 nSize, QString sFileName, DT dumpType)
{
    this->pDevice=pDevice;
    this->nOffset=nOffset;
    this->nSize=nSize;
    this->sFileName=sFileName;
    this->dumpType=dumpType;
}

void DumpProcess::stop()
{
    binary.setDumpProcessEnable(false);
}

void DumpProcess::process()
{
    QElapsedTimer scanTimer;
    scanTimer.start();

    binary.setData(pDevice);

    if(dumpType==DT_OFFSET)
    {
        binary.dumpToFile(sFileName,nOffset,nSize);
    }

    emit completed(scanTimer.elapsed());
}
