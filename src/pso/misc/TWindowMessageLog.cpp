#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8026A434 {
    f32 sp8;
    f32 spC;
};

struct Stack_8026A494 {
    f32 sp8;
    f32 spC;
};

extern "C" {
s32 clamp_list_scroll_offset(int, void *, void *, f32);
extern const f32 lbl_805DD240;
extern const f32 lbl_805DD244;
void clamp_scroll_offset__17TWindowMessageLogFPv(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void copy_position__11TWindowMenuFPvPv(void *, void *);
void clamp_scroll_offset__17TWindowMessageLogFPv(u8 *arg0);
extern const f32 lbl_805DD248;
extern const f32 lbl_805DD24C;
void update_scroll_position__17TWindowMessageLogFPv(u8 *arg0);
}

extern "C" {

s32 get_active_photon_object__17TWindowMessageLogFv(void);
s32 is_locally_controlled__10TObjPlayerFPv(s32);
s32 find_entity_by_id();
s32 obj_isState2_324();

s32 get_active_photon_object__17TWindowMessageLogFv(void) {
    s32 temp_r3;
    s32 var_r3;

    temp_r3 = find_entity_by_id();
    if (temp_r3 == 0) {
        return 0;
    }
    if ((obj_isState2_324() == 0) && (is_locally_controlled__10TObjPlayerFPv(temp_r3) == 0)) {
        return 0;
    }
    var_r3 = temp_r3 + 0x85C;
    if (var_r3 == 0) {
        var_r3 = 0;
    }
    return var_r3;
}
void clamp_scroll_offset__17TWindowMessageLogFPv(u8 *arg0) {
    Stack_8026A434 stack;
    f32 temp_f1;
    stack.sp8 = lbl_805DD240;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C);
    stack.spC = temp_f1 - lbl_805DD244;
    if (clamp_list_scroll_offset((int) (M2C_FIELD(arg0, s32 *, 0x90)), (void *) (arg0 + 0x68), (void *) (&stack.sp8), (f32) (temp_f1)) != 0) {
        M2C_FIELD(arg0, f32 *, 0x84) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    }
}
void update_scroll_position__17TWindowMessageLogFPv(u8 *arg0) {
    Stack_8026A494 stack;
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r4;
    s32 var_r30;
    temp_r4 = M2C_FIELD(arg0, s32 *, 0x88);
    var_r30 = temp_r4 - 1;
    if (var_r30 < 0) {
        var_r30 = M2C_FIELD(arg0, s32 *, 0x8C) - 1;
    }
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, temp_r4);
    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, var_r30);
    stack.sp8 = (M2C_FIELD(arg0, f32 *, 0x48) - lbl_805DD248) - lbl_805DD24C;
    stack.spC = (M2C_FIELD(temp_r3, f32 *, 0xC) + M2C_FIELD(temp_r3, f32 *, 0x14)) - M2C_FIELD(temp_r31, f32 *, 0xC);
    copy_position__11TWindowMenuFPvPv(M2C_FIELD(arg0, u8 **, 0x90), &stack.sp8);
    clamp_scroll_offset__17TWindowMessageLogFPv((u8 *)((void *) (arg0)));
}

}
