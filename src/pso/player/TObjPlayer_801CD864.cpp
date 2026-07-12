#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801CD864(void *arg0);
void update_state5_action__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_801CD904(void);
int TObjPlayer__sub_801CD908(void* p);
s32 TObjPlayer__sub_801D0BC0(void *, s32, s32);
s32 is_anim_finished__10TObjPlayerFPv();
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CD864(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (is_anim_finished__10TObjPlayerFPv() != 0)) {
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}
void update_state5_action__10TObjPlayerFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 0x328) == 5) && (is_anim_finished__10TObjPlayerFPv() != 0)) {
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}
void TObjPlayer__sub_801CD904(void) {  }
int TObjPlayer__sub_801CD908(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
