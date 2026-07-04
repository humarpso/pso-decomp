#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8001A438(u32);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK TObjMapWarp__ct();
extern M2C_UNK __vt__16TObjMapForceWarp[];
extern s32 lbl_805D3478;

void *TObjMapForceWarp__ct(void *arg0) {
    TObjMapWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjMapForceWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3478;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) > 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xFC) = 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0U) {
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4));
        fn_8001A438(M2C_FIELD(arg0, u32 *, 0xB4));
    }
    return arg0;
}

}
