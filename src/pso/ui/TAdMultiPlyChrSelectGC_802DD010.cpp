#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiPlyChrSelectGC__sub_802DD010(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DD0F8(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DD2B0(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DD328(void *arg0);
M2C_UNK TAdChrMoveEffectGC__sub_803490AC();
M2C_UNK TAdChrMoveEffectGC__sub_803490D8(u32, s32, u32);
u32 TAdMultiPlyChrSelectGC__sub_802DBE4C(void *, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK TWindow__close(void *);
s32 fn_801FDC64(u32, s32);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 fn_802D50A0(u32);
M2C_UNK fn_802D50A8(u32, M2C_UNK);
M2C_UNK fn_802D50B0(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE0(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0008(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E0014(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E001C(s32, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0024(s32, u32);
s32 TAdMultiPlyChrSelectGC__sub_802E0044(s32, M2C_UNK);
M2C_UNK fn_802E00BC(s32, M2C_UNK);
s32 fn_802E00C4(s32);
u32 fn_802E0100();
M2C_UNK fn_802E0C28(s32, s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TAdMultiPlyChrSelectGC__sub_802DD010(void *arg0) {
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        fn_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (fn_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 0x14) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x18;
        fn_802E00BC(M2C_FIELD(arg0, s32 *, 0x6C), 0x1B);
        return;
    }
    if (fn_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 0x13) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (fn_802E0100() != 0U) {
            TAdChrMoveEffectGC__sub_803490AC();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x17;
    }
}

M2C_UNK load_tables();
extern M2C_UNK lbl_80472870[];
extern M2C_UNK lbl_80472878[];
extern s8 lbl_8050E3B8[];

void TAdMultiPlyChrSelectGC__sub_802DD0F8(void *arg0) {
    s32 iter;
    u32 temp_u;
    s32 temp_r5;
    s32 ret;
    s32 temp_r3;

    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    temp_r5 = TAdMultiPlyChrSelectGC__sub_802DFFE0(M2C_FIELD(arg0, s32 *, 0x5C)) * 0x50;
    if (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + temp_r5 + 0x20, 2, temp_r5) != 0) {
        fn_8022675C(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    iter = 0;
loop_7:
    ret = TAdMultiPlyChrSelectGC__sub_802E0044(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    if (fn_801FDC64((u32)iter, ret + 4) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x84));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        temp_u = fn_802E0100();
        if (temp_u != 0U) {
            TAdChrMoveEffectGC__sub_803490D8(temp_u, ret, (u32)iter + 3);
        }
        TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), (u32)iter);
        TAdMultiPlyChrSelectGC__sub_802E001C(M2C_FIELD(arg0, s32 *, 0x5C), 1);
        temp_r3 = TAdMultiPlyChrSelectGC__sub_802DC294(arg0, TAdMultiPlyChrSelectGC__sub_802E0014(M2C_FIELD(arg0, s32 *, 0x5C)));
        load_tables();
        fn_802E0C28(M2C_FIELD(arg0, s32 *, 0x60), temp_r3);
        fn_802D50B0(M2C_FIELD(arg0, s32 *, 0x60), 2);
        M2C_FIELD(arg0, s32 *, 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, lbl_80472870);
        fn_802D50A8(M2C_FIELD(arg0, u32 *, 0x68), 0x11);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x16;
        return;
    }
    iter += 1;
    if ((u32)iter >= 4U) {
        M2C_FIELD(arg0, s32 *, 0x54) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x84) = TAdMultiPlyChrSelectGC__sub_802DBE4C(arg0, lbl_80472878);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
        return;
    }
    goto loop_7;
}

void TAdMultiPlyChrSelectGC__sub_802DD2B0(void *arg0) {
    void *temp_r3;
    temp_r3 = M2C_FIELD(arg0, void **, 0x8C);
    if ((u32) temp_r3 != 0U) {
        TWindowSubComCard__sub_802A5748(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x74);
    if ((u32) temp_r3 != 0U) {
        queue_destruction__7TObjectFv(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) == 1) {
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
    }
}

void TAdMultiPlyChrSelectGC__sub_802DD328(void *arg0) {
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        if (fn_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
        }
        TAdMultiPlyChrSelectGC__sub_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (fn_802D50A0(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
        M2C_FIELD(arg0, s32 *, 0x50) = 0;
        M2C_FIELD(arg0, s32 *, 0x54) = 1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
    }
}

}
