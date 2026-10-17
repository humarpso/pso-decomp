#ifndef PSO_NETWORK_TCP_H
#define PSO_NETWORK_TCP_H

#include "types.h"

s32 tcp_abort(s16 socket);
s32 tcp_create(void);
s32 tcp_delete(s16 socket);

#endif
