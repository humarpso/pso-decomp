#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TObjPlayer__sub_80363EC4(void *arg0, s16 arg1);
void apply_loaded_item__10TObjPlayerFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
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

extern M2C_UNK lbl_804F2A10[];

void *TObjPlayer__sub_80363EC4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F2A10;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
