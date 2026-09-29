#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8025ED80_lbl_8049E178 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredGlobal_8025ED80_lbl_8049E278 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct RecoveredFields_8025FC60_arg0 {
    u8 unknown_0[0x60];
    s32 field_60;
    u8 unknown_64[0xC];
    u8 * field_70;
};

struct RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct Ctl_8025F21C { u8 p0[0x60]; u32 f60; };

extern "C" {
void TKeyBoardControl__sub_8025EC04(u8 *arg0);
extern RecoveredGlobal_8025ED80_lbl_8049E178 lbl_8049E178;
extern RecoveredGlobal_8025ED80_lbl_8049E278 lbl_8049E278;
u16 TKeyBoardControl__sub_8025ED80(u8 *arg0, s32 arg1);
s32 TKeyBoardControl__sub_801321B4(void *);
s32 TKeyBoardControl__sub_80132274(void *);
s32 TKeyBoardControl__sub_801322E4(void *);
s32 TKeyBoardControl__sub_801323C8(void *, int);
u8 get_key_state__16TKeyBoardControlFPv(M2C_UNK *);
extern M2C_UNK TKeyBoardControl__data_80506270[];
void TKeyBoardControl__sub_8025FC60(struct RecoveredFields_8025FC60_arg0 *arg0);
bool TKeyBoardControl__sub_8025EC1C(M2C_UNK arg0, u8 arg1);
extern s32 lbl_805D5544;
s32 TKeyBoardControl__sub_8025F21C(Ctl_8025F21C *c);
}

extern "C" {

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

extern M2C_UNK TKeyBoardControl__data_80506270[];

typedef char RecoveredGlobal_8025ED80_lbl_8049E178_size[sizeof(RecoveredGlobal_8025ED80_lbl_8049E178) == 0x100 ? 1 : -1];
typedef char RecoveredGlobal_8025ED80_lbl_8049E278_size[sizeof(RecoveredGlobal_8025ED80_lbl_8049E278) == 0x100 ? 1 : -1];

bool TKeyBoardControl__sub_8025EC1C(M2C_UNK arg0, u8 arg1) {
    if (arg1 == 0x52) {
        return 1;
    }
    if (arg1 < 0x10U) {
        return 0;
    }
    return arg1 <= 0x29U;
}

u16 TKeyBoardControl__sub_8025ED80(u8 *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x60) & 0x80) {
        return M2C_FIELD(((u8 *)(&lbl_8049E278.value) + ((arg1 * 2) & 0x1FE)), u16 *, 0);
    }
    return M2C_FIELD(((u8 *)(&lbl_8049E178.value) + ((arg1 * 2) & 0x1FE)), u16 *, 0);
}

s32 TKeyBoardControl__sub_8025F21C(Ctl_8025F21C *c) {
    if (c->f60 & 0x40) {
        return 3;
    }
    switch (lbl_805D5544) {
    case 1:
    case 3:
        return 0;
    case 4:
        return 1;
    case 2:
        return 2;
    case 0:
        return 3;
    }
    return (s32)c;
}

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

typedef char RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_8025FC60(struct RecoveredFields_8025FC60_arg0 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    u32 temp_r4;
    u8 *temp_r3_3;
    u8 *temp_r3_4;
    if (get_key_state__16TKeyBoardControlFPv((M2C_UNK *)(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value)) != 0) {
        if ((TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value, 0x56) != 0) || (TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value, 0x5B) != 0)) {
            arg0->field_60 |= 2;
        } else {
            arg0->field_60 &= 0xFFFFFFFD;
        }
    }
    if (TKeyBoardControl__sub_801321B4(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value) != 0) {
        arg0->field_60 |= 2;
    } else {
        arg0->field_60 &= 0xFFFFFFFD;
    }
    if (TKeyBoardControl__sub_801322E4(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value) != 0) {
        arg0->field_60 |= 4;
    } else {
        arg0->field_60 &= 0xFFFFFFFB;
    }
    if (TKeyBoardControl__sub_80132274(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value) != 0) {
        arg0->field_60 |= 8;
    } else {
        arg0->field_60 &= 0xFFFFFFF7;
    }
    if ((get_key_state__16TKeyBoardControlFPv((M2C_UNK *)(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value)) == 2) || (get_key_state__16TKeyBoardControlFPv((M2C_UNK *)(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value)) == 3)) {
        arg0->field_60 |= 1;
    } else {
        arg0->field_60 &= 0xFFFFFFFE;
    }
    if ((TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value, 0x54) != 0) || (TKeyBoardControl__sub_801323C8(&(*(RecoveredGlobal_8025FC60_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value, 0x55) != 0)) {
        arg0->field_60 |= 0x80;
    } else {
        arg0->field_60 &= 0xFFFFFF7F;
    }
    temp_r3 = arg0->field_60;
    if ((temp_r3 & 0x80) && (temp_r3 & 1)) {
        arg0->field_60 = temp_r3 & 0xFFFFFFEF;
    }
    temp_r3_2 = arg0->field_60;
    temp_r4 = temp_r3_2 & 0x80;
    if (((temp_r4 != 0) && !(temp_r3_2 & 0x10)) || ((temp_r3_2 & 0x10) && (temp_r4 == 0))) {
        arg0->field_60 |= 0x20;
    } else {
        arg0->field_60 &= 0xFFFFFFDF;
    }
    if (arg0->field_60 & 0x80) {
        temp_r3_3 = (u8 *)(arg0->field_70);
        M2C_FIELD(temp_r3_3, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3_3, s32 *, 0xB4) | 0x20);
        return;
    }
    temp_r3_4 = (u8 *)(arg0->field_70);
    M2C_FIELD(temp_r3_4, s32 *, 0xB4) = (s32) (M2C_FIELD(temp_r3_4, s32 *, 0xB4) & 0xFFFFFFDF);
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
