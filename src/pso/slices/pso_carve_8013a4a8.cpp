#include "types.h"

extern "C" {

int fn_8013A820(void* a0 = 0, void* a1 = 0);
void* fn_8013A788(void* p, void* a1);
s32 bswap_16__FPUs(s32);
s32 bswap_32__FPUl(s32);
s32 fn_800C80FC();
s32 TLobby__sub_801E44D8(s32, s32);
s32 TLobby__sub_801E4570(s32);
void fn_8013A578(void* p);
void fn_8013A5C0(void* p);

int fn_8013A4A8(void) { return 0; }
int fn_8013A4E4(void) { return 0; }
void fn_8013A504(s32 arg0) {
    bswap_16__FPUs(arg0 + 2);
    bswap_32__FPUl(arg0 + 4);
}
void fn_8013A53C(s32 arg0, s32 arg1) {
    fn_800C80FC();
    TLobby__sub_801E44D8(arg0, arg1);
}
void fn_8013A578(void* p) { *(u8*)((char*)p + 0x0) = 111; *(u8*)((char*)p + 0x1) = 129; }
void fn_8013A58C(s32 arg0) {
    fn_800C80FC();
    TLobby__sub_801E4570(arg0);
}
void fn_8013A5C0(void* p) { *(u8*)((char*)p + 0x0) = 114; *(u8*)((char*)p + 0x1) = 1; }
int fn_8013A5D4(void) { return 0; }
int fn_8013A650(void) { return 0; }
int fn_8013A748(void) { return 0; }
void* fn_8013A788(void* p, void* a1) { *(void**)(p) = *(void**)((char*)a1 + 0x0); fn_8013A820((char*)p + 0x4, (char*)a1 + 0x4); fn_8013A820((char*)p + 0x8, (char*)a1 + 0x8); fn_8013A820((char*)p + 0xc, (char*)a1 + 0xc); fn_8013A820((char*)p + 0x10, (char*)a1 + 0x10); fn_8013A820((char*)p + 0x14, (char*)a1 + 0x14); fn_8013A820((char*)p + 0x18, (char*)a1 + 0x18); fn_8013A820((char*)p + 0x1c, (char*)a1 + 0x1c); fn_8013A820((char*)p + 0x20, (char*)a1 + 0x20); return p; }
int fn_8013A820(void*, void*) { return 0; }

}
