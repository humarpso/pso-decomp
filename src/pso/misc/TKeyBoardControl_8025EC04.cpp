#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TKeyBoardControl__sub_8025EC04(u8 *arg0);
}

extern "C" {

int TKeyBoardControl__sub_8025EC1C(void);
void enable_caps_led__16TKeyBoardControlFPv(void *arg0);
void enable_kana_led__16TKeyBoardControlFPv(void *arg0);
void enable_keyboard_led__16TKeyBoardControlFPv(void *arg0);
s32 poll_input__16TKeyBoardControlFPv(void *arg0);
void process_key_input__16TKeyBoardControlFPvi(void *arg0, s32 arg1);
M2C_UNK TKeyBoardControl__sub_8025CBC0(u32);
M2C_UNK TKeyBoardControl__sub_8025CBCC(u32);
M2C_UNK TKeyBoardControl__sub_8025CC04(u32);
s32 TKeyBoardControl__sub_8025EDB4(void *, s32, u16 *);
u8 TKeyBoardControl__sub_8025F2F8(void *, u8);
s32 TKeyBoardControl__sub_8025F3D4(void *, s32, u8);
s32 TKeyBoardControl__sub_8025F4A0();
int TWindowKeyBoardHard__sub_8025EB68(void* p);
s32 TWindowKeyBoardHard__sub_80260438(void *);
M2C_UNK TWindowKeyBoardSoft__sub_8025C618(s32, u16);
int call_1A529C_with_32__19TWindowKeyBoardHardFPv(void* p);
M2C_UNK fn_8025FF8C(void *);
u8 get_key_state__16TKeyBoardControlFPv(M2C_UNK *);
M2C_UNK set_input_mode__20TWindowSubStatusDispFPvUc(s32, s32);
int test_card_flag_0x80__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_16__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag_64__19TWindowKeyBoardHardFPv(void* p);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);

void TKeyBoardControl__sub_8025EC04(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x68) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x100);
}

int TKeyBoardControl__sub_8025EC1C(void) { return 0; }

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 poll_input__16TKeyBoardControlFPv(void *arg0) {
    u8 temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 0x40) {
        return 3;
    }
    temp_r3 = get_key_state__16TKeyBoardControlFPv(TKeyBoardControl__data_80506270);
    switch ((s32) temp_r3) {
    case 4:
        return 1;
    case 2:
        return 0;
    case 3:
        return 2;
    default:
        return 3;
    }
}

void process_key_input__16TKeyBoardControlFPvi(void *arg0, s32 arg1) {
    u16 sp8;
    s32 temp_r31;

    if (TKeyBoardControl__sub_8025F4A0() != 0) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 7;
        return;
    }
    temp_r31 = TKeyBoardControl__sub_8025EDB4(arg0, arg1, &sp8);
    if (sp8 == 0x1F) {
        M2C_FIELD(arg0, s32 *, 0x6C) = 7;
        return;
    }
    if (poll_input__16TKeyBoardControlFPv((void *)(arg0)) < 3U) {
        if (TKeyBoardControl__sub_8025F3D4(arg0, arg1, (u8) sp8) == 0) {
            sp8 = (u16) TKeyBoardControl__sub_8025F2F8(arg0, (u8) sp8);
            goto block_7;
        }
    } else {
block_7:
        if ((TWindowKeyBoardHard__sub_80260438(arg0) != 0) && ((s32) sp8 >= 0x61) && ((s32) sp8 <= 0x7A)) {
            sp8 -= 0x20;
        }
        set_input_mode__20TWindowSubStatusDispFPvUc(M2C_FIELD(arg0, s32 *, 0x70), temp_r31);
        TWindowKeyBoardSoft__sub_8025C618(M2C_FIELD(arg0, s32 *, 0x70), sp8);
    }
}

void enable_keyboard_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x1000);
        TKeyBoardControl__sub_8025CBC0(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

void enable_kana_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x800);
        TKeyBoardControl__sub_8025CBCC(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

void enable_caps_led__16TKeyBoardControlFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) | 0x400);
        TKeyBoardControl__sub_8025CC04(M2C_FIELD(arg0, u32 *, 0x70));
        fn_8025FF8C(arg0);
    }
}

}
