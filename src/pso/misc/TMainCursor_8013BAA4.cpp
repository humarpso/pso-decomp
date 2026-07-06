#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__11TMainCursorFv(u8 *arg0);
s32 TMainCursor__sub_8013E4D0(void *);
s32 TMainCursor__sub_8013E4F8(void *);
s32 TMainCursor__sub_8013E520(void *);
f32 TMainCursor__sub_8013F178(void *);
M2C_UNK TMainCursor__sub_8013F180(void *);
M2C_UNK fn_8013B70C();
M2C_UNK fn_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern const f32 lbl_805DB0C0;
extern const f32 lbl_805DB0CC;
extern const f32 lbl_805DB0D0;

void run_task__11TMainCursorFv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != 2) {
        fn_8013B70C();
        if (TMainCursor__sub_8013E520(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) (M2C_FIELD(arg0, f32 *, 0x30) - lbl_805DB0CC);
        if (!(M2C_FIELD(arg0, f32 *, 0x30) > M2C_FIELD(arg0, f32 *, 0x34))) {
            M2C_FIELD(arg0, f32 *, 0x30) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
            M2C_FIELD(arg0, s32 *, 0x1C) = 1;
            if (TMainCursor__sub_8013E4D0(arg0) == 0) {
                if (TMainCursor__sub_8013E4F8(arg0) != 0) {
                    fn_8022675C(0x3816, arg0 + 0x40, 0, 1);
                    return;
                }
                fn_8022675C(0x3111, arg0 + 0x40, 0, 1);
            }
        }
    case 1:
        return;
    case 2:
        if ((TMainCursor__sub_8013F178(arg0 + 0x4C) - lbl_805DB0D0) > lbl_805DB0C0) {
            TMainCursor__sub_8013F180(arg0 + 0x4C);
            return;
        }
        queue_destruction__7TObjectFv(arg0);
        break;
    }
}

}
