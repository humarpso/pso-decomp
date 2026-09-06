#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void TObjPlayer__sub_800EBE74(f32, f32, f32, f32);
extern const f32 lbl_805DA6B4;
void TObjPlayer__sub_800EBE48(f32 farg0);
}

extern "C" {

int TObjPlayer__sub_800EC348(void);
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
    TObjPlayer__sub_800EBE74(farg0, lbl_805DA6B4, lbl_805DA6B4, lbl_805DA6B4);
}

int TObjPlayer__sub_800EC348(void) { return 0; }

}
