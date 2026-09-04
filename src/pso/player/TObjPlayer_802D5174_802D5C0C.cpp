#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create_cane_effect_from_state__10TObjPlayerFPv(void *arg0);
void* init_state_445__10TObjPlayerFPv(void* a0);
void set_radar_marker_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1);
void update_swim_flag__10TObjPlayerFPv(void *arg0);
s32 TObjPlayer__sub_8011F63C();
M2C_UNK TObjPlayer__sub_80120304(M2C_UNK *, void *);
int TObjPlayer__sub_80120D50(void);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, M2C_UNK *);
M2C_UNK create_item_eff_cane__10TObjPlayerFiUiii(s32, void *, M2C_UNK, s32);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);

void set_radar_marker_params__10TObjPlayerFPvPv(u8 *arg0, u8 *arg1) {
    M2C_UNK sp8;

    M2C_FIELD(arg1, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x200);
    M2C_FIELD(arg1, s32 *, 0x58) = 0xC000;
    M2C_FIELD(arg1, s32 *, 0x40) = (s32) (M2C_FIELD(arg1, s32 *, 0x40) | 2);
    TObjPlayer__sub_80120304(&sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1 + 0x60, &sp8);
    M2C_FIELD(arg1, s32 *, 0x74) = (s32) M2C_FIELD(arg0, s32 *, 0x208);
    M2C_FIELD(arg1, s32 *, 0x70) = (s32) M2C_FIELD(arg0, s32 *, 0x204);
}

void update_swim_flag__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 2) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) | 1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) & 0xFFFFFFFE);
}

extern s32 tl_05;

void create_cane_effect_from_state__10TObjPlayerFPv(void *arg0) {
    if (TObjPlayer__sub_8011F63C() == 0) {
        create_item_eff_cane__10TObjPlayerFiUiii(tl_05, arg0, -1, M2C_FIELD(arg0, s32 *, 0x1FC));
    }
}

    extern unsigned char TObjPlayer__sub_8032E648[];
    extern unsigned char create_network_object__10TObjPlayerFiPvi[];
    extern unsigned char lbl_804E23F0[];
    extern const float lbl_805DE7A0;
void* init_state_445__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E23F0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)3); *(int*)((char*)a0 + 0x1f8) = 0; *(int*)((char*)a0 + 0x1fc) = 445; *(int*)((char*)a0 + 0x204) = (int)TObjPlayer__sub_8032E648; *(int*)((char*)a0 + 0x208) = (int)create_network_object__10TObjPlayerFiPvi; *(float*)((char*)a0 + 0x200) = lbl_805DE7A0; return a0; }

}
