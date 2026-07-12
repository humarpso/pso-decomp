#include "types.h"
typedef s32 M2C_UNK;
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TQuestVmDownLoadServer__sub_8007EBDC(void* p);
int alloc__22TQuestVmDownLoadServerFPv(void* p);
int alloc__23TAdSinglePlyChrSelectGCFPv(void* p);
int fn_803DE864(void*);
M2C_UNK xfree__FPv();
int xmalloc__FUl(void*);

int TQuestVmDownLoadServer__sub_8007EBDC(void* p) { return fn_803DE864(p); }
int alloc__22TQuestVmDownLoadServerFPv(void* p) { return xmalloc__FUl(p); }

}
