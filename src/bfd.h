/* This file is part of Bindings-bfd.
 *
 * Copyright (C) 2011 Mick Nelso
 *
 * Bindings-bfd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Bindings-bfd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Bindings-bfd.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __CBITS_BFD_CBITS_H__
#define __CBITS_BFD_CBITS_H__

#include <bfd.h>

#include "bfd.h"


int _bfd_peek_target_defaulted (struct bfd *);
int _bfd_peek_cacheable (struct bfd *);
int _bfd_peek_has_armap (struct bfd *);
int _bfd_peek_is_thin_archive (struct bfd *);

#endif /* __CBITS_BFD_CBITS_H__ */
