#include "types.h"
#include "pso/object/TObjFogCollision_Manager.h"
#include "pso/object/TObjFogCollisionPoison.h"
#include "pso/misc/TFogCtrl.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80153084_lbl_804AF7B0 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801532C8_lbl_804AF7C8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430 {
    s32 value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80153258_lbl_804AF7C8 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430 {
    s32 value;
    u8 remaining[0x2C];
};

extern "C" {
void run_task__24TObjFogCollision_ManagerFv(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 lbl_804AF7B0[];
u8 *init_base__22TObjFogCollisionPoisonFPvPvs(u8 *arg0, u8 *arg1, s16 arg2);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801532C8_lbl_804AF7C8 lbl_804AF7C8;
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__instances;
extern s32 lbl_805D2E84;
u8 *construct_with_index__22TObjFogCollisionPoisonFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__instances;
void record_fog_collision_hit(s32 arg0, s32 arg1, s32 arg2);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern RecoveredGlobal_801532C8_lbl_804AF7C8 lbl_804AF7C8;
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__instances;
u8 *TObjFogCollisionPoison__sub_80153258(u8 *arg0, s16 arg1);
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__instances;
void vfunc_14__22TObjFogCollisionSwitchFv(void *self);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80440078[];
void vfunc_14__22TObjFogCollisionPoisonFv(void *self);
s16 obj_getS16_32C(s32);
s32 obj_getField1c(s32);
s32 is_valid_target__9TObjEneDDFv(s32);
s32 send_6x2F_change_player_hp(s32, s32, s16);
s32 get_player_by_client_id(u16);
s32 play_persistent_sound(s32, s32, s32, s32, s32);
void TObjFogCollisionPoison__sub_80153520(s32 arg0);
s32 play_sound_effect(s32, s32, s32, s32);
void TObjFogCollisionPoison__sub_801535D0(s32 arg0);
}

extern "C" {

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1);
void TObjFogCollisionPoison__sub_801533BC(void);
u8 is_current_floor_switch_set(u16);
s32 TObjFogCollisionSwitch__sub_80153A0C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(s32);
s32 is_split_screen();

extern s32 lbl_804AF7B0[];

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804AF7B0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80153084_lbl_804AF7B0_size[sizeof(RecoveredGlobal_80153084_lbl_804AF7B0) == 0x18 ? 1 : -1];
u8 *init_base__22TObjFogCollisionPoisonFPvPvs(u8 *arg0, u8 *arg1, s16 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80153084_lbl_804AF7B0 *)&lbl_804AF7B0).value;
    *(s16 *)((s8 *)arg0 + 0x28) = arg2;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0x96;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    return arg0;
}

void TObjFogCollision_Manager::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 var_r4;
    if (TObjPlayer::is_any_teammate_in_state() == 0) {
        temp_r0 = *(s32 *)&this->unk_2C;
        switch (temp_r0) {
        case 0:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 0) {
                var_r4 = this->m_20;
                if (var_r4 >= 0x1000) {
                    var_r4 -= 0x1000;
                }
                if (var_r4 < 0) {
                    var_r4 = 0;
                } else if (var_r4 >= 0x80) {
                    var_r4 = 0x7F;
                }
                if ((s32) *(s32 *)((s8 *)arg0 + 0x24) != 0) {
                    TFogCtrl::select_fog_for_viewport(this->m_28, var_r4, 0);
                } else {
                    TFogCtrl::select_fog_for_viewport(this->m_28, var_r4, 1);
                }
                *(s32 *)((s8 *)arg0 + 0x1C) = 0;
            } else {
                *(s32 *)&this->unk_2C = 1;
                if ((s32) *(s32 *)((s8 *)arg0 + 0x24) != 0) {
                    TFogCtrl::restore_fog_for_player(this->m_28, 0);
                } else {
                    TFogCtrl::restore_fog_for_player(this->m_28, 1);
                }
            }
            break;
        case 1:
            if ((s32) *(s32 *)((s8 *)arg0 + 0x1C) > 0) {
                *(s32 *)((s8 *)arg0 + 0x1C) = 0;
                *(s32 *)&this->unk_2C = 0;
            }
            break;
        }
        this->m_20 = 0;
    }
}

typedef char RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];
void record_fog_collision_hit(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    if ((arg0 >= 0) && (arg0 < 0xC)) {
        temp_r3 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430 *)&TObjFogCollisionPoison__instances).value) + (arg0 * 4));
        if (temp_r3 != 0U) {
            ((TObjFogCollisionPoison *)temp_r3)->record_hit((s32)((void *) (arg1)), (s32)((void *) (arg2)));
        }
    }
}

void TObjFogCollisionPoison::record_hit(s32 arg1, s32 arg2) {
    if ((s32) *(s32 *)&this->m_20 <= arg1) {
        *(s32 *)&this->unk_1C = (s32) (*(s32 *)&this->unk_1C + 1);
        *(s32 *)&this->m_20 = arg1;
        this->texture_id = arg2;
    }
}

extern s32 tl_05;
extern s32 local_client_id;

typedef char RecoveredGlobal_801532C8_lbl_804AF7C8_size[sizeof(RecoveredGlobal_801532C8_lbl_804AF7C8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];

typedef char RecoveredGlobal_80153258_lbl_804AF7C8_size[sizeof(RecoveredGlobal_80153258_lbl_804AF7C8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];
u8 *TObjFogCollisionPoison__sub_80153258(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80153258_lbl_804AF7C8 *)&lbl_804AF7C8).value;
        *(s32 *)((s8 *)(&(*(RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430 *)&TObjFogCollisionPoison__instances).value) + (*(s32 *)((s8 *)arg0 + 0x28) * 4)) = 0;
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)((s32) arg0));
        }
    }
    return arg0;
}

u8 *construct_with_index__22TObjFogCollisionPoisonFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804AF7C8.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2E84;
    *(s32 *)((s8 *)arg0 + 0x28) = arg2;
    *(s32 *)((s8 *)(&TObjFogCollisionPoison__instances.value) + (*(s32 *)((s8 *)arg0 + 0x28) * 4)) = (long) (arg0);
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = 1;
    *(s32 *)((s8 *)arg0 + 0x2C) = 1;
    return arg0;
}

void TObjFogCollisionPoison::create() {
    s32 var_r31;
    void *obj;

    if (is_split_screen() == 0) {
        obj = __nw__7TObjectFUl(0x30);
        if (obj != NULL) {
            construct_with_index__22TObjFogCollisionPoisonFPvPvi((u8 *)(obj), (u8 *)(tl_05), (s32)(local_client_id));
        }
    } else {
        var_r31 = 0;
        do {
            obj = __nw__7TObjectFUl(0x30);
            if (obj != NULL) {
                construct_with_index__22TObjFogCollisionPoisonFPvPvi((u8 *)(obj), (u8 *)(tl_05), (s32)(var_r31));
            }
            var_r31 += 1;
        } while (var_r31 != 4);
    }
}

void TObjFogCollisionPoison__sub_801533BC(void) {  }

void TObjFogCollisionPoison::clear_state_array() {
    s32 i;
    for (i = 0; i < 12; i++) {
        ((s32 *)&TObjFogCollisionPoison__instances)[i] = 0;
    }
}

void TObjFogCollisionPoison::vfunc_14() {
    vfunc_14__22TObjFogCollisionSwitchFv(this);
    debug_printf_at(0x13001D, lbl_80440078);
}

u8 TObjFogCollisionPoison::check_switch() {
    s32 temp_r31;

    temp_r31 = TObjFogCollisionSwitch__sub_80153A0C();
    return (u8) (temp_r31 == is_current_floor_switch_set((u16) *(s32 *)&this->unk_8C));
}

void TObjFogCollisionPoison::apply_poison_damage(s32 arg1) {
    s32 p;
    s16 v;
    p = get_player_by_client_id(arg1);
    if (is_valid_target__9TObjEneDDFv(p) != 0) {
        v = obj_getS16_32C(p) - *(s32 *)&this->m_98;
        if (v < 0) {
            v = 0;
        }
        send_6x2F_change_player_hp(0xFFFF, obj_getField1c(p), v);
    }
}

void TObjFogCollisionPoison::record_poison_hit(u16 arg1) {
    u8 *arg0 = (u8 *)this;
    record_fog_collision_hit((s32)((void *) (arg1)), (s32)((int) (this->m_84)), (s32)((int) ((u8) (*(s32 *)&this->m_88 == 0))));
}
void TObjFogCollisionPoison__sub_80153520(s32 arg0) {
    switch (TOKeyMachine01::get_global_state()) {
    case 0x15:
    case 0x16:
        play_persistent_sound(0x4004BC16, arg0, arg0 + 0x38, 0, 0);
        break;
    case 0x1C:
    case 0x1D:
        play_persistent_sound(0x4004BC24, arg0, arg0 + 0x38, 0, 0);
        break;
    default:
        play_persistent_sound(0x4004BC1C, arg0, arg0 + 0x38, 0, 0);
        break;
    }
}
void TObjFogCollisionPoison__sub_801535D0(s32 arg0) {
    switch (TOKeyMachine01::get_global_state()) {
    case 0x15:
    case 0x16:
        play_sound_effect(0x4004C115, arg0 + 0x38, 0, 0);
        break;
    case 0x1C:
    case 0x1D:
        play_sound_effect(0x4004C123, arg0 + 0x38, 0, 0);
        break;
    default:
        play_sound_effect(0x4004C11B, arg0 + 0x38, 0, 0);
        break;
    }
}

}
