#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TGStream__sub_800FDD50(void);
void TGStream__sub_800FDD64(void);
int get_instance__8TGStreamFv(void);

extern s32 gstream_buffer_read_offset;
extern s32 gstream_buffer_valid_size;

void TGStream__sub_800FDD50(void) {
    gstream_buffer_valid_size = 0;
    gstream_buffer_read_offset = 0x40000;
}

void TGStream__sub_800FDD64(void) {  }

    extern int gstream_file_size;
int get_instance__8TGStreamFv(void) {  return gstream_file_size; }

}
