#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_item_data__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK init__9TItemDataFv();

void init_item_data__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    init__9TItemDataFv();
    M2C_FIELD(arg0, s8 *, 0) = 4;
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
}

}
