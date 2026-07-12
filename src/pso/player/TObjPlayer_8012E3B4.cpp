#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_8012E3B4(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
u32 TObjPlayer__sub_80100490(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805DAF70;

void TObjPlayer__sub_8012E3B4(u8 *arg0) {
    if (TObjPlayer__sub_80100490(M2C_FIELD(arg0, s32 *, 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    TBoss4Zako__sub_803D8910(arg0 + 0x2C, arg0 + 0x20);
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) (M2C_FIELD(arg0, f32 *, 0x24) + lbl_805DAF70);
}

}
