#include "types.h"

extern "C" {

s32 fn_80354F7C(void* p);
void fn_80354F84(void* p, s32 v);
int fn_80354FB0(void* p);
int fn_80354FD4(void* p);
int fn_80354FF8(void* p);
int fn_8035501C(void* p);
int fn_80355040(void* p);
int fn_8001BED8(void*, int);
int fn_8001BEE8(void*, int);
int fn_8001BEF8(void*, int);

s32 fn_80354F7C(void* p) { return *(s32*)((char*)p + 0x4); }
void fn_80354F84(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
int fn_80354F8C(void) { return 0; }
int fn_80354FB0(void* p) { return fn_8001BEE8(p, 2); }
int fn_80354FD4(void* p) { return fn_8001BED8(p, 3); }
int fn_80354FF8(void* p) { return fn_8001BEF8(p, 1); }
int fn_8035501C(void* p) { return fn_8001BEE8(p, 3); }
int fn_80355040(void* p) { return fn_8001BED8(p, 1); }
int fn_80355064(void) { return 0; }
int fn_80355098(void) { return 0; }
int fn_803550D4(void) { return 0; }
int fn_8035510C(void) { return 0; }
int fn_80355124(void) { return 0; }
int fn_80355148(void) { return 0; }
int fn_80355168(void) { return 0; }
int fn_803551C0(void) { return 0; }

}
