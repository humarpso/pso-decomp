#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_turn_input__10TObjPlayerFPv(void *arg0);
void clamp_angles__10TObjPlayerFPv(void* p);
void reset_aim_angles__10TObjPlayerFPv(void* p);
M2C_UNK TObjBoss2Tunnel__sub_803D929C(M2C_UNK, s32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
int TObjPlayer__sub_80115BC0(void*, void*, void*);
s32 TObjPlayer__sub_80121200();

void handle_turn_input__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_80121200();
    switch (temp_r3) {
    case 2:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1F8));
        return;
    case 3:
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x1FC));
        return;
    case 5:
        TObjBoss2Tunnel__sub_803D929C(0, M2C_FIELD(arg0, s32 *, 0x200));
        return;
    case 4:
        TObjBoss2Tunnel__sub_803D929C(0, -M2C_FIELD(arg0, s32 *, 0x200));
        return;
    }
}

void clamp_angles__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)1820, (void*)7281); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)-1820, (void*)-5461); TObjPlayer__sub_80115BC0((char*)p + 0x200, (void*)1820, (void*)9102); }

void reset_aim_angles__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80115BC0((char*)p + 0x1f8, (void*)-3640, (void*)0); TObjPlayer__sub_80115BC0((char*)p + 0x1fc, (void*)2730, (void*)0); TObjPlayer__sub_80115BC0((char*)p + 0x200, (void*)-1820, (void*)0); }

}
