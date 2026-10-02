#include "pso/TAdTitleGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_802A0A60 { u8 pad[0x20]; };

struct Title_802A0A60 { u8 pad[0x20]; Rec_802A0A60 recs[8]; };

typedef struct Rec_802A0E08 {
    f32 x0, y0, x1, y1;
    f32 a, b, c, d;
} Rec_802A0E08;

typedef struct TAdTitleGC_802A0E08 {
    s32 name;
    u8 pad4[0x18 - 0x4];
    void *vtable;
    s32 idx;
    Rec_802A0E08 recs[8];
    f32 f120;
    f32 f124;
    s32 f128;
    s32 f12C;
    u32 f130;
    s32 f134;
} TAdTitleGC_802A0E08;

typedef s32 M2C_UNK;
struct Rec_802A0C84 {
    f32 x0, y0, x1, y1;
    u8 pad[0x10];
};

struct Title_802A0C84 {
    u8 pad[0x20];
    Rec_802A0C84 rects[8];
    u8 pad120[0x128 - 0x120];
    s32 f128;
};

extern "C" {
u32 TWindowSubStatusDisp__sub_80144D68(void *);
extern const f32 lbl_805DDDD0;
extern const f32 lbl_805DDDD4;
void TAdTitleGC__sub_802A0C24(M2C_UNK arg0, u8 *arg1, s32 arg2);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(s32, s32);
extern s32 lbl_805D6630;
extern const f32 lbl_805DDDC8;
extern const f32 lbl_805DDDCC;
M2C_UNK TAdTitleGC__sub_802A0A60(void *arg0, s32 arg1, M2C_UNK arg2);
void __ct__7TObjectFP7TObject(void *, void *);
u32 TAdMcSelectGC__sub_80019DA8(void *, s32, f32);
extern u8 __vt__10TAdTitleGC[];
extern s32 lbl_805D3D78;
extern const f32 lbl_805DDDE4;
extern const f32 lbl_805DDDE8;
extern const f32 lbl_805DDDF0;
TAdTitleGC_802A0E08 *__ct__10TAdTitleGCFv(TAdTitleGC_802A0E08 *self, void *parent, s32 idx);
extern f32 lbl_8046620C[];
extern const f32 lbl_805DDDD8;
extern const f32 lbl_805DDDDC;
extern const f32 lbl_805DDDE0;
extern const f32 lbl_805DDDE4;
M2C_UNK TAdTitleGC__sub_802A0C84(void *p);
}

extern "C" {

void render__10TAdTitleGCFv(u8 *arg0);
void run_task__10TAdTitleGCFv(u8 *arg0);
s32 get_localized_text_entry(M2C_UNK, s32);
M2C_UNK abs__4cXyzCFv(M2C_UNK, M2C_UNK);
M2C_UNK fn_80141A30();
M2C_UNK fn_802A0A30(void *, void *, s32, s32, s32);
s32 get_state_flag__9TMainTaskFv();
M2C_UNK set_depth_buffer_settings_2__Fv();
s32 toggle_flag_9__10TObjPlayerFPv();

M2C_UNK TAdTitleGC__sub_802A0A60(void *arg0, s32 arg1, M2C_UNK arg2) {
    s32 i;
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D6630);
    TWindowSubStatusDisp__sub_803DF160(arg1 > 0xB, arg2);
    for (i = 0; i < 8; i++) {
        draw_textured_quad_at_depth(&((Title_802A0A60 *)arg0)->recs[i], lbl_805DDDC8 / -(lbl_805DDDCC - (f32)i));
    }
    return get_player__20TWindowSubStatusDispFv();
}

void render__10TAdTitleGCFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x134) == 1) {
        if (get_state_flag__9TMainTaskFv() == 1) {
            return;
        }
        goto block_5;
    }
    if (toggle_flag_9__10TObjPlayerFPv() == 0) {
        set_depth_buffer_settings_2__Fv();
block_5:
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 0xA);
        TAdTitleGC__sub_802A0A60((void *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x1C)), (M2C_UNK)(0x1FFFFFFF));
        abs__4cXyzCFv(0, 8);
        abs__4cXyzCFv(1, 6);
        fn_802A0A30(arg0, arg0 + 0x120, M2C_FIELD(arg0, s32 *, 0x1C), (M2C_FIELD(arg0, s32 *, 0x12C) << 0x18) | 0xFF0000 | 0xFFFF, get_localized_text_entry(0x13, M2C_FIELD(arg0, s32 *, 0x1C)));
        if ((s32) M2C_FIELD(arg0, s32 *, 0x134) == 0) {
            fn_80141A30();
        }
    }
}

#pragma push
#pragma fp_contract on
void TAdTitleGC__sub_802A0C24(M2C_UNK arg0, u8 *arg1, s32 arg2) {
    M2C_FIELD(arg1, f32 *, 0) = (f32) (lbl_805DDDD0 - (f32) TWindowSubStatusDisp__sub_80144D68((void *) (arg2)));
    M2C_FIELD(arg1, f32 *, 4) = (f32) lbl_805DDDD4;
}
#pragma pop

M2C_UNK TAdTitleGC__sub_802A0C84(void *p) {
    Title_802A0C84 *arg0 = (Title_802A0C84 *)p;
    s32 i;
    for (i = 0; i < 8; i++) {
        arg0->rects[i].x0 = lbl_805DDDD8 - ((f32)(10 - arg0->f128) * ((f32)(10 - arg0->f128) * lbl_8046620C[i]));
        arg0->rects[i].y0 = lbl_805DDDDC;
        arg0->rects[i].x1 = lbl_805DDDE0 + arg0->rects[i].x0;
        arg0->rects[i].y1 = lbl_805DDDE4 + arg0->rects[i].y0;
    }
    return (M2C_UNK)p;
}

void run_task__10TAdTitleGCFv(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x128);
    if (temp_r3 < 0xA) {
        M2C_FIELD(arg0, s32 *, 0x128) = (s32) (temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x12C) = (s32) (M2C_FIELD(arg0, s32 *, 0x12C) + 0xC);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x12C) > 0xFF) {
        M2C_FIELD(arg0, s32 *, 0x12C) = 0xFF;
    }
    TAdTitleGC__sub_802A0C84((void *)(arg0));
    TAdTitleGC__sub_802A0C24((M2C_UNK)(arg0), (u8 *)(arg0 + 0x120), (s32)(get_localized_text_entry(0x13, M2C_FIELD(arg0, s32 *, 0x1C))));
}
#pragma push
#pragma opt_common_subs off
TAdTitleGC::~TAdTitleGC() {}
TAdTitleGC_802A0E08 *__ct__10TAdTitleGCFv(TAdTitleGC_802A0E08 *self, void *parent, s32 idx) {
    s32 off;
    s32 i;
    __ct__7TObjectFP7TObject(self, parent);
    self->vtable = __vt__10TAdTitleGC;
    self->name = lbl_805D3D78;
    self->idx = idx;
    self->f128 = -1;
    self->f12C = 0;
    self->f134 = 1;
    self->f130 = 0;
    off = (self->idx > 11) ? -12 : 0;
    for (i = 0; i < 8; i++) {
        self->recs[i].a = lbl_805DDDE8;
        self->recs[i].b = lbl_805DDDE4 * (f32)(self->idx + off) / 512.0f;
        self->recs[i].c = lbl_805DDDF0;
        self->recs[i].d = lbl_805DDDE4 * (f32)(self->idx + off + 1) / 512.0f;
    }
    self->f130 = TAdMcSelectGC__sub_80019DA8(self, 8, lbl_805DDDE8);
    return self;
}
#pragma pop

}
