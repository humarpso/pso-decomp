#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Win_801A0DB4 { u8 pad[4]; u16 flags; };

struct Obj_801A0DB4 { u8 pad[0x90]; Win_801A0DB4 *wins[4]; };

struct Ctrl_801A0E38 { u8 pad[0x832]; s16 target; };

struct Obj_801A0E38 { u8 pad[0x90]; void *wins[4]; s32 cur; u8 pad2[4]; u16 id; };

struct Ctrl_801A0CE8 { u8 pad[0x832]; s16 target; };

struct Obj_801A0CE8 { u8 pad[0x90]; void *wins[4]; s32 cur; u8 pad2[4]; u16 id; };

struct Obj_801A0C38 { u8 pad[0x90]; void *parts[1]; };

struct Luker_801A16D8 { u8 pad0[0x18]; void *f18; u8 pad1C[0x74]; void *wins[4]; };

struct VBase_801A1768 { char pad[0x18]; };

struct VObj_801A1768 : VBase_801A1768 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5(void *);
};

struct Luker_801A1768 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *f18;
    u8 pad1C[0x84 - 0x1C];
    s32 f84;
    u8 pad88[0x90 - 0x88];
    s32 wins[4];
    s32 fA0;
    s32 fA4;
    u16 fA8;
    u16 fAA;
    s16 fAC;
    s16 fAE;
    s16 fB0;
    u8 padB2[2];
    s32 fB4;
    s32 fB8;
};

struct Plr_801A0F34 { u8 pad[0x30]; s32 flags; u8 pad34[4]; u8 pos[0xc]; };

struct Pad_801A0F34 { u8 pad[0x20]; u8 btn[0x30]; };

extern "C" {
void allow_rendering__7TObjectFv(void *);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self);
Ctrl_801A0E38 *TPlayerBattleCtrl4P__sub_801BA74C(u16 id);
s32 is_split_screen(void);
void *TWindowSubComCard__sub_8026CBB8(s32 a);
void *TCheckRoomSequence__sub_802664A8(void *p, s32 a, s32 b);
void *check_room_seq_4__16TAdChrSelASlotGCFii(void *p, s32 a);
s32 get_player_floor__6TLobbyFi(s32 p);
s32 TObjLuker__sub_801329B0(s32 f);
void TWindowSubTradeMain__sub_80266200(void *w, s32 a, s32 b, s32 c, s32 d);
void set_flag_40__16TAdChrSelASlotGCFPv(void *w);
void TWindowSubComCard__sub_80265F60(void *w);
void TWindowSubComCard__sub_80265C30(void *w);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0E38(Obj_801A0E38 *self);
Ctrl_801A0E38 *TPlayerBattleCtrl4P__sub_801BA74C(u16 id);
void TWindowSubComCard__sub_802655E4(void *w);
s32 get_player_floor__6TLobbyFi(s32 p);
s32 TObjLuker__sub_801329B0(s32 f);
void TWindowSubTradeMain__sub_80266200(void *w, s32 a, s32 b, s32 c, s32 d);
void TWindowSubComCard__sub_80265F60(void *w);
void TWindowSubComCard__sub_80265C30(void *w);
void TObjLuker__sub_801A0CE8(Obj_801A0CE8 *self);
void set_flag_4__9TObjLukerFPv(void *w);
void disallow_rendering__7TObjectFv(void *w);
void TObjLuker__sub_801A0C38(Obj_801A0C38 *self, u16 i);
void destroy_particle__13TParticleCtrlFPvs(void *, int);
void __dl__7TObjectFPv(void *);
void TWindow__close(void *);
extern u8 __vt__9TObjLuker[];
Luker_801A16D8 *__dt__9TObjLukerFv(Luker_801A16D8 *arg0, s16 arg1);
void TPhotonMagicSquare__sub_801A2640(void *, void *);
extern u8 __vt__9TObjLuker[];
extern s32 lbl_805D34A8;
void *TObjLuker__ct(void *arg0, void *arg1, void *arg2);
s32 is_split_screen(void);
Ctrl_801A0E38 *TPlayerBattleCtrl4P__sub_801BA74C(u16 id);
u16 TCameraCtrl__sub_80068958(s32);
s32 get_instance__11TCameraCtrlFv(void);
f32 TObjPlayer__sub_80141CF8(void *, void *);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 get_map_id__13TRaderMapCoreFPv(void *);
s32 check_flag_100__10TObjPlayerFPv(void *);
extern Pad_801A0F34 lbl_8050E208[];
s32 TObjLuker__sub_801A0F34(void *arg0, s32 *arg1, f32 range);
}

extern "C" {

void *TObjLuker__create(void *arg0);
void render__9TObjLukerFv(void);
void *__nw__7TObjectFUl(int);

void TObjLuker__sub_801A0C38(Obj_801A0C38 *self, u16 i) {
    if (self->parts[i] != 0) {
        set_flag_4__9TObjLukerFPv(self->parts[i]);
        disallow_rendering__7TObjectFv(self->parts[i]);
    }
}

#pragma push
#pragma opt_common_subs off
void TObjLuker__sub_801A0C7C(s32 arg0, s32 arg1) {
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8 *)(arg0 + ((arg1 * 4) & 0x3FFFC));
    temp_r3 = (u8 *)(M2C_FIELD(temp_r31, u8 **, 0x90));
    if (temp_r3 != NULL) {
        if (M2C_FIELD(temp_r3, u16 *, 4) & 4) {
            TBoss3Volopt__sub_8022675C(0x53703, 0U, 0, 0);
        }
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(temp_r31, u8 **, 0x90));
        allow_rendering__7TObjectFv(M2C_FIELD(temp_r31, u8 **, 0x90));
    }
}
#pragma pop

void TObjLuker__sub_801A0CE8(Obj_801A0CE8 *self) {
    s32 target = ((Ctrl_801A0CE8 *)TPlayerBattleCtrl4P__sub_801BA74C(self->id))->target;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] != 0 && target > 0) {
            if (self->cur != target) {
                s32 j;
                for (j = 0; j < 4; j++) {
                    TWindowSubComCard__sub_802655E4(self->wins[j]);
                }
                self->cur = target;
            }
            TWindowSubTradeMain__sub_80266200(self->wins[i], TObjLuker__sub_801329B0(get_player_floor__6TLobbyFi(target)), 2, 0, -1);
            TWindowSubComCard__sub_80265F60(self->wins[i]);
            TWindowSubComCard__sub_80265C30(self->wins[i]);
        }
    }
}

void TObjLuker__sub_801A0DB4(Obj_801A0DB4 *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] != 0) {
            if (!(self->wins[i]->flags & 4)) {
                TBoss3Volopt__sub_8022675C(0x53704, 0, 0, 0);
            }
            set_flag_4__9TObjLukerFPv(self->wins[i]);
            disallow_rendering__7TObjectFv(self->wins[i]);
        }
    }
}

void TObjLuker__sub_801A0E38(Obj_801A0E38 *self) {
    s32 target = TPlayerBattleCtrl4P__sub_801BA74C(self->id)->target;
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->wins[i] == 0 && target > 0) {
            if (is_split_screen() != 0) {
                self->wins[i] = TCheckRoomSequence__sub_802664A8(TWindowSubComCard__sub_8026CBB8(0x33), 1, i);
            } else {
                self->wins[i] = check_room_seq_4__16TAdChrSelASlotGCFii(TWindowSubComCard__sub_8026CBB8(0x33), 1);
            }
            if (self->wins[i] != 0) {
                self->cur = target;
                TWindowSubTradeMain__sub_80266200(self->wins[i], TObjLuker__sub_801329B0(get_player_floor__6TLobbyFi(target)), 2, 0, -1);
                set_flag_40__16TAdChrSelASlotGCFPv(self->wins[i]);
                TWindowSubComCard__sub_80265F60(self->wins[i]);
                TWindowSubComCard__sub_80265C30(self->wins[i]);
                set_flag_4__9TObjLukerFPv(self->wins[i]);
                disallow_rendering__7TObjectFv(self->wins[i]);
            }
        }
    }
}

s32 TObjLuker__sub_801A0F34(void *arg0, s32 *arg1, f32 range) {
    s32 ret;
    s32 flag;
    s32 i;
    Plr_801A0F34 *p;
    void *pos;
    ret = 1;
    flag = 0;
    if (is_split_screen() == 0) {
        return 1;
    }
    i = 0;
    range = range * range;
    do {
        p = (Plr_801A0F34 *)((Ctrl_801A0E38 *(*)(s32))TPlayerBattleCtrl4P__sub_801BA74C)(i);
        if (p != NULL) {
            pos = p->pos;
            if (!(p->flags & 0x800)) {
                if (check_flag_100__10TObjPlayerFPv(p) == 1) {
                    ret = 0;
                }
                if (TObjPlayer__sub_80141CF8(arg0, pos) > range) {
                    ret = 0;
                }
                flag = 0;
            } else {
                flag = 1;
            }
        }
            i++;
    } while (i < 4);
    if (arg1 == NULL) {
        return ret;
    }
    if (ret != 0 && flag == 0) {
        s32 found = 0;
        s32 j;
        for (j = 0; j < get_instance__11TCameraCtrlFv(); j++) {
            p = (Plr_801A0F34 *)((Ctrl_801A0E38 *(*)(s32))TPlayerBattleCtrl4P__sub_801BA74C)(TCameraCtrl__sub_80068958(j));
            if (p != NULL &&
                TWindowShortListCtrl__check_controller_button(lbl_8050E208[get_map_id__13TRaderMapCoreFPv(p)].btn, 4) != 0) {
                found = 1;
                if (arg1 != NULL) {
                    *arg1 = j;
                }
                break;
            }
        }
        if (found != 0) {
            ret = 1;
        } else {
            ret = 0;
        }
    }
    return ret;
}

void render__9TObjLukerFv(void) {  }

extern void *tl_05;

Luker_801A16D8 *__dt__9TObjLukerFv(Luker_801A16D8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        s32 i;
        arg0->f18 = __vt__9TObjLuker;
        for (i = 0; i < 4; i++) {
            if (arg0->wins[i] != 0) {
                TWindow__close(arg0->wins[i]);
                arg0->wins[i] = 0;
            }
        }
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#define self ((Luker_801A1768 *)arg0)
void *TObjLuker__ct(void *arg0, void *arg1, void *arg2) {
    s32 i;
    TPhotonMagicSquare__sub_801A2640(self, arg1);
    self->f18 = __vt__9TObjLuker;
    self->f0 = lbl_805D34A8;
    ((VObj_801A1768 *)self)->m5(arg2);
    self->fB0 = 0;
    self->fAA = 0xFFFF;
    self->fA8 = self->f84;
    if (self->fA8 > 4) {
        self->fA8 = 0xFFFF;
    }
    for (i = 0; i < 4; i++) {
        self->wins[i] = 0;
    }
    self->fB4 = 1;
    self->fA4 = 0;
    self->fAC = 0;
    self->fA0 = -1;
    self->fB8 = 0;
    return self;
}
#undef self

void *TObjLuker__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjLuker__ct((void *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

}
