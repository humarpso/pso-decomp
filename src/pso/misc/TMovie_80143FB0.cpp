#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct MovieFrameInfo {
    u32 field_00;
    u8 pad_C[0x4];
    M2C_UNK field_08;
    M2C_UNK field_0c;
    u8 trailing_storage[0x30];
};
extern "C" {

s32 TMovie__sub_80143C94(int, int, int);
s32 flush_and_reset__6TMovieFv();
s32 flush_framebuffer(void *, void *, void *);
s32 copy__6TMovieFPvPv(void *, void *);
extern M2C_UNK (*lbl_805D6B38)(void **, u32 *);
extern M2C_UNK (*lbl_805D6B3C)(void **);

s32 TMovie__sub_80144184(u8 *arg0) {
    typedef char sp8_offset[(offsetof(MovieFrameInfo, field_00) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(MovieFrameInfo, field_08) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(MovieFrameInfo, field_0c) == 0xC) ? 1 : -1];
    MovieFrameInfo frame;

    s32 temp_r3_2;
    void **temp_r3;
    u8 *temp_r4;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
        flush_and_reset__6TMovieFv();
    }
    lbl_805D6B38(M2C_FIELD(arg0, void ***, 4), &frame.field_00);
    if (frame.field_00 != 0U) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) {
            TMovie__sub_80143C94((int) (frame.field_00), (int) (frame.field_08), (int) (frame.field_0c));
        } else {
            flush_framebuffer((void *) (arg0), (void *) (M2C_FIELD(arg0, void ***, 4)), (void *) (&frame.field_00));
        }
        copy__6TMovieFPvPv((void *) (arg0 + 0x5C), (void *) (&frame.field_00));
        lbl_805D6B3C(M2C_FIELD(arg0, void ***, 4));
    }
    temp_r3 = (void **)(M2C_FIELD(arg0, void ***, 4));
    temp_r4 = (u8 *)(*temp_r3);
    temp_r3_2 = M2C_FIELD(temp_r4, s32 (**)(void **, void *), 0x20)(temp_r3, temp_r4);
    if (temp_r3_2 == 3) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x58) = temp_r3_2;
    return 1;
}

}
