#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 TAdSinglePlyChrSelectGC__sub_801FCCDC(s32, s32);

extern s32 lbl_805D5F5C;

struct Ent_801FE468 { char pad4[4]; char body[0x2798 - 4]; };

s32 get_entry__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    if (TAdSinglePlyChrSelectGC__sub_801FCCDC(lbl_805D5F5C, arg0) != 0) {
        return (s32) &((struct Ent_801FE468 *) lbl_805D5F5C)[arg0].body[0];
    }
    return 0;
}

}
