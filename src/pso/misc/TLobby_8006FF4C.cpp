#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80070358_lbl_8048C9D8 {
    M2C_UNK value;
    u8 remaining[0x744];
};

struct E_8007032C { u8 pad[0x104]; };

struct G_8007032C { u8 pad[0x270]; E_8007032C e[4]; };

struct G_80070024 { u8 pad[0x48]; s32 x48; };

struct O_80070600 { u8 pad[0x1c]; s32 x1c; };

typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Blk5C_800703D0 { u32 w[23]; };

struct Blk50_800703D0 { u32 w[20]; };

struct Blk18_800703D0 { u32 w[6]; };

struct Blk14_800703D0 { u32 w[5]; };

struct Pair_800703D0 { u8 bytes[8]; };

struct Info_800703D0 {
    u16 a;
    s16 b;
    Blk5C_800703D0 c;
    Blk50_800703D0 d;
    Pair_800703D0 xB0;
    Pair_800703D0 xB8;
    Blk18_800703D0 e;
    Pair_800703D0 xD8;
    s32 xE0;
    Pair_800703D0 xE4;
    Blk14_800703D0 f;
};

extern "C" {
s32 get_card_window__17TWindowSubComCardFUi(u32);
extern M2C_UNK lbl_8048C9D8[];
extern s32 lbl_805D53A0;
void TLobby__sub_80070358(void);
extern M2C_UNK lbl_8048C9D8[];
void TLobby__sub_8007032C(void);
extern M2C_UNK lbl_8048C9D8[];
void TLobby__sub_800738F4(void *, s32);
void TLobby__sub_80070024(void *self, s32 v);
s32 get_main_phase(void);
s32 get_global_state__14TOKeyMachine01Fv(void);
void create_obj_tag_challenge(s32);
void create__14TObjBagWarnWinFPv(s32);
extern s32 tl_07;
void TLobby__sub_80070600(O_80070600 *self);
s32 get_main_phase(void);
void queue_destruction__7TObjectFv(void *);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TLobby__sub_800704CC(void *self);
s32 get_current_floor(void);
void create_time_window__6TLobbyFv(void *);
void create_obj_tag_challenge(s32);
M2C_UNK create_ch_time_win(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern M2C_UNK lbl_8048C9D8[];
extern s32 tl_07;
void TLobby__sub_80070170(void *arg0);
Info_800703D0 *TLobby__sub_800703D0(Info_800703D0 *dst, Info_800703D0 *src);
}

extern "C" {

void TLobby__sub_80070550(void);
void TLobby__sub_80070598(u8 *arg0);
void cleanup_if_inactive__6TLobbyFPv(void* p);
void update_battle_cleanup_flag__6TLobbyFPv(void *arg0);
s32 is_quest_active();
M2C_UNK TLobby__sub_8006FC7C(void *);
M2C_UNK TLobby__sub_8006FE7C();
s32 TLobby__sub_80070078(void *);
M2C_UNK TLobby__sub_800722AC(s32);
M2C_UNK TLobby__sub_80072618();
s32 TLobby__sub_800739BC(void *);
M2C_UNK TLobby__sub_80074034(s32);
s32 TLobby__sub_8026A328();
u32 get_player_by_client_id(s32);
s32 check_player_state_flag_2__6TLobbyFPv();
M2C_UNK create_ch_time_win(s32);
M2C_UNK create_solo_play_win__6TLobbyFPv(s32);
s32 fn_80076B14(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();

extern M2C_UNK lbl_8048C9D8[];
extern s32 tl_07;

void create_time_window__6TLobbyFv(void * _w0) {
    TLobby__sub_8006FE7C();
    create_ch_time_win(tl_07);
    TLobby__sub_80074034(tl_07);
    if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x30) == 0) {
        create_solo_play_win__6TLobbyFPv(tl_07);
    }
}

extern M2C_UNK lbl_8048C9D8[];
extern s32 lbl_805D53A0;

void update_battle_cleanup_flag__6TLobbyFPv(void *arg0) {
    if (get_player_by_client_id(lbl_805D53A0) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return;
    }
    if (check_player_state_flag_2__6TLobbyFPv() != 0) {
        if (((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) && ((s32) M2C_FIELD(&lbl_8048C9D8, s32 *, 0x34) == 0)) {
            TLobby__sub_8006FC7C(arg0);
            TLobby__sub_800722AC(lbl_805D53A0);
            TLobby__sub_80072618();
        }
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
}

typedef char RecoveredGlobal_80070358_lbl_8048C9D8_size[sizeof(RecoveredGlobal_80070358_lbl_8048C9D8) == 0x748 ? 1 : -1];

void TLobby__sub_80070024(void *self, s32 v) {
    if (v < 0 || v >= 0x11) {
        return;
    }
    if ((*(G_80070024 *)&lbl_8048C9D8).x48 != v) {
        TLobby__sub_800738F4(self, v);
        (*(G_80070024 *)&lbl_8048C9D8).x48 = v;
    }
}

void TLobby__sub_80070170(void *arg0) {
    s32 old;
    s32 v;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 0:
    case 18:
        old = lbl_8048C9D8[2];
        lbl_8048C9D8[2] = -1;
        if (old != -1) {
            create_obj_tag_challenge(tl_07);
            if (lbl_8048C9D8[8] == 0) {
                create_ch_time_win(tl_07);
            }
        }
        break;
    case 15:
        lbl_8048C9D8[2] = -1;
        break;
    case 16:
    case 17:
        lbl_8048C9D8[2] = -1;
        break;
    default:
        v = get_current_floor();
        if (lbl_8048C9D8[2] != v) {
            lbl_8048C9D8[2] = v;
            create_time_window__6TLobbyFv((void *)(arg0));
        }
        break;
    }
}

void TLobby__sub_8007032C(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        *(s32 *)&(*(G_8007032C *)&lbl_8048C9D8).e[i] = 0;
    }
}

void TLobby__sub_80070358(void) {
    s32 *temp_r31;
    TLobby__sub_8007032C();
    temp_r31 = (s32 *)((u8 *)(((u8 *)(&(*(RecoveredGlobal_80070358_lbl_8048C9D8 *)&lbl_8048C9D8).value) + (lbl_805D53A0 * 0x104))) + 0x270);
    if (get_card_window__17TWindowSubComCardFUi(0xFFFFU) != 0U) {
        M2C_FIELD(temp_r31, s32 *, 0) = 1;
        TLobby__sub_800703D0((Info_800703D0 *)((void *)((void *) ((u8 *)(temp_r31) + 4))), (Info_800703D0 *)((void *)((void *) (get_card_window__17TWindowSubComCardFUi(0xFFFFU) + 0x21C4))));
    }
}

Info_800703D0 *TLobby__sub_800703D0(Info_800703D0 *dst, Info_800703D0 *src) {
    *dst = *src;
    return dst;
}

s32 TLobby__sub_800704CC(void *self) {
    switch (get_main_phase()) {
    case 15:
        if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
            queue_destruction__7TObjectFv(self);
            return 1;
        }
        break;
    case 14:
        queue_destruction__7TObjectFv(self);
        return 1;
    default:
        queue_destruction__7TObjectFv(self);
        return 1;
    }
    return 0;
}

void TLobby__sub_80070550(void) {  }
void cleanup_if_inactive__6TLobbyFPv(void* p) { if (TLobby__sub_800704CC((void *)((void*)(p))) == 0) { TLobby__sub_80070170((void *)(p)); update_battle_cleanup_flag__6TLobbyFPv((void *)(p)); } }
void TLobby__sub_80070598(u8 *arg0) {
    if (((s32)TLobby__sub_800704CC((void *)((void*)((void*)(arg0))))) == 0) {
        ((M2C_UNK)TLobby__sub_80070078((void *) (arg0)));
        if (is_quest_active() != 0) {
            ((M2C_UNK)init__23TAdSinglePlyChrSelectGCFv());
            ((M2C_UNK)TLobby__sub_800739BC((void *) (arg0)));
            ((M2C_UNK)TLobby__sub_8026A328());
            ((M2C_UNK)fn_80076B14((void *) (arg0)));
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
}
void TLobby__sub_80070600(O_80070600 *self) {
    s32 flag = 0;
    switch (get_main_phase()) {
    case 0xf:
        if (get_global_state__14TOKeyMachine01Fv() != 0xf) {
            flag = 1;
        }
        break;
    default:
        flag = 1;
        break;
    }
    if (flag != 0) {
        create_obj_tag_challenge(tl_07);
        create__14TObjBagWarnWinFPv(tl_07);
        self->x1c = 1;
    }
}

}
