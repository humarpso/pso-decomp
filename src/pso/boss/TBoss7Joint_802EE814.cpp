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
int TObjPlayer__sub_8001960C(void*);
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

int TBoss7Joint__sub_802EE814(void* p) { return *(u32*)((char*)p + 0x3bc) & 0x1; }

}
