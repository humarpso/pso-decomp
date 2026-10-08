#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK save_position__14TBoss4DarkFalzFi(void *);
M2C_UNK set_position_from__14TBoss4DarkFalzFPvPv(void *, s32);
M2C_UNK calc_attach_pos__10TObjPlayerFPv(void *);
M2C_UNK set_position_history_entry__10TObjPlayerFiiff(void *, M2C_UNK, f32, f32);

void update_position__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    set_position_from__14TBoss4DarkFalzFPvPv(arg0, arg1 + 8);
    save_position__14TBoss4DarkFalzFi(arg0);
    calc_attach_pos__10TObjPlayerFPv(arg0);
    set_position_history_entry__10TObjPlayerFiiff(arg0, 0, M2C_FIELD(arg0, f32 *, 0x38), M2C_FIELD(arg0, f32 *, 0x40));
}

}
