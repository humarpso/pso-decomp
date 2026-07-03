#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18 { char pad[0x18]; };
struct VObj18 : VBase18 {
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
};

extern "C" {

void TObjEneEpsilonGuard__sub_8035E68C(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BAC14(void *, void *, f32, f32, f32);
M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
s32 TObjEneEpsilonGuard__sub_8035EF78(void *);
M2C_UNK TObjEneEpsilonGuard__sub_8035EFD8(void *, s32);
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_800B99D8(void *);
M2C_UNK fn_80143504();
s32 fn_8035F95C(u32);
s32 fn_8035F968();

extern void *lbl_805D6F74;
extern const f32 lbl_805E01E8;
extern const f32 lbl_805E01EC;
extern const f32 lbl_805E01F0;

void TObjEneEpsilonGuard__sub_8035E68C(void *arg0, s32 arg1) {
    s32 temp_r0;
    u32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TObjEneDD__sub_800BBA04(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 4);
        M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFFE7);
        ((VObj18 *) arg0)->vf180();
        M2C_FIELD(arg0, s32 *, 0x430) = 0;
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x43C) = 0;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x46C) & 8) {
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
    case 5:
        return;
    case 0:
        fn_80143504();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x430);
        switch (temp_r0) {
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x46C) & 0x100) {
                M2C_FIELD(arg0, s32 *, 0x43C) = (s32) ((lbl_805E01E8 * M2C_FIELD(lbl_805D6F74, f32 *, 8)) / (lbl_805E01EC * M2C_FIELD(lbl_805D6F74, f32 *, 0)));
            } else {
                M2C_FIELD(arg0, s32 *, 0x43C) = (s32) ((lbl_805E01F0 * M2C_FIELD(lbl_805D6F74, f32 *, 8)) / (lbl_805E01EC * M2C_FIELD(lbl_805D6F74, f32 *, 0)));
            }
            M2C_FIELD(arg0, s32 *, 0x430) = 1;
            break;
        case 1:
            temp_r3 = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x470));
            if (temp_r3 != 0U) {
                if (fn_8035F968() == 1) {
                    M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) & 0xFFFFFFFB);
                    M2C_FIELD(arg0, s32 *, 0x430) = 2;
                } else if (fn_8035F95C(temp_r3) != 1) {
                    goto block_23;
                }
            } else {
block_23:
                M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) + M2C_FIELD(arg0, s32 *, 0x43C));
                TObjEneEpsilonGuard__sub_8035EFD8(arg0, M2C_FIELD(arg0, s32 *, 0x438));
                fn_800B99D8(arg0);
                TObjEneDD__sub_800BAC14(arg0, lbl_805D6F74, M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8), M2C_FIELD(lbl_805D6F74, f32 *, 8));
            }
            break;
        case 2:
            if ((TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x470)) != 0U) && (fn_8035F968() == 0)) {
                M2C_FIELD(arg0, s32 *, 0x46C) = (s32) (M2C_FIELD(arg0, s32 *, 0x46C) | 4);
                M2C_FIELD(arg0, s32 *, 0x430) = 1;
            }
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = TObjEneEpsilonGuard__sub_8035EF78(arg0);
        ((VObj18 *) arg0)->vf164();
        break;
    }
}

}
