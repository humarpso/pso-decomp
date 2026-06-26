#include "types.h"

extern "C" {

u8 fn_801BED70(void* p);
u8 fn_801BED78(void* p);
u8 fn_801BED80(void* p);
u8 fn_801BED88(void* p);
u8 fn_801BED90(void* p);
void fn_801BED98(void* p, u8 v);
void fn_801BEDA0(void* p, u8 v);
void fn_801BEDA8(void* p, u8 v);
void fn_801BEDB0(void* p, u8 v);
void fn_801BEDB8(void* p, u8 v);

int fn_801BECA8(void) { return 0; }
int fn_801BECD0(void) { return 0; }
int fn_801BECF8(void) { return 0; }
int fn_801BED20(void) { return 0; }
int fn_801BED48(void) { return 0; }
u8 fn_801BED70(void* p) { return *(u8*)((char*)p + 0x4); }
u8 fn_801BED78(void* p) { return *(u8*)((char*)p + 0x3); }
u8 fn_801BED80(void* p) { return *(u8*)((char*)p + 0x2); }
u8 fn_801BED88(void* p) { return *(u8*)((char*)p + 0x1); }
u8 fn_801BED90(void* p) { return *(u8*)((char*)p + 0x0); }
void fn_801BED98(void* p, u8 v) { *(u8*)((char*)p + 0x4) = v; }
void fn_801BEDA0(void* p, u8 v) { *(u8*)((char*)p + 0x3) = v; }
void fn_801BEDA8(void* p, u8 v) { *(u8*)((char*)p + 0x2) = v; }
void fn_801BEDB0(void* p, u8 v) { *(u8*)((char*)p + 0x1) = v; }
void fn_801BEDB8(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }

}
