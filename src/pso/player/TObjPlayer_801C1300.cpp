#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C1300(void* p);
void *TObjPlayer__sub_801C133C(void *arg0, void *arg1);
void TObjPlayer__sub_801C1380(void *arg0);
void TObjPlayer__sub_801C13A4(void* p);
void TObjPlayer__sub_801C13D8(void* p);
void TObjPlayer__sub_801C140C(void* p);
void TObjPlayer__sub_801C1448(void *arg0);
void TObjPlayer__sub_801C146C(void* p);
void *TObjPlayer__sub_801C14A8(void *arg0, void *arg1);
void TObjPlayer__sub_801C14EC(void *arg0);
void TObjPlayer__sub_801C1510(void* p);
void TObjPlayer__sub_801C1544(void* p);
void *TObjPlayer__sub_801C1590(void *arg0, void *arg1);
M2C_UNK TFontSmallLobby__sub_801C0228();
int TLobby__sub_801E4570(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);

void TObjPlayer__sub_801C1300(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void *TObjPlayer__sub_801C133C(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

void TObjPlayer__sub_801C1380(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x29;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void TObjPlayer__sub_801C13A4(void* p) { TObjPlayer__sub_801C1300(p); TLobby__sub_801E4570(p); }

void TObjPlayer__sub_801C13D8(void* p) { TObjPlayer__sub_801C140C(p); TLobby__sub_801E4570(p); }

void TObjPlayer__sub_801C140C(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void TObjPlayer__sub_801C1448(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x26;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void TObjPlayer__sub_801C146C(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void *TObjPlayer__sub_801C14A8(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return arg0;
}

void TObjPlayer__sub_801C14EC(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = -1;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s8 *, 0) = 0x25;
    M2C_FIELD(arg0, s8 *, 1) = 3;
}

void TObjPlayer__sub_801C1510(void* p) { TObjPlayer__sub_801C146C(p); TLobby__sub_801E4570(p); }

void TObjPlayer__sub_801C1544(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void *TObjPlayer__sub_801C1590(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    return arg0;
}

}
