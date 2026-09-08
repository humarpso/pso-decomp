#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801EB6B8_lbl_80512350 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_26c590 { char pad[0x18]; };

struct VObj_18_26c590 : VBase_18_26c590 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual s32 m10();
};

struct RecoveredGlobal_801EB73C_lbl_80512340 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801EC64C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC64C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_80141860_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141730_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80141788_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_80141788_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417B8_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801417B8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801417E8_lbl_8050C028 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8014175C_lbl_8050C000 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_801EC6F0_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC90C_lbl_80449AFC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EC90C_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC90C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC93C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC93C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC954_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC954_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC9CC_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC9CC_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EC9F8_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC9F8_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801ECA1C_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801ECA1C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801ECF84_lbl_8050D3E0 {
    M2C_UNK value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_801EC984_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC984_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EB5AC_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EC43C_TLobby__data_80512220 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
M2C_UNK create_instance__12TItemDropSubFi(int, void *);
void TLobby__sub_801EBF04(s32 arg0);
M2C_UNK TLobby__sub_80071064(int);
M2C_UNK TLobby__sub_80292604(int);
void TLobby__sub_801ECF2C(s32 arg0);
u8 *get_state__23TAdSinglePlyChrSelectGCFv();
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB94C(s32 arg0);
s32 is_boss_phase_reached__6TLobbyFv();
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBE14(s32 arg0);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBB88(s32 arg0, s32 arg1);
s32 is_current_room__10TObjRoomIdFPv();
M2C_UNK draw_small_label__15TFontSmallLobbyFi(int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBCA0(s32 arg0);
s32 is_current_room__10TObjRoomIdFPv();
M2C_UNK TLobby__sub_801B1254(int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBCF0(s32 arg0);
s32 obj_isState2_324();
M2C_UNK TObjPlayer__sub_801C6A3C(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED1BC(s32 arg0);
s32 obj_isState2_324();
M2C_UNK TObjPlayer__sub_801C6B60(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED20C(s32 arg0);
M2C_UNK TLobby__sub_801F3694(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBC28(s32 arg0);
M2C_UNK TFontSmallLobby__sub_801C013C(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBC64(s32 arg0);
M2C_UNK TObjPlayer__sub_801AF904();
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB914(s32 arg0);
void set_floor__6TLobbyFPvs(void *, s16);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED3C4(s32 arg0);
int TLobby__sub_80142944(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB604(s32 arg0, s32 arg1);
s16 get_kill_count__10TObjPlayerFPv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED400(s32 arg0, s32 arg1);
s32 get_global_state__23TAdSinglePlyChrSelectGCFv(void);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB85C(s32 arg0, s32 arg1);
s32 select_download_type__6TLobbyFi(int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
M2C_UNK strncpy(void *, int, int);
extern RecoveredGlobal_801EB6B8_lbl_80512350 lbl_80512350;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB6B8(s32 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
M2C_UNK strncpy(void *, int, int);
extern RecoveredGlobal_801EB73C_lbl_80512340 lbl_80512340;
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB73C(s32 arg0);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC64C(void);
s32 open_menu__13TItemMenuCtrlFUi(int);
extern s32 TLobby__data_80512220[];
s32 open_menu__13TItemMenuCtrlFUi(int);
void TLobby__sub_801EC694(void);
M2C_UNK handle_player_event__6TLobbyFii(int, int);
extern s32 TLobby__data_80512220[];
void TLobby__sub_801EC6F0(void);
s32 set_lobby_id__6TLobbyFi(int);
extern s32 TLobby__data_80512220[];
s32 set_lobby_id__6TLobbyFi(int);
void TLobby__sub_801EC8B4(void);
s32 set_global_805D3614__6TLobbyFi(int);
extern s32 TLobby__data_80512220[];
s32 set_global_805D3614__6TLobbyFi(int);
void TLobby__sub_801EC8E0(void);
extern RecoveredGlobal_801EC90C_lbl_80449AFC lbl_80449AFC;
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC90C(void);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC93C(void);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC954(void);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC9CC(void);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC9F8(void);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801ECA1C(void);
s32 TNpcPlayer__sub_8007206C(void *, int);
u32 get_indexed_offset__6TLobbyFi(void *);
extern RecoveredGlobal_801ECF84_lbl_8050D3E0 lbl_8050D3E0;
void TLobby__sub_801ECF84(s32 arg0);
int get_max_level__10TObjPlayerFv(void);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EC984(void);
u32 TLobby__sub_800F7DAC(s32, s32);
u32 get_indexed_offset__6TLobbyFi(void *);
M2C_UNK fn_80197FD0(void *, int);
extern s32 TLobby__data_80512220[];
extern s32 lbl_805D49B0;
void TLobby__sub_801EB5AC(void);
void TLobby__sub_800714B0(void *, s32);
void TLobby__sub_80292574(void *, s32);
s32 is_split_screen(void);
extern s32 TLobby__data_80512220[];
void TLobby__sub_801EC43C(void);
extern s32 TLobby__data_80512220[];
extern RecoveredGlobal_801EC64C_TLobby__data_80512360 TLobby__data_80512360;
extern RecoveredGlobal_801EC90C_lbl_80449AFC lbl_80449B08;
void TLobby__sub_801EC664(void);
u8 TSwitch__sub_802291F4(int, int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED25C(s32 arg0);
}

extern "C" {

void TLobby__sub_801EB46C(void);
void TLobby__sub_801EB478(void);
int TLobby__sub_801EB588(void* p);
void TLobby__sub_801EB5A8(void);
int TLobby__sub_801EBE6C(void);
int TLobby__sub_801EC7A0(void);
int TLobby__sub_801EC7C4(void);
int TLobby__sub_801EC834(void* p);
int TLobby__sub_801EC854(void* p);
int TLobby__sub_801EC874(void* p);
int TLobby__sub_801ECFBC(void* p);
void dispatch_first_player__6TLobbyFv(void);
int enable_mine_trap__6TLobbyFv(void);
int forward_801F36D8__6TLobbyFPv(void* p);
int forward_802272B4__6TLobbyFPv(void* p);
void init_menu_state__6TLobbyFi(int a0);
void init_state__6TLobbyFv(void);
void init_window__6TLobbyFv(void);
void update_main_phase__6TLobbyFv(int _w0, int _w1);
M2C_UNK TLobby__sub_8006F848(s32);
int TLobby__sub_801F36BC(void*);
int TLobby__sub_801F36D8(void*);
int TLobby__sub_802272B4(void*);
int TLobby__sub_8022733C(void*);
int TNpcPlayer__sub_8014DC30(void*);
int clear_quest_state__6TLobbyFv(void*);
int create__16TObjItemOKWindowFPv(void*);
int create__17TObjItemNameEntryFPv(void*);
int create__18TObjItemNameSelectFPv(void*);
M2C_UNK handle_main_phase__6TLobbyFi();
int reset_quest_counter__6TLobbyFv(void*);
int set_instance__10TOMineTrapFi(void*);
int set_trap_count__10TOMineTrapFi(void*);

    extern int TLobby__data_805D5DC0;
void TLobby__sub_801EB46C(void) { TLobby__data_805D5DC0 = 0; }

    extern int TLobby__data_805D5DC0;
void TLobby__sub_801EB478(void) { TLobby__data_805D5DC0 = 1; }

int forward_802272B4__6TLobbyFPv(void* p) { return TLobby__sub_802272B4(p); }
int TLobby__sub_801EB588(void* p) { return TLobby__sub_8022733C(p); }
void TLobby__sub_801EB5A8(void) {  }

typedef char RecoveredGlobal_801EB5AC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EB5AC_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EB5AC(void) {
    s32 temp_r31;
    u32 temp_r3;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EB5AC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0);
    temp_r3 = ((int)get_indexed_offset__6TLobbyFi((void *)((s32) (u16) M2C_FIELD(&(*(RecoveredGlobal_801EB5AC_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4))));
    if (temp_r3 != 0U) {
        TLobby__sub_800F7DAC((s32) temp_r3, lbl_805D49B0);
        fn_80197FD0((void *) (lbl_805D49B0), (int) (temp_r31));
    }
}

void TLobby__sub_801EB604(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((u32) (u16) M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)))), (int)((int)(arg1)))));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = TLobby__sub_80142944(temp_r3);
    }
}

typedef char RecoveredGlobal_801EB6B8_lbl_80512350_size[sizeof(RecoveredGlobal_801EB6B8_lbl_80512350) == 0x10 ? 1 : -1];
void TLobby__sub_801EB6B8(s32 arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r31 = (arg0 * 4) & 0x3FC;
    temp_r3 = (u8 *)(((u8 *)TPlayerBattleCtrl4P__sub_801BA74C((int)(M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0)), (int)((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != NULL) {
        strncpy((void *) (&lbl_80512350.value), (int) (select_download_type__6TLobbyFi((int) (M2C_FIELD(temp_r3, s32 *, 0x890)))), (int) (0xF));
        M2C_FIELD(&lbl_80512350.value, s8 *, 0xF) = 0;
        M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 1;
        return;
    }
    M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 0;
}

typedef char RecoveredGlobal_801EB73C_lbl_80512340_size[sizeof(RecoveredGlobal_801EB73C_lbl_80512340) == 0x10 ? 1 : -1];
void TLobby__sub_801EB73C(s32 arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    temp_r31 = (arg0 * 4) & 0x3FC;
    temp_r3 = (u8 *)(((u8 *)TPlayerBattleCtrl4P__sub_801BA74C((int)(M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0)), (int)((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != NULL) {
        strncpy((void *)((void *) (&lbl_80512340.value)), (int)((void *) (((VObj_18_26c590 *)(temp_r3))->m10())), (int)((int) (0xF)));
        M2C_FIELD(&lbl_80512340.value, s8 *, 0xF) = 0;
        M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 1;
        return;
    }
    M2C_FIELD(((*(s32 *)&TLobby__data_805D5E78) + temp_r31), s32 *, 0) = 0;
}

void TLobby__sub_801EB85C(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r30;
    s32 var_r31;
    s32 var_r4;
    u32 temp_r3;
    u8 *var_r3;
    var_r30 = arg0;
    var_r31 = arg1;
    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != 0U) {
        var_r4 = (*(s32 *)&TLobby__data_805D5E78);
        temp_r0 = M2C_FIELD(var_r4, M2C_UNK *, ((var_r30 * 4) & 0x3FC));
        if ((temp_r0 >= 0) && (temp_r0 < 0x100)) {
            var_r3 = (u8 *)(temp_r3 + temp_r0);
            var_r3 = (u8 *)((void *) M2C_FIELD(var_r3, u8 *, 0x10));
            M2C_FIELD(var_r4, M2C_UNK *, ((var_r31 * 4) & 0x3FC)) = (long) (var_r3);
        }
    }
}

void TLobby__sub_801EB914(s32 arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))) != 0U) {
        TObjPlayer__sub_801AF904();
    }
}

void TLobby__sub_801EB94C(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = get_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = M2C_FIELD(temp_r3, s32 *, 0xE284);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void TLobby__sub_801EBB88(s32 arg0, s32 arg1) {
    s32 temp_r3_2;
    u8 *temp_r3;
    temp_r3 = ((u8 *)TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int)(arg1)))));
    if (temp_r3 != NULL) {
        temp_r3_2 = M2C_FIELD(temp_r3, s32 *, 0x890);
        if (temp_r3_2 & 1) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
            return;
        }
        if (temp_r3_2 & 2) {
            M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 1;
            return;
        }
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 2;
}

void TLobby__sub_801EBC28(s32 arg0) {
    u32 temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != 0U) {
        TLobby__sub_801F3694((void *) (temp_r3 + 0x428));
    }
}

void TLobby__sub_801EBC64(s32 arg0) {
    u32 temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != 0U) {
        TFontSmallLobby__sub_801C013C((void *) (temp_r3 + 0x428));
    }
}

void TLobby__sub_801EBCA0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)))))), (int)((int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78)))))));
    if ((temp_r3 != 0) && (is_current_room__10TObjRoomIdFPv() != 0)) {
        draw_small_label__15TFontSmallLobbyFi((int) (temp_r3));
    }
}

void TLobby__sub_801EBCF0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))));
    if ((temp_r3 != 0) && (is_current_room__10TObjRoomIdFPv() != 0)) {
        TLobby__sub_801B1254((int) (temp_r3));
    }
}

void TLobby__sub_801EBE14(s32 arg0) {
    if (is_boss_phase_reached__6TLobbyFv() != 0) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

int TLobby__sub_801EBE6C(void) { return set_trap_count__10TOMineTrapFi((void*)(0)); }
int enable_mine_trap__6TLobbyFv(void) { return set_trap_count__10TOMineTrapFi((void*)(1)); }

    extern int* TLobby__data_805D5E78;
    extern unsigned char TLobby__data_805D5E88;
    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB8;
    extern int tl_01;
void init_menu_state__6TLobbyFi(int a0) { TLobby__data_805D5EB8 = create__16TObjItemOKWindowFPv((void*)(tl_01)); TLobby__data_805D5E78[(unsigned char)(a0)] = 0; TLobby__data_805D5E88 = a0; TLobby__data_805D5E98 = 11; }

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB4;
    extern int tl_01;

void TLobby__sub_801EBF04(s32 arg0) {
    create_instance__12TItemDropSubFi((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (void *) ((*(s32 *)&TLobby__data_805D5E78)));
}

void init_window__6TLobbyFv(void) { TLobby__data_805D5EB4 = create__18TObjItemNameSelectFPv((void*)(tl_01)); TLobby__data_805D5E98 = 10; }

    extern int TLobby__data_805D5E98;
    extern int TLobby__data_805D5EB0;
    extern int tl_01;
void init_state__6TLobbyFv(void) { TLobby__data_805D5EB0 = create__17TObjItemNameEntryFPv((void*)(tl_01)); TLobby__data_805D5E98 = 9; }

extern s32 lbl_805D53A0;

typedef char RecoveredGlobal_801EC64C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC64C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC64C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC64C_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC43C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC43C_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EC43C(void) {
    s32 temp_r31;
    u8 *temp_r30;
    temp_r31 = M2C_FIELD(&(*(RecoveredGlobal_801EC43C_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0);
    temp_r30 = (u8 *)(M2C_FIELD(&(*(RecoveredGlobal_801EC43C_TLobby__data_80512220 *)&TLobby__data_80512220).value, u8 **, 4));
    if (is_split_screen() == 1) {
        TLobby__sub_80292574(temp_r30, temp_r31);
        return;
    }
    TLobby__sub_800714B0(temp_r30, temp_r31);
}

void TLobby__sub_801EC64C(void) {
    M2C_FIELD(&TLobby__data_80512360.value, s8 *, 0x12) = (s8) (*(RecoveredGlobal_801EC64C_TLobby__data_80512220 *)&TLobby__data_80512220).value;
}

typedef char RecoveredGlobal_80141860_lbl_8050C000_size[sizeof(RecoveredGlobal_80141860_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141730_lbl_8050C028_size[sizeof(RecoveredGlobal_80141730_lbl_8050C028) == 0x18 ? 1 : -1];

void TLobby__sub_801EC664(void) {
    if ((u32) (*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EC90C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x11) = (s8) M2C_FIELD(((u8 *)(&lbl_80449B08.value) + ((*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0);
    }
}

void TLobby__sub_801EC694(void) {
    open_menu__13TItemMenuCtrlFUi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__data_80512220).value, s32 *, 0x0)));
}
typedef char RecoveredGlobal_80141788_lbl_8050C000_size[sizeof(RecoveredGlobal_80141788_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_80141788_lbl_8050C028_size[sizeof(RecoveredGlobal_80141788_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8014175C_lbl_8050C000_size[sizeof(RecoveredGlobal_8014175C_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C000_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C000) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_801417B8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417B8_lbl_8050C028) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_801417E8_lbl_8050C028_size[sizeof(RecoveredGlobal_801417E8_lbl_8050C028) == 0x18 ? 1 : -1];

void update_main_phase__6TLobbyFv(int _w0, int _w1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int)(lbl_805D53A0))), (int)((int)((int)(_w1)))) != 0U) {
        handle_main_phase__6TLobbyFi();
    }
}

typedef char RecoveredGlobal_801EC6F0_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC6F0_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EC6F0(void) {
    handle_player_event__6TLobbyFii((int) ((u16) M2C_FIELD(&(*(RecoveredGlobal_801EC6F0_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 0)), (int) (M2C_FIELD(&(*(RecoveredGlobal_801EC6F0_TLobby__data_80512220 *)&TLobby__data_80512220).value, s32 *, 4)));
}

int TLobby__sub_801EC7A0(void) { return set_instance__10TOMineTrapFi((void*)(0)); }
int TLobby__sub_801EC7C4(void) { return set_instance__10TOMineTrapFi((void*)(1)); }

extern s32 TLobby__data_80512220[];

void dispatch_first_player__6TLobbyFv(void) {
    s32 temp_r31;

    temp_r31 = TLobby__data_80512220[0];
    if (is_split_screen() == 1) {
        TLobby__sub_8006F848(temp_r31);
        return;
    }
    TLobby__sub_8006F848(temp_r31);
}

int TLobby__sub_801EC834(void* p) { return clear_quest_state__6TLobbyFv(p); }
int TLobby__sub_801EC854(void* p) { return TLobby__sub_801F36BC(p); }
int TLobby__sub_801EC874(void* p) { return reset_quest_counter__6TLobbyFv(p); }
int forward_801F36D8__6TLobbyFPv(void* p) { return TLobby__sub_801F36D8(p); }

void TLobby__sub_801EC8B4(void) {
    set_lobby_id__6TLobbyFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__data_80512220).value, s32 *, 0x0)));
}

void TLobby__sub_801EC8E0(void) {
    set_global_805D3614__6TLobbyFi((int) (M2C_FIELD(&(*(RecoveredGlobal_80141730_lbl_8050C028 *)&TLobby__data_80512220).value, s32 *, 0x0)));
}

typedef char RecoveredGlobal_801EC90C_lbl_80449AFC_size[sizeof(RecoveredGlobal_801EC90C_lbl_80449AFC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801EC90C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC90C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC90C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC90C_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC90C(void) {
    if ((u32) (*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 2U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EC90C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xB) = (s8) M2C_FIELD(((u8 *)(&lbl_80449AFC.value) + ((*(RecoveredGlobal_801EC90C_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0);
    }
}

typedef char RecoveredGlobal_801EC93C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC93C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC93C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC93C_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC93C(void) {
    M2C_FIELD(&(*(RecoveredGlobal_801EC93C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xC) = (s8) (*(RecoveredGlobal_801EC93C_TLobby__data_80512220 *)&TLobby__data_80512220).value;
}

typedef char RecoveredGlobal_801EC954_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC954_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC954_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC954_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC954(void) {
    u32 var_r4;
    var_r4 = (*(RecoveredGlobal_801EC954_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if (var_r4 > 0x278D0U) {
        var_r4 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC954_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x24) = var_r4;
}

typedef char RecoveredGlobal_801EC9CC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC9CC_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC9CC_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC9CC_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801EC984_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC984_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC984_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC984_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC984(void) {
    u32 var_r31;
    var_r31 = (*(RecoveredGlobal_801EC984_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if (var_r31 > get_max_level__10TObjPlayerFv()) {
        var_r31 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC984_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x20) = var_r31;
}

void TLobby__sub_801EC9CC(void) {
    u32 var_r0;
    var_r0 = (*(RecoveredGlobal_801EC9CC_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if ((var_r0 != 0xFFU) && (var_r0 > 0x1DU)) {
        var_r0 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC9CC_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x1C) = var_r0;
}

typedef char RecoveredGlobal_801EC9F8_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EC9F8_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EC9F8_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EC9F8_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EC9F8(void) {
    u32 var_r0;
    var_r0 = (*(RecoveredGlobal_801EC9F8_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if (var_r0 > 0x63U) {
        var_r0 = 0U;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EC9F8_TLobby__data_80512360 *)&TLobby__data_80512360).value, u32 *, 0x18) = var_r0;
}

typedef char RecoveredGlobal_801ECA1C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801ECA1C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801ECA1C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801ECA1C_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801ECA1C(void) {
    if ((u32) (*(RecoveredGlobal_801ECA1C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801ECA1C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0xA) = (s8) (*(RecoveredGlobal_801ECA1C_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    }
}

void TLobby__sub_801ECF2C(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80292604((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80071064((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

typedef char RecoveredGlobal_801ECF84_lbl_8050D3E0_size[sizeof(RecoveredGlobal_801ECF84_lbl_8050D3E0) == 0x50 ? 1 : -1];
void TLobby__sub_801ECF84(s32 arg0) {
    u32 temp_r3;
    temp_r3 = get_indexed_offset__6TLobbyFi((void *) (arg0));
    if (temp_r3 != 0U) {
        TNpcPlayer__sub_8007206C((void *) (&lbl_8050D3E0.value), (int) (temp_r3));
    }
}

int TLobby__sub_801ECFBC(void* p) { return TNpcPlayer__sub_8014DC30(p); }
void TLobby__sub_801ED1BC(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))));
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        TObjPlayer__sub_801C6A3C((void *) (temp_r3 + 0x5B0));
    }
}
void TLobby__sub_801ED20C(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int) ((*(s32 *)&TLobby__data_805D5E78))))));
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        TObjPlayer__sub_801C6B60((void *) (temp_r3 + 0x5B0));
    }
}

#pragma push
#pragma opt_common_subs on
#pragma opt_propagation on
#pragma opt_dead_assignments off
void TLobby__sub_801ED25C(s32 arg0) {
    s32 var_r31;
    s32 var_r4;
    u8 *var_r3;
    var_r31 = (arg0 * 4) & 0x3FC;
    var_r4 = (*(s32 *)&TLobby__data_805D5E78);
    var_r3 = (u8 *)(var_r4 + var_r31);
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 4));
    var_r4 = (s32) (s16) M2C_FIELD(var_r4, M2C_UNK *, var_r31);
    var_r3 = (u8 *)((void *) (u16) var_r3);
    var_r4 = (s32) TSwitch__sub_802291F4((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)((*(s32 *)&TLobby__data_805D5E78) + var_r31);
    M2C_FIELD(var_r3, s32 *, 8) = var_r4;
}
#pragma pop

void TLobby__sub_801ED3C4(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 *)TPlayerBattleCtrl4P__sub_801BA74C((int)((int)((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))))), (int)((int)((int)((*(s32 *)&TLobby__data_805D5E78)))))));
    if (temp_r3 != NULL) {
        set_floor__6TLobbyFPvs(temp_r3, 0);
    }
}
void TLobby__sub_801ED400(s32 arg0, s32 arg1) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int)(arg1))));
    if (temp_r3 != NULL) {
        M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = (s32) get_kill_count__10TObjPlayerFPv(temp_r3);
        return;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg1 * 4) & 0x3FC)) = 0;
}

}
