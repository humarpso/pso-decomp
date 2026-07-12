#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindow__close(void *);
int TObjPlayer__sub_802C3BB4(void*);
int TSaveChCr__sub_8033A138(void);
int TAdSinglePlyChrSelectGC__sub_801FF5E4(void*);

void close_window__9TSaveChCrFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
}

}
