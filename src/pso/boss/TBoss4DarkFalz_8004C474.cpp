#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0);
M2C_UNK TBoss4DarkFalz__sub_8004BA70();
M2C_UNK fn_8004D8C8(void *, void *, void *, void *);
M2C_UNK TObjDFDemo5__sub_8004FFF8(void *, void *, s32);
M2C_UNK TBoss4DarkFalz__sub_801F4830(M2C_UNK);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK TBoss4Thanks__sub_8035C98C();
M2C_UNK queue_destruction__7TObjectFv(void *);

M2C_UNK obj_setArrS16_FC(void *, s32, u16);
extern M2C_UNK lbl_80485454[];
extern u8 *TBoss4DarkFalz__data_805D4D64;

void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0) {
    u16 sp8[4];
    s32 var_r29;

    TBoss4DarkFalz__sub_8004BA70();
    TLobby__sub_8022743C();
    TBoss4DarkFalz__sub_801F4830(0x37);
    TBoss4Thanks__sub_8035C98C();
    if ((void *) TBoss4DarkFalz__data_805D4D64 != NULL) {
        TObjDFDemo5__sub_8004FFF8(arg0, TBoss4DarkFalz__data_805D4D64 + 0x38, M2C_FIELD(TBoss4DarkFalz__data_805D4D64, s32 *, 0x60));
    } else {
        TObjDFDemo5__sub_8004FFF8(arg0, lbl_80485454, 0);
    }
    if ((void *) TBoss4DarkFalz__data_805D4D64 != NULL) {
        fn_8004D8C8(TBoss4DarkFalz__data_805D4D64, arg0 + 0x2D6, arg0 + 0x2D4, sp8);
        queue_destruction__7TObjectFv(TBoss4DarkFalz__data_805D4D64);
        TBoss4DarkFalz__data_805D4D64 = NULL;
        var_r29 = 0;
        do {
            obj_setArrS16_FC(arg0, var_r29, sp8[var_r29]);
            var_r29 += 1;
        } while (var_r29 < 4);
    }
    M2C_FIELD(arg0, s32 *, 0x380) = 0x12E;
}

}
