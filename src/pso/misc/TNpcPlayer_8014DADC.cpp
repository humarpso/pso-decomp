#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TNpcPlayer__sub_8014DC5C(void *);
u32 get_npc_state__10TNpcPlayerFPv(s32);
M2C_UNK TNpcPlayer__sub_80152900(void *, M2C_UNK, M2C_UNK);
M2C_UNK TNpcPlayer__sub_8015296C(void *, M2C_UNK, M2C_UNK);
u32 TNpcPlayer__sub_80152978(s32);
void TNpcPlayer__sub_8014DF0C(u8 *arg0);
}

extern "C" {

void TNpcPlayer__sub_8014DC30(void);
int TNpcPlayer__sub_8014DC3C(void* p);
void init_equipment__10TNpcPlayerFPv(void *arg0);
int TNpcPlayer__sub_80150A34(void*);
M2C_UNK TNpcPlayer__sub_801528A8(s32, M2C_UNK, u8);
M2C_UNK clamp_and_set_unit_value__10TObjPlayerFiUci(s32, u8, M2C_UNK);

void init_equipment__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_r31 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94);
    if (temp_r4 & 4) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 0);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 1);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 1, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 8) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 3);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 4);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 3, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 4, M2C_FIELD(arg0, u8 *, 0x50));
    } else if (temp_r4 & 0x10) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 6);
        clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x50), 8);
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 6, M2C_FIELD(arg0, u8 *, 0x50));
        TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 8, M2C_FIELD(arg0, u8 *, 0x50));
    }
    clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0xF);
    clamp_and_set_unit_value__10TObjPlayerFiUci(temp_r31, M2C_FIELD(arg0, u8 *, 0x51), 0x10);
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0xF, M2C_FIELD(arg0, u8 *, 0x51));
    TNpcPlayer__sub_801528A8(temp_r31 + 0x428, 0x10, M2C_FIELD(arg0, u8 *, 0x51));
}

    extern int TNpcPlayer__data_805D5864;
void TNpcPlayer__sub_8014DC30(void) { TNpcPlayer__data_805D5864 = 1; }

int TNpcPlayer__sub_8014DC3C(void* p) { return TNpcPlayer__sub_80150A34(p); }
#pragma push
#pragma scheduling off
void TNpcPlayer__sub_8014DF0C(u8 *arg0) {
    u32 temp_r31;
    u32 temp_r3;
    temp_r31 = TNpcPlayer__sub_80152978(M2C_FIELD(arg0, s32 *, 0x78));
    temp_r3 = get_npc_state__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78));
    if (temp_r3 != temp_r31) {
        TNpcPlayer__sub_8015296C(arg0 + 0x5C, 1, 0);
    }
    TNpcPlayer__sub_80152900(arg0 + 0x5C, 1, 3);
    TNpcPlayer__sub_8014DC5C(arg0);
}
#pragma pop

}
