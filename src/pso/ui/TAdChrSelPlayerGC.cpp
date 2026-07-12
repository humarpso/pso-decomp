#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdChrSelPlayerGC__ct(void *arg0, s32 arg1);
s32 alloc_buffer__11TOBoss4RockFPv(M2C_UNK);
M2C_UNK fn_802E0CB0(void *, s32);
M2C_UNK get_instance__14TAdPlyStatusGCFii(void *, s32);

extern s32 lbl_805D3F78;

void TAdChrSelPlayerGC__ct(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F78;
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s32 *, 0x104) = arg1;
    M2C_FIELD(arg0, s32 *, 0x170) = 0;
    M2C_FIELD(arg0, s32 *, 0xE0) = alloc_buffer__11TOBoss4RockFPv(0xC00);
    get_instance__14TAdPlyStatusGCFii(arg0, arg1);
    fn_802E0CB0(arg0, M2C_FIELD(arg0, s32 *, 0x104));
}

}
