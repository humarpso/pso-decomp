#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8027D230_lbl_805129F8 {
    M2C_UNK value;
    u8 remaining[0xD4];
};

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void measure_message_text_width(void *, f32);
void set_text_entry_string(void *, u32, s32);
extern RecoveredGlobal_8027D230_lbl_805129F8 lbl_805129F8;
extern const f32 lbl_805DD690;
extern const f32 lbl_805DD694;
void fn_8027D230(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_8027D230_lbl_805129F8_size[sizeof(RecoveredGlobal_8027D230_lbl_805129F8) == 0xD8 ? 1 : -1];
void fn_8027D230(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r31 = (u8 *)&lbl_805129F8.value + ((s8) M2C_FIELD(arg0, u8 *, 0x61) * 0x24);
    temp_r3 = (u8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1));
    set_text_entry_string(temp_r3, (u32) temp_r31, 0);
    measure_message_text_width(temp_r3, lbl_805DD690);
    M2C_FIELD(temp_r3, f32 *, 8) = (f32) (lbl_805DD694 - M2C_FIELD(temp_r3, f32 *, 0x10));
}

}
