/*
 * adcli
 *
 * Copyright (C) 2012 Red Hat Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 *
 * Author: Stef Walter <stefw@gnome.org>
 */

#ifndef GETSRVINFO_H_
#define GETSRVINFO_H_

#include <limits.h>

typedef struct _adcli_srvinfo {
	unsigned short priority;
	unsigned short weight;
	unsigned short port;
	char hostname[HOST_NAME_MAX];
	struct _adcli_srvinfo *next;
} adcli_srvinfo;

int           _adcli_getsrvinfo              (const char *rrname,
                                              adcli_srvinfo **res);

void          _adcli_freesrvinfo             (adcli_srvinfo *res);

#endif /* GETSRVINFO_H_ */
