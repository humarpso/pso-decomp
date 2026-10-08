#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80153084_lbl_804AF7B0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801532C8_lbl_804AF7C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_80153258_lbl_804AF7C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
void record_poison_hit__22TObjFogCollisionPoisonFPvUs(u8 *arg0, u16 arg1);
s32 select_fog_for_viewport__8TFogCtrlFiii(s32, s32, s32);
s32 restore_fog_for_player__8TFogCtrlFii(s32, s32);
s32 is_any_teammate_in_state__10TObjPlayerFv(void);
void update_fog_region_arbitration(u8 *arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804AF7B0[];
u8 *init_base__22TObjFogCollisionPoisonFPvPvs(u8 *arg0, u8 *arg1, s16 arg2);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801532C8_lbl_804AF7C8 lbl_804AF7C8;
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__data_8050D430;
extern s32 lbl_805D2E84;
u8 *construct_with_index__22TObjFogCollisionPoisonFPvPvi(u8 *arg0, u8 *arg1, s32 arg2);
void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2);
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__data_8050D430;
void record_fog_collision_hit(s32 arg0, s32 arg1, s32 arg2);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern RecoveredGlobal_801532C8_lbl_804AF7C8 lbl_804AF7C8;
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__data_8050D430;
u8 *TObjFogCollisionPoison__sub_80153258(u8 *arg0, s16 arg1);
extern RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430 TObjFogCollisionPoison__data_8050D430;
void clear_state_array__22TObjFogCollisionPoisonFv(void);
void TObjFogCollisionSwitch__vt12(void *self);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_80440078[];
void TObjFogCollisionPoison__vt12(void *self);
s16 obj_getS16_32C(s32);
s32 obj_getField1c(s32);
s32 is_valid_target__9TObjEneDDFPv(s32);
M2C_UNK send_6x2F_change_player_hp(M2C_UNK, s32, s16);
s32 get_player_by_client_id(u16);
void apply_poison_damage__22TObjFogCollisionPoisonFPvi(void *arg0, s32 arg1);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_persistent_sound(M2C_UNK, s32, s32, M2C_UNK, M2C_UNK);
void TObjFogCollisionPoison__sub_80153520(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
M2C_UNK play_sound_effect(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TObjFogCollisionPoison__sub_801535D0(s32 arg0);
}

extern "C" {

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1);
void TObjFogCollisionPoison__sub_801533BC(void);
u8 check_switch__22TObjFogCollisionPoisonFPv(void *arg0);
void create__22TObjFogCollisionPoisonFv(void);
void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2);
u8 is_current_floor_switch_set(u16);
s32 TObjFogCollisionSwitch__sub_80153A0C();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(M2C_UNK);
s32 is_split_screen();

extern M2C_UNK lbl_804AF7B0[];

void *TObjFogCollisionPoison__sub_8015302C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804AF7B0;
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
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80153084_lbl_804AF7B0 *)&lbl_804AF7B0).value;
    M2C_FIELD(arg0, s16 *, 0x28) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x96;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    return arg0;
}

void update_fog_region_arbitration(u8 *arg0) {
    s32 temp_r0;
    s32 var_r4;
    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
        switch (temp_r0) {
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
                var_r4 = M2C_FIELD(arg0, s32 *, 0x20);
                if (var_r4 >= 0x1000) {
                    var_r4 -= 0x1000;
                }
                if (var_r4 < 0) {
                    var_r4 = 0;
                } else if (var_r4 >= 0x80) {
                    var_r4 = 0x7F;
                }
                if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != 0) {
                    select_fog_for_viewport__8TFogCtrlFiii(M2C_FIELD(arg0, s32 *, 0x28), var_r4, 0);
                } else {
                    select_fog_for_viewport__8TFogCtrlFiii(M2C_FIELD(arg0, s32 *, 0x28), var_r4, 1);
                }
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
            } else {
                M2C_FIELD(arg0, s32 *, 0x2C) = 1;
                if ((s32) M2C_FIELD(arg0, s32 *, 0x24) != 0) {
                    restore_fog_for_player__8TFogCtrlFii(M2C_FIELD(arg0, s32 *, 0x28), 0);
                } else {
                    restore_fog_for_player__8TFogCtrlFii(M2C_FIELD(arg0, s32 *, 0x28), 1);
                }
            }
            break;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0) {
                M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}

typedef char RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];
void record_fog_collision_hit(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r3;
    if ((arg0 >= 0) && (arg0 < 0xC)) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_801531EC_TObjFogCollisionPoison__data_8050D430 *)&TObjFogCollisionPoison__data_8050D430).value, M2C_UNK *, (arg0 * 4));
        if (temp_r3 != 0U) {
            record_hit__22TObjFogCollisionPoisonFPvii((void *)((int) (temp_r3)), (s32)((void *) (arg1)), (s32)((void *) (arg2)));
        }
    }
}

void record_hit__22TObjFogCollisionPoisonFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x20) <= arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    }
}

extern s32 tl_05;
extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_801532C8_lbl_804AF7C8_size[sizeof(RecoveredGlobal_801532C8_lbl_804AF7C8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_801532C8_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];

typedef char RecoveredGlobal_80153258_lbl_804AF7C8_size[sizeof(RecoveredGlobal_80153258_lbl_804AF7C8) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430_size[sizeof(RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430) == 0x30 ? 1 : -1];
u8 *TObjFogCollisionPoison__sub_80153258(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80153258_lbl_804AF7C8 *)&lbl_804AF7C8).value;
        M2C_FIELD(&(*(RecoveredGlobal_80153258_TObjFogCollisionPoison__data_8050D430 *)&TObjFogCollisionPoison__data_8050D430).value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x28) * 4)) = 0;
        __dt__7TObjectFv((void *)(arg0), (int)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)((s32) arg0));
        }
    }
    return arg0;
}

u8 *construct_with_index__22TObjFogCollisionPoisonFPvPvi(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804AF7C8.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2E84;
    M2C_FIELD(arg0, s32 *, 0x28) = arg2;
    M2C_FIELD(&TObjFogCollisionPoison__data_8050D430.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x28) * 4)) = (long) (arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 1;
    return arg0;
}

void create__22TObjFogCollisionPoisonFv(void) {
    s32 var_r31;
    void *obj;

    if (is_split_screen() == 0) {
        obj = __nw__7TObjectFUl(0x30);
        if (obj != NULL) {
            construct_with_index__22TObjFogCollisionPoisonFPvPvi((u8 *)(obj), (u8 *)(tl_05), (s32)(lbl_805D53A0));
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

void clear_state_array__22TObjFogCollisionPoisonFv(void) {
    s32 i;
    for (i = 0; i < 12; i++) {
        ((s32 *)&TObjFogCollisionPoison__data_8050D430)[i] = 0;
    }
}

void TObjFogCollisionPoison__vt12(void *self) {
    TObjFogCollisionSwitch__vt12(self);
    debug_printf_at(0x13001D, lbl_80440078);
}

u8 check_switch__22TObjFogCollisionPoisonFPv(void *arg0) {
    s32 temp_r31;

    temp_r31 = TObjFogCollisionSwitch__sub_80153A0C();
    return (u8) (temp_r31 == is_current_floor_switch_set((u16) M2C_FIELD(arg0, s32 *, 0x8C)));
}

void apply_poison_damage__22TObjFogCollisionPoisonFPvi(void *arg0, s32 arg1) {
    s32 p;
    s16 v;
    p = get_player_by_client_id(arg1);
    if (is_valid_target__9TObjEneDDFPv(p) != 0) {
        v = obj_getS16_32C(p) - M2C_FIELD(arg0, s32 *, 0x98);
        if (v < 0) {
            v = 0;
        }
        send_6x2F_change_player_hp(0xFFFF, obj_getField1c(p), v);
    }
}

void record_poison_hit__22TObjFogCollisionPoisonFPvUs(u8 *arg0, u16 arg1) {
    record_fog_collision_hit((s32)((void *) (arg1)), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x84))), (s32)((int) ((u8) (M2C_FIELD(arg0, s32 *, 0x88) == 0))));
}
void TObjFogCollisionPoison__sub_80153520(s32 arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
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
    switch (get_global_state__14TOKeyMachine01Fv()) {
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
