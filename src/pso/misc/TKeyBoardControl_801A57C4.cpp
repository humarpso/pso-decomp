#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A58B0_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801A58D8_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct Pad_801A57D0 { u8 pad0[0x10]; u32 f10; u8 pad14[4]; u16 f18; u16 f1A; s16 f1C; s16 f1E; };

extern "C" {
s32 TKeyBoardControl__sub_801321B4(s32);
extern M2C_UNK TKeyBoardControl__data_80506270[];
void TKeyBoardControl__sub_801A58B0(void);
s32 TKeyBoardControl__sub_80132310(s32);
extern M2C_UNK TKeyBoardControl__data_80506270[];
void TKeyBoardControl__sub_801A58D8(void);
extern Pad_801A57D0 *lbl_8050E208[];
s32 TKeyBoardControl__sub_801A57D0(void);
u8 TKeyBoardControl__sub_8013239C(void *, u8);
u8 get_key_state_2__16TKeyBoardControlFPv(void *);
extern M2C_UNK TKeyBoardControl__data_80506270[];
s32 is_key_down__16TKeyBoardControlFi(s32 arg0);
}

extern "C" {

void init_stick_escape_detector(void *arg0, void *arg1);
s32 check_and_read__16TKeyBoardControlFi(s32 arg0);
s32 check_input_angle__16TKeyBoardControlFPv(void *arg0);
s32 check_reset_button__16TKeyBoardControlFv(void);
s32 read_input__16TKeyBoardControlFi(s32 arg0);
void reset__16TKeyBoardControlFv(void);
s32 OSGetResetButtonState();
void TKeyBoardControl__sub_801A5A14(void *arg0);
s32 TKeyBoardControl__sub_801323C8(void *, void *);
s32 check_input_ready__16TKeyBoardControlFi(M2C_UNK *);

    extern unsigned char lbl_805D5D09;
void reset__16TKeyBoardControlFv(void) { lbl_805D5D09 = 0; }

extern u8 keyboard_reset_button_pressed;

s32 TKeyBoardControl__sub_801A57D0(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        Pad_801A57D0 *p = lbl_8050E208[i];
        if (p->f10 != 0 || p->f18 >= 10 || p->f1A >= 10 || p->f1C >= 10 || p->f1C <= -10 || p->f1E >= 10 || p->f1E <= -10) {
            return 1;
        }
    }
    return 0;
}

s32 check_reset_button__16TKeyBoardControlFv(void) {
    if (OSGetResetButtonState() != 0) {
        keyboard_reset_button_pressed = 1;
    }
    if ((s8) keyboard_reset_button_pressed != 0) {
        if (OSGetResetButtonState() != 0) {
            return 0;
        }
        keyboard_reset_button_pressed = 0;
        return 1;
    }
    return 0;
}

extern M2C_UNK TKeyBoardControl__data_80506270[];

typedef char RecoveredGlobal_801A58B0_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801A58B0_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_801A58B0(void) {
    TKeyBoardControl__sub_801321B4((s32) &(*(RecoveredGlobal_801A58B0_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value);
}

typedef char RecoveredGlobal_801A58D8_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801A58D8_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void TKeyBoardControl__sub_801A58D8(void) {
    TKeyBoardControl__sub_80132310((s32) &(*(RecoveredGlobal_801A58D8_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value);
}

s32 check_and_read__16TKeyBoardControlFi(s32 arg0) {
    if (check_input_ready__16TKeyBoardControlFi(TKeyBoardControl__data_80506270) != 0) {
        return is_key_down__16TKeyBoardControlFi((s32)(arg0));
    }
    return 0;
}

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 read_input__16TKeyBoardControlFi(s32 arg0) {
    if (check_input_ready__16TKeyBoardControlFi(TKeyBoardControl__data_80506270) != 0) {
        return ((s32 (*)(s32))TKeyBoardControl__sub_801A5A14)(arg0);
    }
    return 0;
}

s32 is_key_down__16TKeyBoardControlFi(s32 arg0) {
    s32 i;
    s32 n;
    n = get_key_state_2__16TKeyBoardControlFPv(((s32 *)&TKeyBoardControl__data_80506270));
    for (i = 0; i < n; i++) {
        if ((u8)arg0 == TKeyBoardControl__sub_8013239C(((s32 *)&TKeyBoardControl__data_80506270), i)) {
            return 1;
        }
    }
    return 0;
}

void TKeyBoardControl__sub_801A5A14(void *arg0) {
    TKeyBoardControl__sub_801323C8(TKeyBoardControl__data_80506270, arg0);
}

extern s32 lbl_805D53A4;
extern const f32 lbl_805DC0B0;

s32 check_input_angle__16TKeyBoardControlFPv(void *arg0) {
    s32 temp_r4_2;
    void *temp_r4;
    s32 temp_r5;
    u16 temp_r0;

    temp_r4 = M2C_FIELD(arg0, void **, 8);
    if (temp_r4 == NULL) {
        return 0;
    }
    if (M2C_FIELD(temp_r4, f32 *, 0x24) < lbl_805DC0B0) {
        return 0;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(temp_r4, s32 *, 0x1C);
    temp_r0 = temp_r5 - M2C_FIELD(arg0, s32 *, 0);
    if (((s32) temp_r0 > 0x5000) && ((s32) temp_r0 < 0xB000)) {
        temp_r4_2 = M2C_FIELD(arg0, s32 *, 4);
        M2C_FIELD(arg0, s32 *, 4) = (s32) lbl_805D53A4;
        if ((s32) (M2C_FIELD(arg0, s32 *, 4) - temp_r4_2) < 8) {
            return 1;
        }
    }
    return 0;
}

extern s32 lbl_805D53A4;

void init_stick_escape_detector(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, void **, 8) = arg1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 4) = (s32) lbl_805D53A4;
    }
}

}
