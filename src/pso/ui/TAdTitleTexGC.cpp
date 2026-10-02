#include "pso/TAdTitleTexGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_802A4EF4 { f32 x, y; };

struct B_802A4EF4 {
    f32 x, y, x2, y2;
    u8 pad[0x10];
};

struct Obj_802A4EF4 {
    u8 pad[0x1C];
    B_802A4EF4 b[3];
    u8 pad7C[4];
    s32 f80;
    V_802A4EF4 a[3];
};

extern "C" {
extern const f32 lbl_805DDF8C;
extern const f32 lbl_805DDF90;
extern const f32 lbl_805DDF94;
extern const f32 lbl_805DDF98;
void TAdTitleTexGC__sub_802A4EF4(Obj_802A4EF4 *arg0);
}

extern "C" {

void *__ct__13TAdTitleTexGCFv(void *arg0);
void render__13TAdTitleTexGCFv(void *arg0);
void run_task__13TAdTitleTexGCFv(void *arg0);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
void __ct__7TObjectFP7TObject(void *);
M2C_UNK fn_802A4D74(void *, s32, s32, s32);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK render_status_pair__20TWindowSubStatusDispFii(void *, s32);

void render__13TAdTitleTexGCFv(void *arg0) {
    s32 temp_r31;

    if (get_state_flag__9TMainTaskFv() != 1) {
        render_status_pair__20TWindowSubStatusDispFii(arg0, (M2C_FIELD(arg0, s32 *, 0x7C) << 0x18) | 0xFF0000 | 0xFFFF);
        fn_802A4D74(arg0, (M2C_FIELD(arg0, s32 *, 0x7C) << 0x18) | 0xFF0000 | 0xFFFF, get_localized_text_entry(0x28, 0), get_localized_text_entry(0x28, 1));
    }
}

void TAdTitleTexGC__sub_802A4EF4(Obj_802A4EF4 *arg0) {
    V_802A4EF4 sp[3];
    s32 i;
    for (i = 0; i < 3; i++) {
        s32 t = 0x14 - arg0->f80;
        sp[i].x = ((lbl_805DDF8C - arg0->a[i].x) * (f32)(t * t)) / lbl_805DDF90;
        sp[i].y = lbl_805DDF94;
        arg0->b[i].x = arg0->a[i].x + sp[i].x;
        arg0->b[i].y = arg0->a[i].y + sp[i].y;
        arg0->b[i].x2 = lbl_805DDF98 + arg0->b[i].x;
        arg0->b[i].y2 = lbl_805DDF98 + arg0->b[i].y;
    }
}

void run_task__13TAdTitleTexGCFv(void *arg0) {
    s32 temp_r4;
    u32 temp_r4_2;
    u32 temp_r4_3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x80);
    if (temp_r4 < 0x14) {
        M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r4 + 1);
    }
    temp_r4_2 = M2C_FIELD(arg0, u32 *, 0x7C);
    if (temp_r4_2 < 0xFFU) {
        M2C_FIELD(arg0, u32 *, 0x7C) = (u32) (temp_r4_2 + 0xC);
    }
    temp_r4_3 = M2C_FIELD(arg0, u32 *, 0x7C);
    M2C_FIELD(arg0, u32 *, 0x7C) = (temp_r4_3 <= 0xFFU) ? temp_r4_3 : 0xFFU;
    TAdTitleTexGC__sub_802A4EF4((Obj_802A4EF4 *)(arg0));
}

extern M2C_UNK __vt__13TAdTitleTexGC[];
extern const f32 lbl_805DDF9C;
extern void *lbl_805D3DE8;
extern const f32 lbl_805DDFA0;
extern const f32 lbl_805DDFA4;
extern const f32 lbl_805DDFA8;
extern const f32 lbl_805DDFAC;
extern const f32 lbl_805DDFB0;
extern const f32 lbl_805DDFB4;
extern const f32 lbl_805DDFB8;
extern const f32 lbl_805DDFBC;
extern const f32 lbl_805DDFC0;

TAdTitleTexGC::~TAdTitleTexGC() {}
void *__ct__13TAdTitleTexGCFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TAdTitleTexGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3DE8;
    M2C_FIELD(arg0, u32 *, 0x7C) = 51;
    M2C_FIELD(arg0, u32 *, 0x80) = -1;
    M2C_FIELD(arg0, f32 *, 0x34) = lbl_805DDF9C;
    M2C_FIELD(arg0, f32 *, 0x38) = lbl_805DDFA0;
    M2C_FIELD(arg0, f32 *, 0x2C) = lbl_805DDFA4;
    M2C_FIELD(arg0, f32 *, 0x30) = lbl_805DDFA8;
    M2C_FIELD(arg0, f32 *, 0x4C) = lbl_805DDFAC;
    M2C_FIELD(arg0, f32 *, 0x50) = lbl_805DDFA8;
    M2C_FIELD(arg0, f32 *, 0x54) = lbl_805DDFB0;
    M2C_FIELD(arg0, f32 *, 0x58) = lbl_805DDFA0;
    M2C_FIELD(arg0, f32 *, 0x84) = lbl_805DDFB4;
    M2C_FIELD(arg0, f32 *, 0x88) = lbl_805DDFB8;
    M2C_FIELD(arg0, f32 *, 0x8C) = lbl_805DDFBC;
    M2C_FIELD(arg0, f32 *, 0x90) = lbl_805DDFB8;
    M2C_FIELD(arg0, f32 *, 0x94) = lbl_805DDFC0;
    M2C_FIELD(arg0, f32 *, 0x98) = lbl_805DDFB8;
    return arg0;
}

}
