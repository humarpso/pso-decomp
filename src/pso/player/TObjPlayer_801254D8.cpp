#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_fade_timer__10TObjPlayerFPv(void *arg0);
s32 fn_802E4748();
M2C_UNK TItemAttackCol__sub_802E4918(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern f32 lbl_805DAD50;

void update_fade_timer__10TObjPlayerFPv(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;

    if (fn_802E4748() != 0) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x40);
        if (temp_f1 < M2C_FIELD(arg0, f32 *, 0xC4)) {
            M2C_FIELD(arg0, f32 *, 0x40) = (f32) (temp_f1 + lbl_805DAD50);
            temp_f1_2 = M2C_FIELD(arg0, f32 *, 0xC4);
            if (temp_f1_2 < M2C_FIELD(arg0, f32 *, 0x40)) {
                M2C_FIELD(arg0, f32 *, 0x40) = temp_f1_2;
            }
        } else {
            queue_destruction__7TObjectFv(arg0);
        }
        TItemAttackCol__sub_802E4918(arg0);
    }
}

}
