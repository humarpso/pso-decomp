#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 TObjEneMe3ShinowaReal__sub_8002ADD8(void *);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 fn_800D7310(void *, f32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK fn_80143504();
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK, s32);
extern const f32 lbl_805DA828;
extern const f32 lbl_805DA830;
extern const f32 lbl_805DA834;
extern const f32 lbl_805DA838;

struct VB18 { char pad[0x18]; };
struct VO18 : VB18 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();
    virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();
    virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();
    virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
    virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();
    virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();
    virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();
    virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
    virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();
    virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();
    virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();
    virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
    virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();
    virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();
    virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();
    virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
    virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();
    virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();
    virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
    virtual void m95();virtual void m96();virtual void m97();virtual void m98();virtual void m99();
    virtual void m100();
};
struct VB414 { char pad[0x14]; };
struct VO414 : VB414 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
};

void fn_800F169C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r7;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        TObjEneDD__sub_800BBA04(arg0, 6);
        ((VO18*)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF1);
        temp_r7 = M2C_FIELD(arg0, s32 *, 0x3CC) | 1;
        M2C_FIELD(arg0, s32 *, 0x3CC) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0x424) = 0;
        fn_8022675C(0x3B23B, arg0 + 0x38, 0, 0, temp_r7);
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x424) == 3) {
            TObjEneDD__sub_800BBA18(arg0, 6);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFE);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
            set_indexed_flags(arg0, 0, 0x08000000);
        }
        return;
    case 0:
        fn_80143504();
        if (TObjEneMe3ShinowaReal__sub_8002ADD8(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x424) = 3;
        } else if (is_split_screen() != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x424);
            switch (temp_r0) {
            case 0:
                if (objInBand__FP7GameObjf(arg0, lbl_805DA828) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 8);
                    ((VO414*)(arg0 + 0x404))->m3();
                    M2C_FIELD(arg0, s32 *, 0x424) = 1;
                }
                break;
            case 1:
                if (fn_800D7310(arg0 + 0x404, lbl_805DA830) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
                    M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
                    M2C_FIELD(arg0, s32 *, 0x424) = 2;
                }
                break;
            }
        } else if (objInBand__FP7GameObjf(arg0, lbl_805DA834) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 8);
            M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
        } else if (objInBand__FP7GameObjf(arg0, lbl_805DA838) != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        }
        ((VO18*)arg0)->m100();
        ((VO18*)arg0)->m87();
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        break;
    }
}

}
