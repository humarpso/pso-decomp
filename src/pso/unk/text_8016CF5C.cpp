#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8016D1A8_lbl_80441D84 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016D2A4_lbl_80441D84 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct Obj_8016D428 { u8 pad[0x6c]; f32 f; };

struct Pkt_8016D148 { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Self_8016D148 { u8 pad[0x1C]; u16 id; u8 pad1e[0xC8 - 0x1E]; s32 switchId; };

struct VBase_8016CF5C { u8 pad[0x18]; };

struct VObj_8016CF5C : VBase_8016CF5C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *source);
};

extern "C" {
s32 is_split_screen();
s32 is_any_player_in_range__5TOKeyFPv(void *);
s32 is_local_player_in_range__5TOKeyFPv(void *);
s32 TOKeyMachine01__vt13(u8 *arg0);
extern const f32 lbl_805DB780;
extern const f32 lbl_805DB784;
extern const f32 lbl_805DB788;
extern const f32 lbl_805DB78C;
void TOKeyMachine01__vt15(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_8016D1A8_lbl_80441D84 key_machine01_state_table;
extern s32 enable_v2_features;
void TOKeyMachine01__vt17(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_8016D1A8_lbl_80441D84 key_machine01_state_table;
extern s32 enable_v2_features;
void TOKeyMachine01__vt16(s32 arg0);
extern const f32 lbl_805DB790;
extern const f32 lbl_805DB78C;
void TOKeyMachine01__vt14(Obj_8016D428 *self);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void finalize_and_send_60__6TLobbyFPv(void *);
s32 get_current_floor();
extern s32 local_client_id;
void send_switch_changed__14TOKeyMachine01FPvi(Self_8016D148 *self, s32 flags);
void reset_photon_effect__10TObjPlayerFPv(void *);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK init_collision_body_parts(void *, void *, s32);
M2C_UNK init_switch_id__5TOKeyFPv(void *);
void *TOKey__ct(void *, void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern void *__vt__14TOKeyGenericSw[];
extern M2C_UNK lbl_804B2D30[];
extern void *TOKeyGenericSw__shared_resource_ptrs[];
extern s32 lbl_805D3050;
extern u32 *TOKeyGenericSw__data_805D5A28;
extern const f32 lbl_805DB768;
extern const f32 lbl_805DB76C;
extern const f32 lbl_805DB770;
extern const f32 lbl_805DB774;
extern const f32 lbl_805DB778;
void *TOKeyGenericSw__ct(void *arg0, void *parent, void *source);
}

extern "C" {

void TOKeyMachine01__vt23(void);

void *TOKeyGenericSw__ct(void *arg0, void *parent, void *source) {
    TOKey__ct(arg0, parent);
    M2C_FIELD(arg0, void **, 0x18) = __vt__14TOKeyGenericSw;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D3050;
    ((VObj_8016CF5C *)arg0)->m5(source);
    init_switch_id__5TOKeyFPv(arg0);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(M2C_FIELD(TOKeyGenericSw__shared_resource_ptrs[1], void **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, void **, 0xBC) = M2C_FIELD(M2C_FIELD(TOKeyGenericSw__shared_resource_ptrs[1], void **, 0x430), void **, 4);
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xBC), u32 *, 4) - lbl_805DB768;
    M2C_FIELD(arg0, f32 *, 0xB8) = lbl_805DB76C;
    M2C_FIELD(arg0, u32 *, 0x24) = TOKeyGenericSw__data_805D5A28[1];
    init_collision_body_parts(arg0, lbl_804B2D30, 1);
    refresh_collision_body_centers(arg0);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, f32 *, 0xC0) = lbl_805DB770;
    M2C_FIELD(arg0, f32 *, 0xC4) = lbl_805DB774;
    if ((M2C_FIELD(arg0, s32 *, 0xD0) != 2) && (M2C_FIELD(arg0, f32 *, 0x68) < lbl_805DB778)) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    }
    M2C_FIELD(arg0, u8 *, 0xE8) = get_global_state__14TOKeyMachine01Fv();
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    return arg0;
}

void TOKeyMachine01__vt23(void) {  }
s32 TOKeyMachine01__vt13(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = is_any_player_in_range__5TOKeyFPv((void *) (arg0));
        } else {
            var_r3 = is_local_player_in_range__5TOKeyFPv((void *) (arg0));
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = is_any_player_in_range__5TOKeyFPv((void *) (arg0));
        break;
    }
    return var_r31;
}

typedef char RecoveredGlobal_8016D1A8_lbl_80441D84_size[sizeof(RecoveredGlobal_8016D1A8_lbl_80441D84) == 0x90 ? 1 : -1];

void send_switch_changed__14TOKeyMachine01FPvi(Self_8016D148 *self, s32 flags) {
    Pkt_8016D148 pkt;
    init_6x05_switch_changed__6TLobbyFPv(&pkt);
    pkt.object = self->id;
    pkt.zero = local_client_id;
    pkt.switchId = self->switchId;
    pkt.area = get_current_floor();
    pkt.flags = flags;
    finalize_and_send_60__6TLobbyFPv(&pkt);
}

void TOKeyMachine01__vt17(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&key_machine01_state_table.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 1) || (get_global_state__14TOKeyMachine01Fv() == 2))) {
        temp_r3_2 = M2C_FIELD(&key_machine01_state_table.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_3 = M2C_FIELD(&key_machine01_state_table.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_3 >= 0) {
            play_sound_effect(temp_r3_3, arg0 + 0x38, 0, 0);
        }
    }
}

typedef char RecoveredGlobal_8016D2A4_lbl_80441D84_size[sizeof(RecoveredGlobal_8016D2A4_lbl_80441D84) == 0x90 ? 1 : -1];
void TOKeyMachine01__vt16(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&key_machine01_state_table).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 1) || (get_global_state__14TOKeyMachine01Fv() == 2))) {
        temp_r3_2 = M2C_FIELD(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&key_machine01_state_table).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_3 = M2C_FIELD(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&key_machine01_state_table).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_3 >= 0) {
            play_sound_effect(temp_r3_3, arg0 + 0x38, 0, 0);
        }
    }
}

void TOKeyMachine01__vt15(u8 *arg0) {
    f32 temp_f1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF8) == 1) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + lbl_805DB780);
        if (lbl_805DB784 <= M2C_FIELD(arg0, f32 *, 0xEC)) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) - lbl_805DB780);
        if (M2C_FIELD(arg0, f32 *, 0xEC) <= lbl_805DB788) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 1;
        }
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f1 < lbl_805DB788) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - lbl_805DB78C);
    }
}
void TOKeyMachine01__vt14(Obj_8016D428 *self) {
    if (lbl_805DB790 < self->f) {
        self->f += lbl_805DB78C;
    }
}

}
