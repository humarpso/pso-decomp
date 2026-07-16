#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TNpcPlayer__sub_8007206C(int, int);
s32 get_char_index__23TAdSinglePlyChrSelectGCFUi(int);
s32 TCharaMaking__sub_8028DE78();
M2C_UNK TCharaMaking__sub_8028E8F4(void *, int);
M2C_UNK TChCrCharSelect__sub_802937D4(void *);
extern s32 TChCrCharSelect__data_805D3CB8;
extern s32 tl_03;

void TChCrCharSelect__sub_80293860(u8 *arg0) {
    s32 temp_r0;
    u8 *temp_r31;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C) - 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = temp_r0;
    if (temp_r0 <= 0) {
        temp_r31 = (unsigned char *) (get_char_index__23TAdSinglePlyChrSelectGCFUi((int) (0xFFFF)) + 0x370);
        TChCrCharSelect__sub_802937D4((void *) (TChCrCharSelect__data_805D3CB8));
        TNpcPlayer__sub_8007206C((int) (temp_r31), (int) (TCharaMaking__sub_8028DE78()));
        M2C_FIELD(temp_r31, s8 *, 0x30) = -1;
        M2C_FIELD(temp_r31, s8 *, 0) = 0;
        TCharaMaking__sub_8028E8F4((void *) (tl_03), (int) (temp_r31));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
