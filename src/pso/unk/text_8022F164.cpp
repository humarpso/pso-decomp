#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK __construct_array(void *, void *, int, int, int);
extern M2C_UNK fn_8022F258[];
extern M2C_UNK lbl_80515FBC[];
extern M2C_UNK lbl_8051607C[];
void fn_8022F164(void);
}

extern "C" {

void fn_8022F164(void) {
    __construct_array((void *) (lbl_80515FBC), (void *) (fn_8022F258), (int) (0), (int) (0x30), (int) (4));
    __construct_array((void *) (lbl_8051607C), (void *) (fn_8022F258), (int) (0), (int) (0x30), (int) (4));
}

}
