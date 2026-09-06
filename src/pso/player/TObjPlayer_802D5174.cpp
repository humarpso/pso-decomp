#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TObjPlayer__sub_801012DC(void *, s16);
M2C_UNK TObjPlayer__sub_802D577C(void *);
void TObjPlayer__sub_802D5894(void *arg0);
M2C_UNK spawn_item__10TObjPlayerFi(void *);
void TObjPlayer__sub_802D5628(M2C_UNK arg0, s32 arg1);
}

extern "C" {

void *enter_state_341__10TObjPlayerFPv(void *arg0);
void set_radar_marker_pos__10TObjPlayerFiPv(int a0, void* a1);
int set_radar_marker_params__10TObjPlayerFPvPv(void);
void init_state_445__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_804E2000[];
extern M2C_UNK TObjPlayer__sub_802D5558[];
extern M2C_UNK TObjPlayer__sub_802D551C[];

void *enter_state_341__10TObjPlayerFPv(void *arg0) {
    init_state_445__10TObjPlayerFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E2000;
    M2C_FIELD(arg0, u32 *, 0x1FC) = 341;
    M2C_FIELD(arg0, M2C_UNK **, 0x208) = TObjPlayer__sub_802D5558;
    M2C_FIELD(arg0, M2C_UNK **, 0x204) = TObjPlayer__sub_802D551C;
    return arg0;
}

    extern const float lbl_805DE790;
void set_radar_marker_pos__10TObjPlayerFiPv(int a0, void* a1) { set_radar_marker_params__10TObjPlayerFPvPv(); *(float*)((char*)a1 + 0x38) = lbl_805DE790; }

void TObjPlayer__sub_802D5628(M2C_UNK arg0, s32 arg1) {
    spawn_item__10TObjPlayerFi((void *) (arg1));
}

void TObjPlayer__sub_802D5894(void *arg0) {
    s16 temp_r4;
    s16 temp_r4_2;
    temp_r4 = M2C_FIELD(arg0, s16 *, 0x248);
    temp_r4 += 1;
    M2C_FIELD(arg0, s16 *, 0x248) = temp_r4;
    if ((s16) temp_r4 == 0x96) {
        temp_r4_2 = M2C_FIELD(arg0, s16 *, 0x24A);
        if (temp_r4_2 < 5) {
            M2C_FIELD(arg0, s16 *, 0x24A) = (s16) (temp_r4_2 + 1);
            TObjPlayer__sub_801012DC((void *)(arg0), M2C_FIELD(arg0, s16 *, 0x24A));
        }
        M2C_FIELD(arg0, s16 *, 0x248) = 0;
    }
    TObjPlayer__sub_802D577C(arg0);
}

}
