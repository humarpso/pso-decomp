#include "types.h"

extern "C" {

f32 fn_801BF6B0(void* p);
void* fn_801BF6B8(void* p);
void fn_801BF6C0(void* p, f32 v);
void fn_801BF6D4(void* p, s16 v);
void fn_801BF6DC(void* p, s16 v);
int fn_801BF6E4(void* p);
int fn_801BF708(void* p);
void fn_801BF7B8(void* p);
void fn_801BF7F4(void* p, s32 v);
void fn_801BF7FC(void* p, s16 v);
void fn_801BF804(void* p, s16 v);
void fn_801BF80C(void* p, s16 v);
f32 fn_801BF814(void* p);
int fn_801BF81C(void* p);
int fn_801BF840(void* p);
int fn_801BF864(void* p);
int fn_801BF888(void* p);
int fn_801BF8AC(void* p);
int fn_801BF8CC(void* p);
void fn_801BF914(void);
s16 fn_801BF92C(void* p);
void* fn_801BF934(void* p);
void fn_801BF93C(void* p, s16 v);
void* fn_801BF944(void* p);
s32 fn_801BF94C(void* p);
void fn_801BF954(void* p, s32 v);
s32 fn_801BF95C(void* p);
int fn_8001BED8(void*, int);
int fn_8001BF40(void*);
int fn_8013DF3C(void*);
int fn_8013DF44(void*);

f32 fn_801BF6B0(void* p) { return *(f32*)((char*)p + 0x8); }
void* fn_801BF6B8(void* p) { return (char*)p + 0xc; }
void fn_801BF6C0(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
int fn_801BF6C8(void) { return 0; }
void fn_801BF6D4(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void fn_801BF6DC(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
int fn_801BF6E4(void* p) { return fn_8013DF3C((char*)p + 0x4); }
int fn_801BF708(void* p) { return fn_8013DF44((char*)p + 0x4); }
int fn_801BF72C(void) { return 0; }
int fn_801BF768(void) { return 0; }
void fn_801BF7B8(void* p) { *(s32*)((char*)p + 0x4) = -1; }
int fn_801BF7C4(void) { return 0; }
void fn_801BF7F4(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void fn_801BF7FC(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void fn_801BF804(void* p, s16 v) { *(s16*)((char*)p + 0x8) = v; }
void fn_801BF80C(void* p, s16 v) { *(s16*)((char*)p + 0x2) = v; }
f32 fn_801BF814(void* p) { return *(f32*)((char*)p + 0x0); }
int fn_801BF81C(void* p) { return fn_8001BED8(p, 16); }
int fn_801BF840(void* p) { return fn_8001BED8(p, 8); }
int fn_801BF864(void* p) { return fn_8001BED8(p, 4); }
int fn_801BF888(void* p) { return fn_8001BED8(p, 2); }
int fn_801BF8AC(void* p) { return fn_801BF8CC(p); }
int fn_801BF8CC(void* p) { return fn_8001BF40(p); }
int fn_801BF8EC(void) { return 0; }
int fn_801BF8F8(void) { return 0; }
void fn_801BF914(void) {  }
int fn_801BF918(void) { return 0; }
s16 fn_801BF92C(void* p) { return *(s16*)((char*)p + 0x2); }
void* fn_801BF934(void* p) { return (char*)p + 0xc; }
void fn_801BF93C(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }
void* fn_801BF944(void* p) { return (char*)p + 0x8; }
s32 fn_801BF94C(void* p) { return *(s32*)((char*)p + 0x4); }
void fn_801BF954(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
s32 fn_801BF95C(void* p) { return *(s32*)((char*)p + 0x0); }

}
