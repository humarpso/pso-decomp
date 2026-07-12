#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_camera_mode__10TObjPlayerFi(s32 arg0);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 TQuestBgmCtrl__sub_8017E8F8();
M2C_UNK TObjBgmColCtrl__sub_802274B8(s32);

extern M2C_UNK lbl_804B5780[];
extern s32 lbl_805D5B00;

void set_camera_mode__10TObjPlayerFi(s32 arg0) {
    if ((TQuestBgmCtrl__sub_8017E8F8() == 0) && (is_not_split_screen__13TRaderMapCoreFv() != 1) && (arg0 != (s32) lbl_805D5B00)) {
        lbl_805D5B00 = arg0;
        TObjBgmColCtrl__sub_802274B8(lbl_804B5780[arg0]);
    }
}

}
