#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern s32 gstream_buffer_read_offset;
extern s32 gstream_buffer_valid_size;
s32 fn_800FE0A8(void);
void read_data_sync__6TLobbyFiii(s32, s32, s32);
s32 fn_800FE0A8(void);
extern s32 gstream_tmp_buffer;
extern s32 gstream_read_offset;
extern s32 gstream_buffer_read_offset;
extern s32 gstream_buffer_valid_size;
extern s32 gstream_file_size;
s32 fn_800FE0C8(s32 arg0);
}

extern "C" {

s32 fn_800FE0A8(void) {
  unsigned long new_var;
  s32 temp_r3;
  new_var = gstream_buffer_read_offset;
  new_var = gstream_buffer_valid_size - new_var;
  gstream_buffer_read_offset = gstream_buffer_read_offset;
  temp_r3 = new_var;
  return (gstream_buffer_valid_size - gstream_buffer_read_offset) & (((s32) ((-temp_r3) & (~new_var))) >> 0x1F);
}
s32 fn_800FE0C8(s32 arg0) {
    s32 temp_r0;
    s32 var_r5;
    if (arg0 == 0) {
        return 0;
    }
    if (fn_800FE0A8() == 0) {
        temp_r0 = gstream_file_size - gstream_read_offset;
        if (temp_r0 < (var_r5 = 0x40000)) {
            var_r5 = temp_r0;
        }
        if (var_r5 > 0) {
            gstream_buffer_valid_size = var_r5;
            gstream_buffer_read_offset = 0;
            read_data_sync__6TLobbyFiii(arg0, (s32) (var_r5 + 0x7FF) / 2048, gstream_tmp_buffer);
        }
    }
    return fn_800FE0A8();
}

}
