#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void TWindowHelpItem__sub_80270060(s32, u32);
void TWindowLockOn__sub_80262FDC(u8 *arg0);
}

extern "C" {

void TWindowLockOn__sub_80262FD8(void);
void *__dt__13TWindowLockOnFv(void *arg0, s16 arg1);
void render__13TWindowLockOnFv(u8 *arg0);
void update_for_target__13TWindowLockOnFii(s32 arg0, s32 arg1);
M2C_UNK TWindowLockOn__update_for_enemy(s32, s32);
M2C_UNK TWindowLockOn__update_for_item(s32, s32);
M2C_UNK TWindowLockOn__update_for_other_player(s32, s32);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257CB8(s32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 obj_testFlags30(s32, M2C_UNK);

void TWindowLockOn__sub_80262FD8(void) {  }

void TWindowLockOn__sub_80262FDC(u8 *arg0) {
    TWindowHelpItem__sub_80270060(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0), (u32) M2C_FIELD(arg0, u16 *, 0x60));
}

void update_for_target__13TWindowLockOnFii(s32 arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_80257CB8(arg0 + 0x24);
    if (obj_testFlags30(arg1, 0x10000000) != 0) {
        TWindowLockOn__update_for_other_player(arg0, arg1);
        return;
    }
    if (obj_testFlags30(arg1, 0x80000000) != 0) {
        TWindowLockOn__update_for_item(arg0, arg1);
        return;
    }
    if (obj_testFlags30(arg1, 0x20000000) != 0) {
        TWindowLockOn__update_for_enemy(arg0, arg1);
    }
}

void render__13TWindowLockOnFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80244C0C(arg0, arg0 + 0x68);
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    if ((M2C_FIELD(arg0, f32 *, 0x30) == M2C_FIELD(arg0, f32 *, 0x40)) && (M2C_FIELD(arg0, f32 *, 0x34) == M2C_FIELD(arg0, f32 *, 0x44)) && (M2C_FIELD(arg0, f32 *, 0x38) == M2C_FIELD(arg0, f32 *, 0x48)) && (M2C_FIELD(arg0, f32 *, 0x3C) == M2C_FIELD(arg0, f32 *, 0x4C))) {
        TWindowSubStatusDisp__sub_80257BC0(arg0, arg0 + 0x24, temp_r3);
    }
}

extern M2C_UNK __vt__13TWindowLockOn[];

void *__dt__13TWindowLockOnFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowLockOn;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
