#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8020A350(void* p);
void TLobby__sub_8020A394(void* p);
void TLobby__sub_8020A3D0(void *arg0, void *arg1);
void TLobby__sub_8020A3EC(void* p);
void swap_header_endian__6TLobbyFPv(void* p);
void TLobby__sub_8020A48C(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void TLobby__sub_8020A350(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }

void TLobby__sub_8020A394(void* p) { bswap_16__FPUs(p); bswap_16__FPUs((char*)p + 0x2); bswap_32__FPUl((char*)p + 0x4); }

void TLobby__sub_8020A3D0(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
}

void TLobby__sub_8020A3EC(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); }

void swap_header_endian__6TLobbyFPv(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_32__FPUl((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); }

void TLobby__sub_8020A48C(void* p) { bswap_32__FPUl(p); bswap_32__FPUl((char*)p + 0x4); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); bswap_32__FPUl((char*)p + 0x10); bswap_16__FPUs((char*)p + 0x14); bswap_16__FPUs((char*)p + 0x16); bswap_16__FPUs((char*)p + 0x18); bswap_16__FPUs((char*)p + 0x1a); bswap_16__FPUs((char*)p + 0x1c); bswap_16__FPUs((char*)p + 0x1e); }

}
