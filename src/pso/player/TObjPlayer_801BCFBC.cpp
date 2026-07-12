#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_action_animation__10TObjPlayerFPv(u8 *arg0);
s32 TFontSmallLobby__sub_801AFEE0();
s16 TObjPlayer__sub_801BE40C(void *);
M2C_UNK TObjPlayer__sub_801BF9E8(void *, f32);
s32 TPlyPhotonChair__sub_801BEC44(void *);
s32 TObjPlayer__sub_8001BEF8(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E204(void *, M2C_UNK);
s32 TObjPlayer__sub_801AFF0C(void *);
M2C_UNK TObjPlayer__sub_801C65A4(void *);
M2C_UNK TObjPlayer__sub_801CA35C(void *);
M2C_UNK TObjPlayer__sub_801D0888(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, M2C_UNK, M2C_UNK);

s32 obj_isState2_324();
s32 obj_testFlags30(void *, M2C_UNK);
extern const f32 TObjPlayer__data_805DC294;

void update_action_animation__10TObjPlayerFPv(u8 *arg0) {
    if (obj_isState2_324() == 0) {
        TObjPlayer__sub_801D0888(arg0);
        return;
    }
    if (TObjPlayer__sub_801AFF0C(arg0) != 0) {
        TObjPlayer__sub_8011E204(arg0, 4);
        if (obj_testFlags30(arg0, 0x800) != 0) {
            TObjPlayer__sub_801D0BC0(arg0, 0xF, 0);
            if (TObjPlayer__sub_8001BEF8(arg0 + 0x858, 1) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = TObjPlayer__sub_801BE40C(arg0);
            } else {
                TObjPlayer__sub_801CA35C(arg0);
            }
            TObjPlayer__sub_801BF9E8(arg0 + 0x5FC, TObjPlayer__data_805DC294);
            TObjPlayer__sub_801C65A4(arg0);
            return;
        }
        if ((TFontSmallLobby__sub_801AFEE0() != 0) && (TPlyPhotonChair__sub_801BEC44(arg0) != 0)) {
            TObjPlayer__sub_801D0BC0(arg0, 0x18, 0);
            return;
        }
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}

}
