#ifndef PSO_PROTOCOL_NETWORK_RUNTIME_H
#define PSO_PROTOCOL_NETWORK_RUNTIME_H

#include "types.h"

extern "C" {
void NetStoreTick(s32* tick);
void NetStoreCurrentThread(s32* thread);
}
void NetYieldThread(void);
extern "C" {
void NetSuspendCurrentThread(void);

s32 NetIPv4IsLoopback(s32 address);
s32 NetIPv4IsUnspecified(u32 address);
s32 NetIPv6IsMulticast(u8* address);
}

extern "C" {
void NetIPv6CPCancelTimer(s32 arg0);
s32 NetIPv6CPSetInterfaceIdentifier(u8 *arg0, s32 arg1);
s32 NetMemcmp(void *_w0, void *_w1, int _w2);
void NetMemcpy(void *_w0, void *_w1, int _w2);
void NetMemset(void *_w0, int _w1, int _w2);
void NetResumeThread(void);
void NetStoreCurrentThread(s32 *arg0);
void NetStoreTick(s32 *arg0);
void NetSuspendCurrentThread(void);
void TLobby__sub_803FA234(void);
void TLobby__sub_803FA238(u8 *arg0);
void TLobby__sub_803FA280(void);
}

// --- C functions defined in NetworkRuntime.cpp ---
extern "C" {
void NetIPv6CPCancelTimer(s32 arg0);
s32 NetIPv6CPSetInterfaceIdentifier(u8 *arg0, s32 arg1);
s32 NetMemcmp(void *_w0, void *_w1, int _w2);
void NetMemcpy(void *_w0, void *_w1, int _w2);
void NetMemset(void *_w0, int _w1, int _w2);
void NetResumeThread(void);
void NetStoreCurrentThread(s32 *arg0);
void NetStoreTick(s32 *arg0);
void NetSuspendCurrentThread(void);
void TLobby__sub_803FA234(void);
void TLobby__sub_803FA238(u8 *arg0);
void TLobby__sub_803FA280(void);
}
// --- end of C functions

#endif
