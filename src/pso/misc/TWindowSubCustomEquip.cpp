#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__21TWindowSubCustomEquipFv(void *arg0, s16 arg1);
s32 calc_equip_index__21TWindowSubCustomEquipFPv(void *arg0);
void handle_cancel__21TWindowSubCustomEquipFPv(void *arg0);
void handle_decide__21TWindowSubCustomEquipFPv(void *arg0);
void reset_selection__21TWindowSubCustomEquipFPv(void* p);
void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
void update_rotate_anim__21TWindowSubCustomEquipFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
int TWindowSubCustomEquip__sub_8027654C(void*, void*);
int TWindowSubCustomEquip__sub_802766C8(void*, void*);
M2C_UNK TWindowSubCustomEquip__sub_80276A38(void *, s32, M2C_UNK);
void __dl__7TObjectFPv(void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 is_selected__21TWindowSubCustomEquipFPv();
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

extern const f32 lbl_805DD568;
extern const f32 lbl_805DD56C;

void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 8) - lbl_805DD568);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 0xC) - lbl_805DD56C);
}

void reset_selection__21TWindowSubCustomEquipFPv(void* p) { TWindowSubCustomEquip__sub_802766C8(p, (void*)9); TWindowSubCustomEquip__sub_802766C8(p, (void*)0); TWindowSubCustomEquip__sub_8027654C(p, (void*)9); }

void update_rotate_anim__21TWindowSubCustomEquipFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r4;

    var_r4 = 0xB200;
    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) > 0) {
        var_r4 = 0x13200;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x68);
    if (var_r4 != temp_r3) {
        if ((s32) (u16) (var_r4 - temp_r3) < 0xC00) {
            M2C_FIELD(arg0, s32 *, 0x68) = var_r4;
        } else {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r3 + 0xC00);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) & 0x8000) {
        M2C_FIELD(arg0, s8 *, 0x64) = 0;
        M2C_FIELD(arg0, s8 *, 0x65) = 1;
        TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68), 9);
        TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68) + 0x8000, 0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x64) = 1;
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
    TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68) + 0x8000, 9);
    TWindowSubCustomEquip__sub_80276A38(arg0, M2C_FIELD(arg0, s32 *, 0x68), 0);
}

void handle_cancel__21TWindowSubCustomEquipFPv(void *arg0) {
    if (is_selected__21TWindowSubCustomEquipFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void handle_decide__21TWindowSubCustomEquipFPv(void *arg0) {
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x6C), 2);
}

extern M2C_UNK __vt__21TWindowSubCustomEquip[];

void *__dt__21TWindowSubCustomEquipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TWindowSubCustomEquip;
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x6C), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 calc_equip_index__21TWindowSubCustomEquipFPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78) + (((s8) M2C_FIELD(arg0, u8 *, 0x70) + ((s8) M2C_FIELD(arg0, u8 *, 0x71) * 3)) * 4);
}

}
