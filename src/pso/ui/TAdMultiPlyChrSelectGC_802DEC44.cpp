#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_button_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802DC118(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK *TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, M2C_UNK);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 TAdMultiPlyChrSelectGC__sub_802D50A0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E011C();
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();

extern s8 lbl_8050E3B8[];
extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void update_button_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0) && (TAdMultiPlyChrSelectGC__sub_802E011C() == 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() < 1)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802D50A0(M2C_FIELD(arg0, s32 *, 0x68)) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(0) == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 0) {
            M2C_FIELD(arg0, s32 *, 0x44) = 0;
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1F, 0xB));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
        }
    } else if (count_ready__22TAdMultiPlyChrSelectGCFv() < 2) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x44) != 1) {
            M2C_FIELD(arg0, s32 *, 0x44) = 1;
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x1F, 0xC));
            set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x44) = 2;
        TAdMultiPlyChrSelectGC__sub_802DC118(arg0, get_clamped_cursor__22TAdMultiPlyChrSelectGCFv());
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
    }
}

}
