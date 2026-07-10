#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801C1108(void* p);
void TObjPlayer__sub_801C113C(void* p);
void *TObjPlayer__sub_801C1178(void *arg0, void *arg1);
void TObjPlayer__sub_801C11DC(void* p);
void byteswap_data__10TObjPlayerFPv(void* p);
M2C_UNK TFontSmallLobby__sub_801C0228();
int TLobby__send_and_handle_60(void*);
int bswap_fields__10TObjPlayerFi(void*);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);

void TObjPlayer__sub_801C1108(void* p) { bswap_fields__10TObjPlayerFi(p); TLobby__send_and_handle_60(p); }

void TObjPlayer__sub_801C113C(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void *TObjPlayer__sub_801C1178(void *arg0, void *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    return arg0;
}

void TObjPlayer__sub_801C11BC(void *arg0)
{
  *((s16 *) (((s8 *) arg0) + 4)) = 0;
  *((s16 *) (((s8 *) arg0) + 6)) = 0;
  *((s8 *) (((s8 *) arg0) + 0)) = (double) 0x83;
  *((s8 *) (((s8 *) arg0) + 1)) = 2;
}

void TObjPlayer__sub_801C11DC(void* p) { TObjPlayer__sub_801C113C(p); TLobby__send_and_handle_60(p); }

void byteswap_data__10TObjPlayerFPv(void* p) { fn_8001960C(p); bswap_32__FPUl((char*)p + 0x4); { int i; for (i = 0; i < 30; i++) { bswap_32__FPUl((char*)p + 0x8 + i * 4); } } }

}
