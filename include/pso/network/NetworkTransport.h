#ifndef PSO_NETWORK_NETWORKTRANSPORT_H
#define PSO_NETWORK_NETWORKTRANSPORT_H
#include "types.h"

extern "C" {
void init_modem_buffer_config(void* config);
}
s32 init_modem_session_config();
#endif
