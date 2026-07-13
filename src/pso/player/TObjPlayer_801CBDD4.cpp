#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_photon_blast__10TObjPlayerFii(s32 arg0, s32 arg1);
void update_active_instance__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_801A8868(s32, s32);
s32 reset_volopt_state__10TObjPlayerFv();
s32 TObjPlayer__sub_801CBD98(s32);
M2C_UNK TObjPlayer__sub_80312C50(u32);
M2C_UNK TObjPlayer__sub_80312F0C(u32);
M2C_UNK TObjPlayer__sub_80312F5C(u32, s32, s32);

extern u32 lbl_805D5D68;

void apply_photon_blast__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if ((u32) lbl_805D5D68 != 0U) {
        TObjPlayer__sub_80312F5C(lbl_805D5D68, arg0, arg1);
    }
}

extern u32 lbl_805D5D68;

void update_active_instance__10TObjPlayerFi(s32 arg0) {
    if ((u32) lbl_805D5D68 != 0U) {
        if (reset_volopt_state__10TObjPlayerFv() == 0) {
            TObjPlayer__sub_80312F0C(lbl_805D5D68);
            return;
        }
        TObjPlayer__sub_80312C50(lbl_805D5D68);
        TObjPlayer__sub_801A8868(TObjPlayer__sub_801CBD98(0), arg0);
    }
}

}
