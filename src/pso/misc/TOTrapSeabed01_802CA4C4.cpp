#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw__14TOTrapSeabed01FPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOTrapSeabed01__sub_802CA3EC(void *, s32);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK fn_80141A30();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK func_80141618__Fv();
M2C_UNK set_depth_buffer_settings_3__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(M2C_UNK);

extern s32 TOTrapSeabed01__data_805D6814;

void draw__14TOTrapSeabed01FPv(u8 *arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || ((s32) M2C_FIELD(arg0, s32 *, 0x34C) == 0)) {
        set_depth_buffer_settings_3__Fv();
        set_depth_buffer_settings_id__FUl(1);
        begin_effect_render__13TParticleCtrlFv();
        TObjFish__sub_803DA798(TOTrapSeabed01__data_805D6814);
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        TOTrapSeabed01__sub_802CA3EC(arg0, M2C_FIELD(arg0, s32 *, 0x34));
        TObjPlayer__sub_803D9B78();
        end_effect_render__13TParticleCtrlFv();
        func_80141618__Fv();
        fn_80141A30();
    }
}

}
