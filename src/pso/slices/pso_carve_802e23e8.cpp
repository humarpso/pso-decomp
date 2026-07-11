#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80132F2C(s32, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E19B0(s32, s32, s32, s32, s32);
s32 fn_8039DCE0(s32, s32);
s32 fn_802E11C8(void *);
s32 TAdSinglePlyChrSelectGC__sub_801FEAFC();
s32 init_timestamped_data();
s8 fn_8001C5E8();
s32 TAdSinglePlyChrSelectGC__sub_801FD94C(s32);
s32 TAdSinglePlyChrSelectGC__sub_80202BA8(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FD990(s32);
s32 TAdSinglePlyChrSelectGC__sub_801FEB40();
s32 TAdSinglePlyChrSelectGC__sub_802012AC();
s32 TAdPlayerLoadGC__sub_80076BBC();
s32 TAdSinglePlyChrSelectGC__sub_802E1BF4(void *);
s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(void *, s32);
s32 TAdSinglePlyChrSelectGC__sub_802E1868(void *);
int start_load__23TAdSinglePlyChrSelectGCFv(void*);
int TAdSinglePlyChrSelectGC__sub_802E195C(void*, void*, void*, void*, void*);
int TAdSinglePlyChrSelectGC__sub_802E1C6C(void*);
void TAdSinglePlyChrSelectGC__sub_802E2848(void* p);
void TAdSinglePlyChrSelectGC__sub_802E2A7C(void* p);

int TAdSinglePlyChrSelectGC__sub_802E23E8(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2450(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E24B8(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2520(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2588(void) { return 0; }
int TAdSinglePlyChrSelectGC__sub_802E2610(void) { return 0; }

}
