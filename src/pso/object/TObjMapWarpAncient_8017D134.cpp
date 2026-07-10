#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjMapWarpAncient__ct(u8 *arg0);
M2C_UNK TObjMapWarp__ct();
s32 fn_8017D27C(int);
s32 fn_8017D2AC(int);
s32 fn_8017D2D4(int);

extern M2C_UNK __vt__18TObjMapWarpAncient[];
extern s32 lbl_805D31E8;
extern const f32 lbl_805DBAC4;

u8 *TObjMapWarpAncient__ct(u8 *arg0) {
    TObjMapWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjMapWarpAncient;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D31E8;
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) lbl_805DBAC4;
    M2C_FIELD(arg0, s32 *, 0x100) = fn_8017D2D4(2);
    M2C_FIELD(arg0, s32 *, 0x104) = fn_8017D2D4(0);
    M2C_FIELD(arg0, s32 *, 0x108) = fn_8017D2D4(4);
    M2C_FIELD(arg0, s32 *, 0x10C) = fn_8017D27C(2);
    M2C_FIELD(arg0, s32 *, 0x110) = fn_8017D27C(0);
    M2C_FIELD(arg0, s32 *, 0x114) = fn_8017D27C(4);
    M2C_FIELD(arg0, s32 *, 0x118) = fn_8017D2AC(1);
    return arg0;
}

}
