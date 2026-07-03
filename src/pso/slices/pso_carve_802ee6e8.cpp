#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Joint__vt91(void *arg0);
M2C_UNK TObjEneDD__vt91(void *);
M2C_UNK TObjEneDD__vt90(void *);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
int TLobby__send_and_handle_60(void*);
void fn_802EE6E8(void);
void fn_802EE6EC(void);
void fn_802EE6F0(void);
void fn_802EE6F4(void);
void fn_802EE6F8(void);
void fn_802EE6FC(void);
void fn_802EE700(void);
void fn_802EE7B8(void* p);
void fn_802EE800(void* p);
int TBoss7Joint__sub_802EE814(void* p);

void fn_802EE6E8(void) {  }
void fn_802EE6EC(void) {  }
void fn_802EE6F0(void) {  }
void fn_802EE6F4(void) {  }
void fn_802EE6F8(void) {  }
void fn_802EE6FC(void) {  }
void fn_802EE700(void) {  }
void fn_802EE704(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); }
void fn_802EE748(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }
void fn_802EE784(void* p) { fn_802EE748(p); TLobby__send_and_handle_60(p); }
void fn_802EE7B8(void* p) { *(u8*)((char*)p + 0x0) = 169; *(u8*)((char*)p + 0x1) = 2; }
void fn_802EE7CC(void* p) { fn_802EE704(p); TLobby__send_and_handle_60(p); }
void fn_802EE800(void* p) { *(u8*)((char*)p + 0x0) = 170; *(u8*)((char*)p + 0x1) = 3; }

}
