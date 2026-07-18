#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 allow_rendering__7TObjectFv(u32);
s32 __dl__FPv(void *);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
s32 TWindow__close(u32);
s32 get_field_14__13TAdVIConfigGCFPv(void* p);

int TAdVIConfigGC__sub_80307DF4(void) { return 0; }

}
