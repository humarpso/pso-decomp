#include "types.h"

extern "C" {

s32 fn_80337348(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
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

void fn_801BECA8(s32 arg0, s32 arg1, s32 arg2) {
    fn_80337348(arg0, arg1, 4, arg2);
}
void fn_801BECD0(s32 arg0, s32 arg1, s32 arg2) {
    fn_80337348(arg0, arg1, 3, arg2);
}
void fn_801BECF8(s32 arg0, s32 arg1, s32 arg2) {
    fn_80337348(arg0, arg1, 2, arg2);
}
void fn_801BED20(s32 arg0, s32 arg1, s32 arg2) {
    fn_80337348(arg0, arg1, 1, arg2);
}
void fn_801BED48(s32 arg0, s32 arg1, s32 arg2) {
    fn_80337348(arg0, arg1, 0, arg2);
}
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
