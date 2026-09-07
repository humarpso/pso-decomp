#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_690 { u8 bytes[0x690]; };

struct RecoveredGlobal_8029379C_lbl_804DAB60 {
    M2C_UNK value;
    u8 remaining[0x68C];
};

struct RecoveredGlobal_8029379C_lbl_804DB1F0 {
    M2C_UNK value;
    u8 remaining[0x6AC];
};

extern "C" {
void TLobby__sub_802932B0(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_8029379C_lbl_804DAB60 lbl_804DAB60;
extern M2C_UNK lbl_804DB1F0[];
void TLobby__sub_8029379C(void);
}

extern "C" {

void create_time_window2__6TLobbyFv(void);
void maybe_handle_destruction__6TLobbyFPv(void* p);
void setup_split_screen(void);
void update_destruction_countdown__6TLobbyFPv(void *arg0);
s32 TAdPlayerLoadGC__sub_801E1510();
M2C_UNK TLobby__sub_80074034(s32);
M2C_UNK TLobby__sub_802925C4(void *);
M2C_UNK TLobby__sub_802932EC();
int TLobby__sub_802933FC(void*);
int TLobby__sub_8029359C(void*);
M2C_UNK TObjPlayer__sub_802C3D38(u32, u32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK create_ch_time_win(s32);
u32 create_challenge4p__6TLobbyFv();
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
u32 get_char_index__23TAdSinglePlyChrSelectGCFUi(u32);
s32 is_split_screen();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_80464E58[];
extern u32 lbl_805D6580;
extern s32 lbl_805D6584;
extern s32 lbl_805D6588;

void setup_split_screen(void) {
    u32 var_r31;
    u32 temp_r30;
    u32 temp_r4;

    lbl_805D6588 = 1;
    lbl_805D6584 = 0;
    if ((u32) lbl_805D6580 != 0U) {
        lbl_805D6588 = 0;
        return;
    }
    if (is_split_screen() == 0) {
        lbl_805D6588 = 0;
        return;
    }
    if ((s32) lbl_805D6588 != 0) {
        lbl_805D6580 = create_challenge4p__6TLobbyFv();
        lbl_805D6584 = 1;
        lbl_805D6588 = 0;
        TLobby__sub_802925C4(lbl_80464E58);
        var_r31 = 0U;
        do {
            temp_r30 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
            temp_r4 = get_char_index__23TAdSinglePlyChrSelectGCFUi(var_r31);
            if ((temp_r30 != 0U) && (temp_r4 != 0U)) {
                TObjPlayer__sub_802C3D38(temp_r30, temp_r4);
            }
            var_r31 += 1;
        } while (var_r31 != 4U);
    }
}

extern M2C_UNK lbl_804DB1F0[];
extern s32 tl_07;

void TLobby__sub_802932B0(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 3);
    *(M2CCopy_C *)((s32) arg0 + 4) = *(const M2CCopy_C *)((s32) arg1 + 4);
}

void create_time_window2__6TLobbyFv(void) {
    TLobby__sub_802932EC();
    create_ch_time_win(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

void maybe_handle_destruction__6TLobbyFPv(void* p) { if (TLobby__sub_8029359C((void*)(p)) == 0) { TLobby__sub_802933FC(p); } }

void update_destruction_countdown__6TLobbyFPv(void *arg0) {
    if (TAdPlayerLoadGC__sub_801E1510() != 1) {
        if (TLobby__sub_8029359C((void*)(arg0)) == 1) {
            queue_destruction__7TObjectFv(arg0);
        }
        maybe_handle_destruction__6TLobbyFPv((void*)((void*)(arg0)));
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    }
}
typedef char RecoveredGlobal_8029379C_lbl_804DAB60_size[sizeof(RecoveredGlobal_8029379C_lbl_804DAB60) == 0x690 ? 1 : -1];
typedef char RecoveredGlobal_8029379C_lbl_804DB1F0_size[sizeof(RecoveredGlobal_8029379C_lbl_804DB1F0) == 0x6B0 ? 1 : -1];
void TLobby__sub_8029379C(void) {
    *(M2CCopy_690 *)(&(*(RecoveredGlobal_8029379C_lbl_804DB1F0 *)&lbl_804DB1F0).value) = *(const M2CCopy_690 *)(&lbl_804DAB60.value);
}

}
