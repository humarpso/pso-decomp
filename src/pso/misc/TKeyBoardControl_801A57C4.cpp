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

extern "C" {
s32 TKeyBoardControl__sub_801321B4(s32);
extern M2C_UNK TKeyBoardControl__data_80506270[];
void TKeyBoardControl__sub_801A58B0(void);
s32 TKeyBoardControl__sub_80132310(s32);
extern M2C_UNK TKeyBoardControl__data_80506270[];
void TKeyBoardControl__sub_801A58D8(void);
}

extern "C" {

void TObjPlayer__sub_801A5AC8(void *arg0, void *arg1);
s32 check_and_read__16TKeyBoardControlFi(s32 arg0);
s32 check_input_angle__16TKeyBoardControlFPv(void *arg0);
s32 check_reset_button__16TKeyBoardControlFv(void);
s32 read_input__16TKeyBoardControlFi(s32 arg0);
void reset__16TKeyBoardControlFv(void);
s32 OSGetResetButtonState();
s32 TKeyBoardControl__sub_801A5998(s32);
s32 TKeyBoardControl__sub_801A5A14(s32);
s32 check_input_ready__16TKeyBoardControlFi(M2C_UNK *);

    extern unsigned char lbl_805D5D09;
void reset__16TKeyBoardControlFv(void) { lbl_805D5D09 = 0; }

extern u8 lbl_805D5D0A;

s32 check_reset_button__16TKeyBoardControlFv(void) {
    if (OSGetResetButtonState() != 0) {
        lbl_805D5D0A = 1;
    }
    if ((s8) lbl_805D5D0A != 0) {
        if (OSGetResetButtonState() != 0) {
            return 0;
        }
        lbl_805D5D0A = 0;
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
        return TKeyBoardControl__sub_801A5998(arg0);
    }
    return 0;
}

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 read_input__16TKeyBoardControlFi(s32 arg0) {
    if (check_input_ready__16TKeyBoardControlFi(TKeyBoardControl__data_80506270) != 0) {
        return TKeyBoardControl__sub_801A5A14(arg0);
    }
    return 0;
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

void TObjPlayer__sub_801A5AC8(void *arg0, void *arg1) {
    if (arg1 != NULL) {
        M2C_FIELD(arg0, void **, 8) = arg1;
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x1C);
        M2C_FIELD(arg0, s32 *, 4) = (s32) lbl_805D53A4;
    }
}

}
