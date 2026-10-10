#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_80312994 {
    u8 pad0[0x298];
    s32 mode;
    void m0();
    void m1();
    void m2();
    void m3();
    void m4();
    void m5();
};
typedef void (Self_80312994::*Action_80312994)();

struct TPlayerBattleCtrl4P_80312620 {
    virtual void m0();
    void s0(); void s1(); void s2(); void s3(); void s4();
    void s5(); void s6(); void s7(); void s8(); void s9();
};
typedef void (TPlayerBattleCtrl4P_80312620::*Pmf_80312620)();

struct C_803124C0 {
    u8 pad[0x29c];
    s32 state;
     void f1(); void f2(); void f3(); void f4();
};
typedef void (C_803124C0::*Fn_803124C0)();

struct C_8031257C {
    u8 pad[0x29c];
    s32 state;
     void f1(); void f2(); void f3();
};
typedef void (C_8031257C::*Fn_8031257C)();

struct C_80312794 {
    u8 pad[0x29c];
    s32 state;
     void f1(); void f2();
};
typedef void (C_80312794::*Fn_80312794)();

struct TPlayerBattleCtrl4P_80312818 {
    virtual void m0();
    void s0(); void s1(); void s2(); void s3(); void s4();
    void s5(); void s6(); void s7(); void s8();
};
typedef void (TPlayerBattleCtrl4P_80312818::*Pmf_80312818)();

struct BattleIntroWindowState {
    u8 pad[0x20];
    void *intro_window;
};

struct BattleIntroWindowSize { f32 x, y; };

extern "C" {
void *get_window_layout_position(s32);
void *set_window_mode_4__6TLobbyFPvii(void *, void *, s32);
void set_score__19TPlayerBattleCtrl4PFPvi(void *, int);
extern const BattleIntroWindowSize lbl_80475B60;
extern s32 lbl_805D6AB0;
void open_split_screen_battle_intro_window(BattleIntroWindowState *self);
}

extern "C" {

void TPlayerBattleCtrl4P__vt0(void* p);
void TPlayerBattleCtrl4P__vt7(void *arg0);
int set_split_screen_battle_phase(void*, void*);
int init_battle__19TPlayerBattleCtrl4PFPv(void*);
void send_and_handle__6TLobbyFPvii(void *, void *, int);
void set_score__19TPlayerBattleCtrl4PFPvi(void *, int);
void *__dt__19TPlayerBattleCtrl4PFPvs(void *arg0, s16 arg1);
M2C_UNK close_player_windows__19TPlayerBattleCtrl4PFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
void dispatch_mode_action__19TPlayerBattleCtrl4PFPv(Self_80312994 *self);
extern s32 TPlayerBattleCtrl4P__instance;
extern u8 lbl_80475930[];
extern u8 lbl_8047595C[];
extern u8 lbl_80475964[];
extern u8 lbl_8047596C[];
extern u8 lbl_80475978[];
extern u8 lbl_804759E0[];
extern u8 lbl_80475A34[];
extern u8 lbl_80475A70[];
extern u8 lbl_80475A98[];
extern u8 lbl_80475AA0[];
extern u8 lbl_80475B18[];
extern u8 lbl_805DF228[];
extern u8 lbl_805DF22C[];
extern u8 lbl_805DF230[];
extern u8 lbl_805DF234[];
extern u8 lbl_805DF238[];
extern u8 lbl_805DF23C[];
void render__7TObjectFv();
void render_shadows__7TObjectFv();
void TPlayerBattleCtrl4P__vt1(TPlayerBattleCtrl4P_80312818 *self);
void TPlayerBattleCtrl4P__vt2(C_80312794 *self);
void TPlayerBattleCtrl4P__vt3(TPlayerBattleCtrl4P_80312620 *self);
void TPlayerBattleCtrl4P__vt4(C_8031257C *self);
void TPlayerBattleCtrl4P__vt5(C_803124C0 *self);
void TPlayerBattleCtrl4P__vt8();
void TPlayerBattleCtrl4P__vt9();
void TPlayerBattleCtrl4P__vt10();
void TPlayerBattleCtrl4P__vt11();
void TPlayerBattleCtrl4P__vt12();
void TPlayerBattleCtrl4P__vt13();
void TPlayerBattleCtrl4P__vt14();
void TPlayerBattleCtrl4P__vt15();
void TPlayerBattleCtrl4P__vt16();
void TPlayerBattleCtrl4P__vt17();
void TPlayerBattleCtrl4P__vt18();
void TPlayerBattleCtrl4P__vt19();
void TPlayerBattleCtrl4P__vt20();
void TPlayerBattleCtrl4P__vt21();
void TPlayerBattleCtrl4P__vt22();
void TPlayerBattleCtrl4P__vt23();
void TPlayerBattleCtrl4P__vt24();
void TPlayerBattleCtrl4P__vt25();
void TPlayerBattleCtrl4P__vt26();
void TPlayerBattleCtrl4P__vt27();
void TPlayerBattleCtrl4P__vt28();
void TPlayerBattleCtrl4P__vt29();
void TPlayerBattleCtrl4P__vt30();
void TPlayerBattleCtrl4P__vt31();
void TPlayerBattleCtrl4P__vt32();
void TPlayerBattleCtrl4P__vt33();

void *__vt__19TPlayerBattleCtrl4P[7] = {
    (void *)&lbl_80475930, (void *)&lbl_8047595C, (void *)&lbl_80475964, (void *)&lbl_8047596C,
    (void *)&lbl_80475978, (void *)&lbl_804759E0, (void *)&lbl_80475A34,
};
void *lbl_804E7D4C[7] = {
    (void *)&lbl_80475A70, (void *)&lbl_805DF228, (void *)&lbl_805DF22C, (void *)&lbl_80475A98,
    (void *)&lbl_80475AA0, (void *)&lbl_80475AA0, (void *)&lbl_80475B18,
};

void TPlayerBattleCtrl4P__vt7(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x20) != NULL) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, void **, 0x20), (void *)((char *)arg0 + 56), 128);
    }
    M2C_FIELD(arg0, u32 *, 0x240) = 240;
    set_score__19TPlayerBattleCtrl4PFPvi(arg0, 2);
}

void open_split_screen_battle_intro_window(BattleIntroWindowState *self) {
    if (self->intro_window == NULL) {
        BattleIntroWindowSize size = lbl_80475B60;
        self->intro_window = set_window_mode_4__6TLobbyFPvii(
            get_window_layout_position(0x52), &size, 1);
    }
    lbl_805D6AB0 = 0;
    set_score__19TPlayerBattleCtrl4PFPvi((void *)(self), (int)(1));
}

#pragma defer_codegen on

void dispatch_mode_action__19TPlayerBattleCtrl4PFPv(Self_80312994 *self) {
    static Action_80312994 tbl[6] = {
        &Self_80312994::m0, &Self_80312994::m1, &Self_80312994::m2,
        &Self_80312994::m3, &Self_80312994::m4, &Self_80312994::m5,
    };
    (self->*tbl[self->mode])();
}

void TPlayerBattleCtrl4P__vt0(void* p) { init_battle__19TPlayerBattleCtrl4PFPv(p); set_split_screen_battle_phase(p, (void*)1); }

void TPlayerBattleCtrl4P__vt1(TPlayerBattleCtrl4P_80312818 *self) {
    static Pmf_80312818 tbl[9] = {
        &TPlayerBattleCtrl4P_80312818::s0, &TPlayerBattleCtrl4P_80312818::s1,
        &TPlayerBattleCtrl4P_80312818::s2, &TPlayerBattleCtrl4P_80312818::s3,
        &TPlayerBattleCtrl4P_80312818::s4, &TPlayerBattleCtrl4P_80312818::s5,
        &TPlayerBattleCtrl4P_80312818::s6, &TPlayerBattleCtrl4P_80312818::s7,
        &TPlayerBattleCtrl4P_80312818::s8,
    };
    (self->*tbl[*(s32 *)((u8 *)self + 0x29C)])();
}

void TPlayerBattleCtrl4P__vt2(C_80312794 *self) {
    static Fn_80312794 tbl[2] = { &C_80312794::f1, &C_80312794::f2 };
    (self->*tbl[self->state])();
}

void TPlayerBattleCtrl4P__vt3(TPlayerBattleCtrl4P_80312620 *self) {
    static Pmf_80312620 tbl[10] = {
        &TPlayerBattleCtrl4P_80312620::s0, &TPlayerBattleCtrl4P_80312620::s1,
        &TPlayerBattleCtrl4P_80312620::s2, &TPlayerBattleCtrl4P_80312620::s3,
        &TPlayerBattleCtrl4P_80312620::s4, &TPlayerBattleCtrl4P_80312620::s5,
        &TPlayerBattleCtrl4P_80312620::s6, &TPlayerBattleCtrl4P_80312620::s7,
        &TPlayerBattleCtrl4P_80312620::s8, &TPlayerBattleCtrl4P_80312620::s9,
    };
    (self->*tbl[*(s32 *)((u8 *)self + 0x29C)])();
}

void TPlayerBattleCtrl4P__vt4(C_8031257C *self) {
    static Fn_8031257C tbl[3] = { &C_8031257C::f1, &C_8031257C::f2, &C_8031257C::f3 };
    (self->*tbl[self->state])();
}

void TPlayerBattleCtrl4P__vt5(C_803124C0 *self) {
    static Fn_803124C0 tbl[4] = { &C_803124C0::f1, &C_803124C0::f2, &C_803124C0::f3, &C_803124C0::f4 };
    (self->*tbl[self->state])();
}

#pragma defer_codegen off

void *TPlayerBattleCtrl4P_player_name_formats[4] = {
    (void *)&lbl_805DF230, (void *)&lbl_805DF234, (void *)&lbl_805DF238, (void *)&lbl_805DF23C,
};
void *lbl_804E80A8[6] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__19TPlayerBattleCtrl4PFPvs, (void *)&dispatch_mode_action__19TPlayerBattleCtrl4PFPv,
    (void *)&render__7TObjectFv, (void *)&render_shadows__7TObjectFv,
};
#define lbl_804E80A8 ((M2C_UNK *)lbl_804E80A8)
void *__dt__19TPlayerBattleCtrl4PFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E80A8;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x24));
            M2C_FIELD(arg0, u32 *, 0x24) = 0U;
        }
        close_player_windows__19TPlayerBattleCtrl4PFPv(arg0);
        TPlayerBattleCtrl4P__instance = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 get_player_by_client_id(s32);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK export_character_data__10TObjPlayerFPvPv(s32, s32);
M2C_UNK clear_split_screen_battle_window_slots(void *);
extern s32 lbl_805D4110;
extern s32 current_language;

void *TPlayerBattleCtrl4P__ct(void *arg0, void *parent) {
    s32 i;
    void **p;

    __ct__7TObjectFP7TObject(arg0, parent);
    M2C_FIELD(arg0, void **, 0x18) = lbl_804E80A8;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D4110;
    set_split_screen_battle_phase(arg0, 0);
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    clear_split_screen_battle_window_slots(arg0);
    p = lbl_804E7D4C;
    if (current_language == 0) {
        p = __vt__19TPlayerBattleCtrl4P;
    }
    M2C_FIELD(arg0, void ***, 0x294) = p;
    for (i = 0; i < 4; i++) {
        s32 pl = get_player_by_client_id(i);
        if (pl != 0) {
            export_character_data__10TObjPlayerFPvPv(pl, get_char_index__23TAdSinglePlyChrSelectGCFUi(i));
        }
    }
    TPlayerBattleCtrl4P__instance = (s32)arg0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

}
