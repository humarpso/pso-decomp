#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct BaseV_800ed578 { char pad[0x18]; };
struct VObjV_800ed578 : BaseV_800ed578 {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8();
    virtual M2C_UNK m9();
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
    virtual M2C_UNK m12();
    virtual M2C_UNK m13();
    virtual M2C_UNK m14();
    virtual M2C_UNK m15();
    virtual M2C_UNK m16();
    virtual M2C_UNK m17();
    virtual M2C_UNK m18();
    virtual M2C_UNK m19();
    virtual M2C_UNK m20();
    virtual M2C_UNK m21();
    virtual M2C_UNK m22();
    virtual M2C_UNK m23();
    virtual M2C_UNK m24();
    virtual M2C_UNK m25();
    virtual M2C_UNK m26();
    virtual M2C_UNK m27();
    virtual M2C_UNK m28();
    virtual M2C_UNK m29();
    virtual M2C_UNK m30();
    virtual M2C_UNK m31();
    virtual M2C_UNK m32();
    virtual M2C_UNK m33();
    virtual M2C_UNK m34();
    virtual M2C_UNK m35();
    virtual M2C_UNK m36();
    virtual M2C_UNK m37();
    virtual M2C_UNK m38();
    virtual M2C_UNK m39();
    virtual M2C_UNK m40();
    virtual M2C_UNK m41();
    virtual M2C_UNK m42();
    virtual M2C_UNK m43();
    virtual M2C_UNK m44();
    virtual M2C_UNK m45();
    virtual M2C_UNK m46();
    virtual M2C_UNK m47();
    virtual M2C_UNK m48();
    virtual M2C_UNK m49();
    virtual M2C_UNK m50();
    virtual M2C_UNK m51();
    virtual M2C_UNK m52();
    virtual M2C_UNK m53();
    virtual M2C_UNK m54();
    virtual M2C_UNK m55();
    virtual M2C_UNK m56();
    virtual M2C_UNK m57();
    virtual M2C_UNK m58();
    virtual M2C_UNK m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
    virtual M2C_UNK m62();
    virtual M2C_UNK m63();
    virtual M2C_UNK m64();
    virtual M2C_UNK m65();
    virtual M2C_UNK m66();
    virtual M2C_UNK m67();
    virtual M2C_UNK m68();
    virtual M2C_UNK m69();
    virtual M2C_UNK m70();
    virtual M2C_UNK m71();
    virtual M2C_UNK m72();
    virtual M2C_UNK m73();
    virtual M2C_UNK m74();
    virtual M2C_UNK m75();
    virtual M2C_UNK m76();
    virtual M2C_UNK m77();
    virtual M2C_UNK m78();
    virtual M2C_UNK m79();
    virtual M2C_UNK m80();
    virtual M2C_UNK m81();
    virtual M2C_UNK m82();
    virtual M2C_UNK m83();
    virtual M2C_UNK m84();
    virtual M2C_UNK m85();
    virtual M2C_UNK m86();
    virtual M2C_UNK m87();
    virtual M2C_UNK m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual M2C_UNK m91();
    virtual M2C_UNK m92();
    virtual M2C_UNK m93();
    virtual M2C_UNK m94();
    virtual M2C_UNK m95();
    virtual M2C_UNK m96();
    virtual M2C_UNK m97();
    virtual M2C_UNK m98();
    virtual M2C_UNK m99(M2C_UNK *);
};

extern "C" {

void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void update_position_flag__13TObjEneRe4BitFPv(u8 *arg0) {
    M2C_UNK sp8;

    VecCopy__FP3VecPC3Vec(&sp8, arg0 + 0x2FC);
    if (((VObjV_800ed578 *)arg0)->m99(&sp8) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFF7FF);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x800);
}

}
