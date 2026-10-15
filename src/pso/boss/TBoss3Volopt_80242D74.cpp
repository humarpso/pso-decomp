#include "types.h"

extern "C" {
u32 find_active_pad_rumble_effect_by_id(s32);
void *find_free_pad_rumble_effect_slot();
void alloc_event__12TBoss3VoloptFsi(s16 arg0, s32 arg1);
u32 find_active_pad_rumble_effect_by_id(s32);
void *find_free_pad_rumble_effect_slot();
s32 VecCopy__FP3VecPC3Vec(void *, u32);
void alloc_effect_node__12TBoss3VoloptFUisi(u32 arg0, s16 arg1, s32 arg2);
void *find_free_pad_rumble_effect_slot();
void queue_event_1D__12TBoss3VoloptFss(s16 arg0, s16 arg1);
void *find_free_pad_rumble_effect_slot();
void spawn_effect__11TBoss4Type3Fsss(s16 arg0, s16 arg1, s16 arg2);
}

extern "C" {

void update_if_active__12TBoss3VoloptFv(s32 _w0);
int reset_state__23TAdSinglePlyChrSelectGCFPv();

void update_if_active__12TBoss3VoloptFv(s32 _w0) {
    if (find_active_pad_rumble_effect_by_id((s32)(_w0)) != 0U) {
        reset_state__23TAdSinglePlyChrSelectGCFPv();
    }
}
void alloc_event__12TBoss3VoloptFsi(s16 arg0, s32 arg1) {
    void *var_r3;
    var_r3 = ((void *)find_active_pad_rumble_effect_by_id((s32)(arg1)));
    if ((var_r3 != NULL) || (var_r3 = find_free_pad_rumble_effect_slot(), ((var_r3 == NULL) == 0))) {
        *(u8 *)((s8 *)var_r3 + 0) = 0x99;
        *(s16 *)((s8 *)var_r3 + 0x10) = arg0;
        *(s32 *)((s8 *)var_r3 + 0x14) = arg1;
    }
}
void alloc_effect_node__12TBoss3VoloptFUisi(u32 arg0, s16 arg1, s32 arg2) {
    u8 *var_r31;
    var_r31 = ((u8 *)find_active_pad_rumble_effect_by_id(arg2));
    if ((var_r31 != NULL) || (var_r31 = ((u8 *)find_free_pad_rumble_effect_slot()), ((var_r31 == NULL) == 0))) {
        *(u8 *)((s8 *)var_r31 + 0) = 0xF9U;
        if (arg0 != 0U) {
            *(u8 *)((s8 *)var_r31 + 0) = (u8) (*(u8 *)((s8 *)var_r31 + 0) | 2);
            VecCopy__FP3VecPC3Vec(var_r31 + 4, arg0);
        }
        *(s16 *)((s8 *)var_r31 + 0x10) = arg1;
        *(s32 *)((s8 *)var_r31 + 0x14) = arg2;
    }
}
void queue_event_1D__12TBoss3VoloptFss(s16 arg0, s16 arg1) {
    void *temp_r3;
    temp_r3 = ((u8 *)find_free_pad_rumble_effect_slot());
    if (temp_r3 != NULL) {
        *(s8 *)((s8 *)temp_r3 + 0) = 0x1D;
        *(s16 *)((s8 *)temp_r3 + 0x10) = arg0;
        *(s16 *)((s8 *)temp_r3 + 0x12) = arg1;
    }
}
void spawn_effect__11TBoss4Type3Fsss(s16 arg0, s16 arg1, s16 arg2) {
    void *temp_r3;
    temp_r3 = ((u8 *)find_free_pad_rumble_effect_slot());
    if (temp_r3 != NULL) {
        *(s8 *)((s8 *)temp_r3 + 0) = 0xD;
        *(s16 *)((s8 *)temp_r3 + 0x10) = arg0;
        *(s16 *)((s8 *)temp_r3 + 0x12) = arg1;
        *(s16 *)((s8 *)temp_r3 + 2) = arg2;
    }
}

}
