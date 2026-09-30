#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8017B8A0 {
    u8 pad[0x18];
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct B_8017B8D4 { u8 pad[0x18]; };

struct V_8017B8D4 : B_8017B8D4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(s32 a, f32 b);
};

struct Sub_8017BAFC { u8 pad[4]; s16 f4; };

struct Obj_8017BAFC { u8 pad0[0x1C]; u16 f1C; u8 pad1[0x62]; Sub_8017BAFC *sub; u8 pad2[0x2A2]; s16 state; u8 pad3[0x14]; s32 f33C; };

struct Pkt_8017BAFC { u16 a; u16 b; s32 c; s32 d; u16 e; s16 f; };

extern "C" {
void fn_8017B908(u8 *arg0);
void fn_8017B950(u8 *arg0);
void fn_8017B984(u8 *arg0);
extern const f32 lbl_805DBA78;
void TOTrapAncient02R__vt21(Obj_8017B8A0 *self);
extern const f32 lbl_805DBA78;
void TOTrapAncient02R__vt22(V_8017B8D4 *self);
s32 TLobby__sub_80156A80(void *, void *, int);
void update_and_send__11TOVS2Wall01FPv(void *);
void init__11TOVS2Wall01FPv(void *);
void TOVS2Wall01__sub_8017BAFC(Obj_8017BAFC *arg0, u16 arg1);
}

extern "C" {

void TOVS2Wall01__sub_8017B9AC(void);

void TOTrapAncient02R__vt21(Obj_8017B8A0 *self) {
    self->m20(0, lbl_805DBA78);
}

void TOTrapAncient02R__vt22(V_8017B8D4 *self) {
    self->m20(0, lbl_805DBA78);
}

void fn_8017B908(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x368) = (s32) M2C_FIELD(arg0, f32 *, 0x6C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x368);
    if (temp_r0 < 1) {
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        return;
    }
    if (temp_r0 > 0x100) {
        M2C_FIELD(arg0, s32 *, 0x368) = 0x100;
    }
}

void fn_8017B950(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x35C) = (s32) M2C_FIELD(arg0, s32 *, 0x8C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x35C);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 0;
        return;
    }
    if (temp_r0 >= 5) {
        M2C_FIELD(arg0, s32 *, 0x35C) = 4;
    }
}

void fn_8017B984(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x364) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x364);
    if ((temp_r0 < 0) || (temp_r0 >= 0x100)) {
        M2C_FIELD(arg0, s32 *, 0x364) = -1;
    }
}

void TOVS2Wall01__sub_8017B9AC(void) {  }
void TOVS2Wall01__sub_8017BAFC(Obj_8017BAFC *arg0, u16 arg1) {
    s16 sp8;
    Pkt_8017BAFC pkt;
    s16 v = arg0->state;
    Sub_8017BAFC *sub;
    if (arg1 == 1) {
        v = 1;
    }
    if ((arg0->sub != NULL) && (TLobby__sub_80156A80(arg0, &sp8, 1) != 0)) {
        sp8 = v;
        TLobby__sub_80156A80(arg0, &sp8, 0);
        sub = arg0->sub;
        init__11TOVS2Wall01FPv(&pkt);
        pkt.b = arg0->f1C;
        pkt.c = sp8;
        pkt.d = sub->f4;
        pkt.e = arg1;
        pkt.f = arg0->f33C;
        update_and_send__11TOVS2Wall01FPv(&pkt);
    }
}

}
