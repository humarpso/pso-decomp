#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void set_state__10TNpcPlayerFPvs(void *, s16);
void set_type__10TNpcPlayerFPvs(void *, s16);
s32 TObjPlayer__sub_801D9E18(s32, s32);
void set_slot_type_state__10TObjPlayerFiiss(s32 arg0, s32 arg1, s16 arg2, s16 arg3);
}

extern "C" {

void set_slot_type_state__10TObjPlayerFiiss(s32 arg0, s32 arg1, s16 arg2, s16 arg3) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(TObjPlayer__sub_801D9E18(arg0, arg1));
    set_type__10TNpcPlayerFPvs(temp_r3, arg2);
    set_state__10TNpcPlayerFPvs(temp_r3, arg3);
}

}
