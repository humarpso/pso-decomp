#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flags_play_sound__13TBoss2DeRolLeFPv(u8 *arg0);
M2C_UNK clear_play_flags__13TBoss2DeRolLeFPv();

M2C_UNK play_sound(M2C_UNK, void *);

void set_flags_play_sound__13TBoss2DeRolLeFPv(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 0x88);
    clear_play_flags__13TBoss2DeRolLeFPv();
    play_sound(0x4003AA06, arg0 + 0x38);
}

}
