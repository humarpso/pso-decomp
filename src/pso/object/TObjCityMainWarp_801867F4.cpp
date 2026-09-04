#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCityMainWarp__sub_80186AB8(void);
void reset__16TObjCityMainWarpFv(void);
void set_active_bit__16TObjCityMainWarpFv(void);
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p);
void update_unlock_flags__16TObjCityMainWarpFv(void);
s32 TODoorVoShip__sub_801F44BC(M2C_UNK);
int TObjCityMainWarp__sub_80186634(void);
int TObjCityMainWarp__sub_801868A8(int);
s32 TObjCityMainWarp__sub_80186A3C();
s32 is_main_phase_15__9TObjEneDDFv();
s32 is_split_screen();

extern s32 TObjCityMainWarp__data_805D5B54;

void update_unlock_flags__16TObjCityMainWarpFv(void) {
    M2C_UNK var_r31;
    M2C_UNK var_r30;
    M2C_UNK var_r3;

    TObjCityMainWarp__data_805D5B54 |= 1;
    if ((is_main_phase_15__9TObjEneDDFv() != 0) || (is_split_screen() != 0)) {
        var_r3 = 0x4C;
        var_r31 = 0x4F;
        var_r30 = 0x52;
    } else {
        var_r3 = 0x4D;
        var_r31 = 0x50;
        var_r30 = 0x53;
    }
    if (TODoorVoShip__sub_801F44BC(var_r3) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 4;
    }
    if (TODoorVoShip__sub_801F44BC(var_r31) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x10;
    }
    if (TODoorVoShip__sub_801F44BC(var_r30) != 0) {
        TObjCityMainWarp__data_805D5B54 |= 0x200;
    }
}

extern s32 TObjCityMainWarp__data_805D5B50;

void set_active_bit__16TObjCityMainWarpFv(void) {
    s32 temp_r3;

    temp_r3 = TObjCityMainWarp__sub_80186A3C();
    if (temp_r3 >= 0) {
        TObjCityMainWarp__data_805D5B50 |= 1 << temp_r3;
    }
}

void TObjCityMainWarp__sub_80186AB8(void) {  }
void reset__16TObjCityMainWarpFv(void) { TObjCityMainWarp__sub_80186634(); TObjCityMainWarp__sub_801868A8(0); }
void set_flag70_bit10__16TObjCityMainWarpFPv(void* p) { *(u16*)((char*)p + 0x70) |= 0x10; }

}
