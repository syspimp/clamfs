/*!\file scancache.cxx

   \brief ScanCache (anti-virus scan result caching) routines

   $Id: scancache.cxx,v 1.4 2007-02-12 00:21:20 burghardt Exp $

*//*

   ClamFS - An user-space anti-virus protected file system
   Copyright (C) 2007 Krzysztof Burghardt.

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

#include <scancache.hxx>

namespace clamfs {

ScanCache::ScanCache(long int elements, long int expire):
    ExpireLRUCache<ino_t, time_t>::ExpireLRUCache<ino_t, time_t>(elements, expire) {
}

ScanCache::~ScanCache() {
}

} /* namespace clamfs */

/* EoF */
