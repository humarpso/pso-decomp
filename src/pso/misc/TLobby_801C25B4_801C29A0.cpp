#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Msg_801C29F0 {
    u8 pad0[4];
    u8 kind;
    u8 pad5[2];
    u8 enabled;
    u32 id;
    s32 player;
    u8 pad10[0x10];
} Msg_801C29F0;

typedef struct Player_801C29F0 {
    u8 pad0[0x30];
    u32 flags;
    u8 pad34[0x754 - 0x34];
    u8 ctrl[4];
} Player_801C29F0;

struct VBase_801C2B04 { char pad[0x18]; };

struct VObj_801C2B04 : VBase_801C2B04 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9();
    virtual char *m10();
};

typedef struct Entry_801C2B04 {
    u16 id;
    s16 name;
    u8 pad4[4];
} Entry_801C2B04;

extern "C" {
u16 obj_getField1c(void *);
Player_801C29F0 *update_battle_controller__10TObjPlayerFv(void);
s32 assign_player_id__6TLobbyFv(void *);
s32 get_state__19TPlayerBattleCtrl4PFPv(void *p);
void send_set_battle_mode_data__6TLobbyFPv(void *p);
void build_6x7D_set_battle_mode_data(void *);
u8 TLobby__sub_801D7100(void *);
extern u8 lbl_8050EA40[];
extern s32 TLobby__data_80511CA0[];
extern s32 lbl_805D53A0;
void send_battle_mode_state__6TLobbyFPv(void *self);
VObj_801C2B04 *get_player_by_client_id(s32);
void clear_counter__6TLobbyFPv(void *a0);
void send_neg50__6TLobbyFPvPv(void *p, s32 a1);
void calc_player_rankings__6TLobbyFPv(void *);
void init_all_default__11TWindowCtrlFPv(void *);
int sprintf(char *, const char *, ...);
extern char lbl_80446FCC[];
extern char lbl_80446FD4[];
extern char lbl_80446FDC[];
extern char *lbl_804C3E78[];
extern Entry_801C2B04 TLobby__data_80511C80[];
void show_score_results__6TLobbyFPv(void *self);
}

extern "C" {

u8 check_timeout__6TLobbyFPv(void *arg0);
void set_flag_270__6TLobbyFPv(void *arg0);
s32 get_game_mode__6TLobbyFv();

extern s32 lbl_805D5DB0;

u8 check_timeout__6TLobbyFPv(void *arg0) {
    if ((s32) lbl_805D5DB0 >= get_game_mode__6TLobbyFv()) {
        M2C_FIELD(arg0, s32 *, 0x270) = 2;
    }
    return (u8) (M2C_FIELD(arg0, s32 *, 0x270) == 2);
}

void send_battle_mode_state__6TLobbyFPv(void *self) {
    Msg_801C29F0 m;
    Player_801C29F0 *p;
    s32 id;
    s32 on;
    p = update_battle_controller__10TObjPlayerFv();
    if (p != NULL) {
        id = assign_player_id__6TLobbyFv(self);
        build_6x7D_set_battle_mode_data(&m);
        m.kind = 3;
        m.id = obj_getField1c(p);
        m.player = id;
        on = 1;
        if (p->flags & 0x800) {
            if (TLobby__sub_801D7100(lbl_8050EA40) == 1) {
                on = 0;
            } else if (TLobby__sub_801D7100(lbl_8050EA40) == 2 &&
                       get_state__19TPlayerBattleCtrl4PFPv(p->ctrl) == 0) {
                on = 0;
            }
        }
        m.enabled = on;
        TLobby__data_80511CA0[lbl_805D53A0] = on;
        send_set_battle_mode_data__6TLobbyFPv(&m);
    }
}

void set_flag_270__6TLobbyFPv(void *arg0) {
    send_battle_mode_state__6TLobbyFPv((void *)(arg0));
    M2C_FIELD(arg0, s32 *, 0x270) = 1;
}
void show_score_results__6TLobbyFPv(void *self) {
    char buf[0x48];
    Entry_801C2B04 *e;
    s32 i;
    VObj_801C2B04 *p;
    clear_counter__6TLobbyFPv(self);
    calc_player_rankings__6TLobbyFPv(self);
    init_all_default__11TWindowCtrlFPv(lbl_80446FCC);
    for (i = 0; i < 4; i++) {
        e = &TLobby__data_80511C80[i];
        p = get_player_by_client_id(e->id);
        if (p != NULL) {
            sprintf(buf, lbl_80446FD4, lbl_804C3E78[e->name], p->m10());
            init_all_default__11TWindowCtrlFPv(buf);
        }
    }
    send_neg50__6TLobbyFPvPv(lbl_80446FDC, 0x3C);
}

}
