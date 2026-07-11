#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 queue_destruction__7TObjectFv(void *);
s32 fn_802D50A0(s32);
s32 fn_802D50A8(s32, s32);
s32 fn_802E00BC(s32, s32);
s32 fn_802E00C4(s32);
u32 fn_802E0100();
s32 TAdChrMoveEffectGC__sub_803490AC();
int TAdMultiPlyChrSelectGC__sub_802DC2F0(void* p);
int fn_8023EC14(void*);

int TAdMultiPlyChrSelectGC__sub_802DC294(void) { return 0; }

}
