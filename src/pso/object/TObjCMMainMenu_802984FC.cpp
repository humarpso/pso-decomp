#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/object/TObjCMMainMenu.h"
typedef void (TObjCMMainMenu::*CreationMenuCallback)(void);
struct RecoveredGlobal_80298630_TObjCMMainMenu__data_804DB9C8 {
    M2C_UNK value;
    u8 remaining[0x9C];
};

extern "C" {
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK create_fade__14TObjCMMainMenuFPvPv(M2C_UNK, M2C_UNK);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
extern s32 lbl_805D6558;
extern s32 TObjCMMainMenu__data_805D659C;
extern const f32 lbl_805DDA70;
extern const f32 lbl_805DDAFC;
extern const f32 lbl_805DDBBC;
extern const f32 lbl_805DDC0C;
void TObjCMMainMenu__vt2(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjCMMainMenu__sub_8028D9B4(void *);
s32 is_active__23TAdSinglePlyChrSelectGCFv();
s32 TObjCMMainMenu__sub_80298DC4();
s32 TChCrCharSelect__sub_80298F8C(int);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
M2C_UNK set_eff_tag__11TChCrEffTagFi(int);
extern RecoveredGlobal_80298630_TObjCMMainMenu__data_804DB9C8 TObjCMMainMenu__data_804DB9C8;
extern s32 TObjCMMainMenu__data_805D659C;
void TObjCMMainMenu__handle_creation_input(u8 *arg0);
}

extern "C" {

void TObjCMMainMenu__vt1(void);
void TObjCMMainMenu__vt5(void *arg0);
void TObjCMMainMenu__vt6(void *arg0);

extern s32 TObjCMMainMenu__data_805D659C;

void TObjCMMainMenu__vt6(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 4;
    }
}

extern s32 TObjCMMainMenu__data_805D659C;

void TObjCMMainMenu__vt5(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 3;
    }
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void TObjCMMainMenu__vt2(void *arg0) {
    f32 temp_f2;
    f32 fv;
    f32 v1;
    f32 v2;
    f32 c1;
    f32 c2;
    s32 temp_r0;
    fv = M2C_FIELD(arg0, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (fv + lbl_805DDC0C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if (((s32) lbl_805D6558 == 2) || ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0)) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x48);
        if (temp_f2 < lbl_805DDBBC) {
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805DDAFC * (lbl_805DDBBC - temp_f2)) + temp_f2);
        }
        fv = M2C_FIELD(arg0, f32 *, 0x48);
        if (fv > lbl_805DDA70) {
            M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DDA70;
        }
        if (TObjCMProportion__sub_8029916C(4) != 0) {
            play_sound_effect(0x52D01, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x30) = 7;
            TObjCMMainMenu__data_805D659C = 5;
            create_fade__14TObjCMMainMenuFPvPv(7, 1);
        }
    } else {
        fv = M2C_FIELD(arg0, f32 *, 0x48);
        if (fv > lbl_805DDBBC) {
            M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DDBBC;
        }
    }
}
#pragma pop

void TObjCMMainMenu__vt1(void) {  }
typedef char RecoveredGlobal_80298630_TObjCMMainMenu__data_804DB9C8_size[sizeof(RecoveredGlobal_80298630_TObjCMMainMenu__data_804DB9C8) == 0xA0 ? 1 : -1];
void TObjCMMainMenu__handle_creation_input(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r5;
    if (TObjCMMainMenu__sub_80298DC4() != 0) {
        set_eff_tag__11TChCrEffTagFi((int) (1));
    } else {
        set_eff_tag__11TChCrEffTagFi((int) (2));
    }
    if (is_active__23TAdSinglePlyChrSelectGCFv() != 0) {
        if (((s8) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), u8 *, 0x30) == -1) && (TObjCMProportion__sub_8029916C((M2C_UNK)((int) (2))) != 0)) {
            play_sound_effect((M2C_UNK)((int) (0x53704)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            TObjCMMainMenu__sub_8028D9B4((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
            M2C_FIELD(arg0, s32 *, 0x30) = 7;
            TObjCMMainMenu__data_805D659C = 6;
            return;
        }
        if (TChCrCharSelect__sub_80298F8C((int) (0x20)) != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x2C) + 1;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_r3;
            if (temp_r3 >= (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            play_sound_effect((M2C_UNK)((int) (0x54100)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        } else if (TChCrCharSelect__sub_80298F8C((int) (0x10)) != 0) {
            temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C) - 1;
            M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0;
            if (temp_r0 < 0) {
                M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) - 1);
            }
            play_sound_effect((M2C_UNK)((int) (0x54100)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        }
        if (TObjCMProportion__sub_8029916C((M2C_UNK)((int) (4))) != 0) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x24);
            (reinterpret_cast<TObjCMMainMenu*>(arg0)->*(*reinterpret_cast<CreationMenuCallback*>((u8*)&TObjCMMainMenu__data_804DB9C8 + (M2C_FIELD((temp_r5 + (M2C_FIELD(arg0, s32 *, 0x2C) * 4)), s32 *, 0) * 0x10) + 4)))();
        }
    }
}

}
