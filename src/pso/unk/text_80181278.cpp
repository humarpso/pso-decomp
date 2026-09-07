#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80181278_lbl_804B5908 {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 fn_80181074(void *);
u8 * TPhotonMagicSquare__sub_801A2640(void *);
extern RecoveredGlobal_80181278_lbl_804B5908 lbl_804B5908;
extern s32 lbl_805D324C;
extern const f32 lbl_805DBBC8;
u8 *fn_80181278(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80181278_lbl_804B5908_size[sizeof(RecoveredGlobal_80181278_lbl_804B5908) == 0x34 ? 1 : -1];
u8 *fn_80181278(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, f32 farg0) {
    TPhotonMagicSquare__sub_801A2640(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5908.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D324C;
    M2C_FIELD(arg0, f32 *, 0x90) = (f32) lbl_805DBBC8;
    M2C_FIELD(arg0, s32 *, 0x98) = arg2;
    M2C_FIELD(arg0, s32 *, 0x9C) = arg3;
    M2C_FIELD(arg0, f32 *, 0x94) = farg0;
    M2C_FIELD(arg0, s32 *, 0xA0) = 0;
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    fn_80181074(arg0);
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    return arg0;
}

}
