#include "types.h"

extern "C" {

void reset_action_state__10TObjPlayerFPv(void* a0);

    extern const float TObjPlayer__data_805DC36C;
void reset_action_state__10TObjPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x4) = 0; *(float*)((char*)a0 + 0xc) = TObjPlayer__data_805DC36C; *(float*)((char*)a0 + 0x8) = TObjPlayer__data_805DC36C; *(unsigned char*)((char*)a0 + 0x0) = 75; *(unsigned char*)((char*)a0 + 0x1) = 4; }

}
