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
void fn_80154120(void* p);
void fn_8015414C(void* p);
void fn_80154090(void);
void fn_80154094(void);

void fn_80154090(void) {  }
void fn_80154094(void) {  }
int fn_80154098(void) { return 0; }
int fn_801540B8(void) { return 0; }
int fn_801540D8(void*, void*) { return 0; }
int fn_801540FC(void*, void*) { return 0; }
void fn_80154120(void* p) { fn_801540D8(*(void**)((char*)p + 0xa4), *(void**)((char*)p + 0xa8)); }
void fn_8015414C(void* p) { fn_801540FC(*(void**)((char*)p + 0xa4), *(void**)((char*)p + 0xa8)); }
s32 fn_80154178(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (TMainCursor__sub_80154288() != 0) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x9C);
        return TObjPlayer__sub_8001BEF8(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
    return 0;
}
void fn_801541D8(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (TMainCursor__sub_80154288() != 0) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x9C);
        TAdRicoRing__sub_8001BEE8(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
}
void fn_80154230(void *arg0, s32 arg1, u16 arg2) {
    s32 temp_r5;

    if (TMainCursor__sub_80154288() != 0) {
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x9C);
        TObjPlayer__sub_8001BED8(temp_r5 + (arg1 * 4), 1 << arg2, temp_r5);
    }
}
s32 TMainCursor__sub_80154288(void) { return 0; }

}
