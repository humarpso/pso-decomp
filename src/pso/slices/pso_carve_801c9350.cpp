#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 can_guard__10TObjPlayerFPv(void * a0 = 0);
s32 is_status_flag_200__10TObjPlayerFPv(void);
s32 use_current_item__10TObjPlayerFPv(void * a0 = 0);
s32 TObjPlayer__sub_801B1E54(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 obj_clearFlags30(void * a0 = 0, s32 a1 = 0);
s32 obj_getField1c(void * a0 = 0);
s32 obj_getS16_32C(void * a0 = 0);
int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801C959C(void);

int handle_6x53(void) { return 0; }

}
