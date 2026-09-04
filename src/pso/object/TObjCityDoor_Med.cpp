#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjCityDoor_Med__create(void *arg0);
void *dt__16TObjCityDoor_MedFPvs(void *arg0, s16 arg1);
void *TObjCityDoor_Med__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_80182D24(void *, int);

extern void *tl_05;

void *TObjCityDoor_Med__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xBC);
    if (o != NULL) {
        o = TObjCityDoor_Med__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK lbl_804B5A38[];

void *dt__16TObjCityDoor_MedFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5A38;
        TObjPlayer__sub_80182D24(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x8018208C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_8018208C { char pad[0x18]; };
struct VObj_8018208C : Base_8018208C {
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
};

extern "C" {

void TObjCityDoor_Med__sub_8018208C(void *arg0);

void TObjCityDoor_Med__sub_8018208C(void *arg0) {
    struct VObj_8018208C *o = (struct VObj_8018208C *)arg0;
    o->m19();
}

}
#endif
#endif
