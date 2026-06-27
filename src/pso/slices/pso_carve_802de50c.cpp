#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TWindowSubComCard__sub_8007341C(s32);
s32 TWindowSubComCard__sub_80073DB8(s32);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK TWindowOptionCtrl__sub_80266160(s32);
M2C_UNK fn_802C561C(s32);
M2C_UNK fn_802C5688(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C69EC();
M2C_UNK fn_802C6A10();
s32 fn_802D50A0(u32);
s32 fn_802DBCE8(void *);
M2C_UNK fn_802E0008(s32);
M2C_UNK fn_802E0078(s32);
M2C_UNK fn_802E0084(s32);

void fn_802DE50C(void *arg0) {
    s32 temp_r3;

    if (fn_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
        fn_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    TAdMultiPlyChrSelectGC__sub_802C69EC();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x7C));
        switch (temp_r3) {
        case 0:
            fn_8022675C(0x52D01, 0, 0, 0);
            fn_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
            fn_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0x19;
            return;
        case 1:
            fn_8022675C(0x52D01, 0, 0, 0);
            fn_802E0084(M2C_FIELD(arg0, s32 *, 0x5C));
            fn_802E0078(M2C_FIELD(arg0, s32 *, 0x5C));
            fn_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xA;
            return;
        case 2:
            TWindowOptionCtrl__sub_80266160(M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x98) = fn_802DBCE8(arg0);
            M2C_FIELD(arg0, s32 *, 0x20) = 6;
            return;
        case 3:
            fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            break;
        }
    }
}

}
