#ifndef PSO_MISC_TPACKET_H
#define PSO_MISC_TPACKET_H

#include "types.h"

struct TPacket
{
    void clear_send_buffer();
};

extern "C" {
void *TPacket__ct(void *arg0);
void *__dt__7TPacketFv(void *arg0, s16 arg1);
}

#endif
