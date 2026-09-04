#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_event_unlocks__12TODoorVoShipFv(void);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);

void update_event_unlocks__12TODoorVoShipFv(void) {
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x64);
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x66);
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x6A);
    if ((TODoorVoShip__sub_801F44BC(0x65) != 0) && (TODoorVoShip__sub_801F44BC(0x67) != 0) && (TODoorVoShip__sub_801F44BC(0x6B) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x6C);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x6E);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x70);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x74);
    }
    if ((TODoorVoShip__sub_801F44BC(0x65) != 0) && (TODoorVoShip__sub_801F44BC(0x67) != 0) && (TODoorVoShip__sub_801F44BC(0x6B) != 0) && (TODoorVoShip__sub_801F44BC(0x18) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x68);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x76);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x78);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x7E);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x84);
    }
    if ((TODoorVoShip__sub_801F44BC(0x77) != 0) && (TODoorVoShip__sub_801F44BC(0x79) != 0) && (TODoorVoShip__sub_801F44BC(0x7F) != 0) && (TODoorVoShip__sub_801F44BC(0x85) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x7A);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x80);
    }
    if ((TODoorVoShip__sub_801F44BC(0x65) != 0) && (TODoorVoShip__sub_801F44BC(0x67) != 0) && (TODoorVoShip__sub_801F44BC(0x6B) != 0) && (TODoorVoShip__sub_801F44BC(0x21) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x82);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x86);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x8A);
    }
    if ((TODoorVoShip__sub_801F44BC(0x65) != 0) && (TODoorVoShip__sub_801F44BC(0x67) != 0) && (TODoorVoShip__sub_801F44BC(0x6B) != 0) && (TODoorVoShip__sub_801F44BC(0x30) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x92);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x88);
    }
    if (TODoorVoShip__sub_801F44BC(0x71) != 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x72);
    }
    if (TODoorVoShip__sub_801F44BC(0x7B) != 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x7C);
    }
    if ((TODoorVoShip__sub_801F44BC(0x8B) != 0) && (TODoorVoShip__sub_801F44BC(0x7F) != 0) && (TODoorVoShip__sub_801F44BC(0x21) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x8C);
    }
    if ((TODoorVoShip__sub_801F44BC(0x7F) != 0) && (TODoorVoShip__sub_801F44BC(0x30) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x90);
    }
    if ((TODoorVoShip__sub_801F44BC(0x8D) != 0) && (TODoorVoShip__sub_801F44BC(0x30) != 0) && (TODoorVoShip__sub_801F44BC(0x91) != 0)) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x8E);
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x94);
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(-1);
    if (TODoorVoShip__sub_801F44BC(0x95) != 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x9F);
    }
    if (TODoorVoShip__sub_801F44BC(0xA1) != 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0xA2);
    }
    if (TODoorVoShip__sub_801F44BC(0xA3) != 0) {
        dispatch_by_main_phase__14TBoss4DarkFalzFUs(0xA4);
    }
}

}
