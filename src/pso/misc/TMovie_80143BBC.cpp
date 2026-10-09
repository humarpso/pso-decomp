#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void flush_cache__6TMovieFv(void);
M2C_UNK DCStoreRangeNoSync(s32, s32);
M2C_UNK VIFlush();
u32 VIGetNextField();

extern s32 movie_current_frame_buffer;
extern s32 lbl_805D5694;
extern s32 movie_flip_counter;

void flush_cache__6TMovieFv(void) {
    if (VIGetNextField() == 0U) {
        DCStoreRangeNoSync(movie_current_frame_buffer, lbl_805D5694);
        VIFlush();
        movie_flip_counter += 1;
    }
}

}
