#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TOHangceilingCave01KeyQuick__sub_80168D20(void);
f32 TOHangceilingCave01KeyQuick__sub_80168D28(void);
void TOHangceilingCave01KeyQuick__sub_80168D30(void);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v);

int TOHangceilingCave01KeyQuick__sub_80168D20(void) { return 1; }

extern f32 lbl_805DB650;

f32 TOHangceilingCave01KeyQuick__sub_80168D28(void) {
    return lbl_805DB650;
}

void TOHangceilingCave01KeyQuick__sub_80168D30(void) {  }

}
