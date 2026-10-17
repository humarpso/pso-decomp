#include "pso/TItemReverseTechPart2.h"
#include "pso/item/TItemReverseTechBG.h"
#include "pso/item/TItemReverseTechPart2.h"
#include "pso/item/TItemReverseTech_8011A1E8.h"

TItemReverseTechPart2::~TItemReverseTechPart2() {}

#include "types.h"

struct RecoveredGlobal_80119B28___vt__21TItemReverseTechPart2 { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80119B28___vt__21TItemReverseTechPart2_size[sizeof(RecoveredGlobal_80119B28___vt__21TItemReverseTechPart2) == 0x18 ? 1 : -1];

extern "C" {
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
s32 queue_destruction__7TObjectFv();

extern void *TItemReverseTechPart1__instance;

u8 *__ct__21TItemReverseTechPart2Fv(u8 *arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__21TItemReverseTechPart2.value;
    TItemReverseTech__sub_8011A54C((arg0 + 0x1C));
    TItemReverseTech__sub_8011A54C((arg0 + 0x48));
    TItemReverseTech__sub_8011A54C((arg0 + 0x74));
    TItemReverseTech__sub_8011A54C((arg0 + 0xA0));
    TItemReverseTech__sub_8011A54C((arg0 + 0xCC));
    TItemReverseTech__sub_8011A54C((arg0 + 0xF8));
    TItemReverseTech__sub_8011A54C((arg0 + 0x124));
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2C50;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0x12C;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = arg2;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) lbl_805DAC10;
    *(f32 *)((s8 *)arg0 + 0x30) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0x34) = (f32) lbl_805DAC14;
    *(f32 *)((s8 *)arg0 + 0x38) = (f32) lbl_805DAC14;
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) lbl_805DAC18;
    *(s32 *)((s8 *)arg0 + 0x48) = 0x12C;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    *(s32 *)((s8 *)arg0 + 0x50) = arg2;
    *(s32 *)((s8 *)arg0 + 0x54) = 0xE;
    *(f32 *)((s8 *)arg0 + 0x58) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0x5C) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0x60) = (f32) lbl_805DAC1C;
    *(f32 *)((s8 *)arg0 + 0x64) = (f32) lbl_805DAC0C;
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DAC18;
    *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805DAC20;
    *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805DAC24;
    *(s32 *)((s8 *)arg0 + 0x74) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0x78) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0x7C) = arg2;
    *(s32 *)((s8 *)arg0 + 0x80) = 0xE;
    *(f32 *)((s8 *)arg0 + 0x84) = (f32) lbl_805DAC10;
    *(f32 *)((s8 *)arg0 + 0x88) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0x8C) = (f32) lbl_805DAC14;
    *(f32 *)((s8 *)arg0 + 0x90) = (f32) lbl_805DAC14;
    *(f32 *)((s8 *)arg0 + 0x9C) = (f32) lbl_805DAC28;
    *(s32 *)((s8 *)arg0 + 0xA0) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0xA4) = 0x3C;
    *(s32 *)((s8 *)arg0 + 0xA8) = arg2;
    *(s32 *)((s8 *)arg0 + 0xAC) = 0xE;
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0xB8) = (f32) lbl_805DAC1C;
    *(f32 *)((s8 *)arg0 + 0xBC) = (f32) lbl_805DAC0C;
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) lbl_805DAC28;
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DAC20;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DAC24;
    *(s32 *)((s8 *)arg0 + 0xCC) = 0x12C;
    *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    *(s32 *)((s8 *)arg0 + 0xD4) = arg2;
    *(s32 *)((s8 *)arg0 + 0xD8) = 0;
    *(f32 *)((s8 *)arg0 + 0xDC) = (f32) lbl_805DAC2C;
    *(f32 *)((s8 *)arg0 + 0xE0) = (f32) lbl_805DAC30;
    *(f32 *)((s8 *)arg0 + 0xE4) = (f32) lbl_805DAC34;
    *(f32 *)((s8 *)arg0 + 0xE8) = (f32) lbl_805DAC34;
    *(f32 *)((s8 *)arg0 + 0xF4) = (f32) lbl_805DAC38;
    *(s32 *)((s8 *)arg0 + 0xF8) = 0x12C;
    *(s32 *)((s8 *)arg0 + 0xFC) = 0;
    *(s32 *)((s8 *)arg0 + 0x100) = arg2;
    *(s32 *)((s8 *)arg0 + 0x104) = 0;
    *(f32 *)((s8 *)arg0 + 0x108) = (f32) lbl_805DAC2C;
    *(f32 *)((s8 *)arg0 + 0x10C) = (f32) lbl_805DAC3C;
    *(f32 *)((s8 *)arg0 + 0x110) = (f32) lbl_805DAC34;
    *(f32 *)((s8 *)arg0 + 0x114) = (f32) lbl_805DAC34;
    *(f32 *)((s8 *)arg0 + 0x120) = (f32) lbl_805DAC38;
    *(s32 *)((s8 *)arg0 + 0x124) = 0x1194;
    *(s32 *)((s8 *)arg0 + 0x128) = 0x1E;
    *(s32 *)((s8 *)arg0 + 0x12C) = arg2;
    *(s32 *)((s8 *)arg0 + 0x130) = 0xF;
    *(f32 *)((s8 *)arg0 + 0x134) = (f32) lbl_805DAC40;
    *(f32 *)((s8 *)arg0 + 0x138) = (f32) lbl_805DAC08;
    *(f32 *)((s8 *)arg0 + 0x13C) = (f32) lbl_805DAC44;
    *(f32 *)((s8 *)arg0 + 0x140) = (f32) lbl_805DAC0C;
    *(f32 *)((s8 *)arg0 + 0x14C) = (f32) lbl_805DAC48;
    temp_r3 = __nw__7TObjectFUl(0x64);
    if (temp_r3 != 0U) {
        __ct__18TItemReverseTechBGFv((void *)(temp_r3), (void *)(arg0), (void *)(arg0 + 0x124));
    }
    *(s32 *)((s8 *)arg0 + 0x150) = 0;
    *(s32 *)((s8 *)arg0 + 0x154) = 0;
    return arg0;
}

void TItemReverseTechPart2::destroy_and_flag() {
    queue_destruction__7TObjectFv();
    if ((void *) TItemReverseTechPart1__instance != NULL) {
        *(s32 *)((s8 *)TItemReverseTechPart1__instance + 0x1C) = 1;
    }
}

}
