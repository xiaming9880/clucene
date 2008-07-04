/*------------------------------------------------------------------------------
* Copyright (C) 2003-2006 Ben van Klinken and the CLucene Team
* 
* Distributable under the terms of either the Apache License (Version 2.0) or 
* the GNU Lesser General Public License, as specified in the COPYING file.
------------------------------------------------------------------------------*/
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//
#ifndef _lucene_examples_demo_stdafx_
#define _lucene_examples_demo_stdafx_

#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#include <stdio.h>
#include "demo/config.h"
//#include <tchar.h>

#define CL_MAX_DIR 1024

#include "CLucene/StdHeader.h"

void strcpy_a2t(TCHAR* to, const char* from, size_t len);
#define STRCPY_AtoT strcpy_a2t

uint64_t currentTimeMillis();

#endif
