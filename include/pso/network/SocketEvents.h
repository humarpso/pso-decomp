#ifndef PSO_NETWORK_SOCKET_EVENTS_H
#define PSO_NETWORK_SOCKET_EVENTS_H

#include "types.h"

extern "C" void NetDispatchSocketEvent(s16 handle, s32 callback, s32 protocol, s16 event);

#endif
