#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801E4E4C_lbl_804C57E0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
extern RecoveredGlobal_801E4E4C_lbl_804C57E0 lbl_804C57E0;
void construct_texture_wave(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_801E4E4C_lbl_804C57E0_size[sizeof(RecoveredGlobal_801E4E4C_lbl_804C57E0) == 0x10 ? 1 : -1];
void construct_texture_wave(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0x50) = &lbl_804C57E0.value;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg1;
}

}
