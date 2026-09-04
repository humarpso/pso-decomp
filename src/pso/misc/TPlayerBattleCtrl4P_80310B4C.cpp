#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TPlayerBattleCtrl4P__sub_80311294(void);
int TPlayerBattleCtrl4P__sub_803112AC(void);
int TPlayerBattleCtrl4P__sub_8031171C(void);
s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void);
void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2);
void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2);
void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);
void update__19TPlayerBattleCtrl4PFv(void);
void update_all_players__19TPlayerBattleCtrl4PFv(void);
M2C_UNK TLobby__sub_8020BB18();
M2C_UNK TLobby__sub_8020BCE4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TPlayerBattleCtrl4P__sub_8031058C();
void TPlayerBattleCtrl4P__vt28(void);
void TPlayerBattleCtrl4P__vt29(void);
M2C_UNK TWindowChat__sub_8024AD30(u16);
M2C_UNK TWindowCtrl__sub_8024AEAC(u32);
M2C_UNK TWindowCtrl__sub_8024AEF0(u16);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK fn_801C5454(s32);
M2C_UNK fn_801F57B4(s32);
M2C_UNK fn_8020910C(s32);
M2C_UNK fn_8024ACEC(u32);
M2C_UNK obj_set_flag_20000();
s32 obj_testFlags30(u32, s32);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, s32);
s32 release_attached_resource__10TObjPlayerFPv();
M2C_UNK request_active_window_close();
M2C_UNK send_code_45_1__10TObjPlayerFi();

void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_r31;
    s32 temp_r30;

    temp_r31 = (u16)arg1;
    temp_r30 = arg2;
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)((s32)(temp_r31))) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (temp_r30 != 0) {
        TWindowChat__sub_8024AD30(temp_r31);
        clear_flag__11TWindowCtrlFv();
        TWindowCtrl__sub_8024AEF0(temp_r31);
    }
}

s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    u32 var_r3;

    var_r31 = 0;
loop_1:
    var_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)((s32)(var_r31)));
    if ((var_r3 != 0U) && (obj_testFlags30(var_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2) {
    u32 id;
    u32 temp;

    id = arg1;
    temp = TPlayerBattleCtrl4P__sub_801BA74C((s32)(id));
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg2 != 0) {
        fn_8024ACEC(id);
        request_active_window_close();
        TWindowCtrl__sub_8024AEAC(id);
    }
}

int TPlayerBattleCtrl4P__sub_80311294(void) { return 0; }

void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }

int TPlayerBattleCtrl4P__sub_803112AC(void) { return 0; }

void update_all_players__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31)) != 0U) {
            release_attached_resource__10TObjPlayerFPv();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

extern s32 tl_00;
extern s32 tl_01;

void update__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    s32 var_r31_2;
    u32 temp_r3;

    TPlayerBattleCtrl4P__sub_8031058C();
    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31)) != 0U) {
            obj_set_flag_20000();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    fn_8020910C(tl_01);
    fn_801F57B4(tl_00);
    TLobby__sub_8020BCE4();
    TLobby__sub_8020BB18();
    var_r31_2 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31_2));
        if (temp_r3 != 0U) {
            fn_801C5454(temp_r3 + 0x7C4);
        }
        var_r31_2 += 1;
    } while (var_r31_2 < 4);
}

int TPlayerBattleCtrl4P__sub_8031171C(void) { return 0; }

}
