#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorCave01__vt17(void *arg0);
s32 get_main_phase();
s32 TRaderMapCore__sub_8030A808();
void TODoorCave01__vt18(void);

int TODoorCave01__sub_80161320(void) { return 0; }
int TODoorCave01__vt4(void) { return 0; }

}
