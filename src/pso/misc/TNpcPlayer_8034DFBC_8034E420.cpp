#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8034E440 { char pad[0x18]; };
struct VObj_8034E440 : Base_8034E440 {
    virtual void m0(int);
};

struct VBase_18_dac7f3 { char pad[0x18]; };

struct VObj_18_dac7f3 : VBase_18_dac7f3 {
    virtual M2C_UNK m0(M2C_UNK);
};

extern "C" {
void send_item_pickup_request__10TObjPlayerFi(s32);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);
void TNpcPlayer__sub_8034E4B0(u16 arg0);
}

extern "C" {

void TNpcPlayer__sub_8034E420(void);
void TNpcPlayer__sub_8034E430(void);
void enable_all_battle_ctrl__10TNpcPlayerFv(void);
void *TPlayerBattleCtrl4P__sub_801BA74C(s32);

    extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034E420(void) { lbl_805D6EA0 = (lbl_805D6EA0 & 0xfffffffd); }

    extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034E430(void) { lbl_805D6EA0 = (lbl_805D6EA0 | 0x2); }

s32 obj_isState3_324();

void enable_all_battle_ctrl__10TNpcPlayerFv(void) {
    s32 var_r31;
    void *temp_r3;

    var_r31 = 0;
    do {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
        if ((temp_r3 != NULL) && (obj_isState3_324() != 0) && (temp_r3 != NULL)) {
            ((VObj_8034E440*)temp_r3)->m0(1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}
void TNpcPlayer__sub_8034E4B0(u16 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)TPlayerBattleCtrl4P__sub_801BA74C((s32)((void *) (arg0))));
    if (temp_r3 != 0) {
        send_item_pickup_request__10TObjPlayerFi(temp_r3);
        if ((u32) temp_r3 != 0U) {
            ((VObj_18_dac7f3 *)(temp_r3))->m0(1);
        }
    }
}

}
