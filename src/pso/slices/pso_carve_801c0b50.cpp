#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_801C0AD8();
s32 TLobby__sub_801E4570(s32);
s32 fn_8001960C();
s32 bswap_32__FPUl(s32);
s32 fn_801C0228();
s32 bswap_16__FPUs(s32);
s32 bswap__9TItemDataFv(s32);
void fn_801C0FC8(void* p);

void fn_801C0B50(s32 arg0) {
    fn_801C0AD8();
    TLobby__sub_801E4570(arg0);
}
void fn_801C0B84(s32 arg0) {
    fn_8001960C();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void *fn_801C0BC0(void *arg0, void *arg1) {
    fn_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}
int fn_801C0C04(void) { return 0; }
int fn_801C0C24(void) { return 0; }
void fn_801C0C58(s32 arg0) {
    fn_8001960C();
    bswap_16__FPUs(arg0 + 4);
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 8);
    bswap_16__FPUs(arg0 + 0xA);
    bswap_16__FPUs(arg0 + 0xC);
    bswap_16__FPUs(arg0 + 0xE);
    bswap_16__FPUs(arg0 + 0x10);
    bswap_16__FPUs(arg0 + 0x12);
}
int fn_801C0CC4(void) { return 0; }
void fn_801C0CFC(s32 arg0) {
    fn_8001960C();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void *fn_801C0D38(void *arg0, void *arg1) {
    fn_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}
int fn_801C0D7C(void) { return 0; }
int fn_801C0D9C(void) { return 0; }
void fn_801C0DD0(s32 arg0) {
    fn_8001960C();
    bswap_32__FPUl(arg0 + 4);
}
void *fn_801C0E04(void *arg0, void *arg1) {
    fn_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    return arg0;
}
int fn_801C0E40(void) { return 0; }
int fn_801C0E5C(void) { return 0; }
void fn_801C0E90(s32 arg0) {
    fn_8001960C();
    bswap__9TItemDataFv(arg0 + 4);
}
int fn_801C0EC4(void) { return 0; }
int fn_801C0F10(void) { return 0; }
int fn_801C0F70(void) { return 0; }
void fn_801C0FC8(void* p) { *(u8*)((char*)p + 0x0) = 43; *(u8*)((char*)p + 0x1) = 6; }
int fn_801C0FDC(void) { return 0; }
void fn_801C1010(s32 arg0) {
    fn_8001960C();
    bswap_16__FPUs(arg0 + 6);
    bswap_16__FPUs(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
    bswap_32__FPUl(arg0 + 0xC);
    bswap_32__FPUl(arg0 + 0x10);
    bswap_32__FPUl(arg0 + 0x14);
}
int fn_801C106C(void) { return 0; }

}
