#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0);
M2C_UNK TBoss4DarkFalz__sub_8004BA70();
M2C_UNK TBoss4DarkFalz__sub_8004D8C8(void *, void *, void *, void *);
M2C_UNK create__11TObjDFDemo5FPvPvPv(void *, void *, s32);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK TLobby__sub_8022743C();
M2C_UNK check_ready__12TBoss4ThanksFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

M2C_UNK obj_setArrS16_FC(void *, s32, u16);
extern M2C_UNK lbl_80485454[];
extern u8 *TBoss4DarkFalz__data_805D4D64;

void begin_defeat_sequence__14TBoss4DarkFalzFPv(u8 *arg0) {
    u16 sp8[4];
    s32 var_r29;

    TBoss4DarkFalz__sub_8004BA70();
    TLobby__sub_8022743C();
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x37);
    check_ready__12TBoss4ThanksFv();
    if ((void *) TBoss4DarkFalz__data_805D4D64 != NULL) {
        create__11TObjDFDemo5FPvPvPv(arg0, TBoss4DarkFalz__data_805D4D64 + 0x38, M2C_FIELD(TBoss4DarkFalz__data_805D4D64, s32 *, 0x60));
    } else {
        create__11TObjDFDemo5FPvPvPv(arg0, lbl_80485454, 0);
    }
    if ((void *) TBoss4DarkFalz__data_805D4D64 != NULL) {
        TBoss4DarkFalz__sub_8004D8C8(TBoss4DarkFalz__data_805D4D64, arg0 + 0x2D6, arg0 + 0x2D4, sp8);
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
