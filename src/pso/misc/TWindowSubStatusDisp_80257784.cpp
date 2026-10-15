#include "types.h"

struct RecoveredGlobal_80258100_lbl_804CF998 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
int TWindowSubStatusDisp__sub_80256BDC(void *, s16);
extern unsigned char lbl_804CF998[];
u8 *init_layout_entry_rect__20TWindowSubStatusDispFPvPvs(u8 *arg0, u8 *arg1, s16 arg2);
}

extern "C" {

void advance_state__20TWindowSubStatusDispFPv(void *arg0);
void finalize_state__20TWindowSubStatusDispFPv(void *arg0);
void* reset_entry__20TWindowSubStatusDispFPv(void* a0, s16 _w1);

    extern unsigned char lbl_804CF998[];
    extern const float lbl_805DCEF8;
void* reset_entry__20TWindowSubStatusDispFPv(void* a0, s16 _w1) { TWindowSubStatusDisp__sub_80256BDC((void *)(a0), _w1); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF998; *(float*)((char*)a0 + 0x8) = lbl_805DCEF8; *(float*)((char*)a0 + 0xc) = lbl_805DCEF8; *(float*)((char*)a0 + 0x10) = lbl_805DCEF8; *(float*)((char*)a0 + 0x14) = lbl_805DCEF8; return a0; }

typedef char RecoveredGlobal_80258100_lbl_804CF998_size[sizeof(RecoveredGlobal_80258100_lbl_804CF998) == 0x18 ? 1 : -1];
u8 *init_layout_entry_rect__20TWindowSubStatusDispFPvPvs(u8 *arg0, u8 *arg1, s16 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *)(arg0), arg2);
    *(s32 **)((s8 *)arg0 + 4) = &(*(RecoveredGlobal_80258100_lbl_804CF998 *)&lbl_804CF998).value;
    *(f32 *)((s8 *)arg0 + 8) = (f32) *(f32 *)((s8 *)arg1 + 4);
    *(f32 *)((s8 *)arg0 + 0xC) = (f32) *(f32 *)((s8 *)arg1 + 8);
    *(f32 *)((s8 *)arg0 + 0x10) = (f32) *(f32 *)((s8 *)arg1 + 0xC);
    *(f32 *)((s8 *)arg0 + 0x14) = (f32) *(f32 *)((s8 *)arg1 + 0x10);
    return arg0;
}

void advance_state__20TWindowSubStatusDispFPv(void *arg0) {
    if ((u8) *(u8 *)((s8 *)arg0 + 0x1D) == 0x14) {
        *(u8 *)((s8 *)arg0 + 0x1D) = 0x15U;
    }
}

void finalize_state__20TWindowSubStatusDispFPv(void *arg0) {
    if ((u8) *(u8 *)((s8 *)arg0 + 0x1D) == 0x15) {
        *(u8 *)((s8 *)arg0 + 0x1D) = 0x14U;
    }
}

}

#include "types.h"

extern "C" {

void reset__20TWindowSubStatusDispFPv(void *arg0);
s32 mem_free(u32);

void reset__20TWindowSubStatusDispFPv(void *arg0) {
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0x33;
    *(s32 *)((s8 *)arg0 + 0x28) = -1;
    *(s32 *)((s8 *)arg0 + 0x2C) = -1;
    *(s32 *)((s8 *)arg0 + 0x30) = -1;
    *(s32 *)((s8 *)arg0 + 0x34) = -1;
    *(s32 *)((s8 *)arg0 + 0x18) = 0;
    if (((u32) *(u32 *)((s8 *)arg0 + 0x24) != 0U) && (*(u16 *)((s8 *)arg0 + 0) & 0x10)) {
        mem_free(*(u32 *)((s8 *)arg0 + 0x24));
    }
    *(u32 *)((s8 *)arg0 + 0x24) = 0U;
    if (((u32) *(u32 *)((s8 *)arg0 + 0x20) != 0U) && (*(u16 *)((s8 *)arg0 + 0) & 8)) {
        mem_free(*(u32 *)((s8 *)arg0 + 0x20));
    }
    *(u32 *)((s8 *)arg0 + 0x20) = 0U;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) & ~0x1BFD);
}

}

#include "types.h"

extern "C" {

void update_stat_line__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
s32 get_shared_text_buffer();
s32 TWindowSubStatusDisp__sub_80228F5C(s32);
s32 text_builder_append(s32 *);
s32 text_builder_reset();
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);

extern s32 lbl_805DCF00;

void update_stat_line__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    text_builder_reset();
    text_builder_append(&lbl_805DCF00);
    TWindowSubStatusDisp__sub_80228F5C(arg1);
    *(s32 *)((s8 *)arg0 + 0x24) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, get_shared_text_buffer(), *(s32 *)((s8 *)arg0 + 0x24), 0x10, 1);
}

}

#include "types.h"

extern "C" {

void update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);

void update_stat_line_if_positive__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    if (arg1 > 0) {
        ((void (*)(void *))update_stat_line__20TWindowSubStatusDispFPvi)(arg0);
    }
}

}

#include "types.h"

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
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF04;
void setup_entry_msg_d1__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1);
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void setup_entry_msg_d0__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1);
s32 get_message_10__20TWindowSubStatusDispFl(int);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void init_no_item_entry__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void init_entry__20TWindowSubStatusDispFPvccUcUii(u8 *arg0, s8 arg1, s8 arg2, u8 arg3, u32 arg4, s32 arg5);
s32 get_shared_text_buffer();
s32 get_download_server__20TWindowSubStatusDispFv();
s32 text_builder_reset();
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void TWindowSubStatusDisp__sub_80258A28(u8 *arg0, s32 arg1, s32 arg2);
void init_status_entry__20TWindowSubStatusDispFPvcUii(u8 *arg0, s8 arg1, u32 arg2, s32 arg3);
extern const f32 lbl_805DCF04;
void init_status_entry_by_flag__20TWindowSubStatusDispFPvi(Obj_80258BB8 *o, s32 x);
void select_item_icon__20TWindowSubStatusDispFPviUcUci(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4);
}

extern "C" {

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1);
void update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *arg0, void *arg1);
s32 is_wrapped__9TItemDataFPv(s32);
s32 TItemData__sub_8010C738(s32);
s32 is_custom_name_srank__9TItemDataFPv(s32);
s32 has_bonus_stats__9TItemDataFv(s32);
u32 calc_action_flags__9TItemDataFv(s32, s32, s32);
s32 is_rare_item__9TItemDataFPv(s32);
s32 TItem__sub_801013E8(void *);
s32 get_usable_action_flags__5TItemFPvUiUi(void *, s32, s32);
s32 is_boss_area();
s32 get_player_by_client_id(s16);
s32 check_equip_requirements(s32, s32, s32 *);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
u8 calc_display_grade__5TItemFv(void *);
u8 calc_display_grade__9TItemDataFv(s32);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 check_item_flags__9TItemDataFv(s32);
s32 copy_item_data_to_icon__10TObjPlayerFv(void *);
s32 fn_80100D68(void *);
s32 get_item_info__10TObjPlayerFllPs(void *, s32, s16 *);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 test_item_flags__10TObjPlayerFUl(void *, s32);
s32 update_item_data__5TItemFv(void *);

void update_item_icon_colors__20TWindowSubStatusDispFPvPv(void *arg0, void *arg1) {
    s16 sp8;
    s32 temp_r26;
    s32 temp_r27;
    s32 temp_r28;
    s32 temp_r28_2;
    s32 temp_r3;

    if (check_flag_400__20TWindowSubStatusDispFv(arg1) != 0) {
        *(s32 *)((s8 *)arg0 + 0x30) = -1;
        return;
    }
    temp_r3 = get_player_by_client_id(*(s16 *)((s8 *)arg0 + 2));
    if (temp_r3 != 0) {
        temp_r26 = test_item_flags__10TObjPlayerFUl(arg1, 8);
        temp_r28 = get_usable_action_flags__5TItemFPvUiUi(arg1, 0x10, temp_r3);
        temp_r27 = get_item_info__10TObjPlayerFllPs(arg1, temp_r3, &sp8);
        temp_r28_2 = ((VObj18B_802582c4_80257784 *) arg1)->vm8C();
        if (temp_r28 != 0) {
            if (temp_r26 != 0) {
                *(s8 *)((s8 *)arg0 + 0x1C) = 0x30;
            } else {
                *(s8 *)((s8 *)arg0 + 0x1C) = 0x2F;
            }
        } else if (temp_r26 != 0) {
            *(s8 *)((s8 *)arg0 + 0x1C) = 0xC;
        } else {
            if ((temp_r28_2 == 0) && (TItem__sub_801013E8(arg1) != 0)) {
                *(s8 *)((s8 *)arg0 + 0x1C) = 0x19;
            } else if (sp8 & 1) {
                *(s8 *)((s8 *)arg0 + 0x1C) = 0x13;
            } else {
                *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
            }
            *(s32 *)((s8 *)arg0 + 0x28) = -1;
        }
        if (temp_r28_2 == 0) {
            *(s32 *)((s8 *)arg0 + 0x2C) = -1;
            *(s32 *)((s8 *)arg0 + 0x30) = 0xFF00FFFC;
            return;
        }
        if (temp_r27 != 0) {
            *(s32 *)((s8 *)arg0 + 0x2C) = -1;
            if (update_item_data__5TItemFv(arg1) != 0) {
                *(s32 *)((s8 *)arg0 + 0x30) = 0xFFFE3C28;
                return;
            }
            if (fn_80100D68(arg1) == 2) {
                *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x800);
                return;
            }
            if (calc_display_grade__5TItemFv(arg1) >= 9U) {
                *(s32 *)((s8 *)arg0 + 0x30) = -0x1600;
                return;
            }
            if (copy_item_data_to_icon__10TObjPlayerFv(arg1) != 0) {
                *(s32 *)((s8 *)arg0 + 0x30) = 0xFF61E853;
                return;
            }
            if (get_usable_action_flags__5TItemFPvUiUi(arg1, 0x10000, temp_r3) != 0U) {
                *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
                return;
            }
            *(s32 *)((s8 *)arg0 + 0x30) = -1;
            return;
        }
        if (sp8 & 1) {
            *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
            *(s32 *)((s8 *)arg0 + 0x2C) = 0xFFAAAAAA;
            return;
        }
        *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
        *(s32 *)((s8 *)arg0 + 0x2C) = 0xFFAAAAAA;
    }
}

void update_item_colors__20TWindowSubStatusDispFPvi(void *arg0, s32 arg1) {
    s32 sp8;
    s32 temp_r29;
    s32 temp_r30;
    s32 temp_r3;

    if (is_wrapped__9TItemDataFPv(arg1) != 0) {
        *(s32 *)((s8 *)arg0 + 0x30) = -1;
        return;
    }
    temp_r3 = get_player_by_client_id(*(s16 *)((s8 *)arg0 + 2));
    if (temp_r3 != 0) {
        temp_r29 = check_equip_requirements(temp_r3, arg1, &sp8);
        temp_r30 = check_item_flags__9TItemDataFv(arg1);
        if ((u8) *(u8 *)((s8 *)arg0 + 0x1C) == 0x33) {
            if ((temp_r30 == 0) && (is_rare_item__9TItemDataFPv(arg1) != 0)) {
                *(u8 *)((s8 *)arg0 + 0x1C) = 0x19U;
            } else if (sp8 & 1) {
                *(u8 *)((s8 *)arg0 + 0x1C) = 0x13U;
            }
            *(s32 *)((s8 *)arg0 + 0x28) = -1;
        }
        if (temp_r30 == 0) {
            *(s32 *)((s8 *)arg0 + 0x2C) = -1;
            *(s32 *)((s8 *)arg0 + 0x30) = 0xFF00FFFC;
            return;
        }
        if (temp_r29 != 0) {
            *(s32 *)((s8 *)arg0 + 0x2C) = -1;
            if (is_custom_name_srank__9TItemDataFPv(arg1) != 0) {
                *(s32 *)((s8 *)arg0 + 0x30) = 0xFFFE3C28;
                return;
            }
            if (TItemData__sub_8010C738(arg1) == 2) {
                *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x800);
                return;
            }
            if (calc_display_grade__9TItemDataFv(arg1) >= 9U) {
                *(s32 *)((s8 *)arg0 + 0x30) = -0x1600;
                return;
            }
            if (has_bonus_stats__9TItemDataFv(arg1) != 0) {
                *(s32 *)((s8 *)arg0 + 0x30) = 0xFF61E853;
                return;
            }
            if (calc_action_flags__9TItemDataFv(arg1, 0x10000, temp_r3) != 0U) {
                *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
                return;
            }
            *(s32 *)((s8 *)arg0 + 0x30) = -1;
            return;
        }
        if (sp8 & 1) {
            *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
            *(s32 *)((s8 *)arg0 + 0x2C) = 0xFFAAAAAA;
            return;
        }
        *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
        *(s32 *)((s8 *)arg0 + 0x2C) = 0xFFAAAAAA;
    }
}

extern const f32 lbl_805DCF08;

void select_item_icon__20TWindowSubStatusDispFPviUcUci(void *arg0, s32 arg1, u8 arg2, u8 arg3, s32 arg4) {
    if (arg4 != 0) {
        *(s8 *)((s8 *)arg0 + 0x1D) = 8;
        return;
    }
    switch (arg1) {
    case 1:
        *(s8 *)((s8 *)arg0 + 0x1D) = 0;
        return;
    case 3:
        *(s8 *)((s8 *)arg0 + 0x1D) = 1;
        return;
    case 2:
        *(s8 *)((s8 *)arg0 + 0x1D) = 2;
        return;
    default:
        switch ((s32) arg2) {
        case 1:
            if (arg3 == 3) {
                *(s8 *)((s8 *)arg0 + 0x1D) = 4;
                return;
            }
            if (arg3 == 2) {
                *(s8 *)((s8 *)arg0 + 0x1D) = 0xA;
                return;
            }
            *(s8 *)((s8 *)arg0 + 0x1D) = 0xB;
            return;
        case 2:
            *(s8 *)((s8 *)arg0 + 0x1D) = 3;
            return;
        case 3:
            if (arg3 == 0) {
                *(s8 *)((s8 *)arg0 + 0x1D) = 5;
                return;
            }
            if (arg3 == 1) {
                *(s8 *)((s8 *)arg0 + 0x1D) = 7;
                return;
            }
            if (arg3 == 2) {
                *(s8 *)((s8 *)arg0 + 0x1D) = 6;
                return;
            }
            *(s8 *)((s8 *)arg0 + 0x1D) = 8;
            return;
        case 4:
            *(s8 *)((s8 *)arg0 + 0x1D) = 9;
            return;
        case 0:
        default:
            *(s8 *)((s8 *)arg0 + 0x1D) = 0x33;
            return;
        }
        break;
    }
}

void setup_entry_msg_d1__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF04;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0x33;
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_message_10__20TWindowSubStatusDispFl((int) (0xD1)))), (s32)((int) (*(s32 *)((s8 *)arg0 + 0x20))), (s32)((int) (8)), (s32)((int) (1)));
    *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
    *(s32 *)((s8 *)arg0 + 0x18) = arg1;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0xC5);
}

void setup_entry_msg_d0__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0x33;
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_message_10__20TWindowSubStatusDispFl((int) (0xD0)))), (s32)((int) (*(s32 *)((s8 *)arg0 + 0x20))), (s32)((int) (8)), (s32)((int) (1)));
    *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
    *(s32 *)((s8 *)arg0 + 0x18) = arg1;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0xC5);
}

void init_no_item_entry__20TWindowSubStatusDispFPvi(u8 *arg0, s32 arg1) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0x33;
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_message_10__20TWindowSubStatusDispFl((int) (0xCF)))), (s32)((int) (*(s32 *)((s8 *)arg0 + 0x20))), (s32)((int) (8)), (s32)((int) (1)));
    *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
    *(s32 *)((s8 *)arg0 + 0x18) = arg1;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0xC5);
}

void init_entry__20TWindowSubStatusDispFPvccUcUii(u8 *arg0, s8 arg1, s8 arg2, u8 arg3, u32 arg4, s32 arg5) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    *(s8 *)((s8 *)arg0 + 0x1C) = arg1;
    *(s8 *)((s8 *)arg0 + 0x1D) = arg2;
    *(s32 *)((s8 *)arg0 + 0x28) = (s32) arg3;
    *(s32 *)((s8 *)arg0 + 0x2C) = -1;
    *(s32 *)((s8 *)arg0 + 0x20) = ((u32)replace_owned_string__20TWindowSubStatusDispFPviiii((void *)(arg0), (s32)(arg4), (s32)(*(s32 *)((s8 *)arg0 + 0x20)), (s32)(8), (s32)(1)));
    *(s32 *)((s8 *)arg0 + 0x30) = -1;
    *(s32 *)((s8 *)arg0 + 0x18) = arg5;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x245);
}

void TWindowSubStatusDisp__sub_80258A28(u8 *arg0, s32 arg1, s32 arg2) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = 9;
    text_builder_reset();
    TWindowSubStatusDisp__sub_80228F5C((s32) (arg1));
    text_builder_append((s32 *) (get_download_server__20TWindowSubStatusDispFv()));
    *(s32 *)((s8 *)arg0 + 0x24) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)((void *) (arg0)), (s32)((int) (get_shared_text_buffer())), (s32)((int) (*(s32 *)((s8 *)arg0 + 0x24))), (s32)((int) (0x10)), (s32)((int) (1)));
    *(s32 *)((s8 *)arg0 + 0x34) = -1;
    *(s32 *)((s8 *)arg0 + 0x18) = arg2;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
}

void setup_stat_line__20TWindowSubStatusDispFPviii(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0x2D;
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, arg1, *(s32 *)((s8 *)arg0 + 0x20), 8, 1);
    update_stat_line__20TWindowSubStatusDispFPvi(arg0, arg2);
    *(s32 *)((s8 *)arg0 + 0x18) = arg3;
    if (arg2 <= 0) {
        *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
        *(s32 *)((s8 *)arg0 + 0x2C) = 0xFFAAAAAA;
        *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0xC5);
    } else if ((reset_key_machine_state__10TObjPlayerFv() == 0) || (is_boss_area() != 0)) {
        *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
        *(s32 *)((s8 *)arg0 + 0x2C) = 0xFFAAAAAA;
        *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
    } else {
        *(s32 *)((s8 *)arg0 + 0x30) = -1;
        *(s32 *)((s8 *)arg0 + 0x2C) = -1;
        *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
    }
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)arg0 + 0x30);
}
void init_status_entry_by_flag__20TWindowSubStatusDispFPvi(Obj_80258BB8 *o, s32 x) {
    ((void (*)(Obj_80258BB8 *, s32))init_status_entry__20TWindowSubStatusDispFPvcUii)(o, x ? 0x14 : 0x15);
    o->f8 = lbl_805DCF04;
}

}

#include "types.h"

extern "C" {
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF04;
void init_status_entry__20TWindowSubStatusDispFPvcUii(u8 *arg0, s8 arg1, u32 arg2, s32 arg3);
}

extern "C" {

void init_list_entry__20TWindowSubStatusDispFPvUcii(void *arg0, u8 arg1, s32 arg2, s32 arg3);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);

extern const f32 lbl_805DCF04;

void init_list_entry__20TWindowSubStatusDispFPvUcii(void *arg0, u8 arg1, s32 arg2, s32 arg3) {
    u8 var_r0;

    var_r0 = arg1;
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF04;
    if (arg1 == 0x18) {
        var_r0 = 0x16;
    }
    *(u8 *)((s8 *)arg0 + 0x1C) = var_r0;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0x33;
    *(s32 *)((s8 *)arg0 + 0x28) = -1;
    *(s32 *)((s8 *)arg0 + 0x2C) = -1;
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, arg2, *(s32 *)((s8 *)arg0 + 0x20), 8, 1);
    *(s32 *)((s8 *)arg0 + 0x30) = -1;
    *(s32 *)((s8 *)arg0 + 0x34) = -1;
    *(s32 *)((s8 *)arg0 + 0x18) = arg3;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x145);
    if (arg1 == 0x18) {
        *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x80);
        *(s32 *)((s8 *)arg0 + 0x30) = 0xFF909090;
    }
}
void init_status_entry__20TWindowSubStatusDispFPvcUii(u8 *arg0, s8 arg1, u32 arg2, s32 arg3) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF04;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = arg1;
    *(s32 *)((s8 *)arg0 + 0x28) = -1;
    *(s32 *)((s8 *)arg0 + 0x2C) = -1;
    *(s32 *)((s8 *)arg0 + 0x20) = ((u32)replace_owned_string__20TWindowSubStatusDispFPviiii((void *)(arg0), (s32)(arg2), (s32)(*(s32 *)((s8 *)arg0 + 0x20)), (s32)(8), (s32)(1)));
    *(s32 *)((s8 *)arg0 + 0x30) = -1;
    *(s32 *)((s8 *)arg0 + 0x34) = -1;
    *(s32 *)((s8 *)arg0 + 0x18) = arg3;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
}

}

#include "types.h"

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
s32 get_field_ed__10TObjPlayerFv(void *);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 lookup_item_data__20TWindowSubStatusDispFv(void *);
s32 get_field_ec__12TOSwitchItemFv(void *);
s32 TObjPlayer__sub_801C1AC8(void *);
#define update_stat_line_if_positive__20TWindowSubStatusDispFPvi ((s32 (*)(void *, s32))update_stat_line_if_positive__20TWindowSubStatusDispFPvi)
#define update_item_icon_colors__20TWindowSubStatusDispFPvPv ((s32 (*)(void *, void *))update_item_icon_colors__20TWindowSubStatusDispFPvPv)
#define select_item_icon__20TWindowSubStatusDispFPviUcUci ((s32 (*)(void *, s32, s32, s32, s32))select_item_icon__20TWindowSubStatusDispFPviUcUci)
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);
extern const f32 lbl_805DCF08;
void init_item_row__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
}

extern "C" {

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
void update_from_player__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_shared_text_buffer();
s32 get_field_ec__12TOSwitchItemFv(void *);
s32 get_field_ed__10TObjPlayerFv(void *);
s32 TObjPlayer__sub_801C1AC8(void *);
s32 check_flag_400__20TWindowSubStatusDispFv(void *);
s32 lookup_item_data__20TWindowSubStatusDispFv(void *);
s32 TWindowSubStatusDisp__sub_80228F5C(s32);
s32 text_builder_reset();
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *, s32, s32, s32, s32);

extern const f32 lbl_805DCF08;

void set_inventory_item__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r29;

    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFv(arg1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r29, get_field_ec__12TOSwitchItemFv(arg1), get_field_ed__10TObjPlayerFv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, ((VObj_80258D38 *) arg1)->m10(), *(s32 *)((s8 *)arg0 + 0x20), 8, 1);
    if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
        update_stat_line_if_positive__20TWindowSubStatusDispFPvi(arg0, arg2);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)arg0 + 0x30);
    *(s32 *)((s8 *)arg0 + 0x18) = arg3;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
}

extern const f32 lbl_805DCF08;
void update_from_player__20TWindowSubStatusDispFPvPvii(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;

    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFv(arg1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r29, get_field_ec__12TOSwitchItemFv(arg1), get_field_ed__10TObjPlayerFv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, ((V_A_80258e2c *) arg1)->m10(), *(s32 *)((s8 *)arg0 + 0x20), 8, 1);
    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        text_builder_reset();
        TWindowSubStatusDisp__sub_80228F5C(arg2);
        *(s32 *)((s8 *)arg0 + 0x24) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, get_shared_text_buffer(), *(s32 *)((s8 *)arg0 + 0x24), 0x10, 1);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    *(s32 *)((s8 *)arg0 + 0x18) = arg3;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
}
void init_item_row__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r29;
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    temp_r29 = lookup_item_data__20TWindowSubStatusDispFv(arg1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r29, get_field_ec__12TOSwitchItemFv(arg1), get_field_ed__10TObjPlayerFv(arg1), check_flag_400__20TWindowSubStatusDispFv(arg1));
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(arg0, ((V_80258F34 *) arg1)->m10(), *(s32 *)((s8 *)arg0 + 0x20), 8, 1);
    if (TObjPlayer__sub_801C1AC8(arg1) != 0) {
        s32 v = ((V_80258F34 *) arg1)->m34();
        update_stat_line_if_positive__20TWindowSubStatusDispFPvi(arg0, v);
    }
    update_item_icon_colors__20TWindowSubStatusDispFPvPv(arg0, arg1);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)arg0 + 0x30);
    *(s32 *)((s8 *)arg0 + 0x18) = arg2;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
}

}

#undef update_stat_line_if_positive__20TWindowSubStatusDispFPvi
#undef update_item_icon_colors__20TWindowSubStatusDispFPvPv
#undef select_item_icon__20TWindowSubStatusDispFPviUcUci

#include "types.h"

extern "C" {

void set_item_info__20TWindowSubStatusDispFPvPviPv(void* a0, void* a1, int a2, void* a3);
#define is_wrapped__9TItemDataFPv ((int (*)(void*))is_wrapped__9TItemDataFPv)
#define get_shared_text_buffer ((int (*)(void))get_shared_text_buffer)
#define update_stat_line_if_positive__20TWindowSubStatusDispFPvi ((int (*)(void*, void*))update_stat_line_if_positive__20TWindowSubStatusDispFPvi)
#define update_item_colors__20TWindowSubStatusDispFPvi ((int (*)(void*, void*))update_item_colors__20TWindowSubStatusDispFPvi)
#define select_item_icon__20TWindowSubStatusDispFPviUcUci ((int (*)(void*, void*, void*, void*, void*))select_item_icon__20TWindowSubStatusDispFPviUcUci)
#define replace_owned_string__20TWindowSubStatusDispFPviiii ((int (*)(void*, void*, void*, void*, void*))replace_owned_string__20TWindowSubStatusDispFPviiii)
int forward_message__6TLobbyFlUl(int, void*);
int get_item_data__6TLobbyFUl(void*);

    extern const float lbl_805DCF08;

void set_item_info__20TWindowSubStatusDispFPvPviPv(void* a0, void* a1, int a2, void* a3) {
    int temp_r31;
    int temp_r3;

    *(float*)((char*)a0 + 0x8) = lbl_805DCF08;
    *(unsigned char*)((char*)a0 + 0x1c) = 51;
    temp_r31 = get_item_data__6TLobbyFUl(a1);
    temp_r3 = is_wrapped__9TItemDataFPv(a1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(a0, (void*)temp_r31, (void*)(*(unsigned char*)((char*)a1 + 0x0)), (void*)(*(unsigned char*)((char*)a1 + 0x1)), (void*)temp_r3);
    forward_message__6TLobbyFlUl(get_shared_text_buffer(), a1);
    *(int*)((char*)a0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii(a0, (void*)get_shared_text_buffer(), (void*)(*(int*)((char*)a0 + 0x20)), (void*)8, (void*)1);
    update_stat_line_if_positive__20TWindowSubStatusDispFPvi(a0, a3);
    update_item_colors__20TWindowSubStatusDispFPvi(a0, a1);
    *(int*)((char*)a0 + 0x34) = *(int*)((char*)a0 + 0x30);
    *(int*)((char*)a0 + 0x18) = a2;
    *(short*)((char*)a0 + 0x0) = (*(unsigned short*)((char*)a0 + 0x0) | 0x45);
}

}

#undef is_wrapped__9TItemDataFPv
#undef get_shared_text_buffer
#undef update_stat_line_if_positive__20TWindowSubStatusDispFPvi
#undef update_item_colors__20TWindowSubStatusDispFPvi
#undef select_item_icon__20TWindowSubStatusDispFPviUcUci
#undef replace_owned_string__20TWindowSubStatusDispFPviiii

#include "types.h"
#include "pso/ui/ItemListRow.h"

typedef struct Row_8025930C {
    u8 pad0[0x10];
    f32 width;
    u8 pad14[8];
    u8 kind1c;
    u8 kind1d;
    u8 pad1e[2];
    char *label;
    char *suffix;
} Row_8025930C;

extern "C" {
s32 is_flag_4_set__20TWindowSubStatusDispFv(void *p);
void check_flag_4_noop__20TWindowSubStatusDispFPv(void *p);
void reset_transform_state__10TObjPlayerFv();
void init_xyz_limits__10TObjPlayerFv();
u32 calc_text_width(s32);
s32 get_field24__11TWindowCtrlFv();
s32 is_flag_4_set__20TWindowSubStatusDispFv(void *p);
void draw_window_text(void *, s32, s32, s32, f32);
void set_text_draw_params(void *, s32, s32, f32, f32);
void draw_item_list_icon(s32, u8 *, s32, s32, f32);
extern const f32 lbl_805DCF14;
extern const f32 lbl_805DCF20;
extern const f32 lbl_805DCF24;
extern const f32 lbl_805DCF28;
extern const f32 lbl_805DCF2C;
void draw_item_list_row(ItemListRow *row, ItemListWindowView *win);
u32 calc_text_width(s32);
s32 is_flag_4_set__20TWindowSubStatusDispFv(void *p);
extern const f32 lbl_805DCF08;
extern const f32 lbl_805DCF10;
extern const f32 lbl_805DCF14;
extern const f32 lbl_805DCF18;
void calc_row_width__20TWindowSubStatusDispFv(Row_8025930C *arg0);
#define mem_free ((void (*)(s32))mem_free)
s32 mem_alloc(s32);
s32 measure_string_len__20TWindowSubStatusDispFv(s32);
char *strncpy(char *, const char *, unsigned long);
s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *arg0, s32 src, s32 buf, s32 mask, s32 copy);
}

extern "C" {

void* get_entry_ptr__20TWindowSubStatusDispFi(int a0);
void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
#define is_wrapped__9TItemDataFPv ((s32 (*)(void *))is_wrapped__9TItemDataFPv)
s32 get_shared_text_buffer();
s32 TWindowSubStatusDisp__sub_80228F5C(s32);
s32 text_builder_reset();
#define select_item_icon__20TWindowSubStatusDispFPviUcUci ((s32 (*)(void *, s32, u8, u8, s32))select_item_icon__20TWindowSubStatusDispFPviUcUci)
#define forward_message__6TLobbyFlUl ((s32 (*)(s32, void *))forward_message__6TLobbyFlUl)
s32 get_camera_id__11TCameraCtrlFv();
#define get_item_data__6TLobbyFUl ((s32 (*)(void *))get_item_data__6TLobbyFUl)
#define update_item_colors__20TWindowSubStatusDispFPvi ((s32 (*)(void *, void *))update_item_colors__20TWindowSubStatusDispFPvi)

extern const f32 lbl_805DCF08;

void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r31;

    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF08;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    temp_r31 = get_item_data__6TLobbyFUl(arg1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r31, *(u8 *)((s8 *)arg1 + 0), *(u8 *)((s8 *)arg1 + 1), is_wrapped__9TItemDataFPv(arg1));
    forward_message__6TLobbyFlUl(get_shared_text_buffer(), arg1);
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)(arg0), (s32)(get_shared_text_buffer()), (s32)(*(s32 *)((s8 *)arg0 + 0x20)), (s32)(8), (s32)(1));
    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        text_builder_reset();
        TWindowSubStatusDisp__sub_80228F5C(*(s32 *)((s8 *)arg1 + 0x10));
        *(s32 *)((s8 *)arg0 + 0x24) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)(arg0), (s32)(get_shared_text_buffer()), (s32)(*(s32 *)((s8 *)arg0 + 0x24)), (s32)(0x10), (s32)(1));
    }
    update_item_colors__20TWindowSubStatusDispFPvi(arg0, arg1);
    *(s32 *)((s8 *)arg0 + 0x18) = arg2;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
}

extern const f32 lbl_805DCF0C;

void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) lbl_805DCF0C;
    *(s8 *)((s8 *)arg0 + 0x1C) = 0x33;
    *(s8 *)((s8 *)arg0 + 0x1D) = 0x33;
    *(s32 *)((s8 *)arg0 + 0x20) = replace_owned_string__20TWindowSubStatusDispFPviiii((void *)(arg0), (s32)(arg1), (s32)(*(s32 *)((s8 *)arg0 + 0x20)), (s32)(8), (s32)(1));
    *(s32 *)((s8 *)arg0 + 0x30) = -1;
    *(s32 *)((s8 *)arg0 + 0x18) = arg2;
    *(u16 *)((s8 *)arg0 + 0) = (u16) (*(u16 *)((s8 *)arg0 + 0) | 0x45);
}

    extern unsigned char status_disp_item_icon_coord_table[];

s32 replace_owned_string__20TWindowSubStatusDispFPviiii(void *arg0, s32 src, s32 buf, s32 mask, s32 copy) {
    u16 *flags = (u16 *)arg0;
    s32 n;
    if (buf != 0 && (*flags & mask)) {
        *flags &= ~mask;
        mem_free(buf);
    }
    if ((u32)src != 0 && copy != 0) {
        n = measure_string_len__20TWindowSubStatusDispFv(src);
        buf = mem_alloc(n + 1);
        strncpy((char *)buf, (const char *)src, n + 1);
        *flags |= mask;
    } else {
        buf = src;
    }
    return buf;
}

void calc_row_width__20TWindowSubStatusDispFv(Row_8025930C *arg0) {
    arg0->width = lbl_805DCF08;
    if (is_flag_4_set__20TWindowSubStatusDispFv(arg0) != 0) {
        if (arg0->kind1c != 0x33) {
            arg0->width += lbl_805DCF10;
        } else if (arg0->kind1d != 0x33) {
            arg0->width += lbl_805DCF14;
        }
        if (arg0->label != 0) {
            arg0->width += (f32)calc_text_width((s32)arg0->label);
        }
        if (arg0->suffix != 0) {
            arg0->width += lbl_805DCF18;
            arg0->width += (f32)calc_text_width((s32)arg0->suffix);
        }
    }
}

void* get_entry_ptr__20TWindowSubStatusDispFi(int a0) {  return (char*)status_disp_item_icon_coord_table + (unsigned char)(a0) * 8; }

typedef struct ItemListRow ItemListRow;
typedef struct ItemListPosition ItemListPosition;
typedef struct ItemListWindowView ItemListWindowView;
#pragma fp_contract on
void draw_item_list_row(ItemListRow *row, ItemListWindowView *win) {
  ItemListPosition pos;
  ItemListRow *new_var;
  f32 y;
  f32 depth;
  s32 style;
  if (is_flag_4_set__20TWindowSubStatusDispFv(row) != 0)
  {
    y = win->y + row->y;
    if (((!((row->height + y) < win->clip_top)) && (!((win->y + row->y) > win->clip_bottom))) && (win->visible >= 0))
    {
      pos.x = win->x + row->x;
      pos.y = win->y + row->y;
      depth = lbl_805DCF20 / (lbl_805DCF24 + win->depth);
      if (row->flags & 0x200)
      {
        draw_item_list_icon((s32) win, (u8 *) (&pos), row->status_icon, -1, depth);
        pos.x += lbl_805DCF14;
        draw_item_list_icon((s32) win, (u8 *) (&pos), row->category_icon, -1, depth);
        pos.x += lbl_805DCF14;
        draw_item_list_icon((s32) win, (u8 *) (&pos), (u8) row->status_style, -1, depth);
        pos.x += lbl_805DCF14;
      }
      else
      {
        init_xyz_limits__10TObjPlayerFv();
        if (row->flags & 0x100)
        {
          pos.x += lbl_805DCF14;
          draw_item_list_icon((s32) win, (u8 *) (&pos), row->status_icon, row->status_style, depth);
        }
        else
        {
          draw_item_list_icon((s32) win, (u8 *) (&pos), row->status_icon, row->status_style, depth);
          pos.x += lbl_805DCF14;
        }
        reset_transform_state__10TObjPlayerFv();
        draw_item_list_icon((s32) win, (u8 *) (&pos), row->category_icon, row->category_style, depth);
        pos.x += lbl_805DCF14;
      }
      new_var = row;
      if (new_var->flags & 0x1000)
      {
        set_text_draw_params(win, 1, 0, depth, win->text_clip);
      }
      else
      {
        set_text_draw_params(win, 1, 1, depth, lbl_805DCF28);
      }
      if (new_var->flags & 0x400)
      {
        pos.x = (lbl_805DCF2C * win->width) + win->x;
        pos.x = -((lbl_805DCF2C * ((f32) calc_text_width(new_var->label))) - pos.x);
      }
      if (row->flags & 0x800)
      {
        style = get_field24__11TWindowCtrlFv();
      }
      else
      {
        style = new_var->style;
      }
      if (new_var->flags & 0x1000)
      {
        draw_window_text(&pos, row->label, style, 0, lbl_805DCF28);
      }
      else
      {
        draw_window_text(&pos, new_var->label, style, 1, lbl_805DCF28);
      }
      f32 width = (f32) calc_text_width(new_var->suffix);
      pos.x = (win->x + win->width) - width;
      draw_window_text(&pos, row->suffix, new_var->suffix_style, 1, lbl_805DCF28);
    }
  }
}

void check_flag_4_noop__20TWindowSubStatusDispFPv(void *p) {
    if (is_flag_4_set__20TWindowSubStatusDispFv(p)) return;
}

}

#undef mem_free
#undef is_wrapped__9TItemDataFPv
#undef select_item_icon__20TWindowSubStatusDispFPviUcUci
#undef forward_message__6TLobbyFlUl
#undef get_item_data__6TLobbyFUl
#undef update_item_colors__20TWindowSubStatusDispFPvi

#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

s32 deleting_destructor__20TWindowSubStatusDispFs(void *, s32);
s32 __dl__FPv(void *);
s32 mem_free(u32);

extern s32 lbl_804CF9B0[];

void *TWindowSubStatusDisp::dispose(s16 arg1) {
    u16 temp_r3;
    u16 temp_r3_2;

    if (this != NULL) {
        *(s32 **)((s8 *)this + 4) = lbl_804CF9B0;
        if ((u32) *(u32 *)((s8 *)this + 0x24) != 0U) {
            temp_r3 = *(u16 *)((s8 *)this + 0);
            if (temp_r3 & 0x10) {
                *(u16 *)((s8 *)this + 0) = (u16) (temp_r3 & 0xFFFFFFEF);
                mem_free(*(u32 *)((s8 *)this + 0x24));
            }
        }
        if ((u32) *(u32 *)((s8 *)this + 0x20) != 0U) {
            temp_r3_2 = *(u16 *)((s8 *)this + 0);
            if (temp_r3_2 & 8) {
                *(u16 *)((s8 *)this + 0) = (u16) (temp_r3_2 & 0xFFFFFFF7);
                mem_free(*(u32 *)((s8 *)this + 0x20));
            }
        }
        deleting_destructor__20TWindowSubStatusDispFs(this, 0);
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

}
