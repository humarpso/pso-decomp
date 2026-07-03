#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOAttackableCol__sub_801575AC(void *, s32);
s32 TObjPlayer__sub_801B4A18(void *, s32);
u8 TODoorAncient08__sub_80229220(u16);
int fn_8020C5E0(void*);
int queue_destruction__7TObjectFv(void*);
void render__15TOAttackableColFv(void);

void render__15TOAttackableColFv(void) {  }

}
