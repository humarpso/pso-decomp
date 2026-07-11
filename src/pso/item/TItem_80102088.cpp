#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2);
void send_field_state__5TItemFisi(s32 arg0, s16 arg1, s32 arg2);
void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2);
M2C_UNK set_mode__5TItemFPvc(s32, M2C_UNK);
M2C_UNK TItem__sub_80101FEC(void *, s32, s32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(s32, M2C_UNK);
u32 TObjPlayer__sub_801B8E68(u32, s32);
s32 fn_800196EC();
M2C_UNK fn_80087350(s32, M2C_UNK);
s32 fn_80099EF8();
M2C_UNK fn_8011AA44(s32, s32);
s32 fn_8011AF58(s32);
M2C_UNK fn_8020C5E0(s32);

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = fn_8011AF58(arg1);
    }
    TItem__sub_80101FEC(arg0, arg1, arg2);
}

void send_field_state__5TItemFisi(s32 arg0, s16 arg1, s32 arg2) {
    if (arg1 == fn_800196EC()) {
        fn_80087350(arg0 + 0x38, 0x9B);
        send_field_state_if_active__10TObjPlayerFii(arg2, 0x52802);
    }
}

void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2) {
    fn_8011AA44(arg1, fn_80099EF8());
    if ((arg2 != 0U) && (TObjPlayer__sub_801B8E68(arg2, arg0) != 0U)) {
        set_mode__5TItemFPvc(arg0, 1);
        fn_8020C5E0(arg0);
    }
}

}
