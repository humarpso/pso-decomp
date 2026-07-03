#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80244B64(void * a0 = 0);
s32 TKeyBoardControl__sub_80131F74(void * a0 = 0);
s32 TKeyBoardControl__sub_80131F64(void *);
s32 TWindowSubTradeMain__sub_80244A4C(void *);
int fn_80131A5C(void* p);
int TWindowMakeTeam__sub_80131A80(void* p);
int TKeyBoardControl__sub_80131F90(void*);
int fn_80244D2C(void*);

int TWindowMakeTeam__sub_80131A80(void* p) { return fn_80244D2C(*(void**)((char*)p + 0x20)); }

}
