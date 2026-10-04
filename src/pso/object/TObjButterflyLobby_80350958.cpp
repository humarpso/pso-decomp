#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ButterflyLobbyBase_80350958 { char pad[0x18]; };
struct ButterflyLobbyVObj_80350958 : ButterflyLobbyBase_80350958 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Obj_80350AE4 { u8 pad[0x90]; s32 state; f32 val; };

extern "C" {
s32 is_connected__6TLobbyFv();
s32 is_lobby_obj_active__6TLobbyFv();
void TObjButterflyLobby__sub_80350AE4(Obj_80350AE4 *arg0);
}

extern "C" {

void init_params__18TObjButterflyLobbyFPv(u8 *arg0);
void render__18TObjButterflyLobbyFPv(u8 *arg0);
void render__18TObjButterflyLobbyFv(void *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK draw_ginja_model_with_motion(int, void *, f32);
s32 get_bml_motion(void *, int);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 rand();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D6EB8;

void render__18TObjButterflyLobbyFPv(u8 *arg0) {
    f32 temp_f1;

    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (-0x2000));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 3) {
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x94);
        scale_matrix((int) (0), (f32) (temp_f1), (f32) (temp_f1), (f32) (temp_f1));
    }
    draw_ginja_model_with_motion((int) (M2C_FIELD(arg0, s32 *, 0xC4)), (void *) (get_bml_motion((void *) (lbl_805D6EB8), (int) (0))), (f32) (M2C_FIELD(arg0, f32 *, 0xB0)));
    pop_matrix();
}

extern M2C_UNK lbl_80478DF0;
extern const f32 TObjButterflyLobby__data_805DFE40;
extern const f32 lbl_805DFE44;
extern const f32 lbl_805DFE48;

void init_params__18TObjButterflyLobbyFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x98, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xAC) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) (lbl_805DFE44 * (lbl_805DFE48 * (f32) rand()));
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TObjButterflyLobby__data_805DFE40;
    M2C_FIELD(arg0, s8 *, 0xC0) = 0;
    M2C_FIELD(arg0, s8 *, 0xC1) = 0;
    M2C_FIELD(arg0, s16 *, 0xBC) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xBE) = 0;
}

extern const f32 lbl_805DFE4C;
extern const f32 lbl_805DFE50;

void render__18TObjButterflyLobbyFv(void *arg0) {
    if ((((ButterflyLobbyVObj_80350958*)arg0)->m8(lbl_805DFE4C, lbl_805DFE50) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x90) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC8));
        render__18TObjButterflyLobbyFPv((u8 *)(arg0));
    }
}
void TObjButterflyLobby__sub_80350AE4(Obj_80350AE4 *arg0) {
    switch (arg0->state) {
    case 0:
        if (is_connected__6TLobbyFv() != 0) {
            arg0->state = 2;
        }
        break;
    case 2:
        arg0->val += 0.1f;
        if (arg0->val >= 1.0f) {
            arg0->val = 1.0f;
            arg0->state = 3;
        }
        break;
    case 1:
        arg0->val -= 0.1f;
        if (arg0->val <= 0.0f) {
            arg0->val = 0.0f;
            arg0->state = 0;
        }
        break;
    case 3:
    default:
        if (is_lobby_obj_active__6TLobbyFv() != 0) {
            arg0->state = 1;
        }
        break;
    }
}

}
