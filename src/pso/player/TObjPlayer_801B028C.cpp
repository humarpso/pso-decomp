#include "types.h"

extern "C" {

void apply_camera_shake__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TObjPlayer__sub_80019248(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 TOMineTrap__sub_801D6A44(s32, s32, s32);

s32 obj_testFlags30(s32, s32);
void handle_6x8E(void);

void apply_camera_shake__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    if ((is_technique_ready__8TTecCtrlFv() != 0) && (obj_testFlags30(arg1, 0x10000000) == 0) && (TObjPlayer__sub_80019248(arg0) != 0)) {
        TOMineTrap__sub_801D6A44(arg0 + 0x78C, arg1, arg2);
    }
}
void handle_6x8E(void) {  }

}
