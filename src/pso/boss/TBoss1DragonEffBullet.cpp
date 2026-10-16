#include "types.h"
#include "pso/boss/TBoss1Dragon.h"
#include "pso/boss/TBoss1DragonEffBullet.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/misc/TNowLoading.h"

struct RecoveredGlobal_8002BCE0_lbl_80435410 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8002BCE0_lbl_8043541C {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8002BC30___vt__21TBoss1DragonEffBullet {
    s32 value;
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
extern s32 *dragon_fireball_particle_ids;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 play_sound_effect(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 subtract_vector(void *, void *);
extern s32 __vt__21TBoss1DragonEffBullet[];
extern s32 TBoss1DragonEffBullet__name;
extern const f32 lbl_805D8144;
u8 *TBoss1DragonEffBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void queue_destruction__7TObjectFv(void *);
s32 apply_fireball_impact_damage__12TBoss1DragonFPvi(int, void *);
s32 spawn_particle_effect_with_flags(void *, int, int);
u8 * spawn_continuous_particle_effect_with_flags(void *, s32, s32);
s32 play_sound_effect(int, void *, int, int);
extern s32 *dragon_fireball_particle_ids;
extern const f32 lbl_805D8140;
}

extern "C" {

void *__dt__21TBoss1DragonEffBulletFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void TBoss1DragonEffBullet::render() {  }

extern s32 __vt__21TBoss1DragonEffBullet[];

#pragma push
#pragma fp_contract on
void TBoss1DragonEffBullet::run_task() {
    struct RecoveredFields_8002B9D0_arg0 *arg0 = (struct RecoveredFields_8002B9D0_arg0 *)this;
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
            arg0->field_44 = spawn_continuous_particle_effect_with_flags(&arg0->field_1C, *(s32 *)((s8 *)(*(u8 * *)&dragon_fireball_particle_ids) + 0), 0x40);
        }
        temp_r3 = (u8 *)(arg0->field_44);
        if (temp_r3 != NULL) {
            ((TNowLoading *)temp_r3)->copy_pos(&arg0->field_1C);
        }
        temp_r3_2 = (u8 *)(arg0->field_48);
        if (temp_r3_2 != NULL) {
            ((TNowLoading *)temp_r3_2)->copy_pos(&arg0->field_1C);
        }
        return;
    case 1:
        arg0->field_34 += 1;
        if ((s32) arg0->field_34 == 1) {
            spawn_particle_effect_with_flags(&arg0->field_1C, *(s32 *)((s8 *)(*(u8 * *)&dragon_fireball_particle_ids) + 4), 0x40);
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
            play_sound_effect(0x4003AD0C, &arg0->field_1C, 0, 0);
            apply_fireball_impact_damage__12TBoss1DragonFPvi(TBoss1Dragon::get_instance(), &arg0->field_1C);
        }
        if ((s32) arg0->field_34 <= 2) {
            spawn_particle_effect_with_flags(&arg0->field_1C, *(s32 *)((s8 *)(*(u8 * *)&dragon_fireball_particle_ids) + 8), 0x40);
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
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TBoss1DragonEffBullet;
        if (*(void **)((s8 *)arg0 + 0x48) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x48)); *(s32 *)((s8 *)arg0 + 0x48) = 0; }
        if (*(void **)((s8 *)arg0 + 0x44) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x44)); *(s32 *)((s8 *)arg0 + 0x44) = 0; }
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
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8002BC30___vt__21TBoss1DragonEffBullet *)&__vt__21TBoss1DragonEffBullet).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss1DragonEffBullet__name;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x1C), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg3));
    subtract_vector((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C));
    *(f32 *)((s8 *)arg0 + 0x40) = ((TObjBoss2Tunnel *)(arg0 + 0x28))->update_scale();
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805D8144;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = 0;
    *(s32 *)((s8 *)arg0 + 0x44) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    play_sound_effect((int) (0x4003B20B), (void *) (arg0 + 0x1C), (int) (0), (int) (0));
    return arg0;
}

void TBoss1Dragon::select_fireball_particle_table() {
    s32 temp_r3;
    temp_r3 = isV2Mode__12TBoss1DragonFv();
    switch (temp_r3) {
    case 0:
        dragon_fireball_particle_ids = &lbl_80435410.value;
        return;
    case 1:
        dragon_fireball_particle_ids = &lbl_8043541C.value;
        return;
    }
}

}
