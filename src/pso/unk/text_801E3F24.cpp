#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCMHairMenu__sub_801E3F54(void* p, void* q);
int TObjPlayer__sub_801E3F24(void);
int TObjPlayer__sub_801E3F30(void);
int fn_801E3F44(void);
void handle_6x02(void);
void handle_6x03(void);
void handle_6x04_legacy_activate_switch_by_token(void *arg0);
void handle_6x9E_player_camera_shutter_sound(void);
M2C_UNK TObjDoorKey__sub_8018FAEC(u16, u16);
void TObjEneRe4Sorcerer__sub_801E3F14(void);
void TObjEneRe4Sorcerer__sub_801E3F18(void);
void TObjEneRe4Sorcerer__sub_801E3F1C(void);
void TObjEneRe4Sorcerer__sub_801E3F20(void);
M2C_UNK bswap_switch_activate_token__6TLobbyFPv();

int TObjPlayer__sub_801E3F24(void) { return 0; }
int TObjPlayer__sub_801E3F30(void) { return 0; }
int fn_801E3F44(void) { return 0; }

void TObjCMHairMenu__sub_801E3F54(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); }

void handle_6x9E_player_camera_shutter_sound(void) {

}

void handle_6x04_legacy_activate_switch_by_token(void *arg0) {
    bswap_switch_activate_token__6TLobbyFPv();
    TObjDoorKey__sub_8018FAEC(M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, u16 *, 4));
}

void handle_6x03(void) {  }
void handle_6x02(void) {  }

}
