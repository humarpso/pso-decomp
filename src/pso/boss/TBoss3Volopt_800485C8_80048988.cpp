#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv();
extern u32 TBoss3Volopt__fade_active_flag;
extern const f32 lbl_805D8850;
extern const f32 lbl_805D8858;
void TBoss3Volopt__sub_80048AA0(u8 *arg0);
}

extern "C" {

void *TBoss3Volopt__sub_80048988(void *arg0, s16 arg1);
void *TBoss3Volopt__sub_80048B08(void *arg0, s16 arg1);
void *destroy_task_object__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void *init_fade__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void *init_fade_color__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2);
void *init_object__12TBoss3VoloptFPvPv(void *arg0, void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_804848A0[];

void *TBoss3Volopt__sub_80048988(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848A0;
        destroy_task_object__12TBoss3VoloptFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804999E8[];

void *destroy_task_object__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999E8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fade;
extern const f32 lbl_805D8858;
extern M2C_UNK lbl_804848A0[];
extern u32 lbl_805D4D14;

void *init_fade_color__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv((void *)(arg0), (void *)(tl_fade));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848A0;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D8858;
    M2C_FIELD(arg0, u8 *, 0x20) = 255;
    M2C_FIELD(arg0, u8 *, 0x21) = 255;
    M2C_FIELD(arg0, u8 *, 0x22) = 255;
    lbl_805D4D14 = 0;
    return arg0;
}

extern M2C_UNK lbl_804848B8[];

#pragma push
#pragma opt_common_subs off
void TBoss3Volopt__sub_80048AA0(u8 *arg0) {
    M2C_UNK (*temp_r12)();
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) + lbl_805D8850);
    if (M2C_FIELD(arg0, f32 *, 0x1C) >= lbl_805D8858) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805D8858;
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(), 0x24);
        if (temp_r12 != NULL) {
            temp_r12();
        } else {
            queue_destruction__7TObjectFv();
        }
        (*(s32 *)&TBoss3Volopt__fade_active_flag) = 1;
    }
}
#pragma pop

void *TBoss3Volopt__sub_80048B08(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848B8;
        destroy_task_object__12TBoss3VoloptFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fade;
extern const f32 lbl_805D8854;
extern M2C_UNK lbl_804848B8[];
extern u32 TBoss3Volopt__fade_active_flag;

void *init_fade__12TBoss3VoloptFPvPvPv(void *arg0, void *arg1, void *arg2) {
    init_object__12TBoss3VoloptFPvPv((void *)((void *)(arg0)), (void *)((void *)(tl_fade)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804848B8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805D8854;
    M2C_FIELD(arg0, u8 *, 0x20) = 255;
    M2C_FIELD(arg0, u8 *, 0x21) = 255;
    M2C_FIELD(arg0, u8 *, 0x22) = 255;
    TBoss3Volopt__fade_active_flag = 0;
    return arg0;
}

extern M2C_UNK lbl_804999E8[];

void *init_object__12TBoss3VoloptFPvPv(void *arg0, void *) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999E8;
    return arg0;
}

}
