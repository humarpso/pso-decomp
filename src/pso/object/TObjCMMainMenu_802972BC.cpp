#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCMMainMenu__sub_802972C4(void);
s32 try_pay_fee__14TObjCMMainMenuFv(void);
void confirm_selection__14TObjCMMainMenuFPv(void *arg0);
void open_name_menu__14TObjCMMainMenuFPv(void *arg0);
void open_proportion_menu__14TObjCMMainMenuFPv(void *arg0);
void open_auto_mk_menu__14TObjCMMainMenuFPv(void *arg0);
void open_hair_menu__14TObjCMMainMenuFPv(void *arg0);
void fn_802972BC(void);
void fn_802972C0(void);
u8 TCharaMaking__sub_8028DC74();
M2C_UNK create__16TObjCMAutoMkDataFPv(s32);
M2C_UNK TObjCMHairMenu__sub_80296410(s32);
M2C_UNK TObjCMName__sub_80294C58(s32);
M2C_UNK create__16TObjCMProportionFPv(s32);
void *fn_802029E8(s32);
s32 fn_8022675C(s32, s32, s32, s32);
s32 fn_8028DA7C(void *);
M2C_UNK fn_80290BE0();
M2C_UNK fn_80298D98(M2C_UNK);

void fn_802972BC(void) {  }
void fn_802972C0(void) {  }
void TObjCMMainMenu__sub_802972C4(void) {  }
s32 try_pay_fee__14TObjCMMainMenuFv(void) {
    s32 temp_r4;
    void *temp_r3;

    if (fn_802029E8(0xFFFF) == NULL) {
        fn_8022675C((s32)(0x40018519), (s32)(0), (s32)(0), (s32)(0));
        return 0;
    }
    temp_r3 = fn_802029E8(0xFFFF);
    temp_r4 = M2C_FIELD(temp_r3, s32 *, 0x36C);
    if (temp_r4 < 0x2710) {
        M2C_FIELD(temp_r3, s32 *, 0x36C) = 0;
        fn_8022675C((s32)(0xB20C), (s32)(0), (s32)(0), (s32)(0));
        return 0;
    }
    M2C_FIELD(temp_r3, s32 *, 0x36C) = (s32) (temp_r4 - 0x2710);
    fn_8022675C((s32)(0x44E03), (s32)(0), (s32)(0), (s32)(0));
    return 1;
}

extern s32 TObjCMMainMenu__data_805D659C;

void confirm_selection__14TObjCMMainMenuFPv(void *arg0) {
    if (fn_8028DA7C(M2C_FIELD(arg0, void **, 0x1C)) == 0) {
        fn_8022675C((s32)(0x53F06), (s32)(0), (s32)(0), (s32)(0));
        return;
    }
    fn_8022675C((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    if ((s8) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) == -1) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), u8 *, 0x30) = TCharaMaking__sub_8028DC74();
    } else {
        try_pay_fee__14TObjCMMainMenuFv();
    }
    fn_80298D98(1);
    fn_80290BE0();
    M2C_FIELD(arg0, s32 *, 0x30) = 0x3C;
    TObjCMMainMenu__data_805D659C = 2;
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_name_menu__14TObjCMMainMenuFPv(void *arg0) {
    fn_8022675C((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    TObjCMName__sub_80294C58(M2C_FIELD(arg0, s32 *, 0x50));
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_proportion_menu__14TObjCMMainMenuFPv(void *arg0) {
    fn_8022675C((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    create__16TObjCMProportionFPv(M2C_FIELD(arg0, s32 *, 0x50));
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_auto_mk_menu__14TObjCMMainMenuFPv(void *arg0) {
    fn_8022675C((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    create__16TObjCMAutoMkDataFPv(M2C_FIELD(arg0, s32 *, 0x50));
}

extern s32 TObjCMMainMenu__data_805D659C;

void open_hair_menu__14TObjCMMainMenuFPv(void *arg0) {
    fn_8022675C((s32)(0x52D01), (s32)(0), (s32)(0), (s32)(0));
    TObjCMMainMenu__data_805D659C = 1;
    TObjCMHairMenu__sub_80296410(M2C_FIELD(arg0, s32 *, 0x50));
}

}
