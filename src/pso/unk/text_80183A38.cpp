#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80183A38_lbl_804B5C90 {
    M2C_UNK value;
    u8 remaining[0x30];
};

struct Vec_80183AF0 { f32 x, y, z; };

struct EntA_80183AF0 { u8 pad[8]; s32 v; u8 padc[4]; };

struct EntB_80183AF0 { u8 pad[4]; s32 v; };

struct Res_80183AF0 { u8 pad[0x42C]; EntA_80183AF0 *a; EntB_80183AF0 *b; };

struct VBase_80183AF0 { u8 pad[0x18]; };

struct Obj_80183AF0 : VBase_80183AF0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    u8 pad1c[0x38 - 0x1C];
    Vec_80183AF0 pos;
    u8 pad44[0x60 - 0x44];
    s32 x60;
    u8 pad64[0xB0 - 0x64];
    f32 xb0;
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern RecoveredGlobal_80183A38_lbl_804B5C90 lbl_804B5C90;
extern s32 lbl_805D3284;
u8 *TObjCity_Season_Board__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
extern const char lbl_80444250[];
void fn_80183AA0(void *self);
void VecCopy__FP3VecPC3Vec(Vec_80183AF0 *, const Vec_80183AF0 *);
void TObjEneDD__sub_800B9D94(Vec_80183AF0 *, Vec_80183AF0 *, s32, Vec_80183AF0 *);
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0);
Res_80183AF0 *get_anim_frame__25TObjCity_Season_EasterEggFPv(void *);
void rotate_matrix_y(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void draw_model_motion(s32, s32, f32);
extern s32 lbl_8050DC50[];
extern const f32 lbl_805DBC44;
extern const f32 lbl_805DBC4C;
void fn_80183AF0(Obj_80183AF0 *self);
}

extern "C" {

typedef char RecoveredGlobal_80183A38_lbl_804B5C90_size[sizeof(RecoveredGlobal_80183A38_lbl_804B5C90) == 0x34 ? 1 : -1];
u8 *TObjCity_Season_Board__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5C90.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3284;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = 0;
    return arg0;
}
void fn_80183AA0(void *self) {
    TObjCity_Season_SonicAdv2__sub_80183C38(self);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_80444250);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}
void fn_80183AF0(Obj_80183AF0 *self) {
    Res_80183AF0 *res;
    s32 idx;
    Vec_80183AF0 pos;
    Vec_80183AF0 a;
    Vec_80183AF0 b;
    res = get_anim_frame__25TObjCity_Season_EasterEggFPv(self);
    if (res != NULL && self->m8(lbl_805DBC44, lbl_805DBC4C) != 0) {
        set_global_param__8TObjFishFi(lbl_8050DC50[5]);
        idx = TObjCity_Season_SonicAdv2__sub_80183C38(self);
        push_matrix();
        post_translate_matrix(&self->pos);
        rotate_matrix_y(0, self->x60);
        draw_model_motion(res->a[idx].v, res->b[idx].v, self->xb0);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&pos, &self->pos);
        pos.y += 0.037f;
        a.x = 0.0f;
        a.y = 1.0f;
        a.z = 0.0f;
        b.x = 1.0f;
        b.y = 0.0f;
        b.z = 1.3f;
        TObjEneDD__sub_800B9D94(&pos, &a, self->x60, &b);
    }
}

}
