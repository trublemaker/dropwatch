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

#include <bfd.h> /* the system bfd defs */

#include "bfd.h" /* our matching include file in cbits */

int 
_bfd_peek_target_defaulted (struct bfd *bfd)
{
    return bfd->target_defaulted;
}

int
_bfd_peek_cacheable (struct bfd *bfd)
{
    return bfd->cacheable;
}

int
_bfd_peek_has_armap (struct bfd *bfd)
{
    return bfd->has_armap;
}

int
_bfd_peek_is_thin_archive (struct bfd *bfd)
{
    return bfd->is_thin_archive;
}

