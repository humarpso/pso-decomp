#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void setup_radar_marker__10TObjPlayerFPvPv(void *arg0, void *arg1);
void* setup_state__10TObjPlayerFPv(void* a0);
M2C_UNK drain_owner_hp_fraction__10TObjPlayerFPvf(void *, f32);
int init_state_445__10TObjPlayerFPv(void);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
M2C_UNK set_radar_marker_params__10TObjPlayerFPvPv();
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

extern const f32 lbl_805DE788;
extern const f32 lbl_805DE78C;

void setup_radar_marker__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    set_radar_marker_params__10TObjPlayerFPvPv();
    if (is_mode_two_and_ready__10TObjPlayerFPv(arg0) != 0) {
        drain_owner_hp_fraction__10TObjPlayerFPvf(arg0, lbl_805DE788);
        M2C_FIELD(arg1, s32 *, 0x10) = 0xA;
        M2C_FIELD(arg1, s32 *, 0x44) = (s32) M2C_FIELD(arg0, s32 *, 0x188);
        M2C_FIELD(arg1, f32 *, 0x4C) = lbl_805DE78C;
    }
}

    extern unsigned char fn_80109974[];
    extern unsigned char TObjPlayer__sub_802D52E8[];
    extern unsigned char lbl_804E1CA8[];
    extern const float lbl_805DE790;
void* setup_state__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1CA8; *(float*)((char*)a0 + 0x200) = lbl_805DE790; set_status_flags__10TObjPlayerFPvUi(a0, (void*)32); *(int*)((char*)a0 + 0x208) = (int)TObjPlayer__sub_802D52E8; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; return a0; }

}
