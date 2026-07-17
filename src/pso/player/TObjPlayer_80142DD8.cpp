#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 render_anim_model__10TObjPlayerFPvf(void *arg0, f32 farg0);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(M2C_UNK *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK render_model_tree__12TBoss8DragonFPvPv(u32, u32, f32);

extern M2C_UNK TObjPlayer__sub_80142EEC[];
extern s32 lbl_805D5678;
extern s32 lbl_805D567C;

s32 render_anim_model__10TObjPlayerFPvf(void *arg0, f32 farg0) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF8) == 0U) || ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U)) {
        return 0;
    }
    set_global_flag__10TObjPlayerFv();
    lbl_805D567C = lbl_805D5678;
    set_global_state__16TObjEneRe7BeruraFi(TObjPlayer__sub_80142EEC);
    render_model_tree__12TBoss8DragonFPvPv(M2C_FIELD(arg0, u32 *, 0x34), M2C_FIELD(arg0, u32 *, 0xF8), farg0);
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    clear_global_state__10TObjPlayerFv();
    return 1;
}

}
