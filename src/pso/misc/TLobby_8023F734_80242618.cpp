#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802426E8_lbl_80517F9C {
    M2C_UNK value;
    u8 remaining[0x5E0];
};

struct RecoveredGlobal_8024287C_lbl_80517EE0 {
    M2C_UNK value;
    u8 remaining[0xB8];
};

struct RecoveredGlobal_8024287C_lbl_80517F9C {
    M2C_UNK value;
    u8 remaining[0x5E0];
};

extern "C" {
M2C_UNK TLobby__sub_803DE7BC(int, void *, void *);
extern RecoveredGlobal_802426E8_lbl_80517F9C lbl_80517F9C;
extern int lbl_805D63DC;
void TLobby__sub_802426E8(s32 arg0);
void* TLobby__sub_802428C4(void* p);
M2C_UNK __construct_array(M2C_UNK *, void *(*)(void *), M2C_UNK, M2C_UNK, M2C_UNK);
extern RecoveredGlobal_8024287C_lbl_80517EE0 lbl_80517EE0;
extern RecoveredGlobal_802426E8_lbl_80517F9C lbl_80517F9C;
void TLobby__sub_8024287C(void);
}

extern "C" {

void TLobby__sub_8024285C(void* p);
void* TLobby__sub_802428C4(void* p);
s32 TLobby__sub_802428F8(void* p);
int get_com_card_data__6TLobbyFv(void);
void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1);
void reset_state_805D63DC__6TLobbyFv(void*);
void reset_state__6TLobbyFPv(void* p);
M2C_UNK TLobby__sub_802422EC(void *, void *, int);
void *TLobby__sub_80242458(void *, void *);
void *TLobby__sub_802424D8(void *);
M2C_UNK __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension(void *, void *);
int clear_flag_bit2__6TLobbyFv(void);
u32 find_card_by_id__17TWindowSubComCardFUi();
int fn_80077AA4(void*);
s32 get_com_card_list__6TLobbyFPv();
M2C_UNK get_id__6TLobbyFPv(void *);
s32 get_sub_disp_ptr__20TWindowSubStatusDispFPv(void *);
M2C_UNK strncpy(void *, void *, int);

extern s32 lbl_805D63D8;

void init_player_entry__6TLobbyFPvPv(u8 *arg0, u8 *arg1) {
    s32 temp_r5;
    void *p;

    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    temp_r5 = lbl_805D63D8;
    lbl_805D63D8 = temp_r5 + 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r5;
    TLobby__sub_802422EC((void *) (arg0 + 0x4C), (void *) (arg1 + 0x10), (int) (temp_r5));
    __as__21TPlyMeetUserExtensionFRC21TPlyMeetUserExtension((void *) (arg0 + 0x58), (void *) (arg1 + 0x60));
    get_id__6TLobbyFPv((void *) (arg0));
    if (find_card_by_id__17TWindowSubComCardFUi() == 0U) {
        strncpy((void *) (arg0 + 8), (void *) (get_sub_disp_ptr__20TWindowSubStatusDispFPv((void *) (arg0))), (int) (0x10));
    } else {
        strncpy((void *) (arg0 + 8), (void *) (get_com_card_list__6TLobbyFPv()), (int) (0x10));
    }
    M2C_FIELD(arg0, s8 *, 0x18) = 0;
    p = TLobby__sub_802424D8((void *) (arg1 + 0x1C));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x19));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x2A));
    p = TLobby__sub_80242458(p, (void *) (arg0 + 0x2A));
    TLobby__sub_80242458(p, (void *) (arg0 + 0x3B));
}

    extern int lbl_805D63DC;

typedef char RecoveredGlobal_802426E8_lbl_80517F9C_size[sizeof(RecoveredGlobal_802426E8_lbl_80517F9C) == 0x5E4 ? 1 : -1];
void TLobby__sub_802426E8(s32 arg0) {
    u8 *temp_r3;
    if (arg0 < 7) {
        temp_r3 = (u8 *)&lbl_80517F9C.value + (arg0 * 0xBC);
        TLobby__sub_803DE7BC((int) (temp_r3), (void *) (temp_r3 + 0xBC), (void *) ((u32) ((7 - arg0) * 0xBC) >> 2U));
    }
    (*(s32 *)&lbl_805D63DC) -= 1;
}

void reset_state_805D63DC__6TLobbyFv(void*) { lbl_805D63DC = 0; clear_flag_bit2__6TLobbyFv(); }

void reset_state__6TLobbyFPv(void* p) { reset_state_805D63DC__6TLobbyFv((void*)((void*)(p))); }
void TLobby__sub_8024285C(void* p) { reset_state_805D63DC__6TLobbyFv((void*)((void*)(p))); }

typedef char RecoveredGlobal_8024287C_lbl_80517EE0_size[sizeof(RecoveredGlobal_8024287C_lbl_80517EE0) == 0xBC ? 1 : -1];
typedef char RecoveredGlobal_8024287C_lbl_80517F9C_size[sizeof(RecoveredGlobal_8024287C_lbl_80517F9C) == 0x5E4 ? 1 : -1];
void TLobby__sub_8024287C(void) {
    TLobby__sub_802428C4((void*)((void *) &lbl_80517EE0.value));
    __construct_array(&(*(RecoveredGlobal_8024287C_lbl_80517F9C *)&lbl_80517F9C).value, TLobby__sub_802428C4, 0, 0xBC, 8);
}

void* TLobby__sub_802428C4(void* p) { fn_80077AA4((char*)p + 0x58); return p; }
s32 TLobby__sub_802428F8(void* p) { return *(s32*)((char*)p + 0x4); }

    extern int lbl_805D63DC;
int get_com_card_data__6TLobbyFv(void) {  return lbl_805D63DC; }

}
