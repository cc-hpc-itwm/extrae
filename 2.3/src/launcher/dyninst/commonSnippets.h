/*****************************************************************************\
 *                        ANALYSIS PERFORMANCE TOOLS                         *
 *                                   Extrae                                  *
 *              Instrumentation package for parallel applications            *
 *****************************************************************************
 *     ___     This library is free software; you can redistribute it and/or *
 *    /  __         modify it under the terms of the GNU LGPL as published   *
 *   /  /  _____    by the Free Software Foundation; either version 2.1      *
 *  /  /  /     \   of the License, or (at your option) any later version.   *
 * (  (  ( B S C )                                                           *
 *  \  \  \_____/   This library is distributed in hope that it will be      *
 *   \  \__         useful but WITHOUT ANY WARRANTY; without even the        *
 *    \___          implied warranty of MERCHANTABILITY or FITNESS FOR A     *
 *                  PARTICULAR PURPOSE. See the GNU LGPL for more details.   *
 *                                                                           *
 * You should have received a copy of the GNU Lesser General Public License  *
 * along with this library; if not, write to the Free Software Foundation,   *
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA          *
 * The GNU LEsser General Public License is contained in the file COPYING.   *
 *                                 ---------                                 *
 *   Barcelona Supercomputing Center - Centro Nacional de Supercomputacion   *
\*****************************************************************************/

/* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- *\
 | @file: $HeadURL$
 | @last_commit: $Date$
 | @version:     $Revision$
\* -=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=- */

#ifndef _COMMON_SNIPPETS_H_INCLUDED_
#define _COMMON_SNIPPETS_H_INCLUDED_

#include <BPatch.h>
#include <BPatch_function.h>
#include <string>

using namespace std;

BPatch_Vector<BPatch_function *> getRoutines (string &routine,
	BPatch_image *appImage, bool warn = true);

BPatch_function * getRoutine (string &routine, BPatch_image *appImage,
	bool warn = true);

BPatch_Vector<BPatch_function *> getRoutines (const char *routine,
	BPatch_image *appImage, bool warn = true);

BPatch_function * getRoutine (const char *routine, BPatch_image *appImage,
	bool warn = true);

void wrapRoutine (BPatch_image *appImage, string routine, string wrap_begin,
	string wrap_end, unsigned nparams = 0);

void wrapTypeRoutine (BPatch_function *function, string routine, int type,
	BPatch_image *appImage);

#endif

