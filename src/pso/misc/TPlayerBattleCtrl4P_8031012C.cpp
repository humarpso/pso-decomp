#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_803107D0_8031058C { char pad[0x18]; };
struct VObj_803107D0_8031058C : Base_803107D0_8031058C {
    virtual void v0();
#define VV(n) virtual void v##n();
VV(1)VV(2)VV(3)VV(4)VV(5)VV(6)VV(7)VV(8)VV(9)VV(10)
VV(11)VV(12)VV(13)VV(14)VV(15)VV(16)VV(17)VV(18)VV(19)VV(20)
VV(21)VV(22)VV(23)VV(24)VV(25)VV(26)VV(27)VV(28)VV(29)VV(30)
VV(31)VV(32)VV(33)VV(34)VV(35)VV(36)VV(37)VV(38)VV(39)VV(40)
VV(41)VV(42)VV(43)VV(44)VV(45)VV(46)VV(47)VV(48)VV(49)VV(50)
VV(51)VV(52)VV(53)VV(54)VV(55)VV(56)VV(57)VV(58)VV(59)VV(60)
VV(61)
#undef VV
    virtual void v64();
};

struct RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct T_803102A4 { u8 pad[0x28]; s32 arr[4]; };

struct T_803102C8 { u8 pad[0x298]; s32 mode; };

struct Ctl_803101D4 { u8 pad[0x28]; void *win[4]; };

struct Ctl_80310230 { u8 pad[0x28]; void *win[4]; };

struct Ctl_8031012C { u8 pad[0x28]; void *win[4]; };

struct MapEnt_8031012C { u8 pad[0x20]; u8 sub[0x30]; };

struct Ent_803104CC { u8 pad0[0x30]; u32 flags; u8 pad1[0x754 - 0x34]; u8 sub[4]; };

struct Ctl_803104CC { u8 pad[0x264]; s32 ok[4]; };

typedef s32 M2C_UNK;
struct VBase_80310830 { char pad[0x18]; };

struct VObj_80310830 : VBase_80310830 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9();
    virtual char *v10();
};

struct Ent_80310830 { u16 id; s16 idx; u32 pad; };

struct Ctl_80310910 {
    u8 pad0[0x238];
    s8 flags[8];
    u8 pad240[0x260 - 0x240];
    s32 state;
};

extern "C" {
extern RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 TPlayerBattleCtrl4P__data_80542E90;
M2C_UNK *TPlayerBattleCtrl4P__sub_80310300(void);
void TPlayerBattleCtrl4P__sub_803102A4(T_803102A4 *self);
extern void *TPlayerBattleCtrl4P__data_805D6AA8;
u8 TPlayerBattleCtrl4P__sub_803102C8(void);
void TWindow__close(void *);
void TPlayerBattleCtrl4P__sub_803101D4(Ctl_803101D4 *o);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void *__nw__7TObjectFUl(u32);
void *TWindowDuelResult__ct(void *, int);
void TPlayerBattleCtrl4P__sub_80310230(Ctl_80310230 *o);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_map_id__13TRaderMapCoreFPv();
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TWindow__close(void *);
extern MapEnt_8031012C lbl_8050E208[];
s32 TPlayerBattleCtrl4P__sub_8031012C(Ctl_8031012C *self);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_state__19TPlayerBattleCtrl4PFPv(void *);
u8 TLobby__sub_801D7100(void *);
void TPlayerBattleCtrl4P__sub_80310380(void *, void *);
extern u8 lbl_8050EA40[];
void TPlayerBattleCtrl4P__sub_803104CC(Ctl_803104CC *self);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void init_all__11TWindowCtrlFPvPv(void *, s32);
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2);
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p);
void TPlayerBattleCtrl4P__sub_80310C08(void *);
int sprintf(char *, const char *, ...);
extern char lbl_80475B90[];
extern char lbl_80475B98[];
extern char lbl_80475BA0[];
extern char *lbl_804E8098[];
extern RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90 TPlayerBattleCtrl4P__data_80542E90;
void TPlayerBattleCtrl4P__sub_80310830(void *arg0);
s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0);
void TPlayerBattleCtrl4P__sub_80310830(void *arg0);
void TPlayerBattleCtrl4P__sub_80310904(void* p);
extern s16 lbl_80511CB0[];
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;
void TPlayerBattleCtrl4P__sub_80310910(Ctl_80310910 *o, s32 frames);
}

extern "C" {

void TPlayerBattleCtrl4P__sub_8031058C(void* p);
void TPlayerBattleCtrl4P__sub_80310904(void* p);
void init__19TPlayerBattleCtrl4PFv(void);
int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p);
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2);
void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void);
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p);
s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0);
void update_players__19TPlayerBattleCtrl4PFv(void);
M2C_UNK TLobby__sub_801B09A4();
int TLobby__sub_8022727C(void*);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
int TPlayerBattleCtrl4P__sub_803112AC(void*, int);
int fn_801C23A8(void*, void*);
M2C_UNK inc_player_count__10TObjPlayerFv();

typedef char RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90_size[sizeof(RecoveredGlobal_80310300_TPlayerBattleCtrl4P__data_80542E90) == 0x20 ? 1 : -1];

s32 TPlayerBattleCtrl4P__sub_8031012C(Ctl_8031012C *self) {
    s32 r = 1;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(i) != 0) {
            if (self->win[i] != NULL) {
                if (TWindowShortListCtrl__check_controller_button(lbl_8050E208[get_map_id__13TRaderMapCoreFPv()].sub, 2) != 0) {
                    TWindow__close(self->win[i]);
                    self->win[i] = 0;
                } else {
                    r = 0;
                }
            }
        }
    }
    return r;
}

void TPlayerBattleCtrl4P__sub_803101D4(Ctl_803101D4 *o) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (o->win[i] != 0) {
            TWindow__close(o->win[i]);
            o->win[i] = 0;
        }
    }
}

void TPlayerBattleCtrl4P__sub_80310230(Ctl_80310230 *o) {
    s32 i;
    void *w;
    for (i = 0; i < 4; i++) {
        if (TPlayerBattleCtrl4P__sub_801BA74C(i) != 0) {
            w = __nw__7TObjectFUl(0x6C);
            if (w != 0) {
                w = TWindowDuelResult__ct(w, i);
            }
            o->win[i] = w;
        }
    }
}

void TPlayerBattleCtrl4P__sub_803102A4(T_803102A4 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        self->arr[i] = 0;
    }
}

u8 TPlayerBattleCtrl4P__sub_803102C8(void) {
    T_803102C8 *p = (*(T_803102C8 * *)&TPlayerBattleCtrl4P__data_805D6AA8);
    if (p != 0) {
        return p->mode == 1 || p->mode == 2;
    }
    return 0;
}

M2C_UNK *TPlayerBattleCtrl4P__sub_80310300(void) {
    return &TPlayerBattleCtrl4P__data_80542E90.value;
}

void TPlayerBattleCtrl4P__sub_803104CC(Ctl_803104CC *self) {
    s32 i;
    Ent_803104CC *e;
    s32 v;
    for (i = 0; i < 4; i++) {
        e = (Ent_803104CC *)TPlayerBattleCtrl4P__sub_801BA74C(i);
        if (e != NULL) {
            TPlayerBattleCtrl4P__sub_80310380(self, e);
            v = 1;
            if (e->flags & 0x800) {
                if (TLobby__sub_801D7100(lbl_8050EA40) == 1) {
                    v = 0;
                } else if (TLobby__sub_801D7100(lbl_8050EA40) == 2 && get_state__19TPlayerBattleCtrl4PFPv(e->sub) == 0) {
                    v = 0;
                }
            }
            self->ok[i] = v;
        }
    }
}

void TPlayerBattleCtrl4P__sub_8031058C(void* p) { TPlayerBattleCtrl4P__sub_803104CC((Ctl_803104CC *)(p)); }

extern void *TPlayerBattleCtrl4P__data_805D6AA8;

void reset_ctrl_to_default__19TPlayerBattleCtrl4PFv(void) {
    void *temp_r3;
    temp_r3 = TPlayerBattleCtrl4P__data_805D6AA8;
    if (temp_r3 != NULL) {
        init_ctrl_default__19TPlayerBattleCtrl4PFPv((void*)(temp_r3));
    }
}

extern s32 lbl_805D6AAC;

void init__19TPlayerBattleCtrl4PFv(void) {
    TLobby__sub_801B09A4();
    inc_player_count__10TObjPlayerFv();
    lbl_805D6AAC = 1;
}

int init_ctrl_default__19TPlayerBattleCtrl4PFPv(void* p) { return TPlayerBattleCtrl4P__sub_803112AC(p, 0); }
void notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(void* p, void* a1, void* a2) { TLobby__sub_8022727C(a1); fn_801C23A8((void*)-50, a2); }
void reset_score_counters__19TPlayerBattleCtrl4PFPv(void* p) { *(s32*)((char*)p + 0x260) = 0; *(s32*)((char*)p + 0x290) = 0; }

s32 set_state__19TPlayerBattleCtrl4PFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x260) = 2;
    return 1;
}

void update_players__19TPlayerBattleCtrl4PFv(void) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != NULL) && (M2C_FIELD(temp_r3, s32 *, 0x30) & 0x800)) {
            ((VObj_803107D0_8031058C *)temp_r3)->v64();
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}

void TPlayerBattleCtrl4P__sub_80310830(void *arg0) {
    char buf[0x40];
    Ent_80310830 *e;
    s32 i;
    VObj_80310830 *p;
    reset_score_counters__19TPlayerBattleCtrl4PFPv(arg0);
    TPlayerBattleCtrl4P__sub_80310C08(arg0);
    init_all__11TWindowCtrlFPvPv(lbl_80475B90, 0x200);
    for (i = 0; i < 4; i++) {
        e = &((Ent_80310830 *)&TPlayerBattleCtrl4P__data_80542E90)[i];
        p = (VObj_80310830 *)TPlayerBattleCtrl4P__sub_801BA74C(e->id);
        if (p != 0) {
            sprintf(buf, lbl_80475B98, lbl_804E8098[e->idx], p->v10());
            init_all__11TWindowCtrlFPvPv(buf, 0x200);
        }
    }
    notify_lobby__19TPlayerBattleCtrl4PFPvPvPv(arg0, lbl_80475BA0, (void *)0x3C);
}

void TPlayerBattleCtrl4P__sub_80310904(void* p) { *(s32*)((char*)p + 0x260) = 1; }
void TPlayerBattleCtrl4P__sub_80310910(Ctl_80310910 *o, s32 frames) {
    s32 i;
    switch (o->state) {
    case 0:
        if (lbl_805D53A0 == TLobby__data_805D53AC) {
            for (i = 0; i < 8; i++) {
                if (o->flags[i] != 0 && frames / 60 == lbl_80511CB0[i]) {
                    o->flags[i] = 0;
                    TPlayerBattleCtrl4P__sub_80310904((void*)(o));
                }
            }
        }
        break;
    case 1:
        set_state__19TPlayerBattleCtrl4PFPv(o);
        break;
    case 2:
        TPlayerBattleCtrl4P__sub_80310830(o);
        break;
    }
}

}
