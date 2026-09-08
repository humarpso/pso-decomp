#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_target_from_state__11TCameraCtrlFPv(void *arg0);
M2C_UNK TCameraCtrl__sub_8006A410(M2C_UNK, M2C_UNK);
M2C_UNK select_camera_controller(int);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);

extern M2C_UNK TCameraCtrl__data_804FF628[];
extern s32 lbl_805D53A0;

void update_target_from_state__11TCameraCtrlFPv(void *arg0) {
    if ((!(M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 4) && !(M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 8)) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x20) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x80) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x800)) {
        if (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 2) {
            select_camera_controller(M2C_FIELD(arg0, s32 *, 0x20) + 9);
            return;
        }
        if ((M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x20) || (M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) & 0x80)) {
            select_camera_controller(M2C_FIELD(TCameraCtrl__data_804FF628, u8 *, 1));
            u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
            if (temp != 0U) {
                TCameraCtrl__sub_8006A410(temp, 0);
            }
        }
    }
}

}
