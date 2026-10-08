#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18B_802582c4_80257784 { char pad[0x18]; };
struct VObj18B_802582c4_80257784 : VBase18B_802582c4_80257784 {
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

struct Obj_80258BB8 { u8 pad[8]; f32 f8; };

extern "C" {
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF04;
void TWindowSubStatusDisp__sub_8025882C(u8 *arg0, s32 arg1);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void TWindowSubStatusDisp__sub_802588AC(u8 *arg0, s32 arg1);
s32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void init_no_item_entry__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void TWindowSubStatusDisp__sub_802589AC(u8 *arg0, s8 arg1, s8 arg2, u8 arg3, u32 arg4, s32 arg5);
s32 get_shared_text_buffer();
s32 get_download_server__20TWindowSubStatusDispFv();
s32 TWindowSubStatusDisp__sub_80228F5C(void *);
s32 text_builder_append(int);
s32 text_builder_reset();
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void TWindowSubStatusDisp__sub_80258A28(u8 *arg0, s32 arg1, s32 arg2);
void init_status_entry__20TWindowSubStatusDispFPvcUii(Obj_80258BB8 *o, s32 x);
extern const f32 lbl_805DCF04;
void TWindowSubStatusDisp__sub_80258BB8(Obj_80258BB8 *o, s32 x);
void select_item_icon__20TWindowSubStatusDispFPviUcUci(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4);
}

extern "C" {

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *arg0, void *arg1);
s32 is_wrapped__9TItemDataFPv(s32);
s32 TItemData__sub_8010C738(s32);
s32 is_custom_name_srank__9TItemDataFPv(s32);
s32 has_bonus_stats__9TItemDataFPv(s32);
u32 calc_action_flags__9TItemDataFv(s32, M2C_UNK, s32);
s32 is_rare_item__9TItemDataFPv(s32);
s32 TItem__sub_801013E8(void *);
s32 get_usable_action_flags__5TItemFPvUiUi(void *, M2C_UNK, s32);
s32 is_boss_area();
s32 get_player_by_client_id(s16);
s32 check_equip_requirements(s32, s32, s32 *);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
u8 calc_display_grade__5TItemFPv(void *);
u8 calc_display_grade__9TItemDataFPv(s32);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 check_item_flags__9TItemDataFPv(s32);
s32 copy_item_data_to_icon__10TObjPlayerFPv(void *);
s32 fn_80100D68(void *);
s32 get_item_info__10TObjPlayerFiiPv(void *, s32, s16 *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 test_item_flags__10TObjPlayerFPvUi(void *, M2C_UNK);
s32 update_item_data__5TItemFPv(void *);
M2C_UNK update_stat_line__20TWindowSubStatusDispFPvi(void *, s32);

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
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 2));
    if (temp_r3 != 0) {
        temp_r26 = test_item_flags__10TObjPlayerFPvUi(arg1, 8);
        temp_r28 = get_usable_action_flags__5TItemFPvUiUi(arg1, 0x10, temp_r3);
        temp_r27 = get_item_info__10TObjPlayerFiiPv(arg1, temp_r3, &sp8);
        temp_r28_2 = ((VObj18B_802582c4_80257784 *) arg1)->vm8C();
        if (temp_r28 != 0) {
            if (temp_r26 != 0) {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x30;
            } else {
                M2C_FIELD(arg0, s8 *, 0x1C) = 0x2F;
            }
        } else if (temp_r26 != 0) {
            M2C_FIELD(arg0, s8 *, 0x1C) = 0xC;
        } else {
            if ((temp_r28_2 == 0) && (TItem__sub_801013E8(arg1) != 0)) {
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
            if (update_item_data__5TItemFPv(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFFFE3C28;
                return;
            }
            if (fn_80100D68(arg1) == 2) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x800);
                return;
            }
            if (calc_display_grade__5TItemFPv(arg1) >= 9U) {
                M2C_FIELD(arg0, s32 *, 0x30) = -0x1600;
                return;
            }
            if (copy_item_data_to_icon__10TObjPlayerFPv(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF61E853;
                return;
            }
            if (get_usable_action_flags__5TItemFPvUiUi(arg1, 0x10000, temp_r3) != 0U) {
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

void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3;

    if (is_wrapped__9TItemDataFPv(arg1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        return;
    }
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 2));
    if (temp_r3 != 0) {
        temp_r29 = check_equip_requirements(temp_r3, arg1, &sp8);
        temp_r30 = check_item_flags__9TItemDataFPv(arg1);
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0x33) {
            if ((temp_r30 == 0) && (is_rare_item__9TItemDataFPv(arg1) != 0)) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x19U;
            } else if (sp8 & 1) {
                M2C_FIELD(arg0, u8 *, 0x1C) = 0x13U;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = -1;
        }
        if (temp_r30 == 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            M2C_FIELD(arg0, s32 *, 0x30) = 0xFF00FFFC;
            return;
        }
        if (temp_r29 != 0) {
            M2C_FIELD(arg0, s32 *, 0x2C) = -1;
            if (is_custom_name_srank__9TItemDataFPv(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFFFE3C28;
                return;
            }
            if (TItemData__sub_8010C738(arg1) == 2) {
                M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x800);
                return;
            }
            if (calc_display_grade__9TItemDataFPv(arg1) >= 9U) {
                M2C_FIELD(arg0, s32 *, 0x30) = -0x1600;
                return;
            }
            if (has_bonus_stats__9TItemDataFPv(arg1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x30) = 0xFF61E853;
                return;
            }
            if (calc_action_flags__9TItemDataFv(arg1, 0x10000, temp_r3) != 0U) {
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

extern const f32 lbl_805DCF08;

void select_item_icon__20TWindowSubStatusDispFPviUcUci(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4) {
    if (arg4 != 0) {
        M2C_FIELD(arg0, s8 *, 0x1D) = 8;
        return;
    }
    switch (arg1) {
    case 1:
        M2C_FIELD(arg0, s8 *, 0x1D) = 0;
        return;
    case 3:
        M2C_FIELD(arg0, s8 *, 0x1D) = 1;
        return;
    case 2:
        M2C_FIELD(arg0, s8 *, 0x1D) = 2;
        return;
    default:
        switch ((s32) arg2) {
        case 1:
            if (arg3 == 3) {
                M2C_FIELD(arg0, s8 *, 0x1D) = 4;
                return;
            }
            if (arg3 == 2) {
                M2C_FIELD(arg0, s8 *, 0x1D) = 0xA;
                return;
            }
            M2C_FIELD(arg0, s8 *, 0x1D) = 0xB;
            return;
        case 2:
            M2C_FIELD(arg0, s8 *, 0x1D) = 3;
            return;
        case 3:
            if (arg3 == 0) {
                M2C_FIELD(arg0, s8 *, 0x1D) = 5;
                return;
            }
            if (arg3 == 1) {
                M2C_FIELD(arg0, s8 *, 0x1D) = 7;
                return;
            }
            if (arg3 == 2) {
                M2C_FIELD(arg0, s8 *, 0x1D) = 6;
                return;
            }
            M2C_FIELD(arg0, s8 *, 0x1D) = 8;
            return;
        case 4:
            M2C_FIELD(arg0, s8 *, 0x1D) = 9;
            return;
        case 0:
        default:
            M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
            return;
        }
        break;
    }
}

void TWindowSubStatusDisp__sub_8025882C(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF04;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0xD1)))), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x20))), (s32)((int) (8)), (s32)((int) (1)));
    M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0xC5);
}

void TWindowSubStatusDisp__sub_802588AC(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0xD0)))), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x20))), (s32)((int) (8)), (s32)((int) (1)));
    M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0xC5);
}

void init_no_item_entry__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_message_10__20TWindowSubStatusDispFPv((int) (0xCF)))), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x20))), (s32)((int) (8)), (s32)((int) (1)));
    M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
    M2C_FIELD(arg0, s32 *, 0x18) = arg1;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0xC5);
}

void TWindowSubStatusDisp__sub_802589AC(u8 *arg0, s8 arg1, s8 arg2, u8 arg3, u32 arg4, s32 arg5) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1D) = arg2;
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) arg3;
    M2C_FIELD(arg0, s32 *, 0x2C) = -1;
    M2C_FIELD(arg0, s32 *, 0x20) = ((u32)replace_owned_string__20TWindowSubStatusDispFPviiii((void *)(arg0), (s32)(arg4), (s32)(M2C_FIELD(arg0, s32 *, 0x20)), (s32)(8), (s32)(1)));
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg5;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x245);
}

void TWindowSubStatusDisp__sub_80258A28(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 9;
    text_builder_reset();
    TWindowSubStatusDisp__sub_80228F5C((void *) (arg1));
    text_builder_append((int) (get_download_server__20TWindowSubStatusDispFv()));
    M2C_FIELD(arg0, s32 *, 0x24) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_shared_text_buffer())), (s32)((int) (M2C_FIELD(arg0, s32 *, 0x24))), (s32)((int) (0x10)), (s32)((int) (1)));
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x2D;
    M2C_FIELD(arg0, s32 *, 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    update_stat_line__20TWindowSubStatusDispFPvi(arg0, arg2);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    if (arg2 <= 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0xC5);
    } else if ((reset_key_machine_state__10TObjPlayerFv() == 0) || (is_boss_area() != 0)) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0xFF909090;
        M2C_FIELD(arg0, s32 *, 0x2C) = 0xFFAAAAAA;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
    } else {
        M2C_FIELD(arg0, s32 *, 0x30) = -1;
        M2C_FIELD(arg0, s32 *, 0x2C) = -1;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x30);
}
void TWindowSubStatusDisp__sub_80258BB8(Obj_80258BB8 *o, s32 x) {
    init_status_entry__20TWindowSubStatusDispFPvcUii(o, x ? 0x14 : 0x15);
    o->f8 = lbl_805DCF04;
}

}
