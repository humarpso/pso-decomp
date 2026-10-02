#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Slot_8022C5CC { s16 id; s16 pad; f32 amount; };

struct RecoveredGlobal_8022C680_lbl_80515FBC {
    M2C_UNK value;
    u8 remaining[0xBC];
};

extern "C" {
s32 set_slot__14TItemEquipBaseFiii(void *, void *, void *);
extern RecoveredGlobal_8022C680_lbl_80515FBC lbl_80515FBC;
void TItemEquipBase__sub_8022C680(s32 arg0, u16 arg1, s32 arg2);
}

extern "C" {

void TTecCtrl__sub_8022C444(void);
void TTecCtrl__sub_8022C448(void);
void TTecCtrl__sub_8022C44C(void);
s32 classify_distance_band__8TTecCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
f32 TTecCtrl__sub_8022C5CC(s32, u16);
f32 get_battle_value__10TObjPlayerFiii(void *, s32, s16);
void *TPlayerBattleCtrl4P__sub_801BA74C(u16);
extern const f32 lbl_805DC7D8;
M2C_UNK TTecCtrl__sub_8022DBC4();

void TTecCtrl__sub_8022C444(void) {  }
void TTecCtrl__sub_8022C448(void) {  }
void TTecCtrl__sub_8022C44C(void) {  }

extern f32 lbl_805DC7D0;
extern f32 lbl_805DC7D4;

s32 classify_distance_band__8TTecCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;

    TTecCtrl__sub_8022DBC4();
    if ((arg1 == 0) || (arg1 == 1)) {
        return 0;
    }
    temp_f1 = ((f32 (*)(s32, s32))TTecCtrl__sub_8022C5CC)(arg0, arg2);
    if (temp_f1 < lbl_805DC7D0) {
        return 1;
    }
    if (temp_f1 < lbl_805DC7D4) {
        return 2;
    }
    return 3;
}
f32 TTecCtrl__sub_8022C5CC(s32 technique, u16 actor) {
    f32 sum;
    void *player;
    s32 i;

    sum = lbl_805DC7D8;
    if (actor >= 4) {
        return sum;
    }
    for (i = 0; i < 6; i++) {
        if (technique == ((struct Slot_8022C5CC (*)[6])&lbl_80515FBC)[actor][i].id) {
            sum += ((struct Slot_8022C5CC (*)[6])&lbl_80515FBC)[actor][i].amount;
        }
    }
    player = ((void *(*)(s32))TPlayerBattleCtrl4P__sub_801BA74C)(actor);
    if (player != NULL) {
        sum += ((f32 (*)(void *, u16, s16))get_battle_value__10TObjPlayerFiii)(player, actor, technique);
    }
    return sum;
}
typedef char RecoveredGlobal_8022C680_lbl_80515FBC_size[sizeof(RecoveredGlobal_8022C680_lbl_80515FBC) == 0xC0 ? 1 : -1];
void TItemEquipBase__sub_8022C680(s32 arg0, u16 arg1, s32 arg2) {
    if (arg1 < 4U) {
        set_slot__14TItemEquipBaseFiii((void *) ((u8 *)&lbl_80515FBC.value + (arg1 * 0x30)), (void *) (arg2), (void *) (arg0));
    }
}

}
