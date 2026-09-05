#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
};
extern "C" {
int TObjFogCollision__sub_80153F68(void *);
int TObjFogCollision__sub_80153F70(void);
void TObjFogCollision__sub_80153D2C(u8 *arg0);
}

extern "C" {

void *TObjFogCollisionSwitch__create(void *arg0);
int TObjFogCollision__sub_80153F70(void);
void TObjFogCollision__vt11(u8 *arg0);
s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1);
void *TObjFogCollisionSwitch__ct(void *, void *, void *);
f32 TObjPlayer__sub_80141CF8(void *, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjFogCollisionSwitch__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x98);
    if (o != NULL) {
        o = TObjFogCollisionSwitch__ct(o, tl_05, arg0);
    }
    return o;
}

extern const f32 lbl_805DB26C;

void TObjFogCollision__sub_80153D2C(u8 *arg0) {
    if (((s32)TObjFogCollision__sub_80153F70()) != 0) {
        ((VObj_18 *)(arg0))->m12();
    }
    if (((s32)TObjFogCollision__sub_80153F68((void *)((void *) (arg0)))) != 0) {
        ((VObj_18 *)(arg0))->m13();
    }
}

s32 check_collision__16TObjFogCollisionFPvUs(u8 *arg0, u16 arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f31;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg1);
    if (temp_r3 != 0) {
        temp_f0 = M2C_FIELD(arg0, f32 *, 0x68);
        temp_f31 = temp_f0 * temp_f0;
        temp_f1 = TObjPlayer__sub_80141CF8(arg0 + 0x38, temp_r3 + 0x38);
        if (temp_f31 > temp_f1) {
            return 1;
        }
        if ((lbl_805DB26C + temp_f31) < temp_f1) {
            M2C_FIELD(arg0, s32 *, 0x94) = 0x3C;
        }
        goto block_5;
    }
block_5:
    return 0;
}

void TObjFogCollision__vt11(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0;
        return;
    }
    if (temp_r0 >= 0x80) {
        M2C_FIELD(arg0, s32 *, 0x84) = 0x7F;
    }
}

int TObjFogCollision__sub_80153F68(void * _w0) { return 0; }
int TObjFogCollision__sub_80153F70(void) { return 0; }

}
