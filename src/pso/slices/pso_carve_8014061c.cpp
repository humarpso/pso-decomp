#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_main_phase();
s32 is_split_screen();
s32 TCameraCtrl__sub_8006B368();
M2C_UNK TLobby__sub_8007B858();
s32 TLobby__sub_8007BB2C();
M2C_UNK TObjLight__sub_80133D78();
M2C_UNK TLobby__sub_801403B4(M2C_UNK);
M2C_UNK TBoss4DarkFalz__sub_801F4830(M2C_UNK);
M2C_UNK TOKeyMachine01__sub_802034A8();
M2C_UNK TLobby__sub_80226E44(M2C_UNK);
M2C_UNK TObjBgmColCtrl__sub_802274B8(M2C_UNK *);
M2C_UNK TLobby__sub_80227FB4();
extern M2C_UNK lbl_8043F1E8[];

s32 init_cave_b_stage(void) {
    TOKeyMachine01__sub_802034A8();
    TLobby__sub_80227FB4();
    if (TLobby__sub_8007BB2C() != 0) {
        return 0;
    }
    TObjLight__sub_80133D78();
    TLobby__sub_8007B858();
    TLobby__sub_801403B4(0);
    if (is_split_screen() != 0) {
        TObjBgmColCtrl__sub_802274B8(lbl_8043F1E8);
    } else {
        TLobby__sub_80226E44(1);
    }
    if ((get_main_phase() != 0xE) || (TCameraCtrl__sub_8006B368() == 0)) {
        TBoss4DarkFalz__sub_801F4830(0x1E);
    }
    return 1;
}

}
