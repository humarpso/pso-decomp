#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_0c879f { char pad[0x18]; };

struct HitInfo_8023C6B4 { s32 type; f32 power; };

struct VObj_18_0c879f : VBase_18_0c879f {
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
    virtual void m21(void *, HitInfo_8023C6B4 *, void *, s32, s32);
};

struct Obj_8023C6B4 { u8 pad[0x1C]; void *source; u8 pad20[0xCC - 0x20]; f32 power; };

extern "C" {
s32 test_elt_flag__10TObjPlayerFPvii(void *, s32, s32);
void TTecZonde__vt6(Obj_8023C6B4 *arg0, VObj_18_0c879f *arg1);
}

extern "C" {

void create_tec_zonde__10TObjPlayerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TTecZonde__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void create_tec_zonde__10TObjPlayerFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x18C);
    if (o != NULL) {
        TTecZonde__ct(o, arg0, arg1, arg2, arg3);
    }
}
void TTecZonde__vt6(Obj_8023C6B4 *arg0, VObj_18_0c879f *arg1) {
    HitInfo_8023C6B4 h;
    h.type = 3;
    h.power = arg0->power;
    if (test_elt_flag__10TObjPlayerFPvii(arg1, 0, 0x80) == 0) {
        HitInfo_8023C6B4 c = h;
        arg1->m21(arg0->source, &c, 0, 6, -1);
    }
}

}
