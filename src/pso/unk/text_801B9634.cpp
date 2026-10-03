#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Cmd_801B9634 { u8 hdr[2]; s16 client; s32 val; } Cmd_801B9634;

extern "C" {
s32 obj_isState2_324(u32);
s16 obj_getField1c(u32);
s32 get_item_field_6__10TObjPlayerFPv(void *);
s32 get_field_d8__10TObjPlayerFPv(s32);
s32 get_item_info__10TObjPlayerFiiPv(s32, u32, M2C_UNK);
M2C_UNK bswap_body_dwords4_and_send__10TObjPlayerFPv(Cmd_801B9634 *);
M2C_UNK init_cmd_6x26__10TObjPlayerFPv(Cmd_801B9634 *);
void TObjPlayer__sub_801B9634(u32 arg0);
}

extern "C" {

void TObjPlayer__sub_801B9634(u32 arg0) {
    Cmd_801B9634 cmd;
    s32 item;
    item = get_item_field_6__10TObjPlayerFPv((void *)arg0);
    if ((item != 0) && (get_item_info__10TObjPlayerFiiPv(item, arg0, 0) == 0) && ((arg0 == 0U) || (obj_isState2_324(arg0) == 0))) {
        init_cmd_6x26__10TObjPlayerFPv(&cmd);
        cmd.client = obj_getField1c(arg0);
        cmd.val = get_field_d8__10TObjPlayerFPv(item);
        bswap_body_dwords4_and_send__10TObjPlayerFPv(&cmd);
    }
}

}
