#include "types.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKey.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8016D1A8_lbl_80441D84 {
    s32 value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016D2A4_lbl_80441D84 {
    s32 value;
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
s32 is_confirm_pressed__14TOKeyMachine01Fv(u8 *arg0);
extern const f32 lbl_805DB780;
extern const f32 lbl_805DB784;
extern const f32 lbl_805DB788;
extern const f32 lbl_805DB78C;
void vfunc_17__14TOKeyMachine01Fv(u8 *arg0);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_8016D1A8_lbl_80441D84 key_machine01_state_table;
extern s32 enable_v2_features;
void vfunc_19__14TOKeyMachine01Fv(s32 arg0);
s32 play_sound_effect(s32, u32, s16, s32);
extern RecoveredGlobal_8016D1A8_lbl_80441D84 key_machine01_state_table;
extern s32 enable_v2_features;
void TOKeyMachine01__vt16(s32 arg0);
extern const f32 lbl_805DB790;
extern const f32 lbl_805DB78C;
void vfunc_16__14TOKeyMachine01Fv(Obj_8016D428 *self);
s32 get_current_floor();
extern s32 local_client_id;
s32 refresh_collision_body_centers__13TUnk_804AF8A0Fv(void *);
s32 init_collision_body_parts(void *, void *, s32);
void *TOKey__ct(void *, void *);
extern void *__vt__14TOKeyGenericSw[];
extern s32 lbl_804B2D30[];
extern void *TOKeyGenericSw__shared_resource_ptrs[];
extern s32 TOKeyGenericSw__name;
extern u32 *TOKeyGenericSw__texture_lists;
extern const f32 lbl_805DB768;
extern const f32 lbl_805DB76C;
extern const f32 lbl_805DB770;
extern const f32 lbl_805DB774;
extern const f32 lbl_805DB778;
void *TOKeyGenericSw__ct(void *arg0, void *parent, void *source);
}

extern "C" {

void vfunc_25__14TOKeyMachine01Fv(void);

void *TOKeyGenericSw__ct(void *arg0, void *parent, void *source) {
    TOKey__ct(arg0, parent);
    *(void **)((s8 *)arg0 + 0x18) = __vt__14TOKeyGenericSw;
    *(s32 *)((s8 *)arg0 + 0) = TOKeyGenericSw__name;
    ((VObj_8016CF5C *)arg0)->m5(source);
    ((TOKey *)arg0)->init_switch_id();
    *(s32 *)((s8 *)arg0 + 0x34) = *(s32 *)((s8 *)(*(void **)((s8 *)TOKeyGenericSw__shared_resource_ptrs[1] + 0x42C)) + 8);
    *(void **)((s8 *)arg0 + 0xBC) = *(void **)((s8 *)(*(void **)((s8 *)TOKeyGenericSw__shared_resource_ptrs[1] + 0x430)) + 4);
    *(f32 *)((s8 *)arg0 + 0xB4) = (f32) *(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xBC)) + 4) - lbl_805DB768;
    *(f32 *)((s8 *)arg0 + 0xB8) = lbl_805DB76C;
    *(u32 *)((s8 *)arg0 + 0x24) = TOKeyGenericSw__texture_lists[1];
    init_collision_body_parts(arg0, lbl_804B2D30, 1);
    refresh_collision_body_centers__13TUnk_804AF8A0Fv(arg0);
    ((TObjPlayer *)arg0)->reset_photon_effect();
    *(f32 *)((s8 *)arg0 + 0xC0) = lbl_805DB770;
    *(f32 *)((s8 *)arg0 + 0xC4) = lbl_805DB774;
    if ((*(s32 *)((s8 *)arg0 + 0xD0) != 2) && (*(f32 *)((s8 *)arg0 + 0x68) < lbl_805DB778)) {
        *(s32 *)((s8 *)arg0 + 0xD0) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0xD0) = 0;
    }
    *(u8 *)((s8 *)arg0 + 0xE8) = TOKeyMachine01::get_global_state();
    *(s32 *)((s8 *)arg0 + 0xEC) = 0;
    *(s32 *)((s8 *)arg0 + 0xF0) = 0;
    *(s32 *)((s8 *)arg0 + 0xF4) = 0;
    *(s32 *)((s8 *)arg0 + 0xF8) = 0;
    return arg0;
}

void TOKeyMachine01::vfunc_25() {  }
s32 TOKeyMachine01::is_confirm_pressed() {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = *(s32 *)((s8 *)((u8 *)this) + 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = ((TOKey *)((u8 *)this))->is_any_player_in_range();
        } else {
            var_r3 = ((TOKey *)((u8 *)this))->is_local_player_in_range();
        }
        if (((s32) *(s32 *)((s8 *)((u8 *)this) + 0xD4) == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = ((TOKey *)((u8 *)this))->is_any_player_in_range();
        break;
    }
    return var_r31;
}

typedef char RecoveredGlobal_8016D1A8_lbl_80441D84_size[sizeof(RecoveredGlobal_8016D1A8_lbl_80441D84) == 0x90 ? 1 : -1];

void TOKeyMachine01::send_switch_changed(s32 flags) {
    Self_8016D148 *self = (Self_8016D148 *)this;
    Pkt_8016D148 pkt;
    ((TLobby *)(&pkt))->init_6x05_switch_changed();
    pkt.object = self->id;
    pkt.zero = local_client_id;
    pkt.switchId = self->switchId;
    pkt.area = get_current_floor();
    pkt.flags = flags;
    ((TLobby *)(&pkt))->finalize_and_send_60();
}

void TOKeyMachine01::vfunc_19() {
    s32 arg0 = (s32)this;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    if (((s32) enable_v2_features == 1) && ((TOKeyMachine01::get_global_state() == 0x10) || (TOKeyMachine01::get_global_state() == 0x11))) {
        temp_r3 = *(s32 *)((s8 *)(&key_machine01_state_table.value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else if (((s32) enable_v2_features == 1) && ((TOKeyMachine01::get_global_state() == 1) || (TOKeyMachine01::get_global_state() == 2))) {
        temp_r3_2 = *(s32 *)((s8 *)(&key_machine01_state_table.value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_3 = *(s32 *)((s8 *)(&key_machine01_state_table.value) + (TOKeyMachine01::get_global_state() * 4));
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
    if (((s32) enable_v2_features == 1) && ((TOKeyMachine01::get_global_state() == 0x10) || (TOKeyMachine01::get_global_state() == 0x11))) {
        temp_r3 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&key_machine01_state_table).value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else if (((s32) enable_v2_features == 1) && ((TOKeyMachine01::get_global_state() == 1) || (TOKeyMachine01::get_global_state() == 2))) {
        temp_r3_2 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&key_machine01_state_table).value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_3 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&key_machine01_state_table).value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3_3 >= 0) {
            play_sound_effect(temp_r3_3, arg0 + 0x38, 0, 0);
        }
    }
}

void TOKeyMachine01::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF8) == 1) {
        *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) + lbl_805DB780);
        if (lbl_805DB784 <= *(f32 *)((s8 *)arg0 + 0xEC)) {
            *(s32 *)((s8 *)arg0 + 0xF8) = 0;
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) - lbl_805DB780);
        if (*(f32 *)((s8 *)arg0 + 0xEC) <= lbl_805DB788) {
            *(s32 *)((s8 *)arg0 + 0xF8) = 1;
        }
    }
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x6C);
    if (temp_f1 < lbl_805DB788) {
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (temp_f1 - lbl_805DB78C);
    }
}
void TOKeyMachine01::vfunc_16() {
    Obj_8016D428 *self = (Obj_8016D428 *)this;
    if (lbl_805DB790 < self->f) {
        self->f += lbl_805DB78C;
    }
}

}
