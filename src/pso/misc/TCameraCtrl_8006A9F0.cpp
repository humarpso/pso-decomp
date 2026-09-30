#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ctl_8006AA90 {
    u8 pad[0x18];
    virtual ~Ctl_8006AA90();
};

extern "C" {
void __dt__7TObjectFv(void *, s32);
void __dl__7TObjectFPv(void *);
extern Ctl_8006AA90 *camera_controller_registry[];
extern u8 lbl_80488AC0[];
extern M2C_UNK TCameraCtrl__data_804FF628[];
extern s32 lbl_805D4DF0;
Ctl_8006AA90 *TCameraCtrl__sub_8006AA90(Ctl_8006AA90 *self, s16 arg1);
}

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
Ctl_8006AA90 *TCameraCtrl__sub_8006AA90(Ctl_8006AA90 *self, s16 arg1) {
    s32 i;
    if (self != NULL) {
        *(u8 **)((u8 *)self + 0x18) = lbl_80488AC0;
        lbl_805D4DF0 = 0;
        for (i = 0; i < 13; i++) {
            if (camera_controller_registry[i] != NULL) {
                delete camera_controller_registry[i];
                camera_controller_registry[i] = NULL;
            }
        }
        ((s32 *)&TCameraCtrl__data_804FF628)[1] = 0;
        __dt__7TObjectFv(self, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

}
