#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_model_parts__10TObjPlayerFPv(u8 *arg0);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK rotate_matrix_z(M2C_UNK, s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK draw_line_strip__10TObjPlayerFPviif(void *, s32, s32, f32);

extern s32 lbl_805D679C;
extern const f32 lbl_805DE4FC;

void draw_model_parts__10TObjPlayerFPv(u8 *arg0) {
    if ((check_demo_mode__10TObjPlayerFv() == 1) && (get_state_flag__9TMainTaskFv() == 0)) {
        draw_line_strip__10TObjPlayerFPviif(arg0, M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0xA0), lbl_805DE4FC);
    }
    set_global_param__8TObjFishFi(lbl_805D679C);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
    TOHangerMachine01__sub_803D9C00(arg0 + 0xAC);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xB8));
    rotate_matrix_z(0, M2C_FIELD(arg0, s32 *, 0xC0));
    set_global_flag__10TObjPlayerFv();
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x98), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xA8));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
}

}
