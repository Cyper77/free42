/*****************************************************************************
 * Free42 -- a free HP-42S calculator clone
 * Copyright (C) 2004-2005  Thomas Okken
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2,
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *****************************************************************************/

#ifndef CORE_COMMANDS4_H
#define CORE_COMMANDS4_H 1

#include "free42.h"
#include "core_globals.h"

int docmd_insr(arg_struct *arg) COMMANDS4_SECT;
int docmd_integ(arg_struct *arg) COMMANDS4_SECT;
int docmd_invrt(arg_struct *arg) COMMANDS4_SECT;
int docmd_j_add(arg_struct *arg) COMMANDS4_SECT;
int docmd_j_sub(arg_struct *arg) COMMANDS4_SECT;
int docmd_linf(arg_struct *arg) COMMANDS4_SECT;
int docmd_linsigma(arg_struct *arg) COMMANDS4_SECT;
int docmd_ln_1_x(arg_struct *arg) COMMANDS4_SECT;
int docmd_logf(arg_struct *arg) COMMANDS4_SECT;
int docmd_not(arg_struct *arg) COMMANDS4_SECT;
int docmd_old(arg_struct *arg) COMMANDS4_SECT;
int docmd_or(arg_struct *arg) COMMANDS4_SECT;
int docmd_pgmint(arg_struct *arg) COMMANDS4_SECT;
int docmd_pgmslv(arg_struct *arg) COMMANDS4_SECT;
int docmd_pgminti(arg_struct *arg) COMMANDS4_SECT;
int docmd_pgmslvi(arg_struct *arg) COMMANDS4_SECT;
int docmd_posa(arg_struct *arg) COMMANDS4_SECT;
int docmd_putm(arg_struct *arg) COMMANDS4_SECT;
int docmd_pwrf(arg_struct *arg) COMMANDS4_SECT;
int docmd_rclel(arg_struct *arg) COMMANDS4_SECT;
int docmd_rclij(arg_struct *arg) COMMANDS4_SECT;
int docmd_rnrm(arg_struct *arg) COMMANDS4_SECT;
int docmd_rotxy(arg_struct *arg) COMMANDS4_SECT;
int docmd_rsum(arg_struct *arg) COMMANDS4_SECT;
int docmd_swap_r(arg_struct *arg) COMMANDS4_SECT;
int docmd_sinh(arg_struct *arg) COMMANDS4_SECT;
int docmd_solve(arg_struct *arg) COMMANDS4_SECT;
int docmd_vmsolve(arg_struct *arg) COMMANDS4_SECT;
int docmd_stoel(arg_struct *arg) COMMANDS4_SECT;
int docmd_stoij(arg_struct *arg) COMMANDS4_SECT;
int docmd_tanh(arg_struct *arg) COMMANDS4_SECT;
int docmd_trans(arg_struct *arg) COMMANDS4_SECT;
int docmd_uvec(arg_struct *arg) COMMANDS4_SECT;
int docmd_wrap(arg_struct *arg) COMMANDS4_SECT;
int docmd_x_swap(arg_struct *arg) COMMANDS4_SECT;
int docmd_xor(arg_struct *arg) COMMANDS4_SECT;
int docmd_to_dec(arg_struct *arg) COMMANDS4_SECT;
int docmd_to_oct(arg_struct *arg) COMMANDS4_SECT;
int docmd_left(arg_struct *arg) COMMANDS4_SECT;
int docmd_up(arg_struct *arg) COMMANDS4_SECT;
int docmd_down(arg_struct *arg) COMMANDS4_SECT;
int docmd_right(arg_struct *arg) COMMANDS4_SECT;
int docmd_percent_ch(arg_struct *arg) COMMANDS4_SECT;
int docmd_simq(arg_struct *arg) COMMANDS4_SECT;
int docmd_mata(arg_struct *arg) COMMANDS4_SECT;
int docmd_matb(arg_struct *arg) COMMANDS4_SECT;
int docmd_matx(arg_struct *arg) COMMANDS4_SECT;
int docmd_max(arg_struct *arg) COMMANDS4_SECT;
int docmd_min(arg_struct *arg) COMMANDS4_SECT;
int docmd_find(arg_struct *arg) COMMANDS4_SECT;
int docmd_sigmaadd(arg_struct *arg) COMMANDS4_SECT;
int docmd_sigmasub(arg_struct *arg) COMMANDS4_SECT;

#endif
