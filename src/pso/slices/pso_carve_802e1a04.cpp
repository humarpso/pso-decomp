#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(s32 a0 = 0, s32 a1 = 0);
s32 fn_8023F18C(void);
s32 fn_8023F160(void);
s32 fn_8023ED04(void);
s32 fn_80226328(void);
s32 fn_802261E0(s16 a0 = 0);
s32 fn_8022614C(s32 a0 = 0);
s32 fn_80132E58(u8 a0 = 0);
void * TAdSinglePlyChrSelectGC__sub_8001ED80(void);
void close_and_next__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(void* p, void* a1, void* a2, void* a3, void* a4);
int TAdSinglePlyChrSelectGC__sub_802E1A04(void*, void*, void*, void*, void*);
int TAdSinglePlyChrSelectGC__sub_802E1A8C(void*, void*, void*, void*, void*);
int close_windows__23TAdSinglePlyChrSelectGCFPv(void*);
int TAdSinglePlyChrSelectGC__sub_802E18C8(void);
int TKeyBoardControl__sub_8000F9CC(void*);

int TAdSinglePlyChrSelectGC__sub_802E1A04(void*, void*, void*, void*, void*) { return 0; }

}
