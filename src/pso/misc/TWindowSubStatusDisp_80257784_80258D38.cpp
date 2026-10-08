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

struct Base_80258F34 { char pad[0x18]; };

struct V_80258F34 : Base_80258F34 {
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
    PADV
    PADV
    PADV
    virtual s32 m34();
};

extern "C" {
s32 get_field_ed__10TObjPlayerFPv(void *);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 lookup_item_data__20TWindowSubStatusDispFPv(void *);
s32 get_field_ec__12TOSwitchItemFPv(void *);
s32 TObjPlayer__sub_801C1AC8(void *);
M2C_UNK update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *, void *);
M2C_UNK select_item_icon__20TWindowSubStatusDispFPviUcUci(void *, s32, s32, s32, s32);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DCF08;
void init_item_row__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
}

extern "C" {

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
void update_from_player__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_shared_text_buffer();
s32 get_field_ec__12TOSwitchItemFPv(void *);
s32 get_field_ed__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C1AC8(void *);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 lookup_item_data__20TWindowSubStatusDispFPv(void *);
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK text_builder_reset();
M2C_UNK update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *, void *);
M2C_UNK select_item_icon__20TWindowSubStatusDispFPviUcUci(void *, s32, s32, s32, s32);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, M2C_UNK, M2C_UNK);

extern const f32 lbl_805DCF08;

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r29;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFPv(arg1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r29, get_field_ec__12TOSwitchItemFPv(arg1), get_field_ed__10TObjPlayerFPv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, ((VObj_80258D38 *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
        update_stat_line_if_positive__20TWindowSubStatusDispFPvi(arg0, arg2);
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
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r29, get_field_ec__12TOSwitchItemFPv(arg1), get_field_ed__10TObjPlayerFPv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, ((V_A_80258e2c *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        text_builder_reset();
        TWindowSubStatusDisp__sub_80228F5C(arg2);
        M2C_FIELD(arg0, s32 *, 0x24) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, get_shared_text_buffer(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}
void init_item_row__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r29;
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFPv(arg1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r29, get_field_ec__12TOSwitchItemFPv(arg1), get_field_ed__10TObjPlayerFPv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, ((V_80258F34 *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
        s32 v = ((V_80258F34 *) arg1)->m34();
        update_stat_line_if_positive__20TWindowSubStatusDispFPvi(arg0, v);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

}
