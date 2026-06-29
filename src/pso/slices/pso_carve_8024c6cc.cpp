#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TRaderMapCore__sub_801F9110();
s32 TRaderMapCore__sub_801F9144();
void fn_8024C6CC(void* p);
void fn_8024C6DC(void* p);
void fn_8024C6EC(void* p);
void fn_8024C6FC(void* p);
void fn_8024C70C(void* p);
void fn_8024C71C(void* p);
void fn_8024C72C(void* p);
void fn_8024C73C(void* p);
void fn_8024C74C(void* p);
void fn_8024C75C(void* p);
int fn_8024C7D4(void* p);
int fn_8024C7E0(void* p);
int fn_8024C7EC(void* p);
int fn_8024C7F8(void* p);
int fn_8024C804(void* p);
s16 fn_8024C810(void* p);
s16 fn_8024C818(void* p);

void fn_8024C6CC(void* p) { *(u16*)((char*)p + 0x1c) |= 0x40; }
void fn_8024C6DC(void* p) { *(u16*)((char*)p + 0x1c) &= 0xffffffbf; }
void fn_8024C6EC(void* p) { *(u16*)((char*)p + 0x1c) |= 0x2; }
void fn_8024C6FC(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffffd; }
void fn_8024C70C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x4; }
void fn_8024C71C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffffb; }
void fn_8024C72C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x8; }
void fn_8024C73C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xfffffff7; }
void fn_8024C74C(void* p) { *(u16*)((char*)p + 0x1c) |= 0x10; }
void fn_8024C75C(void* p) { *(u16*)((char*)p + 0x1c) &= 0xffffffef; }
void fn_8024C76C(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) | 1);
    TRaderMapCore__sub_801F9110();
}
void fn_8024C798(void *arg0) {
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (M2C_FIELD(arg0, u16 *, 0x1C) & 0xFFFE);
    TRaderMapCore__sub_801F9144();
}
int fn_8024C7C4(void) { return 0; }
int fn_8024C7D4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 1) & 0x1; }
int fn_8024C7E0(void* p) { return (*(u16*)((char*)p + 0x1c) >> 2) & 0x1; }
int fn_8024C7EC(void* p) { return (*(u16*)((char*)p + 0x1c) >> 3) & 0x1; }
int fn_8024C7F8(void* p) { return (*(u16*)((char*)p + 0x1c) >> 4) & 0x1; }
int fn_8024C804(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }
s16 fn_8024C810(void* p) { return *(s16*)((char*)p + 0x20); }
s16 fn_8024C818(void* p) { return *(s16*)((char*)p + 0x20); }

}
