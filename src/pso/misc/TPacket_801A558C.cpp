#include "types.h"

extern "C" {

void clear_send_buffer__7TPacketFPv(void* p);

void clear_send_buffer__7TPacketFPv(void* p) { *(s32*)((char*)p + 0x8b8) = 0; }

}
