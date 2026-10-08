#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_line__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 get_shared_text_buffer();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK text_builder_append(M2C_UNK *);
M2C_UNK text_builder_reset();
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_805DCF00;

void update_stat_line__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    text_builder_reset();
    text_builder_append(&lbl_805DCF00);
    TWindowSubStatusDisp__sub_80228F5C(arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, get_shared_text_buffer(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
}

}
