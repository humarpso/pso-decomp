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
void update_main_phase__6TLobbyFv(void);
M2C_UNK TLobby__sub_8006F848(s32);
int TLobby__sub_801F36BC(void*);
int TLobby__sub_801F36D8(void*);
int TLobby__sub_802272B4(void*);
int TLobby__sub_8022733C(void*);
int TNpcPlayer__sub_8014DC30(void*);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
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

void update_main_phase__6TLobbyFv(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
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

}
