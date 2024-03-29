/*
   This file is generated by Cmake and it is a part of the Journoob Project

   Copyright (c) 2012 Brent Ritztro

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
#ifndef JNP_CMAKE_DEF_H_
#define JNP_CMAKE_DEF_H_

   //Platform and compiler related defines to set
   #define PLATFORM_WIN 1
   #define PLATFORM_UNIX  2
   #define PLATFORM_OS_X  3

   #define COMPILER_MSVC  1
   #define COMPILER_GCC   2
   #define COMPILER_BORL  3
   #define COMPILER_MINGW 4

   // JNP version
   #define VERSION_MAJOR @triangle_VERSION_MAJOR@
   #define VERSION_MINOR @triangle_VERSION_MINOR@

   //Platforms
   #ifdef WIN32
   #define PLATFORM PLATFORM_WIN
   #endif

   #cmakedefine UNIX
   #ifdef UNIX
   #define PLATFORM PLATFORM_UNIX
   #endif

   #cmakedefine MAC_OS_X
   #ifdef MAC_OS_X
   #define PLATFORM PLATFORM_OS_X
   #endif

   //Compilers
   #cmakedefine MINGW
   #ifdef MINGW
   #define COMPILER COMPILER_MINGW
   #endif

   #cmakedefine BORLAND
   #ifdef BORLAND
   #define COMPILER COMPILER_BORL
   #endif

   #cmakedefine CMAKE_COMPILER_GNUCC
   #ifdef CMAKE_COMPILER_GNUCC
   #define COMPILER COMPILER_GCC
   #endif
   #cmakedefine MSVC
   #ifdef MSVC
   #define COMPILER COMPILER_MSVC
   #define COMPILER_VER _MSC_VER
   #endif
#endif
