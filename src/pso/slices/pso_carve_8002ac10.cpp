#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_800BC4C8(void *);
extern M2C_UNK lbl_80481B34[];

void *fn_8002AC10(void *arg0) {
    fn_800BC4C8(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80481B34;
    return arg0;
}

}
