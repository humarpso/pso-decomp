#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80258D38 { char pad[0x18]; };
struct VObj_80258D38 : Base_80258D38 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual s32 m10();
};
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();
struct Base_A_80258e2c { char pad[0x18]; };
struct V_A_80258e2c : Base_A_80258e2c {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual s32 m10();
};

extern "C" {

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
void update_from_player__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
s32 TCameraCtrl__sub_8006B338();
s32 TLobby__sub_8001DC24();
s32 TOSwitchItem__sub_80102C44(void *);
s32 TObjPlayer__sub_8001972C(void *);
s32 TObjPlayer__sub_801C1AC8(void *);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 lookup_item_data__20TWindowSubStatusDispFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TWindowSubStatusDisp__sub_8025829C(void *, s32);
M2C_UNK update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *, void *);
M2C_UNK TWindowSubStatusDisp__sub_802586FC(void *, s32, s32, s32, s32);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DCF08;

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r29;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFPv(arg1);
    TWindowSubStatusDisp__sub_802586FC(arg0, temp_r29, TOSwitchItem__sub_80102C44(arg1), TObjPlayer__sub_8001972C(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, ((VObj_80258D38 *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
        TWindowSubStatusDisp__sub_8025829C(arg0, arg2);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

extern const f32 lbl_805DCF08;
void update_from_player__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFPv(arg1);
    TWindowSubStatusDisp__sub_802586FC(arg0, temp_r29, TOSwitchItem__sub_80102C44(arg1), TObjPlayer__sub_8001972C(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, ((V_A_80258e2c *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (TCameraCtrl__sub_8006B338() <= 2) {
        TWindowSubStatusDisp__sub_802290E0();
        TWindowSubStatusDisp__sub_80228F5C(arg2);
        M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
