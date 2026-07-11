#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C50EC(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C522C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5314(s32);
s32 TMainTask__sub_8001A430();

extern s32 TAdMultiPlyChrSelectGC__data_805D67DC;

void update__22TAdMultiPlyChrSelectGCFi(s32 arg0) {
    if (TMainTask__sub_8001A430() != 1) {
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

}
