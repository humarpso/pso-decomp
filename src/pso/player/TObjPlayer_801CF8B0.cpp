#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_ring_release__10TObjPlayerFi(s32 arg0);
void try_trigger_effect__10TObjPlayerFi(s32 arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(s32, M2C_UNK);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(s32, M2C_UNK, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(s32, M2C_UNK);

void handle_ring_release__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x5EC, 4);
        run_action_state_phase__10TObjPlayerFisi(arg0, 1, 0);
    }
}

void try_trigger_effect__10TObjPlayerFi(s32 arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x5EC, 4);
        run_action_state_phase__10TObjPlayerFisi(arg0, 1, 5);
    }
}

}
