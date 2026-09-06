#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma fp_contract on

struct VBase_18_c44252 { char pad[0x18]; };

struct VObj_18_c44252 : VBase_18_c44252 {
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
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual M2C_UNK m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual M2C_UNK m23(void *, f32);
};

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(s32);
s32 fn_800B91F4(void *);
s32 objInBand__FP7GameObjf(void *, f32);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
M2C_UNK TObjEneDD__sub_800BA438(void *, void *);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
extern const f32 TObjEneMe3ShinowaMirage__data_805DA608;
extern const f32 lbl_805DA640;
extern const f32 lbl_805DA644;
extern const f32 lbl_805DA648;
void TObjEneMe3ShinowaMirage__sub_800E7378(u8 *arg0);
}

extern "C" {

s32 check_in_range__23TObjEneMe3ShinowaMirageFPv(void *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);

extern const f32 TObjEneMe3ShinowaMirage__data_805DA5E4;

#pragma push
#pragma fp_contract on
void TObjEneMe3ShinowaMirage__sub_800E7378(u8 *arg0) {
    s32 temp_r31;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *temp_r3_3;
    temp_r31 = objInBand__FP7GameObjf(arg0, lbl_805DA640);
    if ((objInBand__FP7GameObjf(arg0, lbl_805DA644) != 0) || (temp_r31 != 0)) {
        if (fn_800B91F4(arg0) != 0) {
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
            if (((VObj_18_c44252 *)(temp_r3))->m18(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC) != 0) {
                temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                ((VObj_18_c44252 *)(temp_r3_2))->m20(arg0, TObjEneMe3ShinowaMirage__data_805DA5DC);
                temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x390));
                ((VObj_18_c44252 *)(temp_r3_3))->m23(arg0, TObjEneMe3ShinowaMirage__data_805DA608);
                if ((temp_r31 != 0) && (calc_boss4_scale__10TObjPlayerFi((s32) arg0) <= lbl_805DA648)) {
                    TObjEneDD__sub_800BA438((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x390)));
                }
            }
        }
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD13)), (u32) (arg0 + 0x38), 0, 0);
    }
}
#pragma pop

s32 check_in_range__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    f32 f31;

    if (M2C_FIELD(arg0, f32 *, 0x3AC) > TObjEneMe3ShinowaMirage__data_805DA5E4) {
        return 0;
    }
    f31 = M2C_FIELD(arg0, f32 *, 0x3A8) * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60));
    f31 += M2C_FIELD(arg0, f32 *, 0x3A0) * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60));
    return (s32)((u32)__cntlzw(f31 < TBoss8Dragon__sub_803D64DC(0x1E00)) >> 5);
}

}
