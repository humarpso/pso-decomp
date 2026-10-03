#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_800B4688 { f32 x, y, z; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK __ct__7TObjectFP7TObject(void *, void *);
M2C_UNK subtract_vector(void *, void *);
extern const f64 lbl_8043B398[];
extern M2C_UNK lbl_804920B4[];
extern s32 lbl_805D2A1C;
extern u8 *lbl_805D5108;
extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9D18;
extern const f32 lbl_805D9D6C;
u8 *TObjEneBm3FlyNest__sub_800B4688(u8 *self, void *parent, s32 a, s32 b, s32 unused, s32 c, s32 d);
}

extern "C" {

void *TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1);
void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_model_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32, void *);

extern u8 *lbl_805D5108;

void render_parts__17TObjEneBm3FlyNestFPv(u8 *arg0) {
    set_global_param__8TObjFishFi(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 0xC), lbl_805D5108);
    push_matrix();
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        post_translate_matrix(M2C_FIELD(arg0, void **, 0x30));
    } else {
        post_translate_matrix(M2C_FIELD(arg0, void **, 0x34));
    }
    post_translate_matrix(arg0 + 0x1C);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x40));
    set_global_flag__10TObjPlayerFv();
    draw_model_motion(M2C_FIELD(M2C_FIELD(lbl_805D5108, void **, 0x42C), s32 *, 8), M2C_FIELD(arg0, s32 *, 0x48), M2C_FIELD(arg0, f32 *, 0x4C));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
}

extern M2C_UNK lbl_804920B4[];

void *TObjEneBm3FlyNest__sub_800B4630(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804920B4;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjEneBm3FlyNest__sub_800B4688(u8 *self, void *parent, s32 a, s32 b, s32 unused, s32 c, s32 d) {
    Vec_800B4688 v;
    __ct__7TObjectFP7TObject(self, parent);
    M2C_FIELD(self, M2C_UNK **, 0x18) = lbl_804920B4;
    M2C_FIELD(self, s32 *, 0) = lbl_805D2A1C;
    M2C_FIELD(self, s32 *, 0x30) = a;
    M2C_FIELD(self, s32 *, 0x34) = b;
    M2C_FIELD(self, s32 *, 0x38) = c;
    M2C_FIELD(self, s32 *, 0x28) = d;
    VecCopy__FP3VecPC3Vec(&v, M2C_FIELD(self, void **, 0x30));
    subtract_vector(&v, M2C_FIELD(self, void **, 0x34));
    update_scale__15TObjBoss2TunnelFPv(&v);
    M2C_FIELD(self, s32 *, 0x40) = (s32) (lbl_8043B398[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z));
    M2C_FIELD(self, f32 *, 0x1C) = lbl_805D9D6C * v.x;
    M2C_FIELD(self, f32 *, 0x20) = lbl_805D9D6C;
    M2C_FIELD(self, f32 *, 0x24) = lbl_805D9D6C * v.z;
    M2C_FIELD(self, s32 *, 0x48) = M2C_FIELD(M2C_FIELD(lbl_805D5108, u8 **, 0x430), s32 *, 0x54);
    M2C_FIELD(self, f32 *, 0x4C) = (f32) (M2C_FIELD(self, s32 *, 0x28) * 2);
    M2C_FIELD(self, f32 *, 0x3C) = lbl_805D9D18;
    M2C_FIELD(self, s32 *, 0x44) = 0;
    M2C_FIELD(self, f32 *, 0x50) = lbl_805D9CF8;
    M2C_FIELD(self, f32 *, 0x54) = lbl_805D9CF8;
    M2C_FIELD(self, f32 *, 0x58) = lbl_805D9CF8;
    M2C_FIELD(self, f32 *, 0x5C) = lbl_805D9CF8;
    M2C_FIELD(self, f32 *, 0x64) = lbl_805D9CF8;
    M2C_FIELD(self, f32 *, 0x60) = lbl_805D9CF8;
    M2C_FIELD(self, s32 *, 0x2C) = 0;
    return self;
}

}
