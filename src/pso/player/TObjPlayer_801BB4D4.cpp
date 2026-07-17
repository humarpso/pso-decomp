#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void unregister__10TObjPlayerFi(s32 arg0);
M2C_UNK clear_links__10TObjPlayerFPv();
M2C_UNK unregister_sub__10TObjPlayerFPv(s32);

s32 obj_getField1c(s32);
extern M2C_UNK lbl_8050EA10[];

void unregister__10TObjPlayerFi(s32 arg0) {
    clear_links__10TObjPlayerFPv();
    unregister_sub__10TObjPlayerFPv(arg0);
    lbl_8050EA10[(u16)obj_getField1c(arg0)] = 0;
}

}
