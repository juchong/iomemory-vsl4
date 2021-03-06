//-----------------------------------------------------------------------------
// Copyright (c) 2006-2014, Fusion-io, Inc.(acquired by SanDisk Corp. 2014)
// Copyright (c) 2014-2015 SanDisk Corp. and/or all its affiliates. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
// * Neither the name of the SanDisk Corp. nor the names of its contributors
//   may be used to endorse or promote products derived from this software
//   without specific prior written permission.
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY,
// OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
// OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
// WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//-----------------------------------------------------------------------------

/** @file
 *     NO OS-SPECIFIC REFERENCES ARE TO BE IN THIS FILE
 *
 */

/**
 * @defgroup PORTING_LAYER Porting Layer
 * The top level module for porting layer
 * @{
 *
 * @defgroup PORT_COMMON_LINUX Common Linux Port
 * The module for common linux port
 *
 * @defgroup PORT_ESXI5 ESXi5 Port
 * The module for ESXi5 port
 *
 * @defgroup PORT_ESXI6 ESXi6 Port
 * The module for ESXi6 port
 *
 * @defgroup PORT_FREEBSD FreeBSD Port
 * The module for FreeBSD port
 *
 * @defgroup PORT_LINUX Linux Port
 * The module for Linux port
 *
 * @defgroup PORT_OSX OSX Port
 * The module for OSX port
 *
 * @defgroup PORT_SOLARIS Solaris Port
 * The module for Solaris port
 *
 * @defgroup PORT_UEFI UEFI Port
 * The module for UEFI port
 *
 * @defgroup PORT_USD USD Port
 * The module for USD port
 *
 * @defgroup PORT_WINDOWS Windows Port
 * The module for Windows port
 *
 * @}
 */


/**
 * @brief global types that are included by both the core and the porting
 * layer code.
 */

#ifndef __FIO_PORT_GLOBAL_H__
#define __FIO_PORT_GLOBAL_H__

typedef long fio_off_t;
typedef long long fio_loff_t;
typedef int fio_mode_t;


typedef          long  fio_intptr_t;
typedef unsigned long  fio_uintptr_t;
typedef unsigned long  fio_size_t;
typedef          long  fio_ssize_t;

/**
 * @typedef kfio_maa_t
 * @brief Memory Allocation Action describing the strategy that the
 * allocator should use.  This corresponds to gfp_t (Get Free Pages)
 * in Linux.
 */
typedef unsigned  kfio_maa_t;

typedef unsigned long long fusion_paddr_t;  /* dma_addr_t */


#endif //__FIO_PORT_GLOBAL_H__
