#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_801755BC { u8 pad[0x18]; };

struct Obj_801755BC : VBase_801755BC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual s32 m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    u16 id;
    u8 pad1e[0x3C - 0x1E];
    f32 y3c;
    u8 pad40[0x54 - 0x40];
    f32 y54;
    u8 pad58[0xC8 - 0x58];
    s32 switchId;
    u8 padcc[0xD4 - 0xCC];
    s32 state;
};

struct Pkt_801755BC { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Obj_801756C4 { u8 pad[0x38]; f32 pos[3]; u8 pad44[0xCC - 0x44]; f32 range; s32 mode; s32 state; };

struct Player_801756C4 { u8 pad[0x38]; f32 pos[3]; };

extern "C" {
extern const f32 lbl_805DB994;
extern const f32 lbl_805DB998;
void TOSensorAncient01__vt14(u8 *arg0);
extern const f32 lbl_805DB988;
extern const f32 lbl_805DB98C;
extern const f32 lbl_805DB990;
void TOSensorAncient01__sub_8017585C(u8 *arg0);
u32 get_global_state__14TOKeyMachine01Fv();
void TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void TOSensor__sub_8017546C(u8 *arg0);
u32 get_global_state__14TOKeyMachine01Fv();
void TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
void TOSensor__sub_80175514(u8 *arg0);
s32 get_current_floor();
void queue_destruction__7TObjectFv(void *);
void finalize_and_send_60__6TLobbyFPv(void *);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void TOSensor__sub_8017546C(u8 *arg0);
void TOSensor__sub_80175514(u8 *arg0);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DB980;
void TOSensor__sub_801755BC(Obj_801755BC *self);
s32 obj_testFlags30(void *, s32);
f32 horizontal_distance_squared(void *, void *);
Player_801756C4 *get_player_by_client_id(s32);
u16 get_window_id__11TWindowCtrlFv();
extern s32 lbl_805D53A0;
s32 TOSensor__sub_801756C4(Obj_801756C4 *self);
}

extern "C" {

void TOSensorAncient01__vt15(void *arg0);
void TOSensorAncient01__vt23(void);
void *TOSensor__ct(void *arg0);
void TOSensor__sub_80175468(void);
void TOSensor__vt14(void);
void TOSensor__vt15(void);
void *__dt__8TOSensorFv(void *arg0, s16 arg1);
void render__8TOSensorFv(void);
void TOKey__ct(void *);
void TORockCave__sub_80175460(void);
void TORockCave__sub_80175464(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);

void TOSensor__sub_80175468(void) {  }

extern M2C_UNK __vt__8TOSensor[];

void TOSensor__sub_8017546C(u8 *arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
    case 4:
    case 5:
        TOTrapAncient01__sub_80226578(0x43C1C, arg0, arg0 + 0x38, 0, 0);
        return;
    case 6:
    case 7:
        TOTrapAncient01__sub_80226578(0x4004BC13, arg0, arg0 + 0x38, 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        TOTrapAncient01__sub_80226578(0x46419, arg0, arg0 + 0x38, 0, 0);
    case 0:
        return;
    case 1:
        return;
    case 2:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

void TOSensor__sub_80175514(u8 *arg0) {
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 3:
    case 4:
    case 5:
        TOTrapAncient01__sub_80226578(0x4411D, arg0, arg0 + 0x38, 0, 0);
        return;
    case 6:
    case 7:
        TOTrapAncient01__sub_80226578(0x4004C114, arg0, arg0 + 0x38, 0, 0);
        return;
    case 8:
    case 9:
    case 10:
        TOTrapAncient01__sub_80226578(0x4641A, arg0, arg0 + 0x38, 0, 0);
    case 0:
        return;
    case 1:
        return;
    case 2:
        return;
    case 11:
        return;
    case 12:
        return;
    case 13:
        return;
    case 14:
        return;
    case 15:
        return;
    }
}

void TOSensor__sub_801755BC(Obj_801755BC *self) {
    self->m12();
    if (self->state != 1) {
        self->m15();
        TOSensor__sub_8017546C((u8 *)self);
        if (self->m13() == 1) {
            Pkt_801755BC pkt;
            self->m16();
            init_6x05_switch_changed__6TLobbyFPv(&pkt);
            pkt.object = self->id;
            pkt.zero = lbl_805D53A0;
            pkt.switchId = self->switchId;
            pkt.area = get_current_floor();
            pkt.flags = 1;
            finalize_and_send_60__6TLobbyFPv(&pkt);
        }
    } else {
        self->m14();
        TOSensor__sub_80175514((u8 *)self);
    }
    if (lbl_805DB980 + self->y54 < self->y3c) {
        queue_destruction__7TObjectFv(self);
    }
}

s32 TOSensor__sub_801756C4(Obj_801756C4 *self) {
    Player_801756C4 *pl;
    if (self->state != 1) {
        pl = get_player_by_client_id(lbl_805D53A0);
        switch (self->mode) {
        case 1:
            if (pl != NULL && obj_testFlags30(pl, 0x400000) != 0) {
                if (horizontal_distance_squared(pl->pos, self->pos) < self->range * self->range) {
                    self->state = 1;
                }
            }
            break;
        case 2:
            if (lbl_805D53A0 == get_window_id__11TWindowCtrlFv() && pl != NULL) {
                if (horizontal_distance_squared(pl->pos, self->pos) < self->range * self->range) {
                    self->state = 1;
                }
            }
            break;
        }
    }
    return self->state;
}

void *__dt__8TOSensorFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOSensor;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__8TOSensor[];
extern void *lbl_805D3140;

void *TOSensor__ct(void *arg0) {
    TOKey__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TOSensor;
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 80), (void *)((char *)arg0 + 56));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3140;
    return arg0;
}

void TOSensor__vt14(void) {  }
void TOSensor__vt15(void) {  }
void render__8TOSensorFv(void) {  }

void TOSensorAncient01__vt23(void) {  }

#pragma push
#pragma opt_common_subs off
void TOSensorAncient01__sub_8017585C(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xF4) & 1) {
        M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xF0) + lbl_805DB988);
        if (lbl_805DB98C < M2C_FIELD(arg0, f32 *, 0xF0)) {
            M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB98C;
            M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) & 0xFFFFFFFE);
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xF0) - lbl_805DB988);
        if (M2C_FIELD(arg0, f32 *, 0xF0) < lbl_805DB990) {
            M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB990;
            M2C_FIELD(arg0, s32 *, 0xF4) = (s32) (M2C_FIELD(arg0, s32 *, 0xF4) | 1);
        }
    }
}
#pragma pop

void TOSensorAncient01__vt15(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0xEC);
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) (temp_r4 + 0x28F);
    TOSensorAncient01__sub_8017585C((u8 *)((s32) arg0));
}
void TOSensorAncient01__vt14(u8 *arg0) {
    s32 temp_r3;
    M2C_FIELD(arg0, s32 *, 0xEC) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0xEC) + lbl_805DB994);
    TOSensorAncient01__sub_8017585C((u8 *)((s32)(arg0)));
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 > 0) {
        M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (temp_r3 - 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DB998);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct VBase_80175994 { char pad[0x18]; };
struct VObj_80175994 : VBase_80175994 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80175E2C___vt__17TOSensorAncient01 { M2C_UNK value; u8 remaining[0x6C]; };

struct Model_80175D0C { u8 pad[0xC]; s32 c; };

struct Obj_80175D0C { u8 pad[0x42C]; Model_80175D0C *model; };

struct Buf_80175D0C { s32 a; s32 b; s32 c; s32 d; };

extern "C" {
M2C_UNK init_switch_id__5TOKeyFPv(void *);
extern M2C_UNK __vt__17TOSensorAncient01[];
extern s32 lbl_805D3148;
extern u32 lbl_805D5A88;
extern const f32 lbl_805DB990;
extern const f32 lbl_805DB998;
extern const f32 lbl_805DB9A8;
extern const f32 lbl_805DB9AC;
u8 *TOSensorAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void *alloc_buffer__11TOBoss4RockFPv(s32);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_804429E8[];
extern u8 lbl_80442A00[];
extern u8 lbl_80442A18[];
extern u8 lbl_804B41F0[];
extern u32 lbl_805D5A88;
extern void *lbl_805D5A8C;
extern s32 lbl_805D5A90;
extern s32 lbl_805D5A94;
extern s32 lbl_805D5A98;
extern s32 lbl_805D5A9C;
void TOSensorAncient01__sub_80175D0C(void);
}

extern "C" {

void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1);
void *create__17TOSensorAncient01FPv(void *arg0);
void destroy__17TOSensorAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
s32 set_global_param__8TObjFishFi(s32);
void draw_ginja_model(s32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
struct Pair_80175994 { s32 a; s32 b; };
extern const f32 lbl_805DB99C;
extern const f32 lbl_805DB9A0;
extern const f32 lbl_805DB9A4;

void render__17TOSensorAncient01Fv(u8 *arg0) {
    u8 *temp_r30;
    u8 *temp_r30_2;
    u8 *temp_r30_3;
    u8 *temp_r30_4;
    u8 *temp_r30_5;
    u8 *temp_r30_6;
    u8 *temp_r30_7;
    u8 *temp_r30_8;
    u8 *temp_r30_9;

    if (((VObj_80175994 *)arg0)->m8(M2C_FIELD(arg0, f32 *, 0xC0), M2C_FIELD(arg0, f32 *, 0xC4)) != 0) {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
        set_global_param__8TObjFishFi(M2C_FIELD(lbl_805D5A8C, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x8C) * 8)));
        temp_r30 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x34));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r30 + 8));
        draw_ginja_model(M2C_FIELD(temp_r30, s32 *, 4));
        begin_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        temp_r30_2 = (u8 *)(M2C_FIELD(temp_r30, u8 **, 0x2C));
        if ((f32) M2C_FIELD(arg0, s32 *, 0xE8) < lbl_805DB99C) {
            Pair_80175994 *tbl = (Pair_80175994 *)lbl_805D5A8C;
            set_global_param__8TObjFishFi(tbl[lbl_805D5A9C].b);
        }
        TOHangerMachine01__sub_803D9C00((void *) (temp_r30_2 + 8));
        draw_ginja_model(M2C_FIELD(temp_r30_2, s32 *, 4));
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        temp_r30_3 = (u8 *)(M2C_FIELD(temp_r30_2, u8 **, 0x30));
        if ((f32) M2C_FIELD(arg0, s32 *, 0xE8) < lbl_805DB9A0) {
            Pair_80175994 *tbl = (Pair_80175994 *)lbl_805D5A8C;
            set_global_param__8TObjFishFi(tbl[lbl_805D5A9C].b);
        }
        TOHangerMachine01__sub_803D9C00((void *) (temp_r30_3 + 8));
        draw_ginja_model(M2C_FIELD(temp_r30_3, s32 *, 4));
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        temp_r30_4 = (u8 *)(M2C_FIELD(temp_r30_3, u8 **, 0x30));
        if ((f32) M2C_FIELD(arg0, s32 *, 0xE8) < lbl_805DB9A4) {
            Pair_80175994 *tbl = (Pair_80175994 *)lbl_805D5A8C;
            set_global_param__8TObjFishFi(tbl[lbl_805D5A9C].b);
        }
        TOHangerMachine01__sub_803D9C00((void *) (temp_r30_4 + 8));
        draw_ginja_model(M2C_FIELD(temp_r30_4, s32 *, 4));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        temp_r30_5 = (u8 *)(M2C_FIELD(temp_r30_4, u8 **, 0x30));
        TOHangerMachine01__sub_803D9C00((void *) (temp_r30_5 + 8));
        rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0xEC)));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model(M2C_FIELD(temp_r30_5, s32 *, 4));
        end_effect_render__13TParticleCtrlFv();
        TObjPlayer__sub_803D9B2C();
        temp_r30_6 = (u8 *)(M2C_FIELD(temp_r30_5, u8 **, 0x2C));
        translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r30_6, f32 *, 8) + M2C_FIELD(arg0, f32 *, 0xF0)), (f32) (M2C_FIELD(temp_r30_6, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r30_6, f32 *, 0x10)));
        draw_ginja_model(M2C_FIELD(temp_r30_6, s32 *, 4));
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        temp_r30_7 = (u8 *)(M2C_FIELD(temp_r30_6, u8 **, 0x30));
        translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r30_7, f32 *, 8)), (f32) (M2C_FIELD(temp_r30_7, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r30_7, f32 *, 0x10) - M2C_FIELD(arg0, f32 *, 0xF0)));
        draw_ginja_model(M2C_FIELD(temp_r30_7, s32 *, 4));
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        temp_r30_8 = (u8 *)(M2C_FIELD(temp_r30_7, u8 **, 0x30));
        translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r30_8, f32 *, 8) - M2C_FIELD(arg0, f32 *, 0xF0)), (f32) (M2C_FIELD(temp_r30_8, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r30_8, f32 *, 0x10)));
        draw_ginja_model(M2C_FIELD(temp_r30_8, s32 *, 4));
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        temp_r30_9 = (u8 *)(M2C_FIELD(temp_r30_8, u8 **, 0x30));
        translate_matrix((int) (0), (f32) (M2C_FIELD(temp_r30_9, f32 *, 8)), (f32) (M2C_FIELD(temp_r30_9, f32 *, 0xC)), (f32) (M2C_FIELD(temp_r30_9, f32 *, 0x10) + M2C_FIELD(arg0, f32 *, 0xF0)));
        draw_ginja_model(M2C_FIELD(temp_r30_9, s32 *, 4));
        pop_matrix();
        pop_matrix();
        pop_matrix();
    }
}

extern void *tl_05;

void *create__17TOSensorAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOSensorAncient01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 lbl_805D5A88;
extern void *lbl_805D5A8C;

void destroy__17TOSensorAncient01Fv(void) {
    if ((void *) lbl_805D5A8C != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 0));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 0xC));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 8));
        if ((void *) lbl_805D5A8C != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5A8C);
            lbl_805D5A8C = NULL;
        }
    }
    if ((u32) lbl_805D5A88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A88, 1);
        lbl_805D5A88 = 0U;
    }
}

extern M2C_UNK __vt__17TOSensorAncient01[];

void TOSensorAncient01__sub_80175D0C(void) {
    void *p;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = TLobby__sub_80020004(p, 1, lbl_804B41F0, 0, 0, 0);
    }
    lbl_805D5A88 = (u32)p;
    lbl_805D5A8C = alloc_buffer__11TOBoss4RockFPv(0x10);
    ((Buf_80175D0C *)lbl_805D5A8C)->b = ((Obj_80175D0C *)lbl_805D5A88)->model->c;
    ((Buf_80175D0C *)lbl_805D5A8C)->a = TLanguage__sub_801E4874(lbl_804429E8);
    ((Buf_80175D0C *)lbl_805D5A8C)->d = TLanguage__sub_801E4874(lbl_80442A00);
    ((Buf_80175D0C *)lbl_805D5A8C)->c = TLanguage__sub_801E4874(lbl_80442A18);
    lbl_805D5A90 = 0;
    lbl_805D5A94 = 0;
    lbl_805D5A98 = 0;
    lbl_805D5A9C = 0;
}

void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSensorAncient01;
        ((void (*)(void *, int))__dt__8TOSensorFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma opt_common_subs off
u8 *TOSensorAncient01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    ((s32 (*)(void *))TOSensor__ct)((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80175E2C___vt__17TOSensorAncient01 *)&__vt__17TOSensorAncient01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3148;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    init_switch_id__5TOKeyFPv((void *) (arg0));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    } else if (temp_r0 >= 2) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 1;
    }
    M2C_FIELD(arg0, u8 **, 0x34) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A88), u8 **, 0x42C), void **, 8));
    M2C_FIELD(arg0, u8 **, 0xBC) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD((*(u8 * *)&lbl_805D5A88), u8 **, 0x430), void **, 4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xBC), u32 *, 4) - lbl_805DB998);
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) lbl_805DB998;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DB9A8;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (lbl_805DB9AC + M2C_FIELD(arg0, f32 *, 0x68));
    if (M2C_FIELD(arg0, f32 *, 0xCC) < lbl_805DB990) {
        M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805DB990;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x88) < 0) {
        M2C_FIELD(arg0, s32 *, 0xD0) = 2;
    } else {
        M2C_FIELD(arg0, s32 *, 0xD0) = 1;
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = 0x78;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) lbl_805DB990;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    return arg0;
}
#pragma pop

}
