#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TWindowSubStatusDisp__sub_80145190(u16, void *);
extern u8 lbl_805D56C0;
s32 TWindowSubStatusDisp__sub_80145278(u16 arg0, u8 *arg1, void **arg2);
}

extern "C" {

u8 calc_gauge_scale__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
int end_render_forward__20TWindowSubStatusDispFPv(void* p);
s32 is_alpha_char__20TWindowSubStatusDispFUs(u16 arg0);
void pack_status_flags__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1);
void reset_gauge__20TWindowSubStatusDispFPv(void* p);
void *TWindowSubStatusDisp__sub_801452DC();
int TWindowSubStatusDisp__sub_801454E0(void*);
int TWindowSubStatusDisp__sub_803DEE6C(void*);
int TWindowSubStatusDisp__sub_803DF160(void*, void*);
int get_player__20TWindowSubStatusDispFv(void*);

s32 is_alpha_char__20TWindowSubStatusDispFUs(u16 arg0) {
    if (arg0 < 0x41U) {
        return 0;
    }
    if (arg0 > 0x7AU) {
        return 0;
    }
    if (arg0 >= 0x61U) {
        return 1;
    }
    return arg0 <= 0x5AU ? 1 : 0;
}

void pack_status_flags__20TWindowSubStatusDispFPvUi(void *arg0, u32 arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) ((arg1 >> 4U) & 3);
    M2C_FIELD(arg0, u8 *, 0) = (u8) (M2C_FIELD(arg0, u8 *, 0) | ((arg1 >> 2U) & 0x30));
    M2C_FIELD(arg0, u8 *, 1) = (u8) (arg1 & 3);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (M2C_FIELD(arg0, u8 *, 1) | ((arg1 * 4) & 0x30));
}

extern M2C_UNK lbl_8043F3D0;
extern u8 lbl_805D56C0;
extern const f32 lbl_805DB194;

s32 TWindowSubStatusDisp__sub_80145278(u16 arg0, u8 *arg1, void **arg2) {
    u8 temp_r7;
    temp_r7 = M2C_FIELD(arg1, u8 *, 3);
    if (temp_r7 == (u8) lbl_805D56C0) {
        return 0;
    }
    if (temp_r7 != (u8) (lbl_805D56C0 - 1)) {
        TWindowSubStatusDisp__sub_80145190(arg0, arg1);
        return 1;
    }
    if ((void *) *arg2 == NULL) {
        *arg2 = arg1;
    }
    return 0;
}

u8 calc_gauge_scale__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = TWindowSubStatusDisp__sub_801452DC();
    M2C_FIELD(temp_r3, u8 *, 3) = (u8) lbl_805D56C0;
    TWindowSubStatusDisp__sub_803DF160((void*)(M2C_FIELD(temp_r3, u8 *, 4)), (void*)(arg2));
    M2C_FIELD(arg1, f32 *, 0x10) = (f32) ((f32) M2C_FIELD(temp_r3, u8 *, 5) * lbl_805DB194);
    M2C_FIELD(arg1, f32 *, 0x14) = (f32) ((f32) M2C_FIELD(temp_r3, u8 *, 6) * lbl_805DB194);
    return M2C_FIELD(temp_r3, u8 *, 2);
}

int end_render_forward__20TWindowSubStatusDispFPv(void* p) { return get_player__20TWindowSubStatusDispFv(p); }
void reset_gauge__20TWindowSubStatusDispFPv(void* p) { TWindowSubStatusDisp__sub_803DEE6C((void*)1); TWindowSubStatusDisp__sub_801454E0(p); TWindowSubStatusDisp__sub_803DF160((void*)((void*)0), (void*)((void*)-1)); }

}
