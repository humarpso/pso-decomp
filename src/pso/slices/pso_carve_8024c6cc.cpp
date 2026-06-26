#include "types.h"

extern "C" {

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
int fn_8024C76C(void) { return 0; }
int fn_8024C798(void) { return 0; }
int fn_8024C7C4(void) { return 0; }
int fn_8024C7D4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 1) & 0x1; }
int fn_8024C7E0(void* p) { return (*(u16*)((char*)p + 0x1c) >> 2) & 0x1; }
int fn_8024C7EC(void* p) { return (*(u16*)((char*)p + 0x1c) >> 3) & 0x1; }
int fn_8024C7F8(void* p) { return (*(u16*)((char*)p + 0x1c) >> 4) & 0x1; }
int fn_8024C804(void* p) { return *(u16*)((char*)p + 0x1c) & 0x1; }
s16 fn_8024C810(void* p) { return *(s16*)((char*)p + 0x20); }
s16 fn_8024C818(void* p) { return *(s16*)((char*)p + 0x20); }

}
