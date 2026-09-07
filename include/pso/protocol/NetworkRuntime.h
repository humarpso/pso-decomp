#ifndef PSO_PROTOCOL_NETWORK_RUNTIME_H
#define PSO_PROTOCOL_NETWORK_RUNTIME_H

#include "types.h"

extern "C" {
void NetStoreTick(s32* tick);
void NetStoreCurrentThread(s32* thread);
void NetYieldThread(void);
void NetSuspendCurrentThread(void);

s32 NetIPv4IsLoopback(s32 address);
s32 NetIPv4IsUnspecified(u32 address);
s32 NetIPv6IsMulticast(u8* address);
}

#endif
