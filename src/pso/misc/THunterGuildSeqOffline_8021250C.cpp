#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802125BC { char pad[0x18]; };
struct VObj_802125BC : Base_802125BC {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4();
    virtual int m5();
    virtual int m6();
    virtual int m7(int, int);
    virtual int m8();
};

extern "C" {

void THunterGuildSeqOffline__sub_8021250C(void);
void THunterGuildSeqOffline__sub_80212564(void);
void THunterGuildSeqOffline__sub_802125BC(void *arg0);
void THunterGuildSeqOffline__sub_80212644(void);
void THunterGuildSeqOffline__sub_8021269C(void);
void THunterGuildSeqOffline__sub_802126C4(void);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
int fn_80073DC4(void *, int);

struct Base_8021250C { char pad[0x18]; };
struct VObj_8021250C : Base_8021250C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_8021250C *lbl_805D6188;

void THunterGuildSeqOffline__sub_8021250C(void) {
    if (lbl_805D6188 != NULL) {
        lbl_805D6188->m7(0xC, 1);
        M2C_FIELD(lbl_805D6188, s32 *, 0x38) = 0;
        fn_80073DC4((void *)(lbl_805D6188), (int)(5));
    }
}

struct Base_80212564 { char pad[0x18]; };
struct VObj_80212564 : Base_80212564 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80212564 *lbl_805D6188;

void THunterGuildSeqOffline__sub_80212564(void) {
    if (lbl_805D6188 != NULL) {
        lbl_805D6188->m7(6, 1);
        M2C_FIELD(lbl_805D6188, s32 *, 0x38) = 4;
        fn_80073DC4((void *)(lbl_805D6188), (int)(5));
    }
}

void THunterGuildSeqOffline__sub_802125BC(void *arg0) {
    VObj_802125BC *o = (VObj_802125BC *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m7(0x19, 1);
        fn_80073DC4((void *)(arg0), (int)(4));
    }
}

struct Base_80212644 { char pad[0x18]; };
struct VObj_80212644 : Base_80212644 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80212644 *lbl_805D6188;

void THunterGuildSeqOffline__sub_80212644(void) {
    if (lbl_805D6188 != NULL) {
        lbl_805D6188->m7(6, 1);
        M2C_FIELD(lbl_805D6188, s32 *, 0x38) = 3;
        fn_80073DC4((void *)(lbl_805D6188), (int)(5));
    }
}

extern s32 lbl_805D6188;

void THunterGuildSeqOffline__sub_8021269C(void) {
    fn_80073DC4((void *)(lbl_805D6188), (int)(9));
}

struct Base_802126C4 { char pad[0x18]; };
struct VObj_802126C4 : Base_802126C4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern VObj_802126C4 *lbl_805D6188;

void THunterGuildSeqOffline__sub_802126C4(void) {
    if (lbl_805D6188 != NULL) {
        lbl_805D6188->m7(0x19, 1);
        fn_80073DC4((void *)(lbl_805D6188), (int)(4));
    }
}

}
