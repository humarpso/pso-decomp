#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8013A95C(void* p);
void TLobby__sub_8013A9C0(void* p);
void TLobby__sub_8013A9F4(void* p);
void bswap_6x6B__6TLobbyFPv(void* p);
void bswap__15disp_data_part2Fv(s32 arg0);
void bswap_fields__6TLobbyFPv(void* p);
void bswap_header_3words__6TLobbyFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);

void bswap_fields__6TLobbyFPv(void* p) { bswap_16__FPUs((void*)((char*)p + 0x2)); bswap_32__FPUl((void*)((char*)p + 0x4)); }

void bswap_header_3words__6TLobbyFPv(void* p) { bswap_32__FPUl((void*)(p)); bswap_32__FPUl((void*)((char*)p + 0x4)); bswap_32__FPUl((void*)((char*)p + 0x8)); }

void bswap__15disp_data_part2Fv(s32 arg0) {
    s32 off;
    s32 i;

    bswap_32__FPUl((void*)(arg0 + 0x18));
    bswap_32__FPUl((void*)(arg0 + 0x2C));
    bswap_32__FPUl((void*)(arg0 + 0x34));
    for (i = 0, off = 0; i < 8; i++, off += 2) {
        bswap_16__FPUs((void*)((s32)((char *)arg0 + off + 0x38)));
    }
    bswap_32__FPUl((void*)(arg0 + 0x48));
    bswap_32__FPUl((void*)(arg0 + 0x4C));
}

void TLobby__sub_8013A95C(void* p) { bswap_16__FPUs((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x2)); bswap_32__FPUl((void*)((char*)p + 0x4)); bswap_32__FPUl((void*)((char*)p + 0x8)); bswap_32__FPUl((void*)((char*)p + 0xc)); bswap_32__FPUl((void*)((char*)p + 0x10)); bswap_32__FPUl((void*)((char*)p + 0x14)); bswap_32__FPUl((void*)((char*)p + 0x18)); }

void TLobby__sub_8013A9C0(void* p) { bswap_32__FPUl((void*)(p)); bswap_32__FPUl((void*)((char*)p + 0x4)); }

void TLobby__sub_8013A9F4(void* p) { bswap_16__FPUs((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x2)); }

void bswap_6x6B__6TLobbyFPv(void* p) { bswap_32__FPUl((void*)(p)); bswap_16__FPUs((void*)((char*)p + 0x4)); bswap_16__FPUs((void*)((char*)p + 0x6)); }

}
