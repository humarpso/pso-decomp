#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8031A3D8_lbl_80542FDC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct B_8031A178 { u8 pad[0x18]; };

struct V_8031A178 : B_8031A178 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void f30();
    virtual void f31();
    virtual void f32();
    virtual void f33();
    virtual void f34();
    virtual void f35();
    virtual void f36();
    virtual void f37();
    virtual void f38();
    virtual void f39();
    virtual void f40();
    virtual void f41();
    virtual void f42();
    virtual void f43();
    virtual void f44();
    virtual void f45();
    virtual void f46();
    virtual void f47();
    virtual void f48();
    virtual void f49();
    virtual void f50();
    virtual void f51();
    virtual void f52();
    virtual void f53();
    virtual void f54();
    virtual void f55();
    virtual void f56();
    virtual void f57();
    virtual void f58();
    virtual void f59();
    virtual void f60();
    virtual void f61();
    virtual void f62();
    virtual void f63();
    virtual void f64();
    virtual void f65();
    virtual void f66();
    virtual void f67();
    virtual void f68();
    virtual void f69();
    virtual void f70();
    virtual void f71();
    virtual void f72();
    virtual void f73();
    virtual void f74();
    virtual void f75();
    virtual void f76();
    virtual void f77();
    virtual void f78();
    virtual void f79();
    virtual void f80();
    virtual void f81();
    virtual void f82();
    virtual void f83();
    virtual void f84();
    virtual void f85();
    virtual void f86();
    virtual void f87();
    virtual void f88();
    virtual void f89();
    virtual void f90();
    virtual void f91();
    virtual void f92();
    virtual void f93();
    virtual void f94();
    virtual void f95();
    virtual void f96();
    virtual void f97();
    virtual void f98();
    virtual void f99();
    virtual void f100();
    virtual void f101();
    virtual void f102();
    virtual void f103();
    virtual void f104();
    virtual void f105();
    virtual void f106();
    virtual void f107();
    virtual void f108();
    virtual void f109();
    virtual void f110();
    virtual void f111(s32);
};

extern "C" {
s32 initialize_enemy_state__9TObjEneDDFPv(void *, int);
s32 TObjEneMe3SinowZoa__sub_8031A454(void *);
extern RecoveredGlobal_8031A3D8_lbl_80542FDC lbl_80542FDC;
extern u8 *TObjEneMe3SinowZoa__data_805D6AD8;
void TObjEneMe3SinowZoa__sub_8031A3D8(u8 *arg0);
M2C_UNK TObjEneMe3SinowZoa__sub_80316C3C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_803170F0(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80317254(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80317B50(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80317F90(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_803181A8(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_803182F8(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_8031845C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80318564(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_8031884C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80318C0C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80318F7C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_8031955C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80319748(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_803199E0(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80319B8C(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80319C70(void *, s32);
M2C_UNK TObjEneMe3SinowZoa__sub_80319E74(void *, s32);
void TObjEneMe3SinowZoa__sub_8031A178(u8 *arg0, u32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8031A3D8_lbl_80542FDC_size[sizeof(RecoveredGlobal_8031A3D8_lbl_80542FDC) == 0x14 ? 1 : -1];

void TObjEneMe3SinowZoa__sub_8031A178(u8 *arg0, u32 arg1, s32 arg2) {
    V_8031A178 *v = (V_8031A178 *) arg0;
    switch (arg1) {
    case 0:
        v->f111(arg2);
        return;
    case 1:
        TObjEneMe3SinowZoa__sub_80319E74(arg0, arg2);
        return;
    case 3:
        TObjEneMe3SinowZoa__sub_80319B8C(arg0, arg2);
        return;
    case 2:
        TObjEneMe3SinowZoa__sub_80319C70(arg0, arg2);
        return;
    case 4:
        TObjEneMe3SinowZoa__sub_803199E0(arg0, arg2);
        return;
    case 5:
        TObjEneMe3SinowZoa__sub_80319748(arg0, arg2);
        return;
    case 6:
        TObjEneMe3SinowZoa__sub_8031955C(arg0, arg2);
        return;
    case 7:
        TObjEneMe3SinowZoa__sub_80318F7C(arg0, arg2);
        return;
    case 8:
        TObjEneMe3SinowZoa__sub_80318C0C(arg0, arg2);
        return;
    case 9:
        TObjEneMe3SinowZoa__sub_8031884C(arg0, arg2);
        return;
    case 13:
        TObjEneMe3SinowZoa__sub_8031845C(arg0, arg2);
        return;
    case 10:
        TObjEneMe3SinowZoa__sub_803182F8(arg0, arg2);
        return;
    case 11:
        TObjEneMe3SinowZoa__sub_80318564(arg0, arg2);
        return;
    case 14:
        TObjEneMe3SinowZoa__sub_803181A8(arg0, arg2);
        return;
    case 15:
        TObjEneMe3SinowZoa__sub_80317F90(arg0, arg2);
        return;
    case 12:
        TObjEneMe3SinowZoa__sub_80317B50(arg0, arg2);
        return;
    case 16:
        TObjEneMe3SinowZoa__sub_80316C3C(arg0, arg2);
        return;
    case 17:
        TObjEneMe3SinowZoa__sub_80317254(arg0, arg2);
        return;
    case 18:
        TObjEneMe3SinowZoa__sub_803170F0(arg0, arg2);
    default:
        return;
    }
}

void TObjEneMe3SinowZoa__sub_8031A3D8(u8 *arg0) {
    if (TObjEneMe3SinowZoa__sub_8031A454((void *) (arg0)) != 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x24) = &lbl_80542FDC.value;
        initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x46));
        M2C_FIELD(arg0, s32 *, 0x3C8) = 1;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = (M2C_UNK *) M2C_FIELD(M2C_FIELD(TObjEneMe3SinowZoa__data_805D6AD8, u8 **, 0x42C), M2C_UNK **, 0xC);
    initialize_enemy_state__9TObjEneDDFPv((void *) (arg0), (int) (0x45));
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
}

}
