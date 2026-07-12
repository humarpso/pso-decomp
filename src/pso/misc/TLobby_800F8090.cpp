#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_fadeout_state__6TLobbyFi(s32 arg0);

extern void *lbl_805D5330;
extern const f32 lbl_805DA8E8;

void init_fadeout_state__6TLobbyFi(s32 arg0) {
    if ((void *) lbl_805D5330 != NULL) {
        M2C_FIELD(lbl_805D5330, s32 *, 0x28) = arg0;
        M2C_FIELD(lbl_805D5330, f32 *, 0x1C) = (f32) lbl_805DA8E8;
        M2C_FIELD(lbl_805D5330, s8 *, 0x20) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x21) = 0;
        M2C_FIELD(lbl_805D5330, s8 *, 0x22) = 0;
        M2C_FIELD(lbl_805D5330, s32 *, 0x24) = 2;
    }
}

}
