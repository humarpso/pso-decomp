#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_isState2_324(u32);
s16 obj_getField1c(u32);
s32 fn_8001BEF8(s32, M2C_UNK);
s32 is_alive_and_ready__10TObjPlayerFi(u32);
M2C_UNK TObjPlayer__sub_801AF7E0(u32);
M2C_UNK fn_801B4430(u32);
M2C_UNK send_code_49_1__10TObjPlayerFi(u32);
M2C_UNK fn_801D17C0(M2C_UNK *);
M2C_UNK fn_801D17D4(M2C_UNK *);
M2C_UNK update_if_ready__15TFontSmallLobbyFPv(s32);

struct Local801C9D3C {
    s16 field0;
    s16 fieldA;
};

void fn_801C9D3C(u32 arg0) {
    struct Local801C9D3C sp8;

    if (fn_8001BEF8(arg0 + 0x858, 4) != 0) {
        send_code_49_1__10TObjPlayerFi(arg0);
        if (is_alive_and_ready__10TObjPlayerFi(arg0) != 0) {
            TObjPlayer__sub_801AF7E0(arg0);
        }
    } else {
        fn_801B4430(arg0);
    }
    update_if_ready__15TFontSmallLobbyFPv(arg0 + 0x4AC);
    if ((arg0 == 0U) || (obj_isState2_324(arg0) == 0)) {
        fn_801D17C0((M2C_UNK *)&sp8);
        sp8.fieldA = obj_getField1c(arg0);
        fn_801D17D4((M2C_UNK *)&sp8);
    }
}

}
