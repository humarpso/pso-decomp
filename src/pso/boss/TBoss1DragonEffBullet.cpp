#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8002BCE0_lbl_80435410 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8002BCE0_lbl_8043541C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8002BC30___vt__21TBoss1DragonEffBullet {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredFields_8002B9D0_arg0 {
    u8 unknown_0[0x1C];
    f32 field_1C;
    f32 field_20;
    f32 field_24;
    f32 field_28;
    f32 field_2C;
    f32 field_30;
    s32 field_34;
    s32 field_38;
    f32 field_3C;
    f32 field_40;
    u8 * field_44;
    u8 * field_48;
};

extern "C" {
s32 isV2Mode__12TBoss1DragonFv(void);
extern RecoveredGlobal_8002BCE0_lbl_80435410 lbl_80435410;
extern RecoveredGlobal_8002BCE0_lbl_8043541C lbl_8043541C;
extern M2C_UNK *lbl_805D4B48;
void TBoss1Dragon__sub_8002BCE0(void);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern M2C_UNK __vt__21TBoss1DragonEffBullet[];
extern s32 lbl_805D2670;
extern const f32 lbl_805D8144;
u8 *TBoss1DragonEffBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void queue_destruction__7TObjectFv(void *);
s32 TBoss1Dragon__sub_80027650(int, void *);
s32 get_instance__12TBoss1DragonFv();
s32 spawn_particle_effect_with_flags(void *, int, int);
u8 * spawn_continuous_particle_effect_with_flags(void *, s32, s32);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 TBoss3Volopt__sub_8022675C(int, void *, int, int);
extern M2C_UNK *lbl_805D4B48;
extern const f32 lbl_805D8140;
void run_task__21TBoss1DragonEffBulletFv(struct RecoveredFields_8002B9D0_arg0 *arg0);
}

extern "C" {

void *__dt__21TBoss1DragonEffBulletFv(void *arg0, s16 arg1);
void render__21TBoss1DragonEffBulletFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__21TBoss1DragonEffBulletFv(void) {  }

extern M2C_UNK __vt__21TBoss1DragonEffBullet[];

#pragma push
#pragma fp_contract on
void run_task__21TBoss1DragonEffBulletFv(struct RecoveredFields_8002B9D0_arg0 *arg0) {
    f32 temp_f0;
    f32 temp_f1;
    f32 var_f2;
    s32 temp_r0;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    temp_r0 = arg0->field_38;
    switch (temp_r0) {
    case 0:
        var_f2 = lbl_805D8140;
        arg0->field_3C += var_f2;
        temp_f0 = arg0->field_3C;
        temp_f1 = arg0->field_40;
        if (temp_f0 > temp_f1) {
            arg0->field_34 = 0;
            var_f2 = temp_f1 - (temp_f0 - var_f2);
            arg0->field_38 = 1;
        }
        arg0->field_1C += arg0->field_28 * var_f2;
        arg0->field_20 += arg0->field_2C * var_f2;
        arg0->field_24 += arg0->field_30 * var_f2;
        if ((u8 *) arg0->field_44 == NULL) {
            arg0->field_44 = spawn_continuous_particle_effect_with_flags(&arg0->field_1C, M2C_FIELD((*(u8 * *)&lbl_805D4B48), s32 *, 0), 0x40);
        }
        temp_r3 = (u8 *)(arg0->field_44);
        if (temp_r3 != NULL) {
            copy_pos__11TNowLoadingFPvPv((s32) temp_r3, &arg0->field_1C);
        }
        temp_r3_2 = (u8 *)(arg0->field_48);
        if (temp_r3_2 != NULL) {
            copy_pos__11TNowLoadingFPvPv((s32) temp_r3_2, &arg0->field_1C);
        }
        return;
    case 1:
        arg0->field_34 += 1;
        if ((s32) arg0->field_34 == 1) {
            spawn_particle_effect_with_flags(&arg0->field_1C, M2C_FIELD((*(u8 * *)&lbl_805D4B48), s32 *, 4), 0x40);
            temp_r3_3 = (u8 *)(arg0->field_48);
            if (temp_r3_3 != NULL) {
                queue_destruction__7TObjectFv(temp_r3_3);
                arg0->field_48 = NULL;
            }
            temp_r3_4 = (u8 *)(arg0->field_44);
            if (temp_r3_4 != NULL) {
                queue_destruction__7TObjectFv(temp_r3_4);
                arg0->field_44 = NULL;
            }
            TBoss3Volopt__sub_8022675C(0x4003AD0C, &arg0->field_1C, 0, 0);
            TBoss1Dragon__sub_80027650(get_instance__12TBoss1DragonFv(), &arg0->field_1C);
        }
        if ((s32) arg0->field_34 <= 2) {
            spawn_particle_effect_with_flags(&arg0->field_1C, M2C_FIELD((*(u8 * *)&lbl_805D4B48), s32 *, 8), 0x40);
            return;
        }
        arg0->field_38 = 2;
        return;
    case 2:
        arg0->field_34 += 1;
        if ((s32) arg0->field_34 > 0x64) {
            queue_destruction__7TObjectFv(arg0);
        }
        break;
    }
}
#pragma pop

void *__dt__21TBoss1DragonEffBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TBoss1DragonEffBullet;
        if (M2C_FIELD(arg0, void **, 0x48) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x48)); M2C_FIELD(arg0, M2C_UNK *, 0x48) = 0; }
        if (M2C_FIELD(arg0, void **, 0x44) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x44)); M2C_FIELD(arg0, M2C_UNK *, 0x44) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8002BCE0_lbl_80435410_size[sizeof(RecoveredGlobal_8002BCE0_lbl_80435410) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8002BCE0_lbl_8043541C_size[sizeof(RecoveredGlobal_8002BCE0_lbl_8043541C) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8002BC30___vt__21TBoss1DragonEffBullet_size[sizeof(RecoveredGlobal_8002BC30___vt__21TBoss1DragonEffBullet) == 0x18 ? 1 : -1];
u8 *TBoss1DragonEffBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8002BC30___vt__21TBoss1DragonEffBullet *)&__vt__21TBoss1DragonEffBullet).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2670;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg3));
    TBoss6Type1__sub_803D9370((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C));
    M2C_FIELD(arg0, f32 *, 0x40) = update_scale__15TObjBoss2TunnelFPv((void *) (arg0 + 0x28));
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8144;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    TBoss3Volopt__sub_8022675C((int) (0x4003B20B), (void *) (arg0 + 0x1C), (int) (0), (int) (0));
    return arg0;
}

void TBoss1Dragon__sub_8002BCE0(void) {
    s32 temp_r3;
    temp_r3 = isV2Mode__12TBoss1DragonFv();
    switch (temp_r3) {
    case 0:
        lbl_805D4B48 = &lbl_80435410.value;
        return;
    case 1:
        lbl_805D4B48 = &lbl_8043541C.value;
        return;
    }
}

}
