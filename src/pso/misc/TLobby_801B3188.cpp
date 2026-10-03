#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ReturnLobby { u8 bytes[0x28]; };

typedef s32 M2C_UNK;
struct VBase_801B3274 { char pad[0x18]; };

struct VObj_801B3274 : VBase_801B3274 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
};

extern "C" {
u16 obj_getField1c(void *);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK get_dest_area__17TObjAreaWarpQuestFPv(void *);
M2C_UNK send_6x21_inter_level_warp(s32, int);
int set_battle_flag__10TObjPlayerFPvi(void*, int);
M2C_UNK set_arrival_override_pos(u16, int, int);
s32 TObjPlayer__sub_801D8D14(void *);
s32 get_hospital_position__10TObjPlayerFPv(void *);
s32 TNpcPlayer__sub_8034DE40();
s32 TNpcPlayer__sub_8034DE70();
M2C_UNK apply_to_players__10TNpcPlayerFiPvi(s32, int, int);
extern ReturnLobby lbl_80515BA0;
void TObjPlayer__sub_801B31D8(s32 arg0);
s32 get_main_phase();
M2C_UNK mark_area_change_pending();
M2C_UNK get_field_2d4__10TObjPlayerFPv(void *);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
M2C_UNK get_dest_area__17TObjAreaWarpQuestFPv(void *);
u16 TObjRoomId__sub_801A1DB8(M2C_UNK);
s32 is_camera_mode_active__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_801AF554(void *, u8);
s32 is_technique_ready__8TTecCtrlFv();
s32 try_pickup_item__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_801B30BC(void *, int);
void TObjPlayer__sub_801B31D8(s32 arg0);
M2C_UNK create_return_city_window__10TObjPlayerFPv(void *);
M2C_UNK update_aim_angle__10TObjPlayerFPvi(void *, int);
VObj_801B3274 *get_player_by_client_id(M2C_UNK);
M2C_UNK TObjPlayer__sub_801BBE54(void *);
s32 check_camera_mode__10TObjPlayerFv();
s32 get_anim_id__10TObjPlayerFPv(void *);
M2C_UNK fn_801C1BA0();
M2C_UNK update_lobby_font__10TObjPlayerFi(void *);
s32 decrement_timer__10TObjPlayerFPv(void *);
u8 get_clamped_level__6TLobbyFPv(void *);
s16 TLobby__sub_801D6F60(void *);
u8 TLobby__sub_801D7100(void *);
s32 TLobby__sub_80207770(int);
M2C_UNK set_area__6TLobbyFPvi(void *, int, int);
M2C_UNK TNpcPlayer__sub_8034E7A0(M2C_UNK);
extern u8 lbl_8050EA40[];
extern ReturnLobby lbl_80515BA0;
void complete_deferred_player_death(void);
}

extern "C" {

int player_flag_1__6TLobbyFPv(void* p);
int check_player_state_flag_2__6TLobbyFPv(void* p);
void handle_6x34(void);
int test_flags_any(void*, int);
int set_battle_flag__10TObjPlayerFPvi(void*, int);

int player_flag_1__6TLobbyFPv(void* p) { return set_battle_flag__10TObjPlayerFPvi(p, 1); }
int check_player_state_flag_2__6TLobbyFPv(void* p) { return test_flags_any((char*)p + 0x858, 2); }
void handle_6x34(void) {  }
void TObjPlayer__sub_801B31D8(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;
    send_6x21_inter_level_warp(arg0, 0);
    temp_r31 = get_hospital_position__10TObjPlayerFPv((void *) (arg0));
    temp_r30 = TObjPlayer__sub_801D8D14((void *) (arg0));
    set_arrival_override_pos(obj_getField1c((void *)arg0), temp_r30, temp_r31);
    set_state_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x800));
    set_battle_flag__10TObjPlayerFPvi((void*)((void *) (arg0)), (int)((int) (0)));
    temp_r30 = TNpcPlayer__sub_8034DE40();
    temp_r31 = TNpcPlayer__sub_8034DE70();
    apply_to_players__10TNpcPlayerFiPvi(get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0), temp_r31, temp_r30);
}
void complete_deferred_player_death(void) {
    u8 lvl;
    s16 aim;
    u16 room;
    VObj_801B3274 *p;
    p = get_player_by_client_id(fn_801C1BA0());
    if (p == NULL) {
        return;
    }
    clear_flags__11TAdRicoRingFPvUi((u8 *)p + 0x858, 2);
    if (try_pickup_item__10TObjPlayerFi(p) != 0) {
        return;
    }
    if (is_technique_ready__8TTecCtrlFv() != 0) {
        if (TLobby__sub_801D7100(lbl_8050EA40) == 1) {
            update_lobby_font__10TObjPlayerFi(p);
            return;
        }
        if (TLobby__sub_801D7100(lbl_8050EA40) == 2 && decrement_timer__10TObjPlayerFPv((u8 *)p + 0x754) == 0) {
            update_lobby_font__10TObjPlayerFi(p);
            return;
        }
        TObjPlayer__sub_801BBE54(p);
        aim = TLobby__sub_801D6F60(lbl_8050EA40);
        room = TObjRoomId__sub_801A1DB8(get_field_2d4__10TObjPlayerFPv(p));
        if (aim != 0 && (room == 0 || room == 0x1000)) {
            update_aim_angle__10TObjPlayerFPvi(p, aim);
        }
        if ((lvl = (u8)((s32 (*)(void *))get_clamped_level__6TLobbyFPv)(lbl_8050EA40)) != 0 && (room == 0 || room == 0x1000)) {
            TObjPlayer__sub_801AF554(p, lvl);
        }
        p->m62();
        return;
    }
    if (is_camera_mode_active__10TObjPlayerFv() != 0) {
        update_lobby_font__10TObjPlayerFi(p);
        return;
    }
    if (get_main_phase() == 0xE) {
        if (check_camera_mode__10TObjPlayerFv() != 0) {
            if (get_anim_id__10TObjPlayerFPv(p) == 1) {
                TObjPlayer__sub_801B30BC(p, 0);
                return;
            }
            TObjPlayer__sub_801B31D8((s32)p);
            set_area__6TLobbyFPvi(&lbl_80515BA0, 0, TLobby__sub_80207770(0));
            mark_area_change_pending();
            TNpcPlayer__sub_8034E7A0(get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0));
            return;
        }
        create_return_city_window__10TObjPlayerFPv(p);
        update_lobby_font__10TObjPlayerFi(p);
        return;
    }
    create_return_city_window__10TObjPlayerFPv(p);
    update_lobby_font__10TObjPlayerFi(p);
}

}
