#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_Sub { char pad[0x14]; };

struct V_Sub : Base_Sub {
    PADV4
    PADV
    virtual s32 m5();
};

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
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual M2C_UNK m63(M2C_UNK, void *);
};

extern "C" {
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);
void TObjEneBalClaw__sub_8008D5C0(u8 *arg0);
}

extern "C" {

void TEndingAB__sub_8008D5A0(void);
void TEndingPic__sub_8008D5AC(void);
int TEnding__sub_8008D5B8(void);
s32 TObjEneBalClaw__vt34(s32 arg0);
s32 TObjEneBalClaw__vt37(s32 arg0);
s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016FF8();

    extern int TEndingAB__data_805D4F10;
void TEndingAB__sub_8008D5A0(void) { TEndingAB__data_805D4F10 = 1; }

    extern int TEndingPic__data_805D6EE0;
void TEndingPic__sub_8008D5AC(void) { TEndingPic__data_805D6EE0 = 1; }

    extern int lbl_805D4F08;
int TEnding__sub_8008D5B8(void) {  return lbl_805D4F08; }

void TObjEneBalClaw__sub_8008D5C0(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
    }
}

s32 TObjEneBalClaw__vt37(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjEneBalClaw__sub_8008D5C0((u8 *)(arg0));
        return 1;
    }
    return 0;
}

s32 TObjEneBalClaw__vt34(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjEneBalClaw__sub_8008D5C0((u8 *)(arg0));
        return 1;
    }
    return 0;
}

}
