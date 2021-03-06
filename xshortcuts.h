// copyright (c) 2020 hors<horsicq@gmail.com>
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
#ifndef XSHORTCUTS_H
#define XSHORTCUTS_H

#include <QKeySequence>
#include <QShortcut>

namespace XShortcuts
{
    const quint32 GOTOENTRYPOINT                =Qt::Key_E;
    const quint32 GOTOADDRESS                   =Qt::CTRL+Qt::Key_G;
    const quint32 GOTOOFFSET                    =Qt::CTRL+Qt::Key_H;
    const quint32 GOTORELADDRESS                =Qt::CTRL+Qt::Key_R;
    const quint32 DUMPTOFILE                    =Qt::CTRL+Qt::Key_D;
    const quint32 DISASM                        =Qt::Key_D;
    const quint32 TODATA                        =Qt::Key_A;
    const quint32 SIGNATURE                     =Qt::Key_S;
    const quint32 HEX                           =Qt::Key_H;
    const quint32 COPYADDRESS                   =Qt::CTRL+Qt::Key_J;
    const quint32 COPYOFFSET                    =Qt::CTRL+Qt::Key_K;
    const quint32 COPYRELADDRESS                =Qt::CTRL+Qt::Key_L;
    const QKeySequence::StandardKey SELECTALL   =QKeySequence::SelectAll;
    const QKeySequence::StandardKey COPYASHEX   =QKeySequence::Copy;
    const QKeySequence::StandardKey FIND        =QKeySequence::Find;
    const QKeySequence::StandardKey FINDNEXT    =QKeySequence::FindNext;
}

#endif // XSHORTCUTS_H
