#include "types.h"

struct RecoveredGlobal_802A9948___vt__9TTecKafun { s32 value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_802A9948___vt__9TTecKafun_size[sizeof(RecoveredGlobal_802A9948___vt__9TTecKafun) == 0x28 ? 1 : -1];

struct RecoveredGlobal_802A9880___vt__9TTecKafun { s32 value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_802A9880___vt__9TTecKafun_size[sizeof(RecoveredGlobal_802A9880___vt__9TTecKafun) == 0x28 ? 1 : -1];

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 spawn_particle_effect(void *, int);
u32 find_entity_by_id(int);
s32 apply_technique_to_area_targets(void *);
void run_task__9TTecKafunFv(u8 *arg0);
u16 obj_getField1c(void *);
s32 play_sound_effect(s32, u32, s16, s32);
u8 * construct_area_technique_base(void *, s32, s32, s32, s16);
extern s32 __vt__9TTecKafun[];
extern s32 lbl_805D3E30;
u8 *TTecKafun__sub_802A9948(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, f32 farg0, f32 farg1);
u16 obj_getField1c(void *);
s32 play_sound_effect(s32, u32, s16, s32);
u8 * construct_area_technique_base(void *, s32, s32, s32, s16);
extern s32 __vt__9TTecKafun[];
extern s32 lbl_805D3E30;
u8 *TTecKafun__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s16 arg6, f32 farg0, f32 farg1);
}

extern "C" {

void *__dt__9TTecKafunFv(void *arg0, s16 arg1);
void render__9TTecKafunFv(void);
void __dl__7TObjectFPv(void *);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

extern s32 __vt__9TTecKafun[];

void *__dt__9TTecKafunFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__9TTecKafun;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__9TTecKafunFv(void) {  }
void run_task__9TTecKafunFv(u8 *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    *(u32 *)((s8 *)arg0 + 0x1C) = find_entity_by_id((int) (*(u16 *)((s8 *)arg0 + 0xB4)));
    if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    spawn_particle_effect((void *) (arg0 + 0x20), (int) (*(s32 *)((s8 *)arg0 + 0xF0)));
    if ((s32) *(s32 *)((s8 *)arg0 + 0xFC) == 1) {
        spawn_particle_effect((void *) (arg0 + 0x20), (int) (*(s32 *)((s8 *)arg0 + 0xF4)));
    }
    apply_technique_to_area_targets((void *) (arg0));
    queue_destruction__7TObjectFv((void *) (arg0));
}

u8 *TTecKafun__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s16 arg6, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    construct_area_technique_base(arg0, arg1, arg2, arg2, arg6);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802A9880___vt__9TTecKafun *)&__vt__9TTecKafun).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3E30;
    *(f32 *)((s8 *)arg0 + 0xEC) = farg0;
    *(s32 *)((s8 *)arg0 + 0xF8) = arg3;
    *(s32 *)((s8 *)arg0 + 0xFC) = 1;
    *(s32 *)((s8 *)arg0 + 0xF0) = arg4;
    *(s32 *)((s8 *)arg0 + 0xF4) = arg5;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xE8));
    if (temp_r3 != NULL) {
        *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0xA4)) + 0xC) = farg1;
    }
    play_sound_effect(0x4002A50A, (u32) (arg0 + 0x20), 0, 0);
    temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x1C));
    if (temp_r3_2 != NULL) {
        *(u16 *)((s8 *)arg0 + 0xB4) = obj_getField1c(temp_r3_2);
    }
    return arg0;
}

u8 *TTecKafun__sub_802A9948(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    construct_area_technique_base(arg0, arg1, arg2, arg2, arg5);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_802A9948___vt__9TTecKafun *)&__vt__9TTecKafun).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3E30;
    *(f32 *)((s8 *)arg0 + 0xEC) = farg0;
    *(s32 *)((s8 *)arg0 + 0xF8) = arg3;
    *(s32 *)((s8 *)arg0 + 0xFC) = 0;
    *(s32 *)((s8 *)arg0 + 0xF0) = arg4;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xE8));
    if (temp_r3 != NULL) {
        *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0xA4)) + 0xC) = farg1;
    }
    play_sound_effect(0x4002A50A, (u32) (arg0 + 0x20), 0, 0);
    temp_r3_2 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x1C));
    if (temp_r3_2 != NULL) {
        *(u16 *)((s8 *)arg0 + 0xB4) = obj_getField1c(temp_r3_2);
    }
    return arg0;
}

}
