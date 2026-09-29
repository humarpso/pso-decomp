#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_8001DC24();
u8 *get_message_10__20TWindowSubStatusDispFPv(s32);
s32 TWindowSubStatusDisp__sub_80229080(void *);
s32 TWindowSubStatusDisp__sub_802290E0();
u8 *get_sub_disp_ptr__20TWindowSubStatusDispFPv(s32);
s32 clear_visible_flag__20TWindowSubStatusDispFPv(int);
s32 set_flag0_bit2__15TWindowHelpItemFPv(int);
s32 TWindowSubStatusDisp__sub_8025AC50(int, int, int);
u8 *get_card_data_ptr__17TWindowSubComCardFPv(s32);
u8 *TWindowSubComCard__sub_8027523C(s32);
u8 *get_name__17TWindowSubComCardFPv(s32);
u8 *get_sub_obj__17TWindowSubComCardFPv(s32);
s32 strcmp(void *, int);
extern u8 lbl_805DD898;
void TWindowSubStatusDisp__sub_80288104(u8 *arg0, s32 arg1);
u8 *TWindowSubStatusDisp__sub_80287A00(u8 *arg0, u8 *arg1, s32 arg2, s8 arg3, s32 arg4);
extern u8 lbl_8044FCF0[];
u8 *TWindowSubStatusDisp__sub_802880BC(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

int forward_render__20TWindowSubStatusDispFPv(void* p);
int update_subwindow__20TWindowSubStatusDispFPv(void* p);
s32 destroy_status_display__20TWindowSubStatusDispFis(s32 arg0, s16 arg1);
s32 __dl__FPv(s32 a0 = 0);
int update__20TWindowSubStatusDispFPvPv(void*);
int TWindowSubStatusDisp__sub_802879B0(void*);
s32 deleting_destructor__20TWindowSubStatusDispFis(s32 a0 = 0, s32 a1 = 0);

int forward_render__20TWindowSubStatusDispFPv(void* p) { return update__20TWindowSubStatusDispFPvPv(p); }
int update_subwindow__20TWindowSubStatusDispFPv(void* p) { return TWindowSubStatusDisp__sub_802879B0(p); }
s32 destroy_status_display__20TWindowSubStatusDispFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        deleting_destructor__20TWindowSubStatusDispFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *TWindowSubStatusDisp__sub_802880BC(u8 *arg0, s32 arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80287A00(arg0, lbl_8044FCF0, arg1, 1, arg2);
    return arg0;
}

#pragma push
#pragma scheduling off
void TWindowSubStatusDisp__sub_80288104(u8 *arg0, s32 arg1) {
    u8 *temp_r3;
    s32 temp_r31;
    u8 *temp_r31_2;
    s32 temp_r30;
    s32 temp_r29;
    s32 temp_r28;
    s32 temp_r27;
    s32 temp_r26;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 4));
    temp_r31 = M2C_FIELD(temp_r3, s32 *, 4);
    temp_r30 = M2C_FIELD(temp_r3, s32 *, 0xC);
    temp_r29 = M2C_FIELD(temp_r3, s32 *, 0x14);
    temp_r28 = M2C_FIELD(temp_r3, s32 *, 0x1C);
    temp_r27 = M2C_FIELD(temp_r3, s32 *, 0x18);
    temp_r26 = M2C_FIELD(temp_r3, s32 *, 0x20);
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080((void *) (&lbl_805DD898));
    TWindowSubStatusDisp__sub_80229080((void *) (get_sub_disp_ptr__20TWindowSubStatusDispFPv(arg1)));
    TWindowSubStatusDisp__sub_8025AC50((int) (temp_r31), (int) (TLobby__sub_8001DC24()), (int) (0x60));
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080((void *) (&lbl_805DD898));
    TWindowSubStatusDisp__sub_80229080((void *) (get_name__17TWindowSubComCardFPv(arg1)));
    TWindowSubStatusDisp__sub_8025AC50((int) (temp_r30), (int) (TLobby__sub_8001DC24()), (int) (0x60));
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080((void *) (&lbl_805DD898));
    TWindowSubStatusDisp__sub_80229080((void *) (TWindowSubComCard__sub_8027523C(arg1)));
    TWindowSubStatusDisp__sub_8025AC50((int) (temp_r29), (int) (TLobby__sub_8001DC24()), (int) (0x60));
    if ((s8) *get_card_data_ptr__17TWindowSubComCardFPv(arg1) != 0) {
        TWindowSubStatusDisp__sub_802290E0();
        TWindowSubStatusDisp__sub_80229080((void *) (&lbl_805DD898));
        TWindowSubStatusDisp__sub_80229080((void *) (get_card_data_ptr__17TWindowSubComCardFPv(arg1)));
        TWindowSubStatusDisp__sub_8025AC50((int) (temp_r28), (int) (TLobby__sub_8001DC24()), (int) (0x60));
        clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r27));
        clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r28));
    } else {
        set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r27));
        set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r28));
    }
    temp_r31_2 = (u8 *)(get_sub_disp_ptr__20TWindowSubStatusDispFPv(arg1));
    if (strcmp((void *) (get_sub_obj__17TWindowSubComCardFPv(arg1)), (int) (temp_r31_2)) != 0) {
        TWindowSubStatusDisp__sub_802290E0();
        TWindowSubStatusDisp__sub_80229080((void *) (get_sub_obj__17TWindowSubComCardFPv(arg1)));
        TWindowSubStatusDisp__sub_80229080((void *) (get_message_10__20TWindowSubStatusDispFPv(0x45)));
        TWindowSubStatusDisp__sub_8025AC50((int) (temp_r26), (int) (TLobby__sub_8001DC24()), (int) (0x60));
        clear_visible_flag__20TWindowSubStatusDispFPv((int) (temp_r26));
        return;
    }
    set_flag0_bit2__15TWindowHelpItemFPv((int) (temp_r26));
}
#pragma pop

}
