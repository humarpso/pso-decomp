#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_30 { u8 bytes[0x30]; };

extern "C" {
u8 * TCameraCtrl__sub_8006AF74(s32 arg0, s32 arg1);
}

extern "C" {

u16 TCameraCtrl__sub_8006B358(void* p);
int TCameraCtrl__sub_8006B368(void);
int TCameraCtrl__sub_8006B370(void);
int TCameraCtrl__sub_8006B3B8(void* p);
int get_camera_id__11TCameraCtrlFv(void);
int get_instance__11TCameraCtrlFv(void);
s32 get_mode__11TCameraCtrlFPv(void* p);
int reset_battle_camera__11TCameraCtrlFPv(void* p);
void reset_split_flag__11TCameraCtrlFPv(void *arg0);
void set_target__11TCameraCtrlFii(int a0, int a1);
void set_target_coords__11TCameraCtrlFii(int a0, int a1);
M2C_UNK TCameraCtrl__sub_8006AF9C(void *, M2C_UNK);
int TCameraCtrl__sub_8006CCEC(void*);
int TCameraCtrl__sub_8006CD78(void*);
s32 get_state_flag__9TMainTaskFv();
s32 is_split_screen();

void reset_split_flag__11TCameraCtrlFPv(void *arg0) {
    if ((is_split_screen() == 0) && (get_state_flag__9TMainTaskFv() != 1)) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
            TCameraCtrl__sub_8006AF9C(arg0, 0);
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    }
}

    extern int lbl_805D34B8;

u8 * TCameraCtrl__sub_8006AF74(s32 arg0, s32 arg1) {
    *(M2CCopy_30 *)(arg0) = *(const M2CCopy_30 *)(arg1);
    return (u8 *)arg0;
}

int get_instance__11TCameraCtrlFv(void) {  return lbl_805D34B8; }

    extern int lbl_805D4E04;
int get_camera_id__11TCameraCtrlFv(void) {  return lbl_805D4E04; }

    extern short TCameraCtrl__data_805D2838;
    extern short TCameraCtrl__data_805D283A;
void set_target__11TCameraCtrlFii(int a0, int a1) { TCameraCtrl__data_805D2838 = a0; TCameraCtrl__data_805D283A = a1; }

    extern short TCameraCtrl__data_805D4DFA;
    extern short TCameraCtrl__data_805D4DFC;
void set_target_coords__11TCameraCtrlFii(int a0, int a1) { TCameraCtrl__data_805D4DFA = a0; TCameraCtrl__data_805D4DFC = a1; }

u16 TCameraCtrl__sub_8006B358(void* p) { return *(u16*)((char*)p + 0x20); }
s32 get_mode__11TCameraCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

    extern int lbl_805D5ED8;
int TCameraCtrl__sub_8006B368(void) {  return lbl_805D5ED8; }

int TCameraCtrl__sub_8006B370(void) { return 0; }

int reset_battle_camera__11TCameraCtrlFPv(void* p) { return TCameraCtrl__sub_8006CCEC(p); }
int TCameraCtrl__sub_8006B3B8(void* p) { return TCameraCtrl__sub_8006CD78(p); }

}
