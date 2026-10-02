#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
u16 obj_getField1c(void *);
M2C_UNK TObjPlayer__sub_801AF454(void *, u16);
M2C_UNK draw__10TObjPlayerFPv(void *);
M2C_UNK select_class_action_provider__10TObjPlayerFPv(void *, int);
M2C_UNK TObjPlayer__sub_801BD1B4(void *);
extern s32 TObjPlayer__data_805D5D80;
void TObjPlayer__sub_801BD318(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801BD318(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = obj_getField1c((void *) (arg0)) * 0xC00;
    M2C_FIELD(arg0, s32 *, 0xE0) = (s32) (TObjPlayer__data_805D5D80 + temp_r4);
    select_class_action_provider__10TObjPlayerFPv((void *) (arg0), (int) (temp_r4));
    TObjPlayer__sub_801AF454((void *) (arg0), obj_getField1c((void *) (arg0)));
    TObjPlayer__sub_801BD1B4((void *) (arg0));
    draw__10TObjPlayerFPv((void *) (arg0));
}

}
