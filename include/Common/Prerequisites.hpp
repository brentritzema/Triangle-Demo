/*
This file is part of the Journoob Project

Copyright (c) 2011 Ritztro

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
-----------------------------------------------------------------------------
*/
#ifndef JNP_PREREQUISITES_H_
#define JNP_PREREQUISITES_H_

#include <BuildSettings.hpp>

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <stdarg.h>
#include <assert.h>


	#define SAFE_DELETE(p) if(p) {delete p;p = 0;}

    #define SAFE_DELETE_ARRAY(p) if(p) {delete []p;p = 0;}

    #if DOUBLE_PRECISION == 1
        typedef double Real;
    #else
        typedef float Real;
    #endif

    typedef unsigned int uint32;
    typedef unsigned short uint16;
    typedef unsigned char uint8;
    typedef int int32;
    typedef short int16;
    typedef char int8;

#endif
