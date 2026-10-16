#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowHelpItem.h"

extern "C" {
s32 get_shared_text_buffer();
s32 text_builder_append(void *);
s32 text_builder_reset();
s32 set_text_entry_string(int, int, int);
u8 *get_card_data_ptr__17TWindowSubComCardFPv(s32);
u8 *TWindowSubComCard__sub_8027523C(s32);
u8 *get_name__17TWindowSubComCardFPv(s32);
u8 *get_sub_obj__17TWindowSubComCardFPv(s32);
s32 strcmp(void *, int);
extern u8 lbl_805DD898;
u8 *init_heading_entry__20TWindowSubStatusDispFPvPvici(u8 *arg0, u8 *arg1, s32 arg2, s8 arg3, s32 arg4);
extern u8 lbl_8044FCF0[];
u8 *construct_type1_heading__20TWindowSubStatusDispFPvii(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

s32 destroy_status_display__20TWindowSubStatusDispFis(s32 arg0, s16 arg1);
s32 __dl__FPv(s32 a0 = 0);
int update__20TWindowSubStatusDispFPv(void*);
int TWindowSubStatusDisp__sub_802879B0(void*);

int TWindowSubStatusDisp::forward_render() { return update__20TWindowSubStatusDispFPv(this); }
int TWindowSubStatusDisp::update_subwindow() { return TWindowSubStatusDisp__sub_802879B0(this); }
s32 destroy_status_display__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TWindowSubStatusDisp::deleting_destructor(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *construct_type1_heading__20TWindowSubStatusDispFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    init_heading_entry__20TWindowSubStatusDispFPvPvici(arg0, lbl_8044FCF0, arg1, 1, arg2);
    return arg0;
}

#pragma push
#pragma scheduling off
void TWindowSubStatusDisp::fill_card_text_entries(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    s32 temp_r31;
    u8 *temp_r31_2;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r26;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 4));
    temp_r31 = *(s32 *)((s8 *)temp_r3 + 4);
    temp_r30 = *(s32 *)((s8 *)temp_r3 + 0xC);
    temp_r29 = *(s32 *)((s8 *)temp_r3 + 0x14);
    temp_r28 = *(s32 *)((s8 *)temp_r3 + 0x1C);
    temp_r27 = *(s32 *)((s8 *)temp_r3 + 0x18);
    temp_r26 = *(s32 *)((s8 *)temp_r3 + 0x20);
    text_builder_reset();
    text_builder_append((void *) (&lbl_805DD898));
    text_builder_append((void *) (((TWindowSubStatusDisp *)arg1)->get_sub_disp_ptr()));
    set_text_entry_string((int) (temp_r31), (int) (get_shared_text_buffer()), (int) (0x60));
    text_builder_reset();
    text_builder_append((void *) (&lbl_805DD898));
    text_builder_append((void *) (get_name__17TWindowSubComCardFPv(arg1)));
    set_text_entry_string((int) (temp_r30), (int) (get_shared_text_buffer()), (int) (0x60));
    text_builder_reset();
    text_builder_append((void *) (&lbl_805DD898));
    text_builder_append((void *) (TWindowSubComCard__sub_8027523C(arg1)));
    set_text_entry_string((int) (temp_r29), (int) (get_shared_text_buffer()), (int) (0x60));
    if ((s8) *get_card_data_ptr__17TWindowSubComCardFPv(arg1) != 0) {
        text_builder_reset();
        text_builder_append((void *) (&lbl_805DD898));
        text_builder_append((void *) (get_card_data_ptr__17TWindowSubComCardFPv(arg1)));
        set_text_entry_string((int) (temp_r28), (int) (get_shared_text_buffer()), (int) (0x60));
        ((TWindowSubStatusDisp *)temp_r27)->clear_visible_flag();
        ((TWindowSubStatusDisp *)temp_r28)->clear_visible_flag();
    } else {
        ((TWindowHelpItem *)temp_r27)->set_flag0_bit2();
        ((TWindowHelpItem *)temp_r28)->set_flag0_bit2();
    }
    temp_r31_2 = (u8 *)(((TWindowSubStatusDisp *)arg1)->get_sub_disp_ptr());
    if (strcmp((void *) (get_sub_obj__17TWindowSubComCardFPv(arg1)), (int) (temp_r31_2)) != 0) {
        text_builder_reset();
        text_builder_append((void *) (get_sub_obj__17TWindowSubComCardFPv(arg1)));
        text_builder_append((void *) (TWindowSubStatusDisp::get_message_10(0x45)));
        set_text_entry_string((int) (temp_r26), (int) (get_shared_text_buffer()), (int) (0x60));
        ((TWindowSubStatusDisp *)temp_r26)->clear_visible_flag();
        return;
    }
    ((TWindowHelpItem *)temp_r26)->set_flag0_bit2();
}
#pragma pop

}
