#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TWindowDD__sub_803428C4(void *);
M2C_UNK TWindowDD__sub_80342B5C(void *);
s32 TWindowDD__sub_80342F84();
s32 update_close_flag__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_80348DFC(void *);
extern s32 TWindowDD__data_805D6E08;
void TWindowDD__sub_80342D14(u8 *arg0);
}

extern "C" {

void update_transition__9TWindowDDFPv(void *arg0);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);

void update_transition__9TWindowDDFPv(void *arg0) {
    TWindowDD__sub_80347C50();
    TWindowDD__sub_80347B70(arg0);
    if (test_input_flag_4__9TWindowDDFPv(arg0) != 0) {
        play_sound__9TWindowDDFv();
        M2C_FIELD(arg0, s32 *, 0xB4) = 6;
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        play_se__9TWindowDDFv();
        TWindowDD__sub_8034330C(arg0);
    }
}
void TWindowDD__sub_80342D14(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    var_r31 = 0;
    M2C_FIELD(arg0, s16 *, 0xC6) = 1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        TWindowDD__sub_80347C50();
        TWindowDD__sub_80347B70((void *) (arg0));
        if (test_input_flag_4__9TWindowDDFPv((void *) (arg0)) != 0) {
            play_sound__9TWindowDDFv();
            var_r31 = !update_close_flag__9TWindowDDFPv((void *) (arg0));
        } else if (TWindowDD__sub_803482B0((void *) (arg0)) != 0) {
            play_se__9TWindowDDFv();
            M2C_FIELD(arg0, s32 *, 0xA4) = 0;
            TWindowDD__sub_8034330C((void *) (arg0));
        }
        break;
    case 1:
        var_r31 = TWindowDD__sub_80342F84();
        break;
    }
    if (var_r31) {
        M2C_FIELD(arg0, s32 *, 0xA4) = 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) == -0x3C) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0x14;
        } else {
            switch (TWindowDD__data_805D6E08) {
            case 0:
                TWindowDD__sub_80342B5C((void *) (arg0));
                TWindowDD__sub_80348DFC((void *) (arg0 + 0xC4));
                M2C_FIELD(arg0, s16 *, 0xC6) = 3;
                break;
            case 1:
            case 2:
            case 3:
            case 4:
            default:
                TWindowDD__sub_80348DFC((void *) (arg0 + 0xC4));
                M2C_FIELD(arg0, s16 *, 0xC6) = 4;
                TWindowDD__sub_803428C4((void *) (arg0));
                break;
            }
        }
        TWindowDD__sub_803435A0((void *) (arg0));
    }
}

}
