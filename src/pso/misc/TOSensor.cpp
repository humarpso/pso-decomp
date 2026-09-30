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
s32 TObjPlayer__sub_800196EC();
void queue_destruction__7TObjectFv(void *);
void finalize_and_send_60__6TLobbyFPv(void *);
void init_6x05_switch_changed__6TLobbyFPv(void *);
void TOSensor__sub_8017546C(u8 *arg0);
void TOSensor__sub_80175514(u8 *arg0);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DB980;
void TOSensor__sub_801755BC(Obj_801755BC *self);
s32 obj_testFlags30(void *, s32);
f32 TObjPlayer__sub_80141CF8(void *, void *);
Player_801756C4 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
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
            pkt.area = TObjPlayer__sub_800196EC();
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
        pl = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        switch (self->mode) {
        case 1:
            if (pl != NULL && obj_testFlags30(pl, 0x400000) != 0) {
                if (TObjPlayer__sub_80141CF8(pl->pos, self->pos) < self->range * self->range) {
                    self->state = 1;
                }
            }
            break;
        case 2:
            if (lbl_805D53A0 == get_window_id__11TWindowCtrlFv() && pl != NULL) {
                if (TObjPlayer__sub_80141CF8(pl->pos, self->pos) < self->range * self->range) {
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
