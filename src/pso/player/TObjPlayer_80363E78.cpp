#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_loaded_item__10TObjPlayerFv(void);
M2C_UNK get_model_ids__9TItemLoadFUcPvPv(M2C_UNK, void **, M2C_UNK *);
M2C_UNK submit_computer_command__10TObjPlayerFPv(s32, M2C_UNK, M2C_UNK, M2C_UNK);

void apply_loaded_item__10TObjPlayerFv(void) {
    void *spC;
    M2C_UNK sp8;

    get_model_ids__9TItemLoadFUcPvPv(5, &spC, &sp8);
    if (spC != NULL) {
        submit_computer_command__10TObjPlayerFPv(M2C_FIELD(spC, s32 *, 0x2C), 2, 2, 0xB);
    }
}

}
