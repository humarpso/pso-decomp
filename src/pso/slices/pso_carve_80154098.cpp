#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 set_flags__10TObjPlayerFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 clear_flags__11TAdRicoRingFPvUi(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 TMainCursor__sub_80154288(void);
s32 TObjPlayer__sub_8001BEF8(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
int TMainCursor__sub_801540D8(void* a0 = 0, void* a1 = 0);
int TMainCursor__sub_801540FC(void* a0 = 0, void* a1 = 0);
void update_pair__11TMainCursorFPv(void* p);
void update_cursor_pair__11TMainCursorFPv(void* p);
void TMainCursor__sub_80154090(void);
void TMainCursor__sub_80154094(void);

int TMainCursor__sub_80154098(void) { return 0; }
int TMainCursor__sub_801540B8(void) { return 0; }
int TMainCursor__sub_801540D8(void*, void*) { return 0; }
int TMainCursor__sub_801540FC(void*, void*) { return 0; }

}
