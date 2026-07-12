#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p);
int TAdSinglePlyChrSelectGC__sub_8028DC14(void);
int fn_8028DBC4(void* a0 = 0);
void *get_char_index__23TAdSinglePlyChrSelectGCFUi(s32);

int TAdSinglePlyChrSelectGC__sub_8028DC1C(void* p) { fn_8028DBC4(p); return 1; }

}
