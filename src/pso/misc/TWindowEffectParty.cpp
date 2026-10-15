#include "types.h"

struct Obj_8024FB80 { u8 pad[0x78]; void *arr[1]; };

struct Pos_8024FAD8 { s32 a, b, c; };

extern "C" {
extern Obj_8024FB80 *TWindowCtrl__active_window;
void *TWindowCtrl__sub_8024FB80(s8 i);
void *__ct__7TObjectFP7TObject(void *);
void set_slot_position__18TWindowEffectPartyFiiPv(void *, s32, void *);
s32 calc_effect_position__18TWindowEffectPartyFPvPv(void *, s32 *);
s32 spawn_continuous_particle_effect_with_flags(void *, void *, s32);
extern s32 __vt__18TWindowEffectParty[];
extern s32 TWindowEffectParty__name;
u8 *TWindowEffectParty__ct(u8 *arg0, void *arg1, s8 arg2, s8 arg3, void *arg4);
}

extern "C" {

void *__dt__18TWindowEffectPartyFv(void *arg0, s16 arg1);
void render__18TWindowEffectPartyFv(void);
void run_task__18TWindowEffectPartyFv(void *arg0);
s32 step_toward_target__18TWindowEffectPartyFPvff(void *, f32, f32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 calc_effect_position__18TWindowEffectPartyFPvPv(void *, s32 *);
s32 copy_pos__11TNowLoadingFPvPv(u32, s32 *);
s32 fn_80244994();
s32 queue_destruction__7TObjectFv(void *);
void request_destroy__11TBoss4Type2FUi(void *);

void render__18TWindowEffectPartyFv(void) {  }

extern const f32 lbl_805DCCD4;

void run_task__18TWindowEffectPartyFv(void *arg0) {
    s32 sp8;
    u8 temp_r0;
    u8 temp_r3;

    temp_r3 = *(u8 *)((s8 *)arg0 + 0x1E);
    if (((s8) temp_r3 > 0) && ((((u32)TWindowCtrl__sub_8024FB80((s8)((s8) (temp_r3 - 1)))) == 0U) || (fn_80244994() == 0))) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = *(u8 *)((s8 *)arg0 + 0x1C);
    switch ((s8) temp_r0) {
    case 0:
        *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
    case 1:
        if (step_toward_target__18TWindowEffectPartyFPvff(arg0, lbl_805DCCD4, *(f32 *)((s8 *)arg0 + 0x24)) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
        }
        break;
    case 2:
        if (step_toward_target__18TWindowEffectPartyFPvff(arg0, lbl_805DCCD4, *(f32 *)((s8 *)arg0 + 0x2C)) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 3U;
        }
        break;
    case 3:
        if (step_toward_target__18TWindowEffectPartyFPvff(arg0, *(f32 *)((s8 *)arg0 + 0x28), *(f32 *)((s8 *)arg0 + 0x2C)) != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
        }
        break;
    case 4:
        queue_destruction__7TObjectFv(arg0);
        break;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
        calc_effect_position__18TWindowEffectPartyFPvPv(arg0, &sp8);
        copy_pos__11TNowLoadingFPvPv(*(u32 *)((s8 *)arg0 + 0x30), &sp8);
    }
}

extern s32 __vt__18TWindowEffectParty[];

void *__dt__18TWindowEffectPartyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TWindowEffectParty;
        request_destroy__11TBoss4Type2FUi(*(void **)((s8 *)arg0 + 0x30));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TWindowEffectParty__ct(u8 *arg0, void *arg1, s8 arg2, s8 arg3, void *arg4) {
    Pos_8024FAD8 p;
    __ct__7TObjectFP7TObject(arg0);
    *(void **)(arg0 + 0x18) = ((u8 *)&__vt__18TWindowEffectParty);
    *(s32 *)arg0 = TWindowEffectParty__name;
    *(s8 *)(arg0 + 0x1D) = arg2;
    set_slot_position__18TWindowEffectPartyFiiPv(arg0, *(s8 *)(arg0 + 0x1D), arg0 + 0x20);
    *(s8 *)(arg0 + 0x1E) = arg3;
    set_slot_position__18TWindowEffectPartyFiiPv(arg0, *(s8 *)(arg0 + 0x1E), arg0 + 0x28);
    calc_effect_position__18TWindowEffectPartyFPvPv((void *)(arg0), (s32 *)(&p));
    *(s32 *)(arg0 + 0x30) = spawn_continuous_particle_effect_with_flags(&p, arg4, 0xC0);
    *(s8 *)(arg0 + 0x1C) = 0;
    return arg0;
}

void *TWindowCtrl__sub_8024FB80(s8 i) {
    if (TWindowCtrl__active_window == 0) return 0;
    return TWindowCtrl__active_window->arr[i];
}

}
