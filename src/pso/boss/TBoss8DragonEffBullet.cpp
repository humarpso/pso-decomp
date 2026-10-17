#include "types.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/system/vector.h"
#include "pso/boss/TBoss8DragonEffBullet.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/misc/TNowLoading.h"

struct RecoveredGlobal_802FE378_lbl_80474B68 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802FE378_lbl_80474B74 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802FE378_lbl_80474B80 {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredFields_802FE0E4_arg0 {
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
    s32 field_44;
    u16 field_48;
    u8 unknown_4A[0x2];
    u8 * field_4C;
    u8 * field_50;
    u8 * field_54;
};

extern "C" {
s32 play_sound_effect(int, void *, int, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 subtract_vector(void *, void *);
extern RecoveredGlobal_802FE378_lbl_80474B68 lbl_80474B68;
extern RecoveredGlobal_802FE378_lbl_80474B74 lbl_80474B74;
extern RecoveredGlobal_802FE378_lbl_80474B80 lbl_80474B80;
extern s32 __vt__21TBoss8DragonEffBullet[];
extern s32 TBoss8DragonEffBullet__name;
extern const f32 lbl_805DEF04;
void *spawn_particle_effect_with_flags(void *pos, s32 id, s32 flags);
void *spawn_continuous_particle_effect_with_flags(void *parent, s32 idx, s32 flags);
u8 *get_enemy_entity(u16 arg0);
void TBoss8Dragon__sub_802FB220(void *o, int x, u32 a);
extern const f32 lbl_805DEF00;
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

void TBoss8DragonEffBullet::render() {  }

#pragma push
#pragma fp_contract on
void TBoss8DragonEffBullet::run_task() {
    struct RecoveredFields_802FE0E4_arg0 *arg0 = (struct RecoveredFields_802FE0E4_arg0 *)this;
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
        var_f2 = lbl_805DEF00;
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
        if ((u8 *) arg0->field_4C == NULL) {
            arg0->field_4C = (u8 *)spawn_continuous_particle_effect_with_flags(&arg0->field_1C, *(s32 *)((s8 *)arg0->field_54 + 0), 0x40);
        }
        if (((s32) arg0->field_44 == 3) && ((u8 *) arg0->field_50 == NULL)) {
            arg0->field_50 = (u8 *)spawn_continuous_particle_effect_with_flags(&arg0->field_1C, 0x204, 0x40);
        }
        temp_r3 = (u8 *)(arg0->field_4C);
        if (temp_r3 != NULL) {
            ((TNowLoading *)temp_r3)->copy_pos(&arg0->field_1C);
        }
        temp_r3_2 = (u8 *)(arg0->field_50);
        if (temp_r3_2 != NULL) {
            ((TNowLoading *)temp_r3_2)->copy_pos(&arg0->field_1C);
        }
        return;
    case 1:
        arg0->field_34 += 1;
        if ((s32) arg0->field_34 == 1) {
            spawn_particle_effect_with_flags((void *)&arg0->field_1C, (s32)(*(u8 **)((s8 *)arg0->field_54 + 4)), (s32)(0x40));
            temp_r3_3 = (u8 *)(arg0->field_50);
            if (temp_r3_3 != NULL) {
                queue_destruction__7TObjectFv(temp_r3_3);
                arg0->field_50 = NULL;
            }
            temp_r3_4 = (u8 *)(arg0->field_4C);
            if (temp_r3_4 != NULL) {
                queue_destruction__7TObjectFv(temp_r3_4);
                arg0->field_4C = NULL;
            }
            play_sound_effect(0x4003AD0C, &arg0->field_1C, 0, 0);
            TBoss8Dragon__sub_802FB220(get_enemy_entity((u16)arg0->field_48), (int)&arg0->field_1C, arg0->field_44);
        }
        if ((s32) arg0->field_34 <= 2) {
            spawn_particle_effect_with_flags((void *)&arg0->field_1C, (s32)(*(u8 **)((s8 *)arg0->field_54 + 8)), (s32)(0x40));
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

void *__dt__21TBoss8DragonEffBulletFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TBoss8DragonEffBullet;
        if (*(void **)((s8 *)arg0 + 0x50) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x50)); *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_50 = 0; }
        if (*(void **)((s8 *)arg0 + 0x4C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x4C)); *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_4c = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_802FE378_lbl_80474B68_size[sizeof(RecoveredGlobal_802FE378_lbl_80474B68) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802FE378_lbl_80474B74_size[sizeof(RecoveredGlobal_802FE378_lbl_80474B74) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802FE378_lbl_80474B80_size[sizeof(RecoveredGlobal_802FE378_lbl_80474B80) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet_size[sizeof(RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet) == 0x18 ? 1 : -1];
u8 *TBoss8DragonEffBullet__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5) {
    s32 temp_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802FE378___vt__21TBoss8DragonEffBullet *)&__vt__21TBoss8DragonEffBullet).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss8DragonEffBullet__name;
    VecCopy((Vec *)(arg0 + 0x1C), (const Vec *)(arg2));
    VecCopy((Vec *)(arg0 + 0x28), (const Vec *)(arg3));
    subtract_vector((void *) (arg0 + 0x28), (void *) (arg0 + 0x1C));
    ((TBoss8DragonEffBullet *)arg0)->m_40 = ((TObjBoss2Tunnel *)(arg0 + 0x28))->update_scale();
    *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805DEF04;
    *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_34 = 0;
    *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_38 = 0;
    *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_44 = arg4;
    *(s16 *)&((TBoss8DragonEffBullet *)arg0)->m_48 = arg5;
    *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_4c = 0;
    *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_50 = 0;
    play_sound_effect((int) (0x4003B20B), (void *) (arg0 + 0x1C), (int) (0), (int) (0));
    temp_r0 = *(s32 *)&((TBoss8DragonEffBullet *)arg0)->m_44;
    switch (temp_r0) {
    case 1:
        *(s32 **)((s8 *)arg0 + 0x54) = &lbl_80474B68.value;
        break;
    case 2:
        *(s32 **)((s8 *)arg0 + 0x54) = &lbl_80474B74.value;
        break;
    case 3:
        *(s32 **)((s8 *)arg0 + 0x54) = &lbl_80474B80.value;
        break;
    }
    return arg0;
}

}
