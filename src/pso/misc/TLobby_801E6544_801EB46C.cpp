#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK create_instance__12TItemDropSubFi(int, void *);
void TLobby__sub_801EBF04(s32 arg0);
s32 is_split_screen(void);
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
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBCA0(s32 arg0);
s32 is_current_room__10TObjRoomIdFPv();
M2C_UNK TLobby__sub_801B1254(int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBCF0(s32 arg0);
s32 obj_isState2_324();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
M2C_UNK TObjPlayer__sub_801C6A3C(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED1BC(s32 arg0);
s32 obj_isState2_324();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
M2C_UNK TObjPlayer__sub_801C6B60(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED20C(s32 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
M2C_UNK TLobby__sub_801F3694(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBC28(s32 arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
M2C_UNK TFontSmallLobby__sub_801C013C(void *);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EBC64(s32 arg0);
M2C_UNK TObjPlayer__sub_801AF904();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EB914(s32 arg0);
void set_floor__6TLobbyFPvs(void *, s16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(int, int);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801ED3C4(s32 arg0);
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
s32 is_split_screen(void);
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

void TLobby__sub_801EB914(s32 arg0) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((*(s32 *)&TLobby__data_805D5E78))) != 0U) {
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
    temp_r3 = ((u8 *)TPlayerBattleCtrl4P__sub_801BA74C((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int)(arg1)));
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
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((*(s32 *)&TLobby__data_805D5E78)));
    if (temp_r3 != 0U) {
        TLobby__sub_801F3694((void *) (temp_r3 + 0x428));
    }
}

void TLobby__sub_801EBC64(s32 arg0) {
    u32 temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((*(s32 *)&TLobby__data_805D5E78)));
    if (temp_r3 != 0U) {
        TFontSmallLobby__sub_801C013C((void *) (temp_r3 + 0x428));
    }
}

void TLobby__sub_801EBCA0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int)((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)))), (int)((int) ((*(s32 *)&TLobby__data_805D5E78)))));
    if ((temp_r3 != 0) && (is_current_room__10TObjRoomIdFPv() != 0)) {
        draw_small_label__15TFontSmallLobbyFi((int) (temp_r3));
    }
}

void TLobby__sub_801EBCF0(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((*(s32 *)&TLobby__data_805D5E78))));
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

void update_main_phase__6TLobbyFv(int _w0, int _w1) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((int)(lbl_805D53A0), (int)(_w1)) != 0U) {
        handle_main_phase__6TLobbyFi();
    }
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

void TLobby__sub_801ECF2C(s32 arg0) {
    if (is_split_screen() == 1) {
        TLobby__sub_80292604((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
        return;
    }
    TLobby__sub_80071064((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))));
}

int TLobby__sub_801ECFBC(void* p) { return TNpcPlayer__sub_8014DC30(p); }
void TLobby__sub_801ED1BC(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((*(s32 *)&TLobby__data_805D5E78))));
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        TObjPlayer__sub_801C6A3C((void *) (temp_r3 + 0x5B0));
    }
}
void TLobby__sub_801ED20C(s32 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int) ((*(s32 *)&TLobby__data_805D5E78))));
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        TObjPlayer__sub_801C6B60((void *) (temp_r3 + 0x5B0));
    }
}
void TLobby__sub_801ED3C4(s32 arg0) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 *)TPlayerBattleCtrl4P__sub_801BA74C((int)(M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC))), (int)((*(s32 *)&TLobby__data_805D5E78)))));
    if (temp_r3 != NULL) {
        set_floor__6TLobbyFPvs(temp_r3, 0);
    }
}

}
