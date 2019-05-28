/*
 * Copyright (c) 2015, EURECOM (www.eurecom.fr)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * The views and conclusions contained in the software and documentation are those
 * of the authors and should not be interpreted as representing official policies,
 * either expressed or implied, of the FreeBSD Project.
 */
// This task is mandatory and must always be placed in first position
TASK_DEF(TASK_TIMER, 16)

// Other possible tasks in the process

/// GTPV1-U task
TASK_DEF(TASK_GTPV1_U, 256)
/// FW_IP task
TASK_DEF(TASK_FW_IP, 256)
/// MME Applicative task
TASK_DEF(TASK_MME_APP, 256)
/// NAS task
TASK_DEF(TASK_NAS_MME, 256)
/// S11 task
TASK_DEF(TASK_S11, 256)
/// S1AP task
TASK_DEF(TASK_S1AP, 256)
/// S6a task
TASK_DEF(TASK_S6A, 256)
/// SCTP task
TASK_DEF(TASK_SCTP, 256)
/// Serving and Proxy Gateway Application task
TASK_DEF(TASK_SPGW_APP, 256)
/// PGW Application task
TASK_DEF(TASK_PGW_APP, 256)
/// UDP task
TASK_DEF(TASK_UDP, 256)
//MESSAGE GENERATOR TASK
TASK_DEF(TASK_MSC, 256)
//LOGGING TXT TASK
TASK_DEF(TASK_LOG, 1024)
//GENERAL PURPOSE SHARED LOGGING TASK
TASK_DEF(TASK_SHARED_TS_LOG, 1024)
//UTILITY TASK FOR SYSTEM() CALLS
TASK_DEF(TASK_ASYNC_SYSTEM, 256)
//SERVICE303 TASK
TASK_DEF(TASK_SERVICE303, 16)
TASK_DEF(TASK_SERVICE303_SERVER, 16)
// S6A_SERVICE TASK
TASK_DEF(TASK_S6A_SERVICE, 16)
TASK_DEF(TASK_S6A_SERVICE_SERVER, 16)
/// SGs task
TASK_DEF(TASK_SGS, 256)
/// SGs service task for GRPC server
TASK_DEF(TASK_SGS_SERVICE_SERVER, 256)
