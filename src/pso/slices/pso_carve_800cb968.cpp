#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 handle_message__13TObjEneMe1GeeFii(M2C_UNK, s32);
s32 TOTrapAncient01__sub_80226578(s32, s32, u32, s16, s32);
void TObjEneMe1Gee__sub_800CB968(s32 arg0);
}

extern "C" {

s32 copy_target_state__14TObjEnePanarmsFPvPv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 transition_enemy_state(void * a0 = 0, s32 a1 = 0);
void TObjEneMe1Gee__vt105(void);
int TObjEneMe1Gee__vt102(void* p);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);

void TObjEneMe1Gee__sub_800CB968(s32 arg0) {
    TOTrapAncient01__sub_80226578(handle_message__13TObjEneMe1GeeFii(arg0, 0x3BC16), arg0, arg0 + 0x2FC, 0, 0);
}

}
