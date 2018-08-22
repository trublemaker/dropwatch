/* This file is part of Bindings-bfd.
 *
 * Copyright (C) 2010,2011 Mick Nelso
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

#ifndef __CBITS_DISASM_H__
#define __CBITS_DISASM_H__

#include <dis-asm.h>

int  _bfd_disassembler_info_fprintf (void *, const char *, ...);
void _bfd_disassembler_info_print_address (bfd_vma, struct disassemble_info *);

#endif /* __CBITS_DISASM_H__ */
