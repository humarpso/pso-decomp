#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_labels__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1);
s32 TWindowSubComCard__sub_8026CBB8(s32);
M2C_UNK fn_802A5628(u32, s32);
M2C_UNK fn_80330B84(void *, u32, s32);

void set_labels__19TWindowSubTradeMainFPvi(void *arg0, s32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x30), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5C));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x34), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5E));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        fn_802A5628(M2C_FIELD(arg0, u32 *, 0x38), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5F));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x3C), TWindowSubComCard__sub_8026CBB8(arg1 + 0x62));
        } else {
            fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x3C), TWindowSubComCard__sub_8026CBB8(arg1 + 0x60));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
            fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x40), TWindowSubComCard__sub_8026CBB8(arg1 + 0x63));
        } else {
            fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x40), TWindowSubComCard__sub_8026CBB8(arg1 + 0x61));
        }
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x44) != 0U) {
        fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x44), TWindowSubComCard__sub_8026CBB8(arg1 + 0x64));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x48) != 0U) {
        fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x48), TWindowSubComCard__sub_8026CBB8(arg1 + 0x5D));
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x4C) != 0U) {
        fn_80330B84(arg0, M2C_FIELD(arg0, u32 *, 0x4C), TWindowSubComCard__sub_8026CBB8(arg1 + 0x65));
    }
}

}
