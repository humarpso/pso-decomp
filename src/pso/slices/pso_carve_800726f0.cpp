#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__send_and_handle_60(void* a0 = 0);
int bswap_16__FPUs(void* a0 = 0);
int fn_8001960C(void* a0 = 0);
int fn_80072994(void* a0 = 0);
void fn_80072910(void* p);
void fn_8007294C(void* p);
s32 fn_8006F23C();
s32 fn_8006FBE4();
s32 TWindow__close(void *);
void fn_80072758(void* p);
void fn_800727EC(void* p);
void fn_80072880(void* p);
void fn_800728FC(void* p);
void fn_80072980(void* p);
int fn_80072B10(void* p);
int bswap_32__FPUl(void*);

int fn_800726F0(void) { return 0; }
int fn_80072724(void) { return 0; }
void fn_80072758(void* p) { *(u8*)((char*)p + 0x0) = 157; *(u8*)((char*)p + 0x1) = 2; }
int fn_8007276C(void) { return 0; }
int fn_800727A0(void) { return 0; }
void fn_800727EC(void* p) { *(u8*)((char*)p + 0x0) = 151; *(u8*)((char*)p + 0x1) = 5; }
int fn_80072800(void) { return 0; }
int fn_8007284C(void) { return 0; }
void fn_80072880(void* p) { *(u8*)((char*)p + 0x0) = 149; *(u8*)((char*)p + 0x1) = 5; }
int fn_80072894(void) { return 0; }
int fn_800728C8(void) { return 0; }
void fn_800728FC(void* p) { *(u8*)((char*)p + 0x0) = 138; *(u8*)((char*)p + 0x1) = 2; }
void fn_80072910(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); fn_80072994((char*)p + 0x8); }
void fn_8007294C(void* p) { fn_80072910(p); TLobby__send_and_handle_60(p); }
void fn_80072980(void* p) { *(u8*)((char*)p + 0x0) = 124; *(u8*)((char*)p + 0x1) = 66; }
int fn_80072994(void*) { return 0; }
int fn_80072A44(void) { return 0; }
int fn_80072A78(void) { return 0; }
int fn_80072AB8(void) { return 0; }
int fn_80072B10(void* p) { return bswap_32__FPUl(p); }
s32 fn_80072B30(void) {
    if ((fn_8006F23C() != 0) || (fn_8006FBE4() <= 1)) {
        return 0;
    }
    return 1;
}
void fn_80072B70(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
}

}
