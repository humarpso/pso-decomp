#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 load_file__8TGStreamFi(s32 arg0);

s32 TQuestVmDownLoadServer__sub_8007EBFC(s32);
M2C_UNK TGStream__sub_800FDCB4(M2C_UNK *, s32, s32);
s32 TGStream__sub_800FDD68(M2C_UNK *);
M2C_UNK TGStream__ct(M2C_UNK *, M2C_UNK);
M2C_UNK open__8TGStreamFPvPvi(M2C_UNK *, s32, M2C_UNK);

s32 load_file__8TGStreamFi(s32 arg0) {
    M2C_UNK sp8[0xC];
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    open__8TGStreamFPvPvi(sp8, arg0, 1);
    temp_r3_2 = TGStream__sub_800FDD68(sp8);
    if (temp_r3_2 <= 0) {
        TGStream__ct(sp8, -1);
        return 0;
    }
    temp_r31 = (s32) (temp_r3_2 + 0x7FF) / 2048;
    temp_r3 = TQuestVmDownLoadServer__sub_8007EBFC(temp_r31 << 0xB);
    if (temp_r3 == 0) {
        TGStream__ct(sp8, -1);
        return 0;
    }
    TGStream__sub_800FDCB4(sp8, temp_r31, temp_r3);
    TGStream__ct(sp8, -1);
    return temp_r3;
}

}
