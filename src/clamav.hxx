/*
   ClamFS - Userspace anti-virus secured filesystem
   Copyright (C) 2006 Krzysztof Burghardt.

   $Id: clamav.hxx,v 1.1.1.1 2007-01-04 02:22:47 burghardt Exp $

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef CLAMFS_CLAMAV_HXX
#define CLAMFS_CLAMAV_HXX

#include <config.h>

#include <cc++/file.h>
#include <cc++/unix.h>

#include <rlog.hxx>

namespace clamfs {

using namespace std;
using namespace ost;

extern RLogChannel *Debug;
extern RLogChannel *Info;
extern RLogChannel *Warn;

int OpenClamav(const char *unixSocket);
int PingClamav();
void CloseClamav();
int ClamavScanFile(const char *filename);

} /* namespace clamfs */

#endif /* CLAMFS_CLAMAV_HXX */

// EoF
