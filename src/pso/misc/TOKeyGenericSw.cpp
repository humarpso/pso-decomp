#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8016CB88_8016CA60 { char pad[0x18]; };
struct VObj_8016CB88_8016CA60 : Base_8016CB88_8016CA60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual void m18();
};
struct Base_8016CBE4_8016CA60 { char pad[0x18]; };
struct VObj_8016CBE4_8016CA60 : Base_8016CBE4_8016CA60 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual void m18();
};

extern "C" {

void TOKeyGenericSw__vt14(void *arg0);
void TOKeyGenericSw__vt15(void *arg0);
void TOKeyGenericSw__vt23(void);
void *__dt__14TOKeyGenericSwFv(void *arg0, s16 arg1);
void *create__14TOKeyGenericSwFPv(void *arg0);
void *TOKeyGenericSw__ct(void *, void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK update_anim_phase__17TOBarrierEnergy01FPv();

void TOKeyGenericSw__vt23(void) {  }

void TOKeyGenericSw__vt15(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_8016CB88_8016CA60*)arg0)->m18();
    M2C_FIELD(arg0, s32 *, 0xF4) = 1;
    M2C_FIELD(arg0, s32 *, 0xEC) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, s32 *, 0xF4);
}

void TOKeyGenericSw__vt14(void *arg0) {
    update_anim_phase__17TOBarrierEnergy01FPv();
    ((VObj_8016CBE4_8016CA60*)arg0)->m18();
    M2C_FIELD(arg0, s32 *, 0xEC) = 1;
    M2C_FIELD(arg0, s32 *, 0xF4) = 0;
    M2C_FIELD(arg0, s32 *, 0xF8) = 0;
    M2C_FIELD(arg0, s32 *, 0xF0) = (s32) M2C_FIELD(arg0, s32 *, 0xEC);
}

extern void *tl_05;

void *create__14TOKeyGenericSwFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyGenericSw__ct(o, tl_05, arg0);
    }
    return o;
}

extern M2C_UNK __vt__14TOKeyGenericSw[];

void *__dt__14TOKeyGenericSwFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyGenericSw;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
