#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8001CAD4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8001CAD4_lbl_804349FC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8001CAD4_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8001CAD4_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Vec_8001CBC4 { f32 x, y, z; };

struct Tbl_8001CBC4 { Vec_8001CBC4 base; Vec_8001CBC4 dir; };

struct Obj_8001CBC4 { u8 pad[0x44]; Vec_8001CBC4 pos; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 direction_to_rotation_xy(void *, void *, void *);
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix_from(void *);
s32 pop_matrices(int);
extern RecoveredGlobal_8001CAD4_lbl_804349FC lbl_804349FC;
extern RecoveredGlobal_8001CAD4_lbl_804FF5E8 lbl_804FF5E8;
extern RecoveredGlobal_8001CAD4_lbl_8058D490 lbl_8058D490;
void update_camera_facing_offset(u8 *arg0);
extern u32 camera_ctrl_instance;
extern RecoveredGlobal_8001CAD4_lbl_804FF5E8 lbl_804FF5E8;
extern const f32 lbl_805D7E90;
Vec_8001CBC4 calc_loading_cursor_pos(Obj_8001CBC4 *o);
}

extern "C" {

typedef char RecoveredGlobal_8001CAD4_lbl_804349FC_size[sizeof(RecoveredGlobal_8001CAD4_lbl_804349FC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8001CAD4_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8001CAD4_lbl_804FF5E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_8001CAD4_lbl_8058D490_size[sizeof(RecoveredGlobal_8001CAD4_lbl_8058D490) == 0x30 ? 1 : -1];
void update_camera_facing_offset(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8001CAD4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001CAD4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001CAD4, sp10) == 0x8) ? 1 : -1];
    Stack_8001CAD4 stack;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2C), (void *) (arg0 + 0x20));
        stack.sp8 = M2C_FIELD(&lbl_804349FC.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_804349FC.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_804349FC.value, s32 *, 8);
        M2C_FIELD(arg0, f32 *, 0x50) = (f32) -M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC);
        M2C_FIELD(arg0, f32 *, 0x54) = (f32) -M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10);
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) -M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14);
        direction_to_rotation_xy((void *) (arg0 + 0x50), (void *) (&stack.sp8), (void *) (&stack.spC));
        push_matrix_from((void *) (&lbl_8058D490.value));
        rotate_matrix_y((int) (0), (int) (stack.spC));
        rotate_matrix_x((int) (0), (int) (stack.sp8));
        rotate_vector_by_matrix((int) (0), (void *) (arg0 + 0x20), (void *) (arg0 + 0x2C));
        pop_matrices((int) (1));
        vec3_add_to((void *) (arg0 + 0x2C), (void *) (arg0 + 0x44));
        copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (void *) (arg0 + 0x2C));
    }
}
#pragma push
#pragma fp_contract on
Vec_8001CBC4 calc_loading_cursor_pos(Obj_8001CBC4 *o) {
    if (camera_ctrl_instance != 0) {
        o->pos.x = lbl_805D7E90 * (*(Tbl_8001CBC4 *)&lbl_804FF5E8).dir.x + (*(Tbl_8001CBC4 *)&lbl_804FF5E8).base.x;
        o->pos.y = lbl_805D7E90 * (*(Tbl_8001CBC4 *)&lbl_804FF5E8).dir.y + (*(Tbl_8001CBC4 *)&lbl_804FF5E8).base.y;
        o->pos.z = lbl_805D7E90 * (*(Tbl_8001CBC4 *)&lbl_804FF5E8).dir.z + (*(Tbl_8001CBC4 *)&lbl_804FF5E8).base.z;
    }
    return o->pos;
}
#pragma pop

}
