/*
    Copyright (C) 2010 Casey Link <unnamedrambler@gmail.com>

    This library is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 3 of the License, or (at your
    option) any later version.

    This library is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to the
    Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
    02110-1301, USA.
*/

#ifndef COMMANDIMPL_H
#define COMMANDIMPL_H
#include "Command.h"

namespace PietCommand
{
    Command Noop();
    Command Push();
    Command Pop();
    Command Add();
    Command Subtract();
    Command Multiply();
    Command Divide();
    Command Mod();
    Command Not();
    Command Greater();
    Command Pointer();
    Command Switch();
    Command Duplicate();
    Command Roll();
    Command In();
    Command Out();
}
#endif