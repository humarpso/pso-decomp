#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TNpcPlayer__sub_80149448(void *arg0);
void init_6x3E_packet__10TNpcPlayerFPv(void* a0);

    extern const float lbl_805DB1C4;
void init_6x3E_packet__10TNpcPlayerFPv(void* a0) { *(short*)((char*)a0 + 0x4) = 0; *(short*)((char*)a0 + 0x6) = 0; *(short*)((char*)a0 + 0x8) = -1; *(short*)((char*)a0 + 0xa) = -1; *(float*)((char*)a0 + 0x14) = lbl_805DB1C4; *(float*)((char*)a0 + 0x10) = lbl_805DB1C4; *(float*)((char*)a0 + 0xc) = lbl_805DB1C4; *(unsigned char*)((char*)a0 + 0x0) = 62; *(unsigned char*)((char*)a0 + 0x1) = 6; }

void TNpcPlayer__sub_80149448(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
}

}
