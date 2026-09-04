#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TWindowMenuMainMenuFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__19TWindowMenuMainMenu[];

void *__dt__19TWindowMenuMainMenuFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowMenuMainMenu;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x802AE77C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__19TWindowMenuMainMenuFv(u8 *arg0);
M2C_UNK update_fade__17TWindowSubComCardFPv(void *);
M2C_UNK initialize_subwindow__9TWindowDDFPv(void *);
M2C_UNK TWindowMainMenu__sub_802AD7F0(void *);
M2C_UNK TWindowMainMenu__sub_802AE380(void *);
M2C_UNK TWindowMainMenu__sub_802AE59C(void *);

void run_task__19TWindowMenuMainMenuFv(u8 *arg0) {
    s32 var_r31;
    u8 temp_r3;
    u8 temp_r3_2;
    u8 *var_r30;

    temp_r3 = M2C_FIELD(arg0, u8 *, 0x60);
    if (temp_r3 & 8) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (temp_r3 | 4);
    }
    var_r30 = arg0 + 0x64;
    var_r31 = 0;
    do {
        TWindowMainMenu__sub_802AD7F0(var_r30);
        var_r31 += 1;
        var_r30 += 0x18;
    } while (var_r31 < 8);
    TWindowMainMenu__sub_802AE59C(arg0);
    initialize_subwindow__9TWindowDDFPv(arg0);
    TWindowMainMenu__sub_802AE380(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x60);
    if (temp_r3_2 & 8) {
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (temp_r3_2 & 0xFFFFFFF3);
    }
}

}
#endif
#endif
