#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual void m78();
    virtual M2C_UNK m79(s32);
};

struct RecoveredGlobal_80359420___vt__14TObjNpcNgcBase {
    M2C_UNK value;
    u8 remaining[0x174];
};

struct E_803594B4 { s32 a; s32 b; f32 c; };

struct O_803594B4 { u8 pad[0x1c]; s32 idx; E_803594B4 e[2]; };

extern "C" {
s32 TObjFish__sub_8001EDB0(void *, int);
s32 TObjFish__sub_8001EDC4(void *, int);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 fn_80148274(void *);
s32 fn_8014B8A4(void *);
extern RecoveredGlobal_80359420___vt__14TObjNpcNgcBase __vt__14TObjNpcNgcBase;
extern s32 lbl_805D43F0;
u8 *TObjNpcNgcBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
void fn_803594B4(O_803594B4 *self, s32 v, f32 f);
}

extern "C" {

typedef char RecoveredGlobal_80359420___vt__14TObjNpcNgcBase_size[sizeof(RecoveredGlobal_80359420___vt__14TObjNpcNgcBase) == 0x178 ? 1 : -1];
u8 *TObjNpcNgcBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    fn_8014B8A4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TObjNpcNgcBase.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D43F0;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((void *) (arg3), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *) (arg3), (int) (0));
    fn_80148274((void *) (arg0));
    return arg0;
}
void fn_803594B4(O_803594B4 *self, s32 v, f32 f) {
    self->e[self->idx].a = 1;
    self->e[self->idx].b = v;
    self->e[self->idx].c = f;
}

}
