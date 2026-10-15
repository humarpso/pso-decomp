#include "types.h"
#include "pso/TTecCtrl.h"

struct Slot_8022C5CC { s16 id; s16 pad; f32 amount; };

struct RecoveredGlobal_8022C680_lbl_80515FBC {
    s32 value;
    u8 remaining[0xBC];
};

extern "C" {
s32 set_slot__14TItemEquipBaseFll(void *, void *, void *);
extern RecoveredGlobal_8022C680_lbl_80515FBC lbl_80515FBC;
void TItemEquipBase__sub_8022C680(s32 arg0, u16 arg1, s32 arg2);
}

extern "C" {

void TTecCtrl__sub_8022C444(void);
void TTecCtrl__sub_8022C448(void);
void TTecCtrl__sub_8022C44C(void);
f32 calc_technique_boost(s32, u16);
f32 get_battle_value__10TObjPlayerFiii(void *, s32, s16);
void *get_player_by_client_id(u16);
extern const f32 lbl_805DC7D8;
s32 calc_technique_parameters();

void TTecCtrl__sub_8022C444(void) {  }
void TTecCtrl__sub_8022C448(void) {  }
void TTecCtrl__sub_8022C44C(void) {  }

extern f32 lbl_805DC7D0;
extern f32 lbl_805DC7D4;

s32 TTecCtrl::classify_distance_band(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;

    calc_technique_parameters();
    if ((arg1 == 0) || (arg1 == 1)) {
        return 0;
    }
    temp_f1 = ((f32 (*)(s32, s32))calc_technique_boost)(arg0, arg2);
    if (temp_f1 < lbl_805DC7D0) {
        return 1;
    }
    if (temp_f1 < lbl_805DC7D4) {
        return 2;
    }
    return 3;
}
f32 calc_technique_boost(s32 technique, u16 actor) {
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
    player = ((void *(*)(s32))get_player_by_client_id)(actor);
    if (player != NULL) {
        sum += ((f32 (*)(void *, u16, s16))get_battle_value__10TObjPlayerFiii)(player, actor, technique);
    }
    return sum;
}
typedef char RecoveredGlobal_8022C680_lbl_80515FBC_size[sizeof(RecoveredGlobal_8022C680_lbl_80515FBC) == 0xC0 ? 1 : -1];
void TItemEquipBase__sub_8022C680(s32 arg0, u16 arg1, s32 arg2) {
    if (arg1 < 4U) {
        set_slot__14TItemEquipBaseFll((void *) ((u8 *)&lbl_80515FBC.value + (arg1 * 0x30)), (void *) (arg2), (void *) (arg0));
    }
}

}
