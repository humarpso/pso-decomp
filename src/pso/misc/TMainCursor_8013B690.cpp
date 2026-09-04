#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_can_pickup__11TMainCursorFi(s32 arg0);
void run_task__11TMainCursorFv(u8 *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK TMainCursor__sub_8013B70C();
M2C_UNK TMainCursor__sub_8013F180(void *);
s32 TPhotonMylla__sub_80154CB4();
s32 can_pickup_item_by_id__10TObjPlayerFii(u32, s32);
u32 check_field_24__11TMainCursorFPv(s32);
s32 check_flag_1__11TMainCursorFPv(void *);
M2C_UNK get_id__11TMainCursorFPv(s32);
f32 get_pos__11TMainCursorFPv(void *);
s32 init_render_flags__11TMainCursorFPv(void *);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 update__11TMainCursorFPv(void *);

s32 check_can_pickup__11TMainCursorFi(s32 arg0) {
    s32 temp_r3;
    u32 temp_r3b;

    get_id__11TMainCursorFPv(arg0 + 0x60);
    temp_r3 = TPhotonMylla__sub_80154CB4();
    if ((temp_r3 != 0) && ((u32) (obj_testFlags30(temp_r3, 0x80000000) + 0x80000000) == 0U) && ((temp_r3b = check_field_24__11TMainCursorFPv(arg0)) != 0U) && (can_pickup_item_by_id__10TObjPlayerFii(temp_r3b, temp_r3) == 0)) {
        return 1;
    }
    return 0;
}

extern const f32 TMainCursor__data_805DB0C0;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0D0;

void run_task__11TMainCursorFv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 2) {
        TMainCursor__sub_8013B70C();
        if (check_flag_1__11TMainCursorFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - TMainCursor__data_805DB0CC);
        if (!(M2C_FIELD(arg0, f32 *, 0x30) > M2C_FIELD(arg0, f32 *, 0x34))) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            if (init_render_flags__11TMainCursorFPv(arg0) == 0) {
                if (update__11TMainCursorFPv(arg0) != 0) {
                    TBoss3Volopt__sub_8022675C(0x3816, arg0 + 0x40, 0, 1);
                    return;
                }
                TBoss3Volopt__sub_8022675C(0x3111, arg0 + 0x40, 0, 1);
            }
        }
    case 1:
        return;
    case 2:
        if ((get_pos__11TMainCursorFPv(arg0 + 0x4C) - lbl_805DB0D0) > TMainCursor__data_805DB0C0) {
            TMainCursor__sub_8013F180(arg0 + 0x4C);
            return;
        }
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
