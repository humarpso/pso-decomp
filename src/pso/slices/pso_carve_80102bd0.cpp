#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_flag__10TObjPlayerFPvi(s32, s32);
s32 is_matching_id__6TLobbyFiUs(void *, u16);
int fn_80102BD0(void);
int fn_80102BD8(void);
int fn_80102BE0(void* p, u32 m);
void fn_80102BEC(void* p, u32 v);
void fn_80102BFC(void* p, u32 v);
int fn_80102C0C(void* p);
u16 TItemProArmor__sub_80102C3C(void* p);
u8 TOSwitchItem__sub_80102C44(void* p);
int TItemMag__sub_80102C4C(void* p);
void fn_80102C58(void* p);
void fn_80102C68(void* p);
void fn_80102C78(void* p, s16 v);
s16 fn_80102C80(void* p);
s16 fn_80102C88(void* p);
int fn_80102C90(void* p);
f32 fn_80102CD8(void* p);
int fn_801C675C(void*);

int fn_80102BD0(void) { return 0; }
int fn_80102BD8(void) { return 0; }
int fn_80102BE0(void* p, u32 m) { return *(u32*)((char*)p + 0xdc) & m; }
void fn_80102BEC(void* p, u32 v) { *(u32*)((char*)p + 0xdc) &= ~v; }
void fn_80102BFC(void* p, u32 v) { *(u32*)((char*)p + 0xdc) |= v; }
int fn_80102C0C(void* p) { return fn_80102BE0(p, 128); }
int fn_80102C30(void) { return 0; }

void TObjPlayer__sub_8001960C(void* p);
void bswap_32__FPUl(u32* p);

}
