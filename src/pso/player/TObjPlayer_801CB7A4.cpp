#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_position_from_target__10TObjPlayerFPv();
void TObjPlayer__sub_801CB7A4(void);
void TObjPlayer__sub_801CB7D4(void);
int TObjPlayer__sub_801CB7D8(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CB7A4(void) {  }
void update_if_flag_set__10TObjPlayerFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        update_position_from_target__10TObjPlayerFPv();
    }
}
void TObjPlayer__sub_801CB7D4(void) {  }
int TObjPlayer__sub_801CB7D8(void* p) { return try_apply_status_action__10TObjPlayerFi(p); }

}
