#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK free_child__9TWindowDDFPv(int);
M2C_UNK apply_input__9TWindowDDFPvPv(int, int);
M2C_UNK update__9TWindowDDFPvi(int, int, int);
void TWindowDD__sub_803434F4(u8 *arg0);
s32 TWindowDD__sub_80342428(void *);
s32 handle_input__9TWindowDDFi(void *);
s32 enter_state_19__9TWindowDDFPv(void *);
s32 enter_state_18__9TWindowDDFPv(void *);
s32 enter_state_16__9TWindowDDFPv(void *);
s32 update_state__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342800(void *);
s32 update__9TWindowDDFi(void *);
s32 TWindowDD__sub_803429B0(void *);
s32 enter_state_9__9TWindowDDFPv(void *);
s32 update_dispatch__9TWindowDDFi(void *);
s32 update_layout__9TWindowDDFPv(void *);
s32 update_transition__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342D14(void *);
s32 update__9TWindowDDFPv(void *);
s32 TWindowDD__sub_80342ED0(void *);
void TWindowDD__sub_80343808(u8 *arg0);
}

extern "C" {

void *__dt__9TWindowDDFv(void *arg0, s16 arg1);
void free_buffers__9TWindowDDFv(void);
s32 update_close_flag__9TWindowDDFPv(void *arg0);
void TLobby__sub_800F957C(void*);
M2C_UNK TWindowDD__sub_80347EF4();
void TWindowDD__sub_80348520(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 classify_id__9TWindowDDFs();
M2C_UNK fn_8034AF18();
void free__11TOBoss4RockFUi(void*);

s32 update_close_flag__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347EF4();
    if (classify_id__9TWindowDDFs() != 7) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 1;
        return 1;
    }
    return 0;
}

extern M2C_UNK __vt__9TWindowDD[];

void TWindowDD__sub_803434F4(u8 *arg0) {
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r4;
    u8 *var_r5;
    var_r31 = (u8 *)(arg0);
    var_r3 = (u8 *)(var_r31 + (M2C_FIELD(arg0, s32 *, 0x20) * 4));
    var_r3 = (u8 *)(M2C_FIELD(var_r3, u8 **, 0x24));
    free_child__9TWindowDDFPv((int) (var_r3));
    var_r3 = (u8 *)(var_r31);
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 0x24));
    apply_input__9TWindowDDFPvPv((int) (var_r3), (int) (var_r4));
    var_r3 = (u8 *)(var_r31);
    var_r5 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB0));
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    M2C_FIELD(var_r4, u8 **, 0x44) = var_r5;
    var_r4 = (u8 *)((void *) M2C_FIELD(var_r31, s32 *, 0x20));
    M2C_FIELD(var_r31, s32 *, 0x20) = (s32) (var_r4 + 1);
    var_r4 = (u8 *)(var_r31 + (M2C_FIELD(var_r31, s32 *, 0x20) * 4));
    var_r4 = (u8 *)(M2C_FIELD(var_r4, u8 **, 0x24));
    update__9TWindowDDFPvi((int) (var_r3), (int) (var_r4), (int) (var_r5));
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0xB4));
    M2C_FIELD(var_r31, u8 **, 0xB0) = var_r3;
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x8C));
    M2C_FIELD(var_r31, u8 **, 0x88) = var_r3;
    var_r3 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x90));
    M2C_FIELD(var_r31, u8 **, 0x8C) = var_r3;
    M2C_FIELD(var_r31, u8 **, 0x90) = (unsigned char *) ((void *)-1);
}

void TWindowDD__sub_80343808(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0xB0);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80342ED0((void *) (arg0));
        return;
    case 1:
    case 2:
        update__9TWindowDDFPv((void *) (arg0));
        return;
    case 3:
        TWindowDD__sub_80342D14((void *) (arg0));
        return;
    case 5:
        update_transition__9TWindowDDFPv((void *) (arg0));
        return;
    case 6:
        update_layout__9TWindowDDFPv((void *) (arg0));
        return;
    case 7:
        update_dispatch__9TWindowDDFi((void *) (arg0));
        return;
    case 8:
        enter_state_9__9TWindowDDFPv((void *) (arg0));
        return;
    case 9:
        TWindowDD__sub_803429B0((void *) (arg0));
        return;
    case 12:
        update__9TWindowDDFi((void *) (arg0));
        return;
    case 13:
        TWindowDD__sub_80342800((void *) (arg0));
        return;
    case 14:
        update_state__9TWindowDDFPv((void *) (arg0));
        return;
    case 15:
        enter_state_16__9TWindowDDFPv((void *) (arg0));
        return;
    case 17:
        enter_state_18__9TWindowDDFPv((void *) (arg0));
        return;
    case 18:
        enter_state_19__9TWindowDDFPv((void *) (arg0));
        return;
    case 20:
        handle_input__9TWindowDDFi((void *) (arg0));
        return;
    case 10:
    case 11:
    case 16:
    case 19:
        TWindowDD__sub_80342428((void *) (arg0));
    default:
        return;
    }
}

void *__dt__9TWindowDDFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TWindowDD;
        TWindowDD__sub_80348520(arg0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TWindowDD__data_805D6E0C;
extern u32 lbl_805D6E10;
extern u32 lbl_805D6E14;
extern u32 TWindowDD__data_805D6E18;
extern u32 TWindowDD__data_805D6E1C;
extern u32 lbl_805D6E20;
extern u32 lbl_805D6E50;
extern u32 lbl_805D6E54;
extern u32 lbl_805D6E58;
extern u32 lbl_805D6E5C;
extern u32 lbl_805D6E60;

void free_buffers__9TWindowDDFv(void) {
    fn_8034AF18();
    if ((u32) TWindowDD__data_805D6E1C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E1C);
        TWindowDD__data_805D6E1C = 0U;
    }
    if ((u32) lbl_805D6E20 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E20);
        lbl_805D6E20 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E18 != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E18);
        TWindowDD__data_805D6E18 = 0U;
    }
    if ((u32) lbl_805D6E14 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E14);
        lbl_805D6E14 = 0U;
    }
    if ((u32) lbl_805D6E10 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D6E10);
        lbl_805D6E10 = 0U;
    }
    if ((u32) TWindowDD__data_805D6E0C != 0U) {
        free__11TOBoss4RockFUi((void*)TWindowDD__data_805D6E0C);
        TWindowDD__data_805D6E0C = 0U;
    }
    if ((u32) lbl_805D6E60 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E60);
        lbl_805D6E60 = 0U;
    }
    if ((u32) lbl_805D6E5C != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E5C);
        lbl_805D6E5C = 0U;
    }
    if ((u32) lbl_805D6E58 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E58);
        lbl_805D6E58 = 0U;
    }
    if ((u32) lbl_805D6E54 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E54);
        lbl_805D6E54 = 0U;
    }
    if ((u32) lbl_805D6E50 != 0U) {
        TLobby__sub_800F957C((void*)lbl_805D6E50);
        lbl_805D6E50 = 0U;
    }
}

}
