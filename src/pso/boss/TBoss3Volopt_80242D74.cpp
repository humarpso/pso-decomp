#include "types.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/boss/TBoss4Type3.h"

extern "C" {
u32 find_active_pad_rumble_effect_by_id(s32);
void *find_free_pad_rumble_effect_slot();
u32 find_active_pad_rumble_effect_by_id(s32);
void *find_free_pad_rumble_effect_slot();
s32 VecCopy__FP3VecPC3Vec(void *, u32);
void *find_free_pad_rumble_effect_slot();
void *find_free_pad_rumble_effect_slot();
}

extern "C" {

int reset_state__23TAdSinglePlyChrSelectGCFv();

void TBoss3Volopt::update_if_active(s32 _w0) {
    if (find_active_pad_rumble_effect_by_id((s32)(_w0)) != 0U) {
        reset_state__23TAdSinglePlyChrSelectGCFv();
    }
}
void TBoss3Volopt::alloc_event(s16 arg0, s32 arg1) {
    void *active_pad_rumble_effect;
    active_pad_rumble_effect = ((void *)find_active_pad_rumble_effect_by_id((s32)(arg1)));
    if ((active_pad_rumble_effect != NULL) || (active_pad_rumble_effect = find_free_pad_rumble_effect_slot(), ((active_pad_rumble_effect == NULL) == 0))) {
        *(u8 *)((s8 *)active_pad_rumble_effect + 0) = 0x99;
        *(s16 *)((s8 *)active_pad_rumble_effect + 0x10) = arg0;
        *(s32 *)((s8 *)active_pad_rumble_effect + 0x14) = arg1;
    }
}
void TBoss3Volopt::alloc_effect_node(u32 arg0, s16 arg1, s32 arg2) {
    u8 *active_pad_rumble_effect;
    active_pad_rumble_effect = ((u8 *)find_active_pad_rumble_effect_by_id(arg2));
    if ((active_pad_rumble_effect != NULL) || (active_pad_rumble_effect = ((u8 *)find_free_pad_rumble_effect_slot()), ((active_pad_rumble_effect == NULL) == 0))) {
        *(u8 *)((s8 *)active_pad_rumble_effect + 0) = 0xF9U;
        if (arg0 != 0U) {
            *(u8 *)((s8 *)active_pad_rumble_effect + 0) = (u8) (*(u8 *)((s8 *)active_pad_rumble_effect + 0) | 2);
            VecCopy__FP3VecPC3Vec(active_pad_rumble_effect + 4, arg0);
        }
        *(s16 *)((s8 *)active_pad_rumble_effect + 0x10) = arg1;
        *(s32 *)((s8 *)active_pad_rumble_effect + 0x14) = arg2;
    }
}
void TBoss3Volopt::queue_event_1D(s16 arg0, s16 arg1) {
    void *free_pad_rumble_effect_slot;
    free_pad_rumble_effect_slot = ((u8 *)find_free_pad_rumble_effect_slot());
    if (free_pad_rumble_effect_slot != NULL) {
        *(s8 *)((s8 *)free_pad_rumble_effect_slot + 0) = 0x1D;
        *(s16 *)((s8 *)free_pad_rumble_effect_slot + 0x10) = arg0;
        *(s16 *)((s8 *)free_pad_rumble_effect_slot + 0x12) = arg1;
    }
}
void TBoss4Type3::spawn_effect(s16 arg0, s16 arg1, s16 arg2) {
    void *free_pad_rumble_effect_slot;
    free_pad_rumble_effect_slot = ((u8 *)find_free_pad_rumble_effect_slot());
    if (free_pad_rumble_effect_slot != NULL) {
        *(s8 *)((s8 *)free_pad_rumble_effect_slot + 0) = 0xD;
        *(s16 *)((s8 *)free_pad_rumble_effect_slot + 0x10) = arg0;
        *(s16 *)((s8 *)free_pad_rumble_effect_slot + 0x12) = arg1;
        *(s16 *)((s8 *)free_pad_rumble_effect_slot + 2) = arg2;
    }
}

}
