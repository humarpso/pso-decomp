#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_multi_ready__6TLobbyFv(void);
void close_window_field30__6TLobbyFPv(void* p);
void open_message_window__6TLobbyFPv(void *arg0);
void close_window__6TLobbyFPv(void* p);
void open_giveup_window__6TLobbyFPv(void *arg0);
void send_giveup_to_all_players__6TLobbyFv(void);
void close_giveup_window__6TLobbyFPv(void* a0);
void play_all_players_effect__6TLobbyFPv(void* a0);
void play_effect_all_players__6TLobbyFPv(void*);
u32 TAdChrSelASlotGC__sub_80266508(M2C_UNK, M2C_UNK);
s32 check_player_flag1__6TLobbyFPv();
M2C_UNK TLobby__sub_8024AC20(int);
M2C_UNK TLobby__sub_80269C6C(u32, s32, M2C_UNK);
u32 TLobby__sub_80269D24(M2C_UNK, M2C_UNK *, M2C_UNK);
s32 TLobby__sub_80292F5C();
s32 TLobby__sub_80292F7C();
M2C_UNK TObjCityMainWarp__sub_80266354(u32, s32, M2C_UNK, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
int TWindowCtrl__sub_8024AEAC(void*);
M2C_UNK TWindowCtrl__sub_8024AEF0(int);
M2C_UNK TWindowSubComCard__sub_80265C10(u32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
int TWindow__close(void*);
M2C_UNK TLobby__sub_8007340C(u32);
int TObjPlayer__sub_8024ABDC(void*);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(int);

s32 is_multi_ready__6TLobbyFv(void) {
    if ((TLobby__sub_80292F7C() != 0) || (TLobby__sub_80292F5C() <= 1)) {
        return 0;
    }
    return 1;
}

void close_window_field30__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x30) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x30))); *(int*)((char*)p + 0x30) = 0; } }

extern M2C_UNK lbl_804DBE9C[];

void open_message_window__6TLobbyFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close((void*)(M2C_FIELD(arg0, void **, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x30) = TLobby__sub_80269D24(TWindowSubComCard__sub_8026CBB8(0x39), lbl_804DBE9C, 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TLobby__sub_80269C6C(M2C_FIELD(arg0, u32 *, 0x30), TQuestVmDownLoadServer__sub_8006EF6C(0x5E), 1);
    }
}

void close_window__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x2c))); *(int*)((char*)p + 0x2c) = 0; } }

void open_giveup_window__6TLobbyFPv(void *arg0) {
    u32 temp;

    temp = M2C_FIELD(arg0, u32 *, 0x2C);
    if (temp != 0U) {
        TWindow__close((void*)(temp));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    M2C_FIELD(arg0, u32 *, 0x2C) = TAdChrSelASlotGC__sub_80266508(TWindowSubComCard__sub_8026CBB8(0x3A), 3);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5B), 5, 0);
        TObjCityMainWarp__sub_80266354(M2C_FIELD(arg0, u32 *, 0x2C), TQuestVmDownLoadServer__sub_8006EF6C(0x5C), 5, 1);
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0x2C));
        TLobby__sub_8007340C(M2C_FIELD(arg0, u32 *, 0x2C));
        TWindowSubComCard__sub_80265C10(M2C_FIELD(arg0, u32 *, 0x2C), 0);
    }
}

void send_giveup_to_all_players__6TLobbyFv(void) {
    s32 temp_r3;
    s32 var_r31;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int)(var_r31));
        if ((temp_r3 != 0) && (check_player_flag1__6TLobbyFPv() != 0)) {
            send_code_45_1__10TObjPlayerFi(temp_r3);
        }
        TWindowCtrl__sub_8024AEF0(var_r31);
        TLobby__sub_8024AC20(var_r31);
        var_r31 += 1;
    } while (var_r31 < 4);
}

    extern int lbl_805D53A0;
void close_giveup_window__6TLobbyFPv(void* a0) { TWindowCtrl__sub_8024AEAC((void*)(lbl_805D53A0)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

    extern int lbl_805D53A0;
void play_all_players_effect__6TLobbyFPv(void* a0) { TObjPlayer__sub_8024ABDC((void*)(lbl_805D53A0)); play_effect_all_players__6TLobbyFPv((void*)(a0)); }

void play_effect_all_players__6TLobbyFPv(void*) {
    s32 var_r31;
    s32 var_r30;

    var_r31 = 0;
    do {
        var_r30 = TPlayerBattleCtrl4P__sub_801BA74C((int)(var_r31));
        if (var_r30 != 0) {
            if (check_player_flag1__6TLobbyFPv() == 0) {
                play_effect_default__10TObjPlayerFii(var_r30, -1);
            }
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

}
