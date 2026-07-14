#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_wave_params__13TBoss2DeRolLeFPv(u8 *arg0);
u8 update_state__13TBoss2DeRolLeFPv(u8 *arg0);
void init_move_params__13TBoss2DeRolLeFPv(u8 *arg0);
f32 get_random_float__8TObjFishFv(f32);
s32 TBoss2DeRolLe__sub_80035FCC(void *);
M2C_UNK set_move_params__13TBoss2DeRolLeFPvffff(void *, f32, f32, f32, f32);
M2C_UNK init_params__13TBoss2DeRolLeFPvfff(void *, f32, f32, f32);

extern const f32 TBoss2DeRolLe__data_805D82D8;
extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8358;
extern const f32 TBoss2DeRolLe__data_805D83DC;

void init_wave_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x660) = 1;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D83DC - M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x684, TBoss2DeRolLe__data_805D82D8, get_random_float__8TObjFishFv(TBoss2DeRolLe__data_805D8358 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8330);
}

extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D82B4;
extern const f32 TBoss2DeRolLe__data_805D8328;

u8 update_state__13TBoss2DeRolLeFPv(u8 *arg0) {
    s32 temp_r0;

    TBoss2DeRolLe__sub_80035FCC(arg0 + 0x684);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x65C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TBoss2DeRolLe__data_805D8280;
        if (M2C_FIELD(arg0, f32 *, 0x69C) > TBoss2DeRolLe__data_805D82B4) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 1;
        }
        break;
    case 1:
        if (TBoss2DeRolLe__sub_80035FCC(arg0 + 0x664) == 3) {
            M2C_FIELD(arg0, s32 *, 0x65C) = 2;
        }
        break;
    }
    if (M2C_FIELD(arg0, f32 *, 0x69C) > TBoss2DeRolLe__data_805D82B4) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) TBoss2DeRolLe__data_805D8328;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x65C) == 2);
}

extern const f32 TBoss2DeRolLe__data_805D82F0;
extern const f32 TBoss2DeRolLe__data_805D8300;
extern const f32 TBoss2DeRolLe__data_805D8330;
extern const f32 TBoss2DeRolLe__data_805D8348;
extern const f32 TBoss2DeRolLe__data_805D83AC;
extern const f32 lbl_805D8434;

void init_move_params__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x65C) = 0;
    init_params__13TBoss2DeRolLeFPvfff(arg0 + 0x664, TBoss2DeRolLe__data_805D82F0, get_random_float__8TObjFishFv(-M2C_FIELD(arg0, f32 *, 0x38)), TBoss2DeRolLe__data_805D8330);
    set_move_params__13TBoss2DeRolLeFPvffff(arg0 + 0x684, TBoss2DeRolLe__data_805D8348, get_random_float__8TObjFishFv(lbl_805D8434 - M2C_FIELD(arg0, f32 *, 0x40)), TBoss2DeRolLe__data_805D8300, TBoss2DeRolLe__data_805D83AC);
}

}
