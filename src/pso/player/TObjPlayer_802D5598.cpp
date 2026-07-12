#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *enter_state_341__10TObjPlayerFPv(void *arg0);
void TObjPlayer__sub_802D55F4(int a0, void* a1);
int set_radar_marker_params__10TObjPlayerFPvPv(void);
void TObjPlayer__sub_802D5ECC(void *);

extern M2C_UNK lbl_804E2000[];
extern M2C_UNK TObjPlayer__sub_802D5558[];
extern M2C_UNK TObjPlayer__sub_802D551C[];

void *enter_state_341__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_802D5ECC(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E2000;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 341;
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = TObjPlayer__sub_802D5558;
    M2C_FIELD(arg0, M2C_UNK **, 0x204) = TObjPlayer__sub_802D551C;
    return arg0;
}

    extern const float lbl_805DE790;
void TObjPlayer__sub_802D55F4(int a0, void* a1) { set_radar_marker_params__10TObjPlayerFPvPv(); *(float*)((char*)a1 + 0x38) = lbl_805DE790; }

}
