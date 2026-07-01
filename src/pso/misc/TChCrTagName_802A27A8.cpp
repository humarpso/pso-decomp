#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TChCrTagNameFv(void *arg0);

M2C_UNK TChCrTag__sub_802A1A00();
M2C_UNK TChCrTagName__sub_802A26E0(void *);

void run_task__12TChCrTagNameFv(void *arg0) {
    TChCrTag__sub_802A1A00();
    TChCrTagName__sub_802A26E0(arg0);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + 1);
}

}
