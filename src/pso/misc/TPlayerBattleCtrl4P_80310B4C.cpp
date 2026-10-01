#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Node_80311304 { u8 pad0[0xC]; Node_80311304 *next; };

struct Par_80311304 { u8 pad0[0x14]; Node_80311304 *head; };

struct Ctl_80311380 { u8 pad[0x288]; u16 tbl[1]; };

typedef s32 M2C_UNK;
struct Ctl_8031171C {
    u8 pad0[0x244];
    s32 f244;
    s32 f248;
    u8 pad24C[0x264 - 0x24C];
    s32 ok[4];
};

struct O_80311618 { u8 pad[0x238]; u8 flags[8]; u8 pad2[0x250 - 0x240]; u64 time; u8 pad3[0x284 - 0x258]; s32 v; };

struct O_80311400 { u8 pad[0x20]; void *w0; void *w1; u8 pad2[0x288 - 0x28]; s16 order[4]; };

extern "C" {
s32 TPlayerBattleCtrl4P__sub_80311294(u8 *arg0);
void TPlayerBattleCtrl4P__sub_803112AC(u8 *arg0, s32 arg1);
s32 check_value_equals__13TQuestColCtrlFPvi(void *, int);
void queue_destruction__7TObjectFv(void *);
extern s32 lbl_805D2A98;
void TPlayerBattleCtrl4P__sub_80311304(void *self, Par_80311304 *p);
s32 obj_getField1c(void);
void TCameraCtrl__sub_8006A410(void *, int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TObjPlayer__sub_801BC068(void *, int);
void destroy__23TAdSinglePlyChrSelectGCFv(void);
void init_scene_objects__6TLobbyFv(void);
void TPlayerBattleCtrl4P__sub_80311304(void *self, Par_80311304 *p);
extern s32 tl_05;
void TPlayerBattleCtrl4P__sub_80311380(Ctl_80311380 *o);
M2C_UNK obj_set_flag_20000();
void TOMineTrap__sub_8016FCC4(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
void set_battle_mode__19TPlayerBattleCtrl4PFPvi(void *, s32);
void update_child_player__6TLobbyFi(void *);
void TWindowCtrl__sub_8024A4B0(s32);
void create_alt_timer__11TWindowCtrlFv(void);
void TPlayerBattleCtrl4P__sub_80310C08(void *);
void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2);
void TPlayerBattleCtrl4P__sub_80310F10(void *, s32);
s32 TPlayerBattleCtrl4P__sub_80311294(u8 *arg0);
void TPlayerBattleCtrl4P__sub_8031171C(Ctl_8031171C *o);
u64 OSGetTime();
M2C_UNK obj_clear_flag30_20000(u32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK init_with_name__6TLobbyFPvPvPvPv(void *, void *, void *, int);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F14(int);
M2C_UNK TObjEneRe4Sorcerer__sub_801E3F18();
s32 get_global_state__14TOKeyMachine01Fv();
void *__nw__7TObjectFUl(int);
M2C_UNK reset_score_counters__19TPlayerBattleCtrl4PFPv(void *);
void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2);
extern char lbl_80475BAC[];
extern char lbl_80475BB8[];
extern s16 lbl_80511CB0[];
extern s32 TLobby__data_805D5DC0;
void TPlayerBattleCtrl4P__sub_80311618(O_80311618 *o);
M2C_UNK TWindow__close(void *);
M2C_UNK TPlayerBattleCtrl4P__sub_803101D4(void *);
void TPlayerBattleCtrl4P__sub_803112AC(u8 *arg0, s32 arg1);
s32 rand__11TOBoss4RockFv();
extern const f32 lbl_805DF240;
extern const f32 lbl_805DF244;
void TPlayerBattleCtrl4P__sub_80311400(O_80311400 *o);
}

extern "C" {

s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void);
void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2);
void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2);
void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v);
void update__19TPlayerBattleCtrl4PFv(void);
void update_all_players__19TPlayerBattleCtrl4PFv(void);
M2C_UNK TLobby__sub_8020BB18();
M2C_UNK TLobby__sub_8020BCE4();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TPlayerBattleCtrl4P__sub_8031058C();
void TPlayerBattleCtrl4P__vt28(void);
void TPlayerBattleCtrl4P__vt29(void);
M2C_UNK TWindowChat__sub_8024AD30(u16);
M2C_UNK TWindowCtrl__sub_8024AEAC(u32);
M2C_UNK TWindowCtrl__sub_8024AEF0(u16);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK fn_801C5454(s32);
M2C_UNK fn_801F57B4(s32);
M2C_UNK fn_8020910C(s32);
M2C_UNK fn_8024ACEC(u32);
M2C_UNK obj_set_flag_20000();
s32 obj_testFlags30(u32, s32);
M2C_UNK play_effect_default__10TObjPlayerFii(u32, s32);
s32 release_attached_resource__10TObjPlayerFPv();
M2C_UNK request_active_window_close();
M2C_UNK send_code_45_1__10TObjPlayerFi();

void send_code_45_to_window__19TPlayerBattleCtrl4PFPvii(void *arg0, s32 arg1, s32 arg2) {
    u16 temp_r31;
    s32 temp_r30;

    temp_r31 = (u16)arg1;
    temp_r30 = arg2;
    if (TPlayerBattleCtrl4P__sub_801BA74C((s32)((s32)(temp_r31))) != 0U) {
        send_code_45_1__10TObjPlayerFi();
    }
    if (temp_r30 != 0) {
        TWindowChat__sub_8024AD30(temp_r31);
        clear_flag__11TWindowCtrlFv();
        TWindowCtrl__sub_8024AEF0(temp_r31);
    }
}

s32 check_all_players_flag__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    u32 var_r3;

    var_r31 = 0;
loop_1:
    var_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)((s32)(var_r31)));
    if ((var_r3 != 0U) && (obj_testFlags30(var_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_1;
}

void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2) {
    u32 id;
    u32 temp;

    id = arg1;
    temp = TPlayerBattleCtrl4P__sub_801BA74C((s32)(id));
    if (temp != 0U) {
        play_effect_default__10TObjPlayerFii(temp, -1);
    }
    if (arg2 != 0) {
        fn_8024ACEC(id);
        request_active_window_close();
        TWindowCtrl__sub_8024AEAC(id);
    }
}

s32 TPlayerBattleCtrl4P__sub_80311294(u8 *arg0) {
    return M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s32 *, 0x24) * 0x3C;
}

void set_score__19TPlayerBattleCtrl4PFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x29c) = v; }

void TPlayerBattleCtrl4P__sub_803112AC(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x298) = arg1;
    M2C_FIELD(arg0, s32 *, 0x29C) = 0;
}

void update_all_players__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;

    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31)) != 0U) {
            release_attached_resource__10TObjPlayerFPv();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

extern s32 tl_00;
extern s32 tl_01;

void TPlayerBattleCtrl4P__sub_80311304(void *self, Par_80311304 *p) {
    Node_80311304 *n = p->head;
    Node_80311304 *cur;
    while (p->head != 0 && n != 0) {
        cur = n;
        n = cur->next;
        if (check_value_equals__13TQuestColCtrlFPvi(cur, lbl_805D2A98) != 0) {
            queue_destruction__7TObjectFv(cur);
        } else {
            TPlayerBattleCtrl4P__sub_80311304(self, (Par_80311304 *)cur);
        }
    }
}

void TPlayerBattleCtrl4P__sub_80311380(Ctl_80311380 *o) {
    s32 i;
    void *p;
    init_scene_objects__6TLobbyFv();
    for (i = 0; i < 4; i++) {
        p = (void *)TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (p != 0) {
            TObjPlayer__sub_801BC068(p, o->tbl[(u16)obj_getField1c()]);
            TCameraCtrl__sub_8006A410(p, 0);
        }
    }
    TPlayerBattleCtrl4P__sub_80311304((void *)(o), (Par_80311304 *)(tl_05));
    destroy__23TAdSinglePlyChrSelectGCFv();
}

void TPlayerBattleCtrl4P__sub_80311400(O_80311400 *o) {
    s32 order[4];
    s32 i;
    s32 a;
    s32 b;
    s32 t;
    for (i = 0; i < 4; i++) {
        order[i] = i;
    }
    for (i = 0; i < 30; i++) {
        a = (s32)(lbl_805DF240 * (lbl_805DF244 * (f32)rand__11TOBoss4RockFv()));
        b = (s32)(lbl_805DF240 * (lbl_805DF244 * (f32)rand__11TOBoss4RockFv()));
        if (a != b) {
            t = order[a];
            order[a] = order[b];
            order[b] = t;
        }
    }
    for (i = 0; i < 4; i++) {
        o->order[i] = order[i];
    }
    if (o->w0 != NULL) {
        TWindow__close(o->w0);
        o->w0 = NULL;
    }
    if (o->w1 != NULL) {
        TWindow__close(o->w1);
        o->w1 = NULL;
    }
    TPlayerBattleCtrl4P__sub_803101D4(o);
    TPlayerBattleCtrl4P__sub_803112AC((u8 *)o, 5);
}

void update__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    s32 var_r31_2;
    u32 temp_r3;

    TPlayerBattleCtrl4P__sub_8031058C();
    var_r31 = 0;
    do {
        if (TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31)) != 0U) {
            obj_set_flag_20000();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
    fn_8020910C(tl_01);
    fn_801F57B4(tl_00);
    TLobby__sub_8020BCE4();
    TLobby__sub_8020BB18();
    var_r31_2 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((s32)(var_r31_2));
        if (temp_r3 != 0U) {
            fn_801C5454(temp_r3 + 0x7C4);
        }
        var_r31_2 += 1;
    } while (var_r31_2 < 4);
}

void TPlayerBattleCtrl4P__sub_80311618(O_80311618 *o) {
    s32 i;
    s32 j;
    u32 p;
    char *name;
    void *w;
    s32 st;
    TObjEneRe4Sorcerer__sub_801E3F14(4);
    TObjEneRe4Sorcerer__sub_801E3F18();
    o->time = OSGetTime();
    for (i = 0; i < 4; i++) {
        ((void (*)(void *, u16, s32))send_code_45_to_window__19TPlayerBattleCtrl4PFPvii)(o, i, 1);
        p = TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (p != 0) {
            obj_clear_flag30_20000(p);
        }
    }
    reset_score_counters__19TPlayerBattleCtrl4PFPv(o);
    name = get_global_state__14TOKeyMachine01Fv() == 0x10 ? lbl_80475BAC : lbl_80475BB8;
    w = __nw__7TObjectFUl(0x40);
    if (w != NULL) {
        init_with_name__6TLobbyFPvPvPvPv(w, o, name, 0x2D);
    }
    for (j = 0; j < 8; j++) {
        o->flags[j] = 1;
        if (lbl_80511CB0[j] == 0) {
            o->flags[j] = 0;
        }
    }
    o->v = TLobby__data_805D5DC0;
}

void TPlayerBattleCtrl4P__sub_8031171C(Ctl_8031171C *o) {
    s32 j;
    s32 i;
    u8 *p;
    o->f244 = TPlayerBattleCtrl4P__sub_80311294((u8 *)o);
    create_alt_timer__11TWindowCtrlFv();
    TWindowCtrl__sub_8024A4B0(o->f244);
    TOMineTrap__sub_8016FCC4();
    TPlayerBattleCtrl4P__sub_80310F10(o, 1);
    for (i = 0; i < 4; i++) {
        remove_player__19TPlayerBattleCtrl4PFPvUsi(o, i, 1);
        p = (u8 *)TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (p != 0) {
            obj_set_flag_20000();
            update_child_player__6TLobbyFi(p + 0x78C);
            update_child_player__6TLobbyFi(p + 0x77C);
            update_child_player__6TLobbyFi(p + 0x75C);
            update_child_player__6TLobbyFi(p + 0x76C);
            update_child_player__6TLobbyFi(p + 0x79C);
            set_battle_mode__19TPlayerBattleCtrl4PFPvi(p + 0x7AC, 0);
        }
    }
    o->f248 = 0x5A;
    TPlayerBattleCtrl4P__sub_80310C08(o);
    for (j = 0; j < 4; j++) {
        o->ok[j] = 1;
    }
}

}
