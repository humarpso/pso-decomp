#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_anim_action__10TObjPlayerFPv(u8 *arg0);
M2C_UNK get_item_field_6__10TObjPlayerFPv();
M2C_UNK TObjPlayer__sub_801CEA08(void *);
M2C_UNK TObjPlayer__sub_801D2620(void *);
M2C_UNK TObjPlayer__sub_801D2CEC(void *);
M2C_UNK TObjPlayer__sub_801D2D94(void *);
M2C_UNK TObjPlayer__sub_8001BED8(s32, s32);
s32 TObjPlayer__sub_8001BEF8(s32, s32);
M2C_UNK TObjPlayer__sub_80124C78(void *);
s32 TObjPlayer__sub_80124C88(void *);
s16 get_handle_value__10TObjPlayerFPv(void *);
M2C_UNK apply_anim_action__10TObjPlayerFPvi(void *, void *);
M2C_UNK TObjPlayer__sub_801D9078(void *);
s32 objInBand__FP7GameObjf(void *);

void update_anim_action__10TObjPlayerFPv(u8 *arg0) {
    get_item_field_6__10TObjPlayerFPv();
    if (get_handle_value__10TObjPlayerFPv(arg0) != 8) {
        TObjPlayer__sub_801D9078(arg0);
        if (objInBand__FP7GameObjf(arg0) != 0) {
            TObjPlayer__sub_801CEA08(arg0);
            TObjPlayer__sub_801D2D94(arg0 + 0x7CC);
            apply_anim_action__10TObjPlayerFPvi(arg0 + 0x7CC, arg0);
        }
    } else {
        if (TObjPlayer__sub_8001BEF8(TObjPlayer__sub_801D2CEC(arg0 + 0x7CC), 8) == 0) {
            TObjPlayer__sub_801D9078(arg0);
            if (objInBand__FP7GameObjf(arg0) != 0) {
                TObjPlayer__sub_801CEA08(arg0);
                TObjPlayer__sub_80124C78(arg0 + 0x7CC);
                if (TObjPlayer__sub_80124C88(arg0 + 0x7CC) >= 3) {
                    TObjPlayer__sub_8001BED8(TObjPlayer__sub_801D2CEC(arg0 + 0x7CC), 8);
                    apply_anim_action__10TObjPlayerFPvi(arg0 + 0x7CC, arg0);
                    TObjPlayer__sub_801D2620(arg0);
                    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x10);
                }
            }
        }
    }
}

}
