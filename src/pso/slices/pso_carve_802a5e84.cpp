#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 alloc_buffer__11TOBoss4RockFPv();
s32 TWindowSnapShot__sub_802A604C(void *, s32);
s32 TWindowSnapShot__sub_802A6054();
s32 TGStream__sub_800FDADC(s32, s32);
s32 TWindowSnapShot__sub_802A605C(void *);
s32 TLobby__sub_800FD944(s32);
void fn_802A5CB8(void* p);

int TWindowSnapShot__sub_802A5E84(void) { return 0; }

}
