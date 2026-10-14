#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void mfci_set_error_callback(s32 arg0, s32 arg1);

extern s32 mfci_error_callback;
extern s32 mfci_error_callback_context;

void mfci_set_error_callback(s32 arg0, s32 arg1) {
    mfci_error_callback = arg0;
    mfci_error_callback_context = arg1;
}

}
