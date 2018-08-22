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

#ifndef __SECTION_H__
#define __SECTION_H__

#include <bfd.h>


void _section_poke_user_set_vma (struct bfd_section *, int);

#endif /* __SECTION_H__ */
