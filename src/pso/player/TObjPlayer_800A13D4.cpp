#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800A31F4(void);
void TObjPlayer__sub_800A31F8(void);
void TObjPlayer__sub_800A31FC(void);
void apply_fall_damage_flag__10TObjPlayerFi(s32 arg0);
void cleanup_effects__10TObjPlayerFv(void);
void *create_instance__10TObjPlayerFPv(void *arg0);
M2C_UNK TEneEffHamon__sub_800A380C();
void TLobby__sub_8001FE7C(void*, int);
void *TObjPlayer__sub_800A2F94(void *, void *, void *);
void *__nw__7TObjectFUl(int);
f32 fn_8013157C(s32, s32);
void free_if_valid__10TObjPlayerFi(void*);
M2C_UNK reset_effect_count__10TObjPlayerFv();
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(s32, M2C_UNK);

extern f32 lbl_805D9988;

void apply_fall_damage_flag__10TObjPlayerFi(s32 arg0) {
    M2C_UNK var_r4;

    if (fn_8013157C(arg0 + 0x38, arg0 + 0x50) > lbl_805D9988) {
        var_r4 = 8;
    } else {
        var_r4 = 0;
    }
    update_if_active__15TObjEneMe1GiGueFPv(arg0, var_r4);
}

extern void *tl_04;

void *create_instance__10TObjPlayerFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x42C);
    if (o != NULL) {
        o = TObjPlayer__sub_800A2F94(o, tl_04, arg0);
    }
    return o;
}

extern u32 lbl_805D500C;
extern u32 lbl_805D5010;

void cleanup_effects__10TObjPlayerFv(void) {
    if ((u32) lbl_805D500C != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D500C, 1);
        lbl_805D500C = 0U;
    }
    if ((u32) lbl_805D5010 != 0U) {
        free_if_valid__10TObjPlayerFi((void*)lbl_805D5010);
        lbl_805D5010 = 0U;
    }
    reset_effect_count__10TObjPlayerFv();
    TEneEffHamon__sub_800A380C();
}

void TObjPlayer__sub_800A31F4(void) {  }
void TObjPlayer__sub_800A31F8(void) {  }
void TObjPlayer__sub_800A31FC(void) {  }

}
