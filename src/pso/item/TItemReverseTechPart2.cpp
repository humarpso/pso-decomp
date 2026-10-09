#include "pso/TItemReverseTechPart2.h"

TItemReverseTechPart2::~TItemReverseTechPart2() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80119B28___vt__21TItemReverseTechPart2 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80119B28___vt__21TItemReverseTechPart2_size[sizeof(RecoveredGlobal_80119B28___vt__21TItemReverseTechPart2) == 0x18 ? 1 : -1];

extern "C" {
s32 __ct__18TItemReverseTechBGFv(int, void *, void *);
s32 TItemReverseTech__sub_8011A54C(void *);
u32 __nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80119B28___vt__21TItemReverseTechPart2 __vt__21TItemReverseTechPart2;
extern s32 lbl_805D2C50;
extern const f32 lbl_805DAC08;
extern const f32 lbl_805DAC0C;
extern const f32 lbl_805DAC10;
extern const f32 lbl_805DAC14;
extern const f32 lbl_805DAC18;
extern const f32 lbl_805DAC1C;
extern const f32 lbl_805DAC20;
extern const f32 lbl_805DAC24;
extern const f32 lbl_805DAC28;
extern const f32 lbl_805DAC2C;
extern const f32 lbl_805DAC30;
extern const f32 lbl_805DAC34;
extern const f32 lbl_805DAC38;
extern const f32 lbl_805DAC3C;
extern const f32 lbl_805DAC40;
extern const f32 lbl_805DAC44;
extern const f32 lbl_805DAC48;
u8 *__ct__21TItemReverseTechPart2Fv(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void destroy_and_flag__21TItemReverseTechPart2Fv(void);
M2C_UNK queue_destruction__7TObjectFv();

extern void *TItemReverseTechPart1__instance;

u8 *__ct__21TItemReverseTechPart2Fv(u8 *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__21TItemReverseTechPart2.value;
    TItemReverseTech__sub_8011A54C((void *) (arg0 + 0x1C));
    TItemReverseTech__sub_8011A54C((void *) (arg0 + 0x48));
    TItemReverseTech__sub_8011A54C((void *) (arg0 + 0x74));
    TItemReverseTech__sub_8011A54C((void *) (arg0 + 0xA0));
    TItemReverseTech__sub_8011A54C((void *) (arg0 + 0xCC));
    TItemReverseTech__sub_8011A54C((void *) (arg0 + 0xF8));
    TItemReverseTech__sub_8011A54C((void *) (arg0 + 0x124));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C50;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) lbl_805DAC10;
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DAC14;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DAC14;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DAC18;
    M2C_FIELD(arg0, s32 *, 0x48) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = arg2;
    M2C_FIELD(arg0, s32 *, 0x54) = 0xE;
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x5C) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) lbl_805DAC1C;
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) lbl_805DAC0C;
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) lbl_805DAC18;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) lbl_805DAC20;
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) lbl_805DAC24;
    M2C_FIELD(arg0, s32 *, 0x74) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x78) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0x7C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x80) = 0xE;
    M2C_FIELD(arg0, f32 *, 0x84) = (f32) lbl_805DAC10;
    M2C_FIELD(arg0, f32 *, 0x88) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x8C) = (f32) lbl_805DAC14;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DAC14;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DAC28;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0x3C;
    M2C_FIELD(arg0, s32 *, 0xA8) = arg2;
    M2C_FIELD(arg0, s32 *, 0xAC) = 0xE;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DAC1C;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805DAC0C;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DAC28;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DAC20;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DAC24;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = arg2;
    M2C_FIELD(arg0, s32 *, 0xD8) = 0;
    M2C_FIELD(arg0, f32 *, 0xDC) = (f32) lbl_805DAC2C;
    M2C_FIELD(arg0, f32 *, 0xE0) = (f32) lbl_805DAC30;
    M2C_FIELD(arg0, f32 *, 0xE4) = (f32) lbl_805DAC34;
    M2C_FIELD(arg0, f32 *, 0xE8) = (f32) lbl_805DAC34;
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805DAC38;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0x12C;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = arg2;
    M2C_FIELD(arg0, s32 *, 0x104) = 0;
    M2C_FIELD(arg0, f32 *, 0x108) = (f32) lbl_805DAC2C;
    M2C_FIELD(arg0, f32 *, 0x10C) = (f32) lbl_805DAC3C;
    M2C_FIELD(arg0, f32 *, 0x110) = (f32) lbl_805DAC34;
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) lbl_805DAC34;
    M2C_FIELD(arg0, f32 *, 0x120) = (f32) lbl_805DAC38;
    M2C_FIELD(arg0, s32 *, 0x124) = 0x1194;
    M2C_FIELD(arg0, s32 *, 0x128) = 0x1E;
    M2C_FIELD(arg0, s32 *, 0x12C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x130) = 0xF;
    M2C_FIELD(arg0, f32 *, 0x134) = (f32) lbl_805DAC40;
    M2C_FIELD(arg0, f32 *, 0x138) = (f32) lbl_805DAC08;
    M2C_FIELD(arg0, f32 *, 0x13C) = (f32) lbl_805DAC44;
    M2C_FIELD(arg0, f32 *, 0x140) = (f32) lbl_805DAC0C;
    M2C_FIELD(arg0, f32 *, 0x14C) = (f32) lbl_805DAC48;
    temp_r3 = __nw__7TObjectFUl((int) (0x64));
    if (temp_r3 != 0U) {
        __ct__18TItemReverseTechBGFv((int) (temp_r3), (void *) (arg0), (void *) (arg0 + 0x124));
    }
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    return arg0;
}

void destroy_and_flag__21TItemReverseTechPart2Fv(void) {
    queue_destruction__7TObjectFv();
    if ((void *) TItemReverseTechPart1__instance != NULL) {
        M2C_FIELD(TItemReverseTechPart1__instance, s32 *, 0x1C) = 1;
    }
}

}
