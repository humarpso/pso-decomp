#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_8001BED8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TAdRicoRing__sub_8001BEE8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TMainCursor__sub_80154288(void);
s32 TObjPlayer__sub_8001BEF8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
int fn_801540D8(void* a0 = 0, void* a1 = 0);
int fn_801540FC(void* a0 = 0, void* a1 = 0);
void TMainCursor__sub_80154120(void* p);
void TMainCursor__sub_8015414C(void* p);
void fn_80154090(void);
void fn_80154094(void);

void fn_80154090(void) {  }
void fn_80154094(void) {  }
int fn_80154098(void) { return 0; }
int fn_801540B8(void) { return 0; }
int fn_801540D8(void*, void*) { return 0; }
int fn_801540FC(void*, void*) { return 0; }

}
