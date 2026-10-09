#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028E9A4___vt__12TCharaMaking { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_8028E9A4___vt__12TCharaMaking_size[sizeof(RecoveredGlobal_8028E9A4___vt__12TCharaMaking) == 0x1C ? 1 : -1];

struct RecoveredGlobal_8028E794_TObjLight__data_80506320 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_8028E940___vt__12TCharaMaking {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
void *__nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TCMCharacter__ct(int, void *);
s32 create__14TObjCMMainMenuFPv(void *);
extern RecoveredGlobal_8028E9A4___vt__12TCharaMaking __vt__12TCharaMaking;
extern s32 lbl_805D3B6C;
extern s32 creation_main_menu_obj;
u8 *TCharaMaking__ct(u8 *arg0, s32 arg1);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern RecoveredGlobal_8028E794_TObjLight__data_80506320 TObjLight__scene_light_state;
extern const f32 lbl_805DD938;
void update_light_direction__12TCharaMakingFPv(u8 *arg0);
u8 * __dt__7TObjectFv(void *, s16);
void __dl__7TObjectFPv(s32);
extern RecoveredGlobal_8028E9A4___vt__12TCharaMaking __vt__12TCharaMaking;
extern void *creation_player_character;
extern s32 creation_main_menu_obj;
u8 *__dt__12TCharaMakingFv(u8 *arg0, s16 arg1);
s32 is_active__23TAdSinglePlyChrSelectGCFv(void *self);
s32 update_main_menu__12TCharaMakingFi(s32 arg0);
void run_task__12TCharaMakingFv(void *self);
}

extern "C" {

void TCharaMaking__sub_8028E790(void);
void *create__12TCharaMakingFPvPv(void *arg0, void *arg1);
s32 update_main_menu__12TCharaMakingFi(s32 arg0);
void *__nw__7TObjectFUl(int);
M2C_UNK create__15TChCrCharSelectFPv(s32);
M2C_UNK create__9TSaveChCrFPv(M2C_UNK);
M2C_UNK fn_8028D8F4();
M2C_UNK fn_80291268();
s32 is_state_3__14TObjCMMainMenuFv(s32);
s32 is_state_4__14TObjCMMainMenuFv(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

void TCharaMaking__sub_8028E790(void) {  }

extern s32 tl_03;
extern s32 creation_main_menu_obj;
extern s32 creation_dressing_room_mode_flag;

typedef char RecoveredGlobal_8028E794_TObjLight__data_80506320_size[sizeof(RecoveredGlobal_8028E794_TObjLight__data_80506320) == 0x50 ? 1 : -1];
void update_light_direction__12TCharaMakingFPv(u8 *arg0) {
    f32 temp_f31;
    M2C_FIELD(&TObjLight__scene_light_state.value, f32 *, 4) = (f32) (lbl_805DD938 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x1C)));
    temp_f31 = cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(&TObjLight__scene_light_state.value, f32 *, 0) = (f32) (temp_f31 * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x20)));
    M2C_FIELD(&TObjLight__scene_light_state.value, f32 *, 8) = (f32) (temp_f31 * cos_table_lookup(M2C_FIELD(arg0, s32 *, 0x20)));
}

s32 update_main_menu__12TCharaMakingFi(s32 arg0) {
    M2C_UNK var_r3;

    if (is_state_3__14TObjCMMainMenuFv(creation_main_menu_obj) != 0) {
        fn_8028D8F4();
        var_r3 = 0;
        if ((s32) creation_dressing_room_mode_flag == 1) {
            var_r3 = 1;
        }
        create__9TSaveChCrFPv(var_r3);
        fn_80291268();
        queue_destruction__7TObjectFv(arg0);
        return 1;
    }
    if (is_state_4__14TObjCMMainMenuFv(creation_main_menu_obj) != 0) {
        queue_destruction__7TObjectFv(arg0);
        create__15TChCrCharSelectFPv(tl_03);
        return 1;
    }
    return 0;
}

extern void *creation_player_character;

void run_task__12TCharaMakingFv(void *self) {
    if (!is_active__23TAdSinglePlyChrSelectGCFv(self)) return;
    if (update_main_menu__12TCharaMakingFi((s32)(self))) return;
}

void *create__12TCharaMakingFPvPv(void *arg0, void *arg1) {
    void *o;
    creation_player_character = arg1;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TCharaMaking__ct((u8 *)(o), (s32)(arg0));
    }
    return o;
}

typedef char RecoveredGlobal_8028E940___vt__12TCharaMaking_size[sizeof(RecoveredGlobal_8028E940___vt__12TCharaMaking) == 0x1C ? 1 : -1];
u8 *__dt__12TCharaMakingFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8028E940___vt__12TCharaMaking *)&__vt__12TCharaMaking).value;
        (*(s32 *)&creation_player_character) = 0;
        creation_main_menu_obj = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

u8 *TCharaMaking__ct(u8 *arg0, s32 arg1) {
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__12TCharaMaking.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3B6C;
    temp_r3 = ((u32)__nw__7TObjectFUl((int) (0x10C)));
    if (temp_r3 != 0U) {
        TCMCharacter__ct((int) (temp_r3), (void *) (arg0));
    }
    creation_main_menu_obj = create__14TObjCMMainMenuFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1555;
    M2C_FIELD(arg0, s32 *, 0x20) = 0x9000;
    update_light_direction__12TCharaMakingFPv((u8 *)((void *) (arg0)));
    return arg0;
}

}
