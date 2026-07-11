#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__9TWindowDDFPvi(u8 *arg0, s32 arg1);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);

extern const f32 lbl_805DFC94;

void update_position__9TWindowDDFPvi(u8 *arg0, s32 arg1) {
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x30, arg0 + 0x6C);
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    if (M2C_FIELD(arg0, f32 *, 0x6C) < lbl_805DFC94) {
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - M2C_FIELD(arg0, f32 *, 0x38));
    }
    if (M2C_FIELD(arg0, f32 *, 0x70) < lbl_805DFC94) {
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) (M2C_FIELD(arg0, f32 *, 0x34) - M2C_FIELD(arg0, f32 *, 0x3C));
    }
}

}
