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

int TSaveChCr__sub_8033A0D0(void) { return 0; }

}
