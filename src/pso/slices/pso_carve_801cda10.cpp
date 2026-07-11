#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_linked_obj__10TObjPlayerFPv(void *arg0);
M2C_UNK TObjPlayer__sub_8001053C();
M2C_UNK TObjPlayer__sub_801D2630(void *);
int TObjPlayer__sub_801CD9F0(void* p);
int update_action_state__10TObjPlayerFPv(void*);

int TObjPlayer__sub_801CDA10(void) { return 0; }

}
