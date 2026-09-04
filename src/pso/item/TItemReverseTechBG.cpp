#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemReverseTechBG.h"

TItemReverseTechBG::~TItemReverseTechBG() {}
#else
#if PSO_CLASS_PACKAGE == 0x80119600
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void render__18TItemReverseTechBGFv(void *arg0);
void reset_transform_state__10TObjPlayerFv(void *);
void notify_fish_if_valid__10TObjPlayerFUi(void *);
void TWindowSubStatusDisp__sub_803DEE6C(int);
void get_player__20TWindowSubStatusDispFv(void);
void TWindowSubComCard__sub_803DEECC(void *, f32);
void TWindowSubStatusDisp__sub_803DF160(void *, void *);

void render__18TItemReverseTechBGFv(void *arg0) {
    reset_transform_state__10TObjPlayerFv(arg0);
    notify_fish_if_valid__10TObjPlayerFUi(M2C_FIELD(arg0, void **, 0x2C));
    TWindowSubStatusDisp__sub_803DEE6C(1);
    TWindowSubStatusDisp__sub_803DF160(M2C_FIELD(arg0, void **, 0x30), M2C_FIELD(arg0, void **, 0x34));
    TWindowSubComCard__sub_803DEECC((void *)((char *)arg0 + 56), M2C_FIELD(arg0, f32 *, 0x58));
    get_player__20TWindowSubStatusDispFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801197F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__ct__18TItemReverseTechBGFv(void *arg0, void *arg1, void *arg3);
M2C_UNK __ct__7TObjectFP7TObject();

extern void *__vt__18TItemReverseTechBG[];
extern s32 lbl_805D2C54;
extern const f32 lbl_805DAC08;

void *__ct__18TItemReverseTechBGFv(void *arg0, void *arg1, void *arg3) {
    s32 temp_r3;

    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, void **, 0x18) = __vt__18TItemReverseTechBG;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C54;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg3, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(arg3, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg3, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg3, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r3 != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) (0xFF / temp_r3);
        if ((u32) M2C_FIELD(arg0, s32 *, 0x28) == 0U) {
            M2C_FIELD(arg0, s32 *, 0x28) = 1;
        }
    }
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg3, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg3, f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg3, f32 *, 0x10) + M2C_FIELD(arg3, f32 *, 0x18));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg3, f32 *, 0x14) + M2C_FIELD(arg3, f32 *, 0x1C));
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) M2C_FIELD(arg3, f32 *, 0x20);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) M2C_FIELD(arg3, f32 *, 0x24);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) M2C_FIELD(arg3, f32 *, 0x28);
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    return arg0;
}

}
#endif
#endif
