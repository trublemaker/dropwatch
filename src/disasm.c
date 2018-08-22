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

#include <stdarg.h>
#include <stdio.h>

#include <dis-asm.h>

#include "disasm.h"


int
_bfd_disassembler_info_fprintf (void       *fp, 
                                const char *fmt,
                                ...)
{
	va_list ap;
	int r;

	va_start (ap, fmt);
	r = vfprintf (fp, fmt, ap);
	fflush (fp);
	va_end (ap);

	return r;
}

void
_bfd_disassembler_info_print_address (bfd_vma                  vma, 
                                      struct disassemble_info *info)
{
	(*info->fprintf_func) (info->stream, ">0x%016x", vma);
}
