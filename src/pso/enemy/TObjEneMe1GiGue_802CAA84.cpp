#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_802CAAF0 { s32 x; s32 y; };

struct S_802CAAF0 {
    u8 pad0[0x2FC];
    u8 f2FC[0x8C];
    u32 f388;
};

extern "C" {
extern const f32 TObjEneMe1GiGue__data_805DE660;
f32 TObjPlayer__sub_8001311C(void *, s32, V_802CAAF0, s32, s32, s32);
M2C_UNK show_miss_popup(void *, void *);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);
f32 TObjEneMe1GiGue__sub_802CAAF0(S_802CAAF0 *arg0, s32 arg1, V_802CAAF0 arg2, s32 arg3);
}

extern "C" {

f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0);
f32 TObjPlayer__sub_80011824();
f32 TObjPlayer__sub_80014108();
M2C_UNK show_miss_popup(void *, void *);
M2C_UNK set_state__15TObjEneMe1GiGueFPvi(void *, M2C_UNK);

extern const f32 TObjEneMe1GiGue__data_805DE660;

f32 calc_attack_range__15TObjEneMe1GiGueFPv(u8 *arg0) {
    f32 var_f31;

    var_f31 = TObjEneMe1GiGue__data_805DE660;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) {
        show_miss_popup(arg0, arg0 + 0x2FC);
        set_state__15TObjEneMe1GiGueFPvi(arg0, 0xA);
    } else {
        var_f31 = TObjPlayer__sub_80011824();
    }
    return var_f31;
}

extern const f32 TObjEneMe1GiGue__data_805DE660;

f32 TObjEneMe1GiGue__sub_802CAAF0(S_802CAAF0 *arg0, s32 arg1, V_802CAAF0 arg2, s32 arg3) {
    f32 r = TObjEneMe1GiGue__data_805DE660;
    if (arg0->f388 & 0x80000) {
        show_miss_popup(arg0, arg0->f2FC);
        set_state__15TObjEneMe1GiGueFPvi((void *)(arg0), (M2C_UNK)(10));
    } else {
        r = TObjPlayer__sub_8001311C(arg0, arg1, arg2, arg3, -1, -1);
    }
    return r;
}

f32 get_target_range__15TObjEneMe1GiGueFPv(u8 *arg0) {
    f32 var_f31;

    var_f31 = TObjEneMe1GiGue__data_805DE660;
    if (M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) {
        show_miss_popup(arg0, arg0 + 0x2FC);
        set_state__15TObjEneMe1GiGueFPvi(arg0, 0xA);
    } else {
        var_f31 = TObjPlayer__sub_80014108();
    }
    return var_f31;
}

}
