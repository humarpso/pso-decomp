#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TKeyBoardControl__sub_801A5900(s32 arg0);
s32 TKeyBoardControl__sub_801A594C(s32 arg0);
s32 check_input_ready__16TKeyBoardControlFi(M2C_UNK *);
s32 TKeyBoardControl__sub_801A5998(s32);
s32 TKeyBoardControl__sub_801A5A14(s32);

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 TKeyBoardControl__sub_801A5900(s32 arg0) {
    if (check_input_ready__16TKeyBoardControlFi(TKeyBoardControl__data_80506270) != 0) {
        return TKeyBoardControl__sub_801A5998(arg0);
    }
    return 0;
}

extern M2C_UNK TKeyBoardControl__data_80506270[];

s32 TKeyBoardControl__sub_801A594C(s32 arg0) {
    if (check_input_ready__16TKeyBoardControlFi(TKeyBoardControl__data_80506270) != 0) {
        return TKeyBoardControl__sub_801A5A14(arg0);
    }
    return 0;
}

}
