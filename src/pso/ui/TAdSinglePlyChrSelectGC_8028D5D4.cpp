#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_selection_done__23TAdSinglePlyChrSelectGCFPv(void *arg0);

u8 is_selection_done__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x2C) == 2);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TLobby__sub_8028D7D0();
extern u32 lbl_80518850[4];
extern u32 lbl_80518860[4];
extern u32 lbl_805D6518;
extern u32 lbl_805D651C;
u32 alloc_load_buffer__6TLobbyFii(s32 arg0, s32 arg1);
}

extern "C" {

s32 get_result__23TAdSinglePlyChrSelectGCFPv(void *arg0);

s32 get_result__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    if (((s32 (*)())is_selection_done__23TAdSinglePlyChrSelectGCFPv)() != 0) {
        return M2C_FIELD(arg0, s32 *, 0x28);
    }
    return 0;
}
u32 alloc_load_buffer__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 p;
    if (lbl_805D6518 == 0U) {
        return 0U;
    }
    TLobby__sub_8028D7D0();
    if ((arg1 < 0) || (arg1 > 0xA000)) {
        return 0U;
    }
    arg1 = (arg1 + 0x1F) & ~0x1F;
    if (arg0 < 4) {
        p = lbl_80518850[arg0];
        p += arg1;
        if (p >= lbl_805D6518 + (arg0 + 1) * 0xA000) {
            return 0U;
        }
        lbl_80518850[arg0] = p;
        return p;
    }
    {
        s32 j = arg0 - 4;
        p = lbl_80518860[j];
        p += arg1;
        if (p >= lbl_805D651C + (j + 1) * 0xA000) {
            return 0U;
        }
        lbl_80518860[j] = p;
    }
    return p;
}

}
