#include "types.h"

extern "C" {

int TLockOnCursor__sub_8013EB3C(void* p);
s32 TLockOnCursor__sub_8013EB64(void* p);
void TLockOnCursor__sub_8013EB80(void* p);
void TLockOnCursor__sub_8013EB8C(void* p);
s32 TLockOnCursor__sub_8013EB98(void* p);
s32 TLockOnCursor__sub_8013EBBC(void* p);
s32 TLockOnCursor__sub_8013EBC4(void* p);
s32 TLockOnCursor__sub_8013EBE8(void* p);
s32 TLockOnCursor__sub_8013EBF0(void* p);
s32 TLockOnCursor__sub_8013EC14(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);

void TLockOnCursor__sub_8013EB80(void* p) { *(s32*)((char*)p + 0x4) = 0; }
void TLockOnCursor__sub_8013EB8C(void* p) { *(s32*)((char*)p + 0x4) = 1; }
s32 TLockOnCursor__sub_8013EB98(void* p) { return TLockOnCursor__sub_8013EBBC((char*)p + 0x3c); }
s32 TLockOnCursor__sub_8013EBBC(void* p) { return *(s32*)((char*)p + 0x8); }
s32 TLockOnCursor__sub_8013EBC4(void* p) { return TLockOnCursor__sub_8013EBE8((char*)p + 0x3c); }
s32 TLockOnCursor__sub_8013EBE8(void* p) { return *(s32*)((char*)p + 0x4); }
s32 TLockOnCursor__sub_8013EBF0(void* p) { return TLockOnCursor__sub_8013EC14((char*)p + 0x3c); }
s32 TLockOnCursor__sub_8013EC14(void* p) { return *(s32*)((char*)p + 0x0); }

}
