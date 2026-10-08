#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800EBE74 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
extern const f32 lbl_805DA6B4;
void TObjPlayer__sub_800EBE48(f32 farg0);
void set_chunk_material_override_pair(s32, s32);
M2C_UNK set_chunk_material_color(void *);
extern int lbl_805D5660;
extern int lbl_805D5664;
extern int lbl_805D5668;
extern int lbl_805D7780;
extern int lbl_805D7784;
extern int some_id_805c6f74;
extern const f32 lbl_805DA6F8;
void push_material_color_override__10TObjPlayerFffff(f32 farg0, f32 farg1, f32 farg2, f32 farg3);
s32 find_nearest_hittable_enemy__10TObjPlayerFiPvf(void *, int, f32);
int TObjPlayer__sub_800EC348(u8 *arg0, f32 farg0);
}

extern "C" {

void init_render_globals__10TObjPlayerFv(void);
s32 get_attack_target__15TObjEneSlimeOneFPv(void* p);

    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int lbl_805D7780;
    extern int lbl_805D7784;
    extern int some_id_805c6f74;
void init_render_globals__10TObjPlayerFv(void) { lbl_805D7784 = lbl_805D5664; lbl_805D7780 = lbl_805D5668; some_id_805c6f74 = lbl_805D5660; }

void TObjPlayer__sub_800EBE48(f32 farg0) {
    push_material_color_override__10TObjPlayerFffff(farg0, lbl_805DA6B4, lbl_805DA6B4, lbl_805DA6B4);
}

void push_material_color_override__10TObjPlayerFffff(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    Stack_800EBE74 stack;
    (*(s32 *)&lbl_805D5660) = (*(s32 *)&some_id_805c6f74);
    (*(s32 *)&lbl_805D5664) = (*(s32 *)&lbl_805D7784);
    (*(s32 *)&lbl_805D5668) = (*(s32 *)&lbl_805D7780);
    (*(s32 *)&some_id_805c6f74) |= 0x20;
    set_chunk_material_override_pair(0xFF00, 0x800);
    stack.spC = farg1;
    stack.sp10 = farg2;
    stack.sp8 = lbl_805DA6F8 + farg0;
    stack.sp14 = farg3;
    set_chunk_material_color((void *) (&stack.sp8));
}
int TObjPlayer__sub_800EC348(u8 *arg0, f32 farg0) {
    u16 temp_r3;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    temp_r3 = find_nearest_hittable_enemy__10TObjPlayerFiPvf((void *) (arg0), (int) (0), (f32) (farg0));
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFDFFFFFF);
    return temp_r3;
}

}
