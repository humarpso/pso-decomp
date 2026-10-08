#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8027FCE4_lbl_804D1AD0 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
s32 get_camera_id__11TCameraCtrlFv();
s32 __nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 set_position_xy(int, f32, f32);
s32 create_status_category_menu(void *);
s32 fn_8027FD88(int, f32, f32);
s32 TWindowSubStatusDisp__ct(int, int);
extern RecoveredGlobal_8027FCE4_lbl_804D1AD0 lbl_804D1AD0;
extern const f32 lbl_805DD6DC;
u8 *construct_status_category_window(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8027FCE4_lbl_804D1AD0_size[sizeof(RecoveredGlobal_8027FCE4_lbl_804D1AD0) == 0x18 ? 1 : -1];
u8 *construct_status_category_window(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804D1AD0.value;
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = create_status_category_menu((void *) (arg0));
    temp_r3 = __nw__7TObjectFUl((int) (0x74));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowSubStatusDisp__ct((int) (temp_r3), (int) (M2C_FIELD(arg0, s32 *, 0x1C)));
    }
    M2C_FIELD(arg0, s32 *, 0x28) = var_r0;
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        set_position_xy((int) (M2C_FIELD(arg0, s32 *, 0x24)), (f32) (lbl_805DD6DC), (f32) (lbl_805DD6DC));
        fn_8027FD88((int) (M2C_FIELD(arg0, s32 *, 0x28)), (f32) (lbl_805DD6DC), (f32) (lbl_805DD6DC));
    }
    return arg0;
}

}
