#include "types.h"

extern "C" {

void create_sub__14TOSwitchAttackFiiiif(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
void init_params__14TOSwitchAttackFPv(void *arg0);
s32 TOSwitchAttackSub__ct(void *, s32, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(s32);

void create_sub__14TOSwitchAttackFiiiif(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    void *temp_r3;
    temp_r3 = (void *)__nw__7TObjectFUl(0x30);
    if (temp_r3 != (void *)0U) {
        TOSwitchAttackSub__ct(temp_r3, arg0, arg1, arg2, arg3, farg0);
    }
}

extern const f64 lbl_80442C78;
extern s32 game_difficulty_selection;
extern const f32 lbl_805DBA00;

void init_params__14TOSwitchAttackFPv(void *arg0) {
    f32 temp_f0;

    *(u8 *)((s8 *)arg0 + 0xA7) = (u8) *(s32 *)((s8 *)arg0 + 0x5C);
    temp_f0 = *(f32 *)((s8 *)arg0 + 0x68);
    *(f32 *)((s8 *)arg0 + 0x94) = (f32) (temp_f0 * temp_f0);
    *(f32 *)((s8 *)arg0 + 0x98) = (f32) (*(f32 *)((s8 *)arg0 + 0x6C) * (lbl_805DBA00 * (f32) (game_difficulty_selection + 1)));
    *(f32 *)((s8 *)arg0 + 0x90) = (f32) *(f32 *)((s8 *)arg0 + 0x70);
    if ((u8) *(u8 *)((s8 *)arg0 + 0xA7) >= 0x15U) {
        *(u8 *)((s8 *)arg0 + 0xA7) = 0U;
    }
    *(s32 *)((s8 *)arg0 + 0x9C) = 0;
    *(u16 *)((s8 *)arg0 + 0xA0) = (u16) *(s32 *)((s8 *)arg0 + 0x84);
    if ((u16) *(u16 *)((s8 *)arg0 + 0xA0) >= 0x100U) {
        *(u16 *)((s8 *)arg0 + 0xA0) = 0xFFFFU;
    }
    *(u16 *)((s8 *)arg0 + 0xA2) = (u16) *(s32 *)((s8 *)arg0 + 0x88);
    if ((u16) *(u16 *)((s8 *)arg0 + 0xA2) >= 0x100U) {
        *(u16 *)((s8 *)arg0 + 0xA2) = 0xFFFFU;
    }
    *(u16 *)((s8 *)arg0 + 0xA4) = (u16) *(s32 *)((s8 *)arg0 + 0x8C);
    if ((u16) *(u16 *)((s8 *)arg0 + 0xA4) > 1U) {
        *(u16 *)((s8 *)arg0 + 0xA4) = 1U;
    }
}

}
