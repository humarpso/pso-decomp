#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_confirm_start__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void handle_cancel_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdGameStartGC__sub_802E644C(s32);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802C6508();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 TAdMultiPlyChrSelectGC__sub_802D50A0(u32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0008(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E00C4(s32);
s32 fn_802E0124(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void update_confirm_start__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    if ((fn_802E0124(M2C_FIELD(arg0, s32 *, 0x78)) == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (TAdMultiPlyChrSelectGC__sub_802C64D0(0) != 0)) {
        temp_r31 = TAdMultiPlyChrSelectGC__sub_802C6508();
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802C6558();
        if (temp_r3 != temp_r31) {
            TAdGameStartGC__sub_802E644C(M2C_FIELD(arg0, s32 *, 0x78));
        }
    }
    TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
    M2C_FIELD(arg0, s32 *, 0x20) = 3;
}

void handle_cancel_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if (TAdMultiPlyChrSelectGC__sub_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        if (TAdMultiPlyChrSelectGC__sub_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
        }
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x1D) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
    }
}

}
