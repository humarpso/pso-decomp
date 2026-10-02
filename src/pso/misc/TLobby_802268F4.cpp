#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8022727C_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802272B4_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80227248_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80226CB0_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80226C3C_lbl_80514D00 {
    M2C_UNK value;
    u8 remaining[0x254];
};

struct RecoveredGlobal_80226CF4_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8022733C_lbl_804CB850 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Ent_802269B4 {
    s32 flags;
    s32 f4;
    u32 f8;
    u8 pad[0x18 - 0xC];
    s16 timer;
    u8 pad2[0x28 - 0x1A];
};

extern "C" {
int TLobby__sub_80226308(void);
void update_lobby_subsystems__6TLobbyFv(void);
int init_layout_positions__6TLobbyFv(void);
    extern int lbl_805D62B0;
    extern int lbl_805D62B4;
    extern int lbl_805D62B8;
int TLobby__sub_80226B64(void);
int set_and_notify__6TLobbyFi(void*);
int set_and_notify_default__6TLobbyFv(void);
int set_and_notify__6TLobbyFi(void*);
int send_neg30__6TLobbyFv(void);
M2C_UNK TLobby__sub_803C9CBC(s32);
int init_layout_positions__6TLobbyFv(void);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;
void release_bgm_resource__6TLobbyFv(void);
extern s32 lbl_805D6300;
extern s32 lbl_805D631C;
void TLobby__sub_80227220(s32 arg0);
extern s32 lbl_805D6300;
extern s32 lbl_805D631C;
void set_target_id__6TLobbyFi(s32 arg0);
void TLobby__sub_803CA824(void *, s32);
extern M2C_UNK lbl_804CB850[];
void play_cue_stream_file(s32 arg0);
s32 TLobby__sub_803C94DC(int, int);
s32 TLobby__sub_803C9CB0(int);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
void TLobby__sub_802272B4(void);
M2C_UNK TLobby__sub_803C9CBC(s32);
extern M2C_UNK lbl_804CB850[];
void TLobby__sub_80227248(void);
s32 set_field_40_and_notify__6TLobbyFPvs(int, int);
extern M2C_UNK lbl_804CB850[];
void TLobby__sub_80226CB0(s32 arg0);
extern RecoveredGlobal_80226C3C_lbl_80514D00 lbl_80514D00;
extern u8 *lbl_805D3720;
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
u8 *TLobby__sub_80226C3C(void);
s32 set_field_40_and_notify__6TLobbyFPvs(int, int);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D6330;
void TLobby__sub_80226CF4(s32 arg0);
s32 TLobby__sub_803C94DC(int, int);
extern M2C_UNK lbl_804CB850[];
extern s32 lbl_805D62E4;
extern s32 lbl_805D62E8;
void TLobby__sub_8022733C(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u32 get_player_by_client_id(void *);
M2C_UNK TLobby__sub_80226294(int);
s32 fn_802264B8(int, int);
M2C_UNK TLobby__sub_802275FC();
s32 TLobby__sub_8023F880(int);
extern Ent_802269B4 lbl_805145F0[];
extern f32 lbl_80514C50[];
extern u32 lbl_805D4DF0;
extern s32 lbl_805D53A0;
extern s8 lbl_805D6279;
extern int lbl_805D62B0;
extern const f32 lbl_805DC74C;
void TLobby__sub_802269B4(void);
}

extern "C" {

void update_lobby_subsystems__6TLobbyFv(void);
int TLobby__sub_8022644C(void);

void update_lobby_subsystems__6TLobbyFv(void) { TLobby__sub_8022644C(); TLobby__sub_80227248(); }

void TLobby__sub_802269B4(void) {
    s32 i;
    s32 r;
    u32 p;
    Ent_802269B4 *e;
    s16 *t;
    if (lbl_805D62B0 != 0) {
        p = get_player_by_client_id((void *) (lbl_805D53A0));
        if (p != 0U) {
            VecCopy__FP3VecPC3Vec(lbl_80514C50, (void *) (p + 0x38));
        } else if (lbl_805D4DF0 != 0U) {
            VecCopy__FP3VecPC3Vec(lbl_80514C50, (void *) (lbl_805D4DF0 + 0x178));
        } else {
            lbl_80514C50[2] = lbl_805DC74C;
            lbl_80514C50[1] = lbl_805DC74C;
            lbl_80514C50[0] = lbl_805DC74C;
        }
        if (lbl_805D6279 == 0) {
            for (i = 0; i < 0x28; i++) {
                r = TLobby__sub_8023F880(i);
                if (r == -1 || r == 1) {
                    e = &lbl_805145F0[i];
                    t = &e->timer;
                    e->flags &= ~0x200;
                    if (*t > 0) {
                        (*t)--;
                        if ((e->flags & 0x1000) && e->f8 != 0U && fn_802264B8(i, 1) == 0) {
                            *t = 0;
                            TLobby__sub_80226294(i);
                            e->flags &= ~0x400;
                        }
                    } else {
                        TLobby__sub_80226294(i);
                        e->flags &= ~0x400;
                    }
                } else {
                    e = &lbl_805145F0[i];
                    if (!(e->flags & 0x200)) {
                        e->flags &= ~0x400;
                    } else {
                        e->timer--;
                        if (e->timer <= 0) {
                            e->flags &= ~0x600;
                            TLobby__sub_80226294(i);
                        }
                    }
                }
            }
        }
        TLobby__sub_802275FC();
    }
}

int TLobby__sub_80226B64(void) { update_lobby_subsystems__6TLobbyFv(); init_layout_positions__6TLobbyFv(); TLobby__sub_80226308(); lbl_805D62B4 = 0; lbl_805D62B8 = 0; lbl_805D62B0 = 1; return 0; }

typedef char RecoveredGlobal_80226C3C_lbl_80514D00_size[sizeof(RecoveredGlobal_80226C3C_lbl_80514D00) == 0x258 ? 1 : -1];
u8 *TLobby__sub_80226C3C(void) {
    if ((s32) lbl_805D62E4 == 1) {
        return (u8 *)&lbl_80514D00.value + (lbl_805D62E8 << 5);
    }
    return lbl_805D3720;
}

int set_and_notify_default__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(0)); }
int send_neg30__6TLobbyFv(void) { return set_and_notify__6TLobbyFi((void*)(-30)); }

typedef char RecoveredGlobal_80226CB0_lbl_804CB850_size[sizeof(RecoveredGlobal_80226CB0_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_80226CB0(s32 arg0) {
    s32 var_r4;
    var_r4 = arg0;
    if (var_r4 <= -0x140) {
        var_r4 = -0x3E7;
    }
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80226CB0_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8) != 0U) {
        set_field_40_and_notify__6TLobbyFPvs((int) (M2C_FIELD(&(*(RecoveredGlobal_80226CB0_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8)), (int) (var_r4));
    }
}

typedef char RecoveredGlobal_80226CF4_lbl_804CB850_size[sizeof(RecoveredGlobal_80226CF4_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_80226CF4(s32 arg0) {
    s32 var_r31;
    var_r31 = arg0;
    if (var_r31 <= -0x140) {
        var_r31 = -0x3E7;
    }
    if ((s32) lbl_805D6330 == 0) {
        set_field_40_and_notify__6TLobbyFPvs((int) (M2C_FIELD(&(*(RecoveredGlobal_80226CF4_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 0)), (int) (var_r31));
    }
    set_field_40_and_notify__6TLobbyFPvs((int) (M2C_FIELD(&(*(RecoveredGlobal_80226CF4_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 4)), (int) (var_r31));
}

void release_bgm_resource__6TLobbyFv(void) {
    if ((s32) lbl_805D6330 != 0) {
        TLobby__sub_803C9CBC(M2C_FIELD(lbl_804CB850, s32 *, 4));
        lbl_805D6330 = 0;
        init_layout_positions__6TLobbyFv();
    }
}
void TLobby__sub_80227220(s32 arg0) {
    if ((s32) lbl_805D6300 == 4) {
        lbl_805D631C = arg0;
    }
}
void set_target_id__6TLobbyFi(s32 arg0) {
    if ((s32) lbl_805D6300 != 4) {
        lbl_805D631C = arg0;
    }
}
typedef char RecoveredGlobal_8022727C_lbl_804CB850_size[sizeof(RecoveredGlobal_8022727C_lbl_804CB850) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_80227248_lbl_804CB850_size[sizeof(RecoveredGlobal_80227248_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_80227248(void) {
    if ((u32) M2C_FIELD(&(*(RecoveredGlobal_80227248_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8) != 0U) {
        TLobby__sub_803C9CBC((s32)((int) (M2C_FIELD(&(*(RecoveredGlobal_80227248_lbl_804CB850 *)&lbl_804CB850).value, u32 *, 8))));
    }
}

void play_cue_stream_file(s32 arg0) {
    if ((void *) M2C_FIELD(&(*(RecoveredGlobal_8022727C_lbl_804CB850 *)&lbl_804CB850).value, u8 **, 8) != NULL) {
        TLobby__sub_803CA824(M2C_FIELD(&(*(RecoveredGlobal_8022727C_lbl_804CB850 *)&lbl_804CB850).value, u8 **, 8), arg0);
    }
}
typedef char RecoveredGlobal_802272B4_lbl_804CB850_size[sizeof(RecoveredGlobal_802272B4_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_802272B4(void) {
    s32 temp_r3;
    TLobby__sub_803C94DC((int) (M2C_FIELD(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value, M2C_UNK *, (lbl_805D62E8 * 4))), (int) (0));
    TLobby__sub_803C94DC((int) (M2C_FIELD(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 8)), (int) (0));
    temp_r3 = TLobby__sub_803C9CB0((int) (M2C_FIELD(&(*(RecoveredGlobal_802272B4_lbl_804CB850 *)&lbl_804CB850).value, M2C_UNK *, (lbl_805D62E8 * 4))));
    if ((temp_r3 == 0) || (temp_r3 == 5)) {
        lbl_805D62E4 = 0;
        return;
    }
    lbl_805D62E4 = 1;
}
typedef char RecoveredGlobal_8022733C_lbl_804CB850_size[sizeof(RecoveredGlobal_8022733C_lbl_804CB850) == 0xC ? 1 : -1];
void TLobby__sub_8022733C(void) {
    TLobby__sub_803C94DC((int) (M2C_FIELD(((u8 *)(&(*(RecoveredGlobal_8022733C_lbl_804CB850 *)&lbl_804CB850).value) + (lbl_805D62E8 * 4)), s32 *, 0)), (int) (1));
    TLobby__sub_803C94DC((int) (M2C_FIELD(&(*(RecoveredGlobal_8022733C_lbl_804CB850 *)&lbl_804CB850).value, s32 *, 8)), (int) (1));
    lbl_805D62E4 = 2;
}

}
