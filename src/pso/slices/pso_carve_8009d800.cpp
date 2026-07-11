#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase18D { char pad[0x18]; };
struct VObj18D : VBase18D {
    virtual void vpad0(); virtual void vpad1(); virtual void vpad2(); virtual void vpad3();
    virtual void vpad4(); virtual void vpad5(); virtual void vpad6(); virtual void vpad7();
    virtual void vpad8(); virtual void vpad9(); virtual void vpad10(); virtual void vpad11();
    virtual void vpad12(); virtual void vpad13(); virtual void vpad14(); virtual void vpad15();
    virtual void vpad16(); virtual void vpad17(); virtual void vpad18(); virtual void vpad19();
    virtual void vpad20(); virtual void vpad21(); virtual void vpad22(); virtual void vpad23();
    virtual void vpad24(); virtual void vpad25(); virtual void vpad26(); virtual void vpad27();
    virtual void vpad28(); virtual void vpad29(); virtual void vpad30(); virtual void vpad31();
    virtual void vpad32(); virtual void vpad33(); virtual void vpad34(); virtual void vpad35();
    virtual void vpad36(); virtual void vpad37(); virtual void vpad38(); virtual void vpad39();
    virtual void vpad40(); virtual void vpad41(); virtual void vpad42(); virtual void vpad43();
    virtual void vpad44(); virtual void vpad45(); virtual void vpad46(); virtual void vpad47();
    virtual void vpad48(); virtual void vpad49(); virtual void vpad50(); virtual void vpad51();
    virtual void vpad52(); virtual void vpad53(); virtual void vpad54(); virtual void vpad55();
    virtual void vpad56(); virtual void vpad57(); virtual void vpad58(); virtual void vpad59();
    virtual void vpad60(); virtual void vpad61(); virtual void vpad62(); virtual void vpad63();
    virtual void vpad64(); virtual void vpad65(); virtual void vpad66(); virtual void vpad67();
    virtual void vpad68(); virtual void vpad69(); virtual void vpad70(); virtual void vpad71();
    virtual void vpad72(); virtual void vpad73(); virtual void vpad74(); virtual void vpad75();
    virtual void vpad76(); virtual void vpad77(); virtual void vpad78(); virtual void vpad79();
    virtual void vpad80(); virtual void vpad81(); virtual void vpad82(); virtual void vpad83();
    virtual void vpad84(); virtual void vpad85(); virtual void vpad86();
    virtual void vf164();
    virtual void vpad88(); virtual void vpad89(); virtual void vpad90(); virtual void vpad91();
    virtual void vpad92(); virtual void vpad93();
    virtual void vf180();
    virtual void vpad95(); virtual void vpad96(); virtual void vpad97(); virtual void vpad98();
    virtual void vpad99(); virtual void vpad100(); virtual void vpad101(); virtual void vpad102();
    virtual void vf1A4();
    virtual void vpad104(); virtual void vpad105();
    virtual s32 vf1B0();
};

extern "C" {

s32 fn_8009E31C(void *, M2C_UNK);
M2C_UNK fn_8009E4AC(void *, M2C_UNK);
M2C_UNK fn_8009E6B0(void *);
M2C_UNK advance_state_5_to_4__17TObjEneMe1CanadinFPv();
M2C_UNK advance_state_4_to_5__17TObjEneMe1CanadinFPv(void *);
M2C_UNK update_move__17TObjEneMe1CanadinFPv(void *);
M2C_UNK TObjEneMe1Canadin__sub_8009EABC(void *);
M2C_UNK TObjEneMe1Canadin__sub_8009EB14(void *, f32);
M2C_UNK TObjEneEpsilon__sub_800B96D4(void *, f32);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK fn_80143504();
extern const f32 lbl_805D988C;

void fn_8009D800(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        advance_state_5_to_4__17TObjEneMe1CanadinFPv();
        TObjEneDD__sub_800BBA04(arg0, 5);
        M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C8) & 0xFFBFFFFF);
        ((VObj18D *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x01000000);
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 3:
        if ((((VObj18D *) arg0)->vf1B0() == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x470) == 3)) {
            M2C_FIELD(arg0, s32 *, 0x404) = 0;
            ((VObj18D *) arg0)->vf1A4();
        }
    case 5:
    case 1:
        return;
    case 0:
        fn_80143504();
        TObjEneEpsilon__sub_800B96D4(arg0, lbl_805D988C);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x470);
        switch (temp_r0) {
        case 0:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x3C8);
            if (temp_r3 & 4) {
                M2C_FIELD(arg0, s32 *, 0x3C8) = (s32) (temp_r3 & 0xFFFFFFFB);
                if (fn_8009E31C(arg0, 0x200) != 0) {
                    M2C_FIELD(arg0, s32 *, 0x470) = 1;
                    fn_8009E4AC(arg0, 1);
                } else {
                    M2C_FIELD(arg0, s32 *, 0x470) = 2;
                    advance_state_4_to_5__17TObjEneMe1CanadinFPv(arg0);
                    fn_8009E4AC(arg0, 3);
                }
            }
            update_move__17TObjEneMe1CanadinFPv(arg0);
            TObjEneMe1Canadin__sub_8009EABC(arg0);
            break;
        case 1:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4B8) == 0) {
                M2C_FIELD(arg0, s32 *, 0x470) = 3;
            }
            update_move__17TObjEneMe1CanadinFPv(arg0);
            TObjEneMe1Canadin__sub_8009EABC(arg0);
            break;
        case 2:
            update_move__17TObjEneMe1CanadinFPv(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4B8) != 0) {
                TObjEneMe1Canadin__sub_8009EABC(arg0);
            } else {
                TObjEneMe1Canadin__sub_8009EB14(arg0, M2C_FIELD(arg0, f32 *, 0x3C) + M2C_FIELD(arg0, f32 *, 0x3F0));
                if (M2C_FIELD(arg0, s32 *, 0x3C8) & 0x80000) {
                    M2C_FIELD(arg0, s32 *, 0x470) = 3;
                }
            }
            break;
        }
        ((VObj18D *) arg0)->vf164();
        fn_8009E6B0(arg0);
        break;
    }
}

}
