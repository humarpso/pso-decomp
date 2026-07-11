#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800B2A5C(u32, void *);
M2C_UNK fn_800BB740(void *, s32);
M2C_UNK fn_800BB7D8(void *, M2C_UNK, f32);
M2C_UNK fn_800BB7DC(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK fn_800D8ACC(s32, M2C_UNK *, s32, void *, s32);
M2C_UNK fn_800F5EB4(void *, M2C_UNK);
struct BaseB0 { char pad[0x18]; };
struct VObjB0 : BaseB0 {
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
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
};
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8043B0D0[];
extern s32 lbl_805D50F4;
extern const f32 lbl_805D9C88;

void TObjEneBm3Fly__sub_800B000C(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    u32 temp_ret;

    switch (arg1) {
    case 4:
        ((VObjB0 *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x428) = (s32) (M2C_FIELD(arg0, s32 *, 0x428) | 1);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x428) & 0xFFFFFFFD;
        M2C_FIELD(arg0, s32 *, 0x428) = temp_r4;
        M2C_FIELD(arg0, s32 *, 0x80) = 0;
        fn_800BB740(arg0, temp_r4);
        temp_ret = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x418));
        if (temp_ret != 0U) {
            fn_800B2A5C(temp_ret, arg0);
        }
        fn_800BB7DC(arg0);
        fn_800BB7D8(arg0, 0xF1, lbl_805D9C88);
        fn_8022675C(fn_800F5EB4(arg0, 0x4003E425), arg0 + 0x38, 0, 0);
        fn_800D8ACC(lbl_805D50F4, lbl_8043B0D0, M2C_FIELD(arg0, s32 *, 0x24), arg0 + 0x2FC, M2C_FIELD(arg0, s32 *, 0x60));
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) >= 2) {
            TObjEneDD__sub_800BBA18(arg0, 9);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) + 1);
        break;
    }
}

}
