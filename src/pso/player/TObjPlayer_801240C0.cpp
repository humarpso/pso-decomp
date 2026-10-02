#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_camera_target__10TObjPlayerFPv(void *arg0);
void *TObjPlayer__sub_8012417C(void *arg0, s16 arg1);
s32 get_flag_40__8TItemMagFPv(s32);
s32 find_item_by_id(s32);
u32 get_item_ctrl__10TObjPlayerFv();
s8 TObjPlayer__sub_80102C30();
s32 draw_icon__10TObjPlayerFPvii(s32, s32, M2C_UNK *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK copy_position__15TEffStarLight2DFPv(u32, M2C_UNK *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK queue_target_destruction__10TObjCameraFPv(u32);

void update_item_camera_target__10TObjPlayerFPv(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != get_item_ctrl__10TObjPlayerFv()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        temp_r3 = find_item_by_id(M2C_FIELD(arg0, s32 *, 0x1C));
        if ((temp_r3 != 0) && (TObjPlayer__sub_80102C30() == 2) && (draw_icon__10TObjPlayerFPvii(temp_r3, M2C_FIELD(arg0, s32 *, 0x20), &sp8) != 0)) {
            if (get_flag_40__8TItemMagFPv(temp_r3) == 0) {
                copy_position__15TEffStarLight2DFPv(M2C_FIELD(arg0, u32 *, 0x24), &sp8);
                return;
            }
            queue_target_destruction__10TObjCameraFPv(M2C_FIELD(arg0, u32 *, 0x24));
            return;
        }
    }
    queue_destruction__7TObjectFv(arg0);
}

extern M2C_UNK lbl_804A2018[];

void *TObjPlayer__sub_8012417C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A2018;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
