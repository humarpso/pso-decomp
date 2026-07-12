#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjWaitEntryHairMoveSim__sub_800FE300(void);
int TObjWaitEntryHairMoveSim__sub_800FE32C();

int TObjWaitEntryHairMoveSim__sub_800FE300(void) {
    return (~TObjWaitEntryHairMoveSim__sub_800FE32C()) != 0 ? 1 : 0;
}

}
