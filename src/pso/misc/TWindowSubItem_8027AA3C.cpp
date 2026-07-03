#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8028783C(s32 a0 = 0, s32 a1 = 0);
void TWindowSubItem__sub_8027AA50(void *arg0);
M2C_UNK TWindowSubStatusDisp__sub_80223B88(void *, s16);
M2C_UNK fn_80249058();
int fn_80266CF8(void*);
int fn_80266D78(void*);
int fn_80266DB0(void*);
int fn_80266EB8(void*);
int fn_8027ABFC(void* a0 = 0);
void TWindowSubItem__sub_8027ABA8(void* p);
void TWindowSubItem__sub_8027A9E4(void* p);
void TWindowSubItem__sub_8027AA3C(void* p);
void TWindowSubItem__sub_8027AA48(void* p, s16 v);

void TWindowSubItem__sub_8027AA3C(void* p) { *(s16*)((char*)p + 0x88) = -1; }
void TWindowSubItem__sub_8027AA48(void* p, s16 v) { *(s16*)((char*)p + 0x74) = v; }
void TWindowSubItem__sub_8027AA50(void *arg0) {
    TWindowSubStatusDisp__sub_80223B88(arg0, M2C_FIELD(arg0, s16 *, 0x88));
    fn_80249058();
}

}
