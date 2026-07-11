#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 apply_settings__23TAdSinglePlyChrSelectGCFi(void);
s32 TAdSinglePlyChrSelectGC__sub_802E18C8(void);
s32 TAdSinglePlyChrSelectGC__sub_802E1F14(void);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void * a0 = 0, s32 a1 = 0);
s32 poll_load_status__23TAdSinglePlyChrSelectGCFPv(void * a0 = 0);
s32 fn_802E147C(void);
int TAdSinglePlyChrSelectGC__sub_802E1F8C(void* p);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);

s32 TAdSinglePlyChrSelectGC__sub_802E1F14(void) { return 0; }

}
