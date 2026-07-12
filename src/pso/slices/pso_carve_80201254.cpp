#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
M2C_UNK TAdSinglePlyChrSelectGC__sub_80202BB0(M2C_UNK);
M2C_UNK init_slots__23TAdSinglePlyChrSelectGCFv();
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
extern s32 lbl_805D5F68;

void init_timestamped_data(void) {
    char sp8[0x18];

    init_slots__23TAdSinglePlyChrSelectGCFv();
    memset(lbl_805D5F68, 0, 0xE28C);
    getDateStamp__FP9DateStamp((M2C_UNK *) sp8);
    DateToSeconds__FP9DateStampPi((M2C_UNK *) sp8, lbl_805D5F68 + 0xE284);
    TAdSinglePlyChrSelectGC__sub_80202BB0(0);
}

}
