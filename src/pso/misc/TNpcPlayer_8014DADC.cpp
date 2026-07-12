#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_equipment__10TNpcPlayerFPv(void *arg0);
M2C_UNK TNpcPlayer__sub_801528A8(s32, M2C_UNK, u8);
M2C_UNK TObjPlayer__sub_801CCBB8(s32, u8, M2C_UNK);

void init_equipment__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94);
    if (temp_r4 & 4) {
        TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 0);
        TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 1);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 1, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 8) {
        TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 3);
        TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 4);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 3, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 4, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 0x10) {
        TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 6);
        TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 8);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 6, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 8, M2C_FIELD(arg0, u8 *, 0x50));
    }
    TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0xF);
    TObjPlayer__sub_801CCBB8(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0x10);
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0xF, M2C_FIELD(arg0, u8 *, 0x51));
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0x10, M2C_FIELD(arg0, u8 *, 0x51));
}

}
