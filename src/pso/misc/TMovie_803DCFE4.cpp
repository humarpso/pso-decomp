#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_callback__6TMovieFv(void);
extern M2C_UNK (*lbl_805D7718)();

void run_callback__6TMovieFv(void) {
    if (((M2C_UNK (*)()) lbl_805D7718) != NULL) {
        lbl_805D7718();
    }
}

}
