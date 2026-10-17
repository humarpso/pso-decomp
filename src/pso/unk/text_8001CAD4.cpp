#include "types.h"
#include "pso/player/TObjPlayer_80141D1C.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/system/vector.h"
#include "pso/misc/TLoadingCur.h"

#include <stddef.h>
#include "pso/misc/TNowLoading.h"
struct Stack_8001CAD4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8001CAD4_lbl_804349FC {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8001CAD4_lbl_804FF5E8 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8001CAD4_lbl_8058D490 {
    s32 value;
    u8 remaining[0x2C];
};

struct Vec_8001CBC4 { f32 x, y, z; };

struct Tbl_8001CBC4 { Vec_8001CBC4 base; Vec_8001CBC4 dir; };

struct Obj_8001CBC4 { u8 pad[0x44]; Vec_8001CBC4 pos; };

extern "C" {
f32 vec3_add_to(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
extern RecoveredGlobal_8001CAD4_lbl_804349FC lbl_804349FC;
extern RecoveredGlobal_8001CAD4_lbl_804FF5E8 lbl_804FF5E8;
extern RecoveredGlobal_8001CAD4_lbl_8058D490 identity_matrix;
extern u32 camera_ctrl_instance;
extern const f32 lbl_805D7E90;
Vec_8001CBC4 calc_loading_cursor_pos(Obj_8001CBC4 *o);
typedef char RecoveredGlobal_8001CAD4_lbl_804349FC_size[sizeof(RecoveredGlobal_8001CAD4_lbl_804349FC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8001CAD4_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8001CAD4_lbl_804FF5E8) == 0x28 ? 1 : -1];
typedef char RecoveredGlobal_8001CAD4_lbl_8058D490_size[sizeof(RecoveredGlobal_8001CAD4_lbl_8058D490) == 0x30 ? 1 : -1];
void TLoadingCur::update_camera_facing_offset() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_8001CAD4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001CAD4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001CAD4, sp10) == 0x8) ? 1 : -1];
    Stack_8001CAD4 stack;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) != 0U) {
        VecCopy((Vec *)(arg0 + 0x2C), (const Vec *)(arg0 + 0x20));
        stack.sp8 = *(s32 *)((s8 *)(&lbl_804349FC.value) + 0);
        stack.spC = *(s32 *)((s8 *)(&lbl_804349FC.value) + 4);
        stack.sp10 = *(s32 *)((s8 *)(&lbl_804349FC.value) + 8);
        *(f32 *)((s8 *)arg0 + 0x50) = (f32) -*(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0xC);
        this->m_54 = (f32) -*(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0x10);
        *(f32 *)&this->unk_58 = (f32) -*(f32 *)((s8 *)(&lbl_804FF5E8.value) + 0x14);
        direction_to_rotation_xy((arg0 + 0x50), (&stack.sp8), (&stack.spC));
        push_matrix_from((void *) (&identity_matrix.value));
        rotate_matrix_y(0, (int) (stack.spC));
        rotate_matrix_x(0, (int) (stack.sp8));
        rotate_vector_by_matrix(0, (void *) (arg0 + 0x20), (void *) (arg0 + 0x2C));
        pop_matrices(1);
        vec3_add_to((void *) (arg0 + 0x2C), (void *) (arg0 + 0x44));
        ((TNowLoading *)(*(u32 *)((s8 *)arg0 + 0x1C)))->copy_pos((void *) (arg0 + 0x2C));
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
