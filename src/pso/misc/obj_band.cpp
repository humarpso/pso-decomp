#include "types.h"

struct GameObj {
    u8 _pad00[0xB0];
    u32 flags;
    u8 _pad_B4[0x4];
    s16 a;
    s16 b;
    u8 _pad_BC[0x4];
    f32 c;
    u8 _pad_C4[0x4];
    f32 d;
};

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK draw_model_blend_motion(int, void *, f32);
M2C_UNK draw_model_motion(int, int, f32);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void TObjPlayer__sub_80142EEC(void);
extern int lbl_805D567C;
void TObjPlayer__sub_80142F1C(u8 *arg0);
}

int objInBand(GameObj* obj, f32 v) {
    u32 flags = obj->flags;
    if (!((flags & 4) && !(flags & 1)) &&
        obj->a == obj->b &&
        v < obj->c &&
        obj->c <= v + obj->d)
        return 1;
    return 0;
}

#include "types.h"

extern "C" {

void TObjPlayer__sub_80142EEC(void);
int TObjPlayer__sub_803D898C(void*);

    extern int lbl_805D567C;
void TObjPlayer__sub_80142EEC(void) { TObjPlayer__sub_803D898C((void*)(lbl_805D567C)); lbl_805D567C = (lbl_805D567C + 0x30); }
void TObjPlayer__sub_80142F1C(u8 *arg0) {
    s32 temp_r3;
    lbl_805D567C = M2C_FIELD(arg0, s32 *, 0xE0);
    set_global_state__16TObjEneRe7BeruraFi((void *) TObjPlayer__sub_80142EEC);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((temp_r3 & 4) && !(temp_r3 & 0x400)) {
        draw_model_blend_motion(M2C_FIELD(arg0, s32 *, 0x34), arg0 + 0xE4, M2C_FIELD(arg0, f32 *, 0xC0));
    } else {
        draw_model_motion(M2C_FIELD(arg0, s32 *, 0x34), M2C_FIELD(arg0, s32 *, 0xF8), M2C_FIELD(arg0, f32 *, 0xC0));
    }
    set_global_state__16TObjEneRe7BeruraFi(NULL);
    reset_transform_state__10TObjPlayerFv();
}

}
