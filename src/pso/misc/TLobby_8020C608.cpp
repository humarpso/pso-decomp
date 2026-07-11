#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase { char pad[0x18]; };
struct VObj : VBase {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(s32);
};

extern "C" {

s32 TLobby__sub_8020C608(s16 arg0, s16 arg1, s32 arg2);
u8 *TLobby__sub_8020CCF4(void *);
u8 *fn_8020B334(s32);
s32 fn_8020B454(s32);
M2C_UNK fn_8020E484(s32, void *);

extern s32 lbl_805D60FC;
extern s32 lbl_805D6144;

s32 TLobby__sub_8020C608(s16 arg0, s16 arg1, s32 arg2) {
    s16 temp_r0;
    s16 temp_r3;
    s32 temp_r31;
    s32 var_r30;
    u8 *var_r29;
    s32 var_r28;
    u8 *temp_r3_2;

    var_r30 = 0;
    if ((s32) lbl_805D60FC < 0) {
        return 0;
    }
    var_r29 = fn_8020B334(lbl_805D60FC);
    temp_r31 = fn_8020B454(lbl_805D60FC);
    for (var_r28 = 0; var_r28 < temp_r31; var_r28 += 1, var_r29 += 0x48) {
        temp_r3 = M2C_FIELD(var_r29, s16 *, 2);
        if (!(temp_r3 & 8) && !(temp_r3 & 2) && ((s16) M2C_FIELD(var_r29, s16 *, 0xC) == arg0) && ((s16) M2C_FIELD(var_r29, s16 *, 0xE) == arg1)) {
            temp_r3_2 = TLobby__sub_8020CCF4(var_r29);
            if (temp_r3_2 != NULL) {
                M2C_FIELD(var_r29, void **, 0x44) = temp_r3_2;
                M2C_FIELD(var_r29, s16 *, 2) = (s16) (M2C_FIELD(var_r29, s16 *, 2) | 2);
                M2C_FIELD(temp_r3_2, s16 *, 0x28) = (s16) M2C_FIELD(var_r29, s16 *, 0xC);
                M2C_FIELD(temp_r3_2, s16 *, 0x2A) = (s16) M2C_FIELD(var_r29, s16 *, 0xE);
                M2C_FIELD(temp_r3_2, s16 *, 0x2C) = (s16) M2C_FIELD(var_r29, s16 *, 4);
                M2C_FIELD(temp_r3_2, void **, 0x80) = var_r29;
                temp_r0 = M2C_FIELD(temp_r3_2, s16 *, 0x2C);
                if (temp_r0 != -1) {
                    ((VObj *)temp_r3_2)->m77(lbl_805D6144 + (temp_r0 * 0xC));
                }
                fn_8020E484(arg2, temp_r3_2);
                var_r30 += 1;
            } else {
                M2C_FIELD(var_r29, void **, 0x44) = NULL;
            }
        }
    }
    return var_r30;
}

}
