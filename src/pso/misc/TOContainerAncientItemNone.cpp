#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8015BE34 { char pad[0x18]; };
struct VObj_8015BE34 : Base_8015BE34 {
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
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
};

extern "C" {

void *create__26TOContainerAncientItemNoneFPv(void *arg0);
void TOContainerAncientItemNone__vt4(void *arg0, s16 *arg1, s32 arg2);
void *__dt__26TOContainerAncientItemNoneFv(void *arg0, s16 arg1);
void *TOContainerAncientItemNone__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__26TOContainerAncientItemRareFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK TLobby__sub_8020C5E0(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TOContainerAncientItemNone__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 1) {
        if (arg2 != 0) {
            ((VObj_8015BE34 *)arg0)->m77();
        }
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        TLobby__sub_8020C5E0(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void *create__26TOContainerAncientItemNoneFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x368);
    if (o != NULL) {
        o = TOContainerAncientItemNone__ct(o, arg0);
    }
    return o;
}

extern M2C_UNK __vt__26TOContainerAncientItemNone[];

void *__dt__26TOContainerAncientItemNoneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TOContainerAncientItemNone;
        __dt__26TOContainerAncientItemRareFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
