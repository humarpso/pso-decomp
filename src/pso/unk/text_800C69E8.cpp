#include "types.h"

struct P_800C6A18 { u8 pad[0x30]; u32 flags; };

struct O_800C6A18 { u8 pad[0x2a8]; P_800C6A18 *p; u8 pad2[0x8c]; u16 f338; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_800C6A48 { f32 x, y, z; };

extern "C" {
void TObjPlayer__sub_800C6A18(O_800C6A18 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void *csnVector(void *, void *, s32);
f32 TObjPlayer__sub_8013153C(void *, s32);
M2C_UNK vec3_add_to(void *, void *);
M2C_UNK TCameraCtrl__sub_803D8934(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
extern Vec_800C6A48 lbl_8043BCAC;
extern Vec_800C6A48 lbl_8043BCB8;
extern const f64 lbl_8043BCC8[];
extern u8 lbl_8058D490[];
extern const f32 lbl_805DA068;
extern const f32 lbl_805DA06C;
void TObjPlayer__sub_800C6A48(u8 *self, f32 *dir, f32 a, f32 b);
}

extern "C" {

void TObjPlayer__sub_800C69E8(void* p);
void TObjPlayer__sub_800C69F4(void);
void TObjPlayer__sub_800C69F8(void);
void TObjPlayer__sub_800C69FC(void);
void TObjPlayer__sub_800C6A00(void);
void TObjPlayer__sub_800C6A04(void);
void TObjPlayer__sub_800C6A08(void);
void TObjPlayer__sub_800C6A0C(void);
u16 TObjPlayer__sub_800C6A10(void* p);

void TObjPlayer__sub_800C69E8(void* p) { *(s16*)((char*)p + 0x326) = 1; }
void TObjPlayer__sub_800C69F4(void) {  }
void TObjPlayer__sub_800C69F8(void) {  }
void TObjPlayer__sub_800C69FC(void) {  }
void TObjPlayer__sub_800C6A00(void) {  }
void TObjPlayer__sub_800C6A04(void) {  }
void TObjPlayer__sub_800C6A08(void) {  }
void TObjPlayer__sub_800C6A0C(void) {  }
u16 TObjPlayer__sub_800C6A10(void* p) { return *(u16*)((char*)p + 0x338); }
void TObjPlayer__sub_800C6A18(O_800C6A18 *self) {
    if (self->p != 0 && (self->p->flags & 0x800)) {
        self->p = 0;
        self->f338 = 0xFFFF;
    }
}
void TObjPlayer__sub_800C6A48(u8 *self, f32 *dir, f32 a, f32 b) {
    Vec_800C6A48 sp20;
    f32 best;
    s32 ang;
    s32 bestAng;
    s32 i;
    void *p;
    f32 d;
    {
        f64 r = get_ad_end_text_start__10TObjPlayerFv(dir[0], dir[2]);
        best = lbl_805DA068;
        ang = (s32) (lbl_8043BCC8[0] * r);
    }
    bestAng = ang;
    VecCopy__FP3VecPC3Vec(&sp20, self + 0x38);
    sp20.y += lbl_805DA06C;
    push_matrix_from(lbl_8058D490);
    {
        Vec_800C6A48 sp14 = lbl_8043BCAC;
        sp14.x = a + b;
        rotate_matrix_y(0, ang);
        for (i = 0; i < 3; i++) {
            TCameraCtrl__sub_803D8934(0, &sp14, self + 0x29C);
            vec3_add_to(self + 0x29C, &sp20);
            p = csnVector(&sp20, self + 0x29C, -1);
            if (p == NULL) {
                pop_matrix();
                return;
            }
            d = TObjPlayer__sub_8013153C(self + 0x38, M2C_FIELD(p, s32 *, 4)) - b;
            if (best < d) {
                best = d;
                bestAng = ang;
            }
            rotate_matrix_y(0, 0x5555);
            ang += 0x5555;
        }
    }
    pop_matrix();
    push_matrix_from(lbl_8058D490);
    {
        Vec_800C6A48 sp8 = lbl_8043BCB8;
        sp8.x = best;
        rotate_matrix_y(0, bestAng);
        TCameraCtrl__sub_803D8934(0, &sp8, self + 0x29C);
    }
    vec3_add_to(self + 0x29C, &sp20);
    pop_matrix();
}

}
