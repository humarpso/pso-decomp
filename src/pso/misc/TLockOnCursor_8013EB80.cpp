#include "types.h"

extern "C" {

void TLockOnCursor__sub_8013EB80(void* p);
void TLockOnCursor__sub_8013EB8C(void* p);
s32 TLockOnCursor__sub_8013EBBC(void* p);
s32 TLockOnCursor__sub_8013EBE8(void* p);
s32 TLockOnCursor__sub_8013EC14(void* p);
int TLockOnCursor__sub_8013EC1C(void);
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p);
s32 cleanup_field__13TLockOnCursorFPv(void* p);
s32 release_target__13TLockOnCursorFPv(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
s32 get_target__13TLockOnCursorFPv(void* p);
int test_flag_1_at_8__13TLockOnCursorFPv(void* p);

void TLockOnCursor__sub_8013EB80(void* p) { *(s32*)((char*)p + 0x4) = 0; }
void TLockOnCursor__sub_8013EB8C(void* p) { *(s32*)((char*)p + 0x4) = 1; }
s32 release_target__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EBBC((void*)((char*)p + 0x3c)); }
s32 TLockOnCursor__sub_8013EBBC(void* p) { return *(s32*)((char*)p + 0x8); }
s32 cleanup_field__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EBE8((void*)((char*)p + 0x3c)); }
s32 TLockOnCursor__sub_8013EBE8(void* p) { return *(s32*)((char*)p + 0x4); }
s32 cleanup_field_3c__13TLockOnCursorFPv(void* p) { return TLockOnCursor__sub_8013EC14((void*)((char*)p + 0x3c)); }
s32 TLockOnCursor__sub_8013EC14(void* p) { return *(s32*)((char*)p + 0x0); }

int TLockOnCursor__sub_8013EC1C(void) { return 0; }

}
