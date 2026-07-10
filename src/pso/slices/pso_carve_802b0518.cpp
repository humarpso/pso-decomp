#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_8022743C();
M2C_UNK fn_802274B8(M2C_UNK *);
M2C_UNK fn_802AC6D0();
M2C_UNK fn_8033DC60(void *);
extern M2C_UNK lbl_80470990[];

void stop_adx_audio(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3DC) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3DC));
    }
    M2C_FIELD(arg0, u32 *, 0x3DC) = 0U;
    fn_802AC6D0();
    fn_8022743C();
    fn_802274B8(lbl_80470990);
    M2C_FIELD(arg0, s32 *, 0x3CC) = 0;
    fn_8033DC60(arg0);
}

}
