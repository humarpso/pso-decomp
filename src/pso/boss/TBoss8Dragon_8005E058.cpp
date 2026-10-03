#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8005E17C_lbl_8043797C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_8005E17C_lbl_804FF5C0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

#include <stddef.h>
struct Stack_8005E1E8 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Vec_8005E058 { f32 x, y, z; };
struct Obj_8005E058 { u8 pad0[0x3C0]; Vec_8005E058 src[10]; u8 pad438[0xB0]; Vec_8005E058 dst[10]; };

struct Obj_8005E0C0 { u8 pad[0x34]; s32 f34; u8 pad38[0x24]; s32 f5c; s32 f60; s32 f64; u8 pad68[0x90]; s32 ff8; u8 pad_fc[0x3C0 - 0xFC]; u8 f3c0[0x100]; s32 f4c0; };

extern "C" {
extern s32 lbl_80437E6C[];
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
extern RecoveredGlobal_8005E17C_lbl_8043797C lbl_8043797C;
extern RecoveredGlobal_8005E17C_lbl_804FF5C0 lbl_804FF5C0;
extern s32 lbl_805D4DAC;
extern s32 lbl_805D4DB0;
extern s32 lbl_805D4DB4;
void TBoss8Dragon__sub_8005E17C(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
f32 newton_sqrtf(f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 vec3_dot(void *, void *);
M2C_UNK subtract_vector(void *, void *);
extern RecoveredGlobal_8005E1E8_lbl_804FF5CC lbl_804FF5CC;
extern RecoveredGlobal_8005E1E8_lbl_804FF5D8 lbl_804FF5D8;
extern const f32 lbl_805D4DC0;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D88;
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0);
void get_speed_or_default__10TObjPlayerFPv(void *);
void render_model_tree__12TBoss8DragonFPvPv(void* p, void* a1);
void scale_matrix(int, f32, f32, f32);
void rotate_matrix_y(int, int);
void rotate_matrix_z(int, int);
void rotate_matrix_x(int, int);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
void set_global_flag__10TObjPlayerFv(void);
void clear_global_state__10TObjPlayerFv(void);
void set_global_state__16TObjEneRe7BeruraFi(void *);
void TBoss8Dragon__sub_8005E17C(void);
extern s32 lbl_805D4DAC;
extern s32 lbl_805D4DB0;
extern s32 lbl_805D4DB4;
extern s32 lbl_805D4DB8;
extern const f32 lbl_805D8D58;
void TBoss8Dragon__sub_8005E0C0(Obj_8005E0C0 *self);
}

extern "C" {

void TBoss8Dragon__sub_8005E058(Obj_8005E058 *self) {
    s32 i;
    Vec_8005E058 *d = self->dst;
    for (i = 0; i < 10; i++) {
        ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)(d, &self->src[lbl_80437E6C[i]]);
        d++;
    }
}
typedef char RecoveredGlobal_8005E17C_lbl_8043797C_size[sizeof(RecoveredGlobal_8005E17C_lbl_8043797C) == 0x40 ? 1 : -1];
typedef char RecoveredGlobal_8005E17C_lbl_804FF5C0_size[sizeof(RecoveredGlobal_8005E17C_lbl_804FF5C0) == 0xC ? 1 : -1];

void TBoss8Dragon__sub_8005E0C0(Obj_8005E0C0 *self) {
    lbl_805D4DAC = 0;
    lbl_805D4DB0 = 0;
    lbl_805D4DB4 = (s32)self->f3c0;
    lbl_805D4DB8 = self->f4c0;
    set_global_state__16TObjEneRe7BeruraFi((void *)TBoss8Dragon__sub_8005E17C);
    push_matrix();
    set_global_flag__10TObjPlayerFv();
    post_translate_matrix((u8 *)self + 0x38);
    rotate_matrix_y(0, self->f60);
    rotate_matrix_x(0, self->f5c);
    rotate_matrix_z(0, self->f64);
    scale_matrix(0, lbl_805D8D58, lbl_805D8D58, lbl_805D8D58);
    get_speed_or_default__10TObjPlayerFPv(self);
    render_model_tree__12TBoss8DragonFPvPv((void *)self->f34, (void *)self->ff8);
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    set_global_state__16TObjEneRe7BeruraFi(0);
}

void TBoss8Dragon__sub_8005E17C(void) {
    s32 temp_r4;
    if ((s32) lbl_805D4DAC == (s32) M2C_FIELD(&lbl_8043797C.value, M2C_UNK *, (lbl_805D4DB0 * 4))) {
        temp_r4 = lbl_805D4DB4;
        lbl_805D4DB4 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_804FF5C0.value, temp_r4);
        lbl_805D4DB0 += 1;
    }
    lbl_805D4DAC += 1;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8005E1E8_lbl_804FF5CC_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5CC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8005E1E8_lbl_804FF5D8_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5D8) == 0x10 ? 1 : -1];
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8005E1E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8005E1E8, spC) == 0x4) ? 1 : -1];
    Stack_8005E1E8 stack;
    f32 temp_f1;
    f32 temp_f31;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8));
    stack.spC = lbl_805D8D5C;
    subtract_vector((void *) (&stack.sp8), (void *) (&lbl_804FF5CC.value));
    temp_f1 = clamp_velocity__15TObjBoss2TunnelFPv((void *) (&stack.sp8));
    if ((temp_f1 + farg0) < lbl_805D4DC0) {
        temp_f31 = temp_f1 * (lbl_805D8D88 / newton_sqrtf((f32) ((temp_f1 * temp_f1) + (farg0 * farg0))));
        if (vec3_dot((void *) (&stack.sp8), (void *) (&lbl_804FF5D8.value)) >= temp_f31) {
            return 1;
        }
    }
    return 0;
}
#pragma pop

}
