#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
M2C_UNK TObjPlayer__sub_802D5478(void *, void *);
void TObjPlayer__sub_802D551C(M2C_UNK arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_802D5478(void *, void *);
M2C_UNK TObjPlayer__sub_802D5B78(void *, void *);
void TObjPlayer__sub_802D5558(M2C_UNK arg0, s32 arg1, s32 arg2);
}

extern "C" {

void* init_needle_effect__10TObjPlayerFPv(void* a0);
void set_radar_marker_flag__10TObjPlayerFPvPv(void *arg0, void *arg1);
int init_state_445__10TObjPlayerFPv(void);
M2C_UNK set_radar_marker_params__10TObjPlayerFPvPv();

void set_radar_marker_flag__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    set_radar_marker_params__10TObjPlayerFPvPv();
    M2C_FIELD(arg1, s32 *, 0x50) = 0x8000;
}

    extern unsigned char fn_80109974[];
    extern unsigned char create_needle_effect[];
    extern unsigned char lbl_804E20FC[];
    extern const float lbl_805DE78C;
void* init_needle_effect__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E20FC; *(float*)((char*)a0 + 0x200) = lbl_805DE78C; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; *(int*)((char*)a0 + 0x208) = (int)create_needle_effect; return a0; }
void TObjPlayer__sub_802D551C(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK sp8;
    VecCopy__FP3VecPC3Vec((void *) (&sp8));
    TObjPlayer__sub_802D5478((void *) (&sp8), (void *) (arg2));
}
void TObjPlayer__sub_802D5558(M2C_UNK arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp8;
    TObjPlayer__sub_802D5B78((void *) (arg1), (void *) (&sp8));
    TObjPlayer__sub_802D5478((void *) (&sp8), (void *) (arg2));
}

}
