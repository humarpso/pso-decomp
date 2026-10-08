#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 TBoss3Volopt__sub_80242F94(s32);
void *find_free_effect_slot__12TBoss3VoloptFv();
void alloc_event__12TBoss3VoloptFsi(s16 arg0, s32 arg1);
u32 TBoss3Volopt__sub_80242F94(s32);
void *find_free_effect_slot__12TBoss3VoloptFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, u32);
void alloc_effect_node__12TBoss3VoloptFUisi(u32 arg0, s16 arg1, s32 arg2);
void *find_free_effect_slot__12TBoss3VoloptFv();
void queue_event_1D__12TBoss3VoloptFss(s16 arg0, s16 arg1);
void *find_free_effect_slot__12TBoss3VoloptFv();
void spawn_effect__11TBoss4Type3Fsss(s16 arg0, s16 arg1, s16 arg2);
}

extern "C" {

void update_if_active__12TBoss3VoloptFv(s32 _w0);
int reset_state__23TAdSinglePlyChrSelectGCFPv();

void update_if_active__12TBoss3VoloptFv(s32 _w0) {
    if (TBoss3Volopt__sub_80242F94((s32)(_w0)) != 0U) {
        reset_state__23TAdSinglePlyChrSelectGCFPv();
    }
}
void alloc_event__12TBoss3VoloptFsi(s16 arg0, s32 arg1) {
    void *var_r3;
    var_r3 = ((void *)TBoss3Volopt__sub_80242F94((s32)(arg1)));
    if ((var_r3 != NULL) || (var_r3 = find_free_effect_slot__12TBoss3VoloptFv(), ((var_r3 == NULL) == 0))) {
        M2C_FIELD(var_r3, u8 *, 0) = 0x99;
        M2C_FIELD(var_r3, s16 *, 0x10) = arg0;
        M2C_FIELD(var_r3, s32 *, 0x14) = arg1;
    }
}
void alloc_effect_node__12TBoss3VoloptFUisi(u32 arg0, s16 arg1, s32 arg2) {
    u8 *var_r31;
    var_r31 = ((u8 *)TBoss3Volopt__sub_80242F94(arg2));
    if ((var_r31 != NULL) || (var_r31 = ((u8 *)find_free_effect_slot__12TBoss3VoloptFv()), ((var_r31 == NULL) == 0))) {
        M2C_FIELD(var_r31, u8 *, 0) = 0xF9U;
        if (arg0 != 0U) {
            M2C_FIELD(var_r31, u8 *, 0) = (u8) (M2C_FIELD(var_r31, u8 *, 0) | 2);
            VecCopy__FP3VecPC3Vec(var_r31 + 4, arg0);
        }
        M2C_FIELD(var_r31, s16 *, 0x10) = arg1;
        M2C_FIELD(var_r31, s32 *, 0x14) = arg2;
    }
}
void queue_event_1D__12TBoss3VoloptFss(s16 arg0, s16 arg1) {
    void *temp_r3;
    temp_r3 = ((u8 *)find_free_effect_slot__12TBoss3VoloptFv());
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 0) = 0x1D;
        M2C_FIELD(temp_r3, s16 *, 0x10) = arg0;
        M2C_FIELD(temp_r3, s16 *, 0x12) = arg1;
    }
}
void spawn_effect__11TBoss4Type3Fsss(s16 arg0, s16 arg1, s16 arg2) {
    void *temp_r3;
    temp_r3 = ((u8 *)find_free_effect_slot__12TBoss3VoloptFv());
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 0) = 0xD;
        M2C_FIELD(temp_r3, s16 *, 0x10) = arg0;
        M2C_FIELD(temp_r3, s16 *, 0x12) = arg1;
        M2C_FIELD(temp_r3, s16 *, 2) = arg2;
    }
}

}
