#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK DateToSeconds__FP9DateStampPi(M2C_UNK *, s32 *);
M2C_UNK getDateStamp__FP9DateStamp(M2C_UNK *);
extern M2C_UNK lbl_80513904[];

s32 fn_80201074(void *arg0) {
    M2C_UNK sp10[4];
    s32 spC;
    s32 sp8;

    if (arg0 != NULL) {
        DateToSeconds__FP9DateStampPi(lbl_80513904, &spC);
        getDateStamp__FP9DateStamp(sp10);
        DateToSeconds__FP9DateStampPi(sp10, &sp8);
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + (sp8 - spC));
        return M2C_FIELD(arg0, s32 *, 0xC);
    }
    return 0;
}

}
