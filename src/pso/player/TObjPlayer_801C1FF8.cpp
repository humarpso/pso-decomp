#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_8001BF10(void *);
void TObjPlayer__sub_8012AF00(void *);
void TObjPlayer__sub_801D33B4(void *);

extern const f32 TObjPlayer__data_805DC294;

void *init__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_8001BF10((void *)((char *)arg0 + 12));
    TObjPlayer__sub_8012AF00((void *)((char *)arg0 + 48));
    M2C_FIELD(arg0, f32 *, 0x8) = TObjPlayer__data_805DC294;
    TObjPlayer__sub_801D33B4(arg0);
    return arg0;
}

}
