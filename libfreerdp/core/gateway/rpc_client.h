/**
 * FreeRDP: A Remote Desktop Protocol Implementation
 * RPC Client
 *
 * Copyright 2012 Marc-Andre Moreau <marcandre.moreau@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FREERDP_CORE_RPC_CLIENT_H
#define FREERDP_CORE_RPC_CLIENT_H

#include "rpc.h"

#include <winpr/interlocked.h>

int rpc_send_enqueue_pdu(rdpRpc* rpc, BYTE* buffer, UINT32 length);
int rpc_send_dequeue_pdu(rdpRpc* rpc);

int rpc_recv_enqueue_pdu(rdpRpc* rpc);
RPC_PDU* rpc_recv_dequeue_pdu(rdpRpc* rpc);

int rpc_client_new(rdpRpc* rpc);
int rpc_client_start(rdpRpc* rpc);

#endif /* FREERDP_CORE_RPC_CLIENT_H */
