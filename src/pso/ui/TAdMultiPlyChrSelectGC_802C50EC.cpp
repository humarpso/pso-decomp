#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TAdMultiPlyChrSelectGC__sub_802C658C(s32);
void TAdMultiPlyChrSelectGC__sub_802C5BCC(s32 arg0, s32 *arg1, s32 *arg2);
}

extern "C" {

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C50EC(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C522C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5314(s32);
s32 get_state_flag__9TMainTaskFv();

extern s32 TAdMultiPlyChrSelectGC__data_805D67DC;

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    if (get_state_flag__9TMainTaskFv() != 1) {
        TAdMultiPlyChrSelectGC__sub_802C5314(arg0);
        switch ((s32) TAdMultiPlyChrSelectGC__data_805D67DC) {
        case 0:
            TAdMultiPlyChrSelectGC__sub_802C522C(arg0);
            return;
        case 1:
            TAdMultiPlyChrSelectGC__sub_802C50EC(arg0);
            break;
        }
    }
}
void TAdMultiPlyChrSelectGC__sub_802C5BCC(s32 arg0, s32 *arg1, s32 *arg2) {
    s32 var_r3;
    var_r3 = TAdMultiPlyChrSelectGC__sub_802C658C(arg0);
    *arg1 = var_r3 > 3;
    if (var_r3 > 3) {
        var_r3 -= 4;
    }
    *arg2 = var_r3;
}

}
