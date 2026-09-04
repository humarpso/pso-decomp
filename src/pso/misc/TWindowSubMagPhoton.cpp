#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0);
void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 get_active_flag__13TWindowSubMagFPv();

void handle_cancel__19TWindowSubMagPhotonFPv(void *arg0) {
    if (get_active_flag__13TWindowSubMagFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void play_open_sound__19TWindowSubMagPhotonFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8027C65C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TWindowSubMagPhotonFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);

extern M2C_UNK __vt__19TWindowSubMagPhoton[];

void *__dt__19TWindowSubMagPhotonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubMagPhoton;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8027C754
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_photon_selection__19TWindowSubMagPhotonFPv(void *arg0);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK spawn_effect__11TBoss4Type3Fsss(M2C_UNK, M2C_UNK, s16);
s32 update_selected_item__17TWindowOptionCtrlFPv(s32);

void update_photon_selection__19TWindowSubMagPhotonFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r3 = update_selected_item__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, s32 *, 0x2C));
    if ((temp_r31 == 4) && ((s8) M2C_FIELD(arg0, u8 *, 0x1D) != temp_r3)) {
        M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r3;
        if ((s8) M2C_FIELD(arg0, u8 *, 0x1D) == 0) {
            spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (s16) M2C_FIELD(arg0, s32 *, 0x20));
        }
    }
}

}
#endif
#endif
