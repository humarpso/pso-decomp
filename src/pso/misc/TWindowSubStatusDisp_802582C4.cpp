#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18B_802582c4 { char pad[0x18]; };
struct VObj18B_802582c4 : VBase18B_802582c4 {
    virtual void vpad0(); virtual void vpad1(); virtual void vpad2(); virtual void vpad3();
    virtual void vpad4(); virtual void vpad5(); virtual void vpad6(); virtual void vpad7();
    virtual void vpad8(); virtual void vpad9(); virtual void vpad10(); virtual void vpad11();
    virtual void vpad12(); virtual void vpad13(); virtual void vpad14(); virtual void vpad15();
    virtual void vpad16(); virtual void vpad17(); virtual void vpad18(); virtual void vpad19();
    virtual void vpad20(); virtual void vpad21(); virtual void vpad22(); virtual void vpad23();
    virtual void vpad24(); virtual void vpad25(); virtual void vpad26(); virtual void vpad27();
    virtual void vpad28(); virtual void vpad29(); virtual void vpad30(); virtual void vpad31();
    virtual void vpad32();
    virtual s32 vm8C();
};

extern "C" {

void update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *arg0, void *arg1);
s32 TItem__sub_8010147C(void *, M2C_UNK, s32);
s32 copy_item_data_to_icon__10TObjPlayerFPv(void *);
s32 get_item_info__10TObjPlayerFiiPv(void *, s32, s16 *);
s32 TObjPlayer__sub_80102BE0(void *, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 fn_80100D68(void *);
s32 fn_801013BC(void *);
s32 fn_801013E8(void *);
u8 fn_801016A4(void *);

void update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *arg0, void *arg1) {
    s16 sp8;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r28_2;
    s32 temp_r3;

    if (check_flag_400__20TWindowSubStatusDispFv(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        return;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 2));
    if (temp_r3 != 0) {
        temp_r26 = TObjPlayer__sub_80102BE0(arg1, 8);
        temp_r28 = TItem__sub_8010147C(arg1, 0x10, temp_r3);
        temp_r27 = get_item_info__10TObjPlayerFiiPv(arg1, temp_r3, &sp8);
        temp_r28_2 = ((VObj18B_802582c4 *) arg1)->vm8C();
        if (temp_r28 != 0) {
            if (temp_r26 != 0) {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x30;
            } else {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x2F;
            }
        } else if (temp_r26 != 0) {
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xC;
        } else {
            if ((temp_r28_2 == 0) && (fn_801013E8(arg1) != 0)) {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x19;
            } else if (sp8 & 1) {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x13;
            } else {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        if (temp_r28_2 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF00FFFC;
            return;
        }
        if (temp_r27 != 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            if (fn_801013BC(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFFFE3C28;
                return;
            }
            if (fn_80100D68(arg1) == 2) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x800);
                return;
            }
            if (fn_801016A4(arg1) >= 9U) {
                M2C_FIELD(arg0, s32 *, 0x30) = -0x1600;
                return;
            }
            if (copy_item_data_to_icon__10TObjPlayerFPv(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF61E853;
                return;
            }
            if (TItem__sub_8010147C(arg1, 0x10000, temp_r3) != 0U) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x30) = -1;
            return;
        }
        if (sp8 & 1) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
    }
}

}
