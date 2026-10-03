#include "types.h"
struct Fuki_80250F70;
struct Fuki_802504C0;
struct Fuki_802521E8;
struct Fuki_80252764 {
    u8 pad0[0x24];
    u8 f24[0x30 - 0x24];
    f32 rect[2];
    f32 anchor[2];
    u8 pad40[0x54 - 0x40];
    f32 f54;
    u8 pad58[0x70 - 0x58];
    u8 phase;
    u8 pad71[0x80 - 0x71];
    f32 tail;
    u32 color;
    f32 center[2];
    f32 head[2];
};

struct View_80252764 {
    u8 pad0[0x28];
    f32 sx;
    f32 sy;
};

struct Fuki_802521E8 {
    u8 pad0[0x54];
    f32 f54;
    u8 pad58[0x80 - 0x58];
    f32 tail;
    u8 pad84[4];
    f32 center[2];
};

struct Prim_802521E8 {
    f32 *verts;
    u32 *colors;
    s32 flags;
    s32 count;
};

struct Slice_80252558 { f32 x, y, z, width, f10, lean, rowHeight, f1c, u, v, uw, f2c, f30, vh, pad[4]; };

struct Fukidasi_80252558 { u8 pad[0x40]; f32 position[2]; f32 size[2]; };

struct DrawCtx_80252558 { u8 pad[0x20]; f32 pivot[2]; f32 scale[2]; };

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TWindowFukidasi__sub_80250314(void *, void *);
void calc_text_size__15TWindowFukidasiFPvPv(void *, void *);
void sync_display_pos__15TWindowFukidasiFPv(void *);
s32 approach__15TWindowFukidasiFPvf(void *, f32);
void TWindowFukidasi__sub_80251790(void *);
void set_flag2c_bit100__15TWindowFukidasiFPv(void *);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void *);
void TWindowFukidasi__sub_80252C38(void *);
int is_active__15TWindowFukidasiFPv(void *);
void clear_flag__15TWindowFukidasiFPv(void *);
void update_window_entry_list(void *, void *);
extern const f32 TWindowFukidasi__data_805DCCE8;
extern const f32 TWindowFukidasi__data_805DCCF4;
extern const f32 TWindowFukidasi__data_805DCD0C;
extern const f32 TWindowFukidasi__data_805DCD30;
void TWindowFukidasi__sub_8025291C(u8 *arg0);
f32 get_fov__11TCameraCtrlFv();
f32 get_view_scale__11TCameraCtrlFv();
View_80252764 *TWindowSubStatusDisp__sub_80244364(void *);
void place_rect_at_head_or_slot__15TWindowFukidasiFPv(Fuki_802504C0 *);
void refresh_rect_placement__15TWindowFukidasiFPv(void *);
s32 TWindowFukidasi__sub_802511E4(Fuki_80250F70 *, f32 *, f32 *);
void TWindowFukidasi__sub_80251594(void *);
void TWindowFukidasi__sub_80251EC8(void *, View_80252764 *, u32);
int is_active__15TWindowFukidasiFPv(void *);
void TWindowSubStatusDisp__sub_80257BC0(void *, void *, View_80252764 *);
extern const f32 TWindowFukidasi__data_805DCD0C;
extern const f32 TWindowFukidasi__data_805DCD28;
extern const f32 TWindowFukidasi__data_805DCD30;
extern const f32 lbl_805DCD90;
extern const f32 lbl_805DCDB8;
extern const f32 lbl_805DCDBC;
extern const f32 lbl_805DCDC0;
void render__15TWindowFukidasiFPv(Fuki_80252764 *b);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void TObjCMHairMenu__sub_801E35C4(Prim_802521E8 *, s32, s32, f32);
s32 TWindowFukidasi__sub_802511E4(Fuki_80250F70 *, f32 *, f32 *);
s32 fn_80252CB0(void *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 xyz_distance(void *, void *);
extern const f64 TWindowFukidasi__data_8044ED70;
extern u8 *lbl_805D4DF0;
extern const f32 TWindowFukidasi__data_805DCD08;
extern const f32 lbl_805DCD78;
extern const f32 lbl_805DCD90;
void draw_tail__15TWindowFukidasiFPvPvUiPvf(Fuki_802521E8 *b, void *view, u32 color, f32 *off, f32 depth);
void TWindowFukidasi__sub_802523CC(struct Fukidasi_80252558 *, struct Slice_80252558 *, struct DrawCtx_80252558 *, f32, f32, f32, f32);
void set_global_param__8TObjFishFi(void *);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv();
void TWindowSubStatusDisp__sub_803DF160(int, u32);
extern void *lbl_805D63F0;
void TWindowFukidasi__sub_80252558(struct Fukidasi_80252558 *b, struct DrawCtx_80252558 *ctx, u32 argb, f32 *offset, f32 depth);
}

extern "C" {

#pragma push
#pragma fp_contract on
void draw_tail__15TWindowFukidasiFPvPvUiPvf(Fuki_802521E8 *b, void *view, u32 color, f32 *off, f32 depth) {
    f32 verts[6];
    f32 pos[3];
    Prim_802521E8 prim;
    u32 colors[3];
    f32 scr[2];
    f32 cx;
    f32 cy;
    f32 x0;
    f32 s;
    f32 y0;
    s32 angle;
    if (fn_80252CB0(b) != 0) {
        TWindowFukidasi__sub_802511E4((Fuki_80250F70 *)b, pos, scr);
        cx = b->center[0];
        cy = b->center[1];
        angle = TWindowFukidasi__data_8044ED70 * get_ad_end_text_start__10TObjPlayerFv(cy - scr[1], cx - scr[0]);
        s = TWindowFukidasi__data_805DCD08 / xyz_distance(lbl_805D4DF0 + 0x178, pos);
        x0 = s * TBoss8Dragon__sub_803D64DC(angle) + scr[0];
        y0 = s * TBoss8Dragon__sub_803D64C0(angle) + scr[1];
        prim.verts = verts;
        prim.flags = 0;
        prim.colors = colors;
        prim.count = 3;
        colors[2] = colors[1] = colors[0] = (color << 8) | (color >> 24);
        verts[0] = x0;
        verts[1] = y0;
        verts[2] = off[0] + (b->tail * (lbl_805DCD78 * TBoss8Dragon__sub_803D64DC(angle + 0x4000)) + cx);
        verts[3] = off[1] + (b->tail * (lbl_805DCD78 * TBoss8Dragon__sub_803D64C0(angle + 0x4000)) + cy);
        verts[4] = off[0] + (b->tail * (lbl_805DCD78 * TBoss8Dragon__sub_803D64DC(angle - 0x4000)) + cx);
        verts[5] = off[1] + (b->tail * (lbl_805DCD78 * TBoss8Dragon__sub_803D64C0(angle - 0x4000)) + cy);
        TObjCMHairMenu__sub_801E35C4(&prim, 3, 2, lbl_805DCD90 + b->f54);
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
extern const f32 TWindowFukidasi__data_805DCD0C;
extern const f32 TWindowFukidasi__data_805DCD30;
extern const f32 TWindowFukidasi__data_805DCD4C;
extern const f32 lbl_805DCD94;
extern const f32 lbl_805DCD98;
extern const f32 lbl_805DCD9C;
extern const f32 lbl_805DCDA4;
extern const f32 lbl_805DCDB0;
extern const f32 lbl_805DCDB4;
void TWindowFukidasi__sub_80252558(struct Fukidasi_80252558 *b, struct DrawCtx_80252558 *ctx, u32 argb, f32 *offset, f32 depth) {
    struct Slice_80252558 s;
    f32 width;
    f32 capY;
    f32 mid;
    f32 d;
    f32 t;
    width = b->size[0] + lbl_805DCD9C * b->size[1];
    s.f10 = 0.0f;
    s.f2c = 0.0f;
    s.f30 = 0.0f;
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    TWindowSubStatusDisp__sub_803DF160(1, argb);
    if (b->size[1] < lbl_805DCD98) {
        capY = TWindowFukidasi__data_805DCD0C * b->size[1];
    } else {
        capY = lbl_805DCD94;
    }
    s.z = TWindowFukidasi__data_805DCD4C / depth;
    s.y = b->position[1] + offset[1];
    s.rowHeight = capY;
    s.v = 0.0f;
    s.vh = capY * lbl_805DCDA4;
    s.y = ctx->pivot[1] + ctx->scale[1] * (s.y - ctx->pivot[1]);
    s.rowHeight *= ctx->scale[1];
    TWindowFukidasi__sub_802523CC(b, &s, ctx, offset[0], 0.0f, width, capY);
    s.y = (b->size[1] + (b->position[1] + offset[1])) - capY;
    s.y = ctx->pivot[1] + ctx->scale[1] * (s.y - ctx->pivot[1]);
    t = lbl_805DCDB0 - capY;
    s.v = t * lbl_805DCDA4;
    TWindowFukidasi__sub_802523CC(b, &s, ctx, offset[0], b->size[1] - capY, width, capY);
    d = b->size[1] - lbl_805DCD98;
    mid = d * ctx->scale[1];
    if (mid >= TWindowFukidasi__data_805DCD30) {
        f32 y = lbl_805DCD94 + b->position[1];
        s.y = y + offset[1];
        s.y = ctx->pivot[1] + ctx->scale[1] * (s.y - ctx->pivot[1]);
        s.v = lbl_805DCDB4;
        s.rowHeight = mid;
        TWindowFukidasi__sub_802523CC(b, &s, ctx, offset[0], lbl_805DCD94, width, d);
    }
    get_player__20TWindowSubStatusDispFv();
}
#pragma pop

#pragma push
#pragma fp_contract on
void render__15TWindowFukidasiFPv(Fuki_80252764 *b) {
    f32 off[2];
    View_80252764 *v;
    switch (b->phase) {
    case 0:
        TWindowFukidasi__sub_802511E4((Fuki_80250F70 *)b, NULL, b->head);
        place_rect_at_head_or_slot__15TWindowFukidasiFPv((Fuki_802504C0 *)b);
        b->center[0] = TWindowFukidasi__data_805DCD0C * b->anchor[0] + b->rect[0];
        b->center[1] = TWindowFukidasi__data_805DCD0C * b->anchor[1] + b->rect[1];
        b->phase = 1;
        break;
    case 2:
        refresh_rect_placement__15TWindowFukidasiFPv(b);
        break;
    case 4:
        refresh_rect_placement__15TWindowFukidasiFPv(b);
        break;
    case 6:
        refresh_rect_placement__15TWindowFukidasiFPv(b);
        break;
    case 8:
        place_rect_at_head_or_slot__15TWindowFukidasiFPv((Fuki_802504C0 *)b);
        break;
    case 9:
        break;
    }
    TWindowFukidasi__sub_80251594(b);
    v = TWindowSubStatusDisp__sub_80244364(b);
    v->sx /= get_view_scale__11TCameraCtrlFv();
    v->sy /= get_fov__11TCameraCtrlFv();
    off[0] = TWindowFukidasi__data_805DCD28 * b->tail;
    off[1] = lbl_805DCDB8 * b->tail;
    TWindowFukidasi__sub_80252558((struct Fukidasi_80252558 *)(b), (struct DrawCtx_80252558 *)(v), (u32)(0xFF000000), (f32 *)(off), lbl_805DCDBC + b->f54);
    draw_tail__15TWindowFukidasiFPvPvUiPvf((Fuki_802521E8 *)((Fuki_802521E8 *)b), (void *)(v), (u32)(0xFF000000), (f32 *)(off), lbl_805DCDC0 + b->f54);
    off[0] = TWindowFukidasi__data_805DCD30;
    off[1] = TWindowFukidasi__data_805DCD30;
    TWindowFukidasi__sub_80252558((struct Fukidasi_80252558 *)(b), (struct DrawCtx_80252558 *)(v), (u32)(b->color), (f32 *)(off), lbl_805DCDC0 + b->f54);
    draw_tail__15TWindowFukidasiFPvPvUiPvf((Fuki_802521E8 *)((Fuki_802521E8 *)b), (void *)(v), (u32)(b->color), (f32 *)(off), lbl_805DCD90 + b->f54);
    if (is_active__15TWindowFukidasiFPv(b) != 0) {
        TWindowSubStatusDisp__sub_80257BC0(b, b->f24, v);
        TWindowFukidasi__sub_80251EC8(b, v, b->color);
    }
}
#pragma pop

void TWindowFukidasi__sub_8025291C(u8 *arg0) {
  u8 temp_r0;
  temp_r0 = *((u8 *) (((s8 *) arg0) + 0x70));
  switch (temp_r0)
  {
    case 1:
      calc_text_size__15TWindowFukidasiFPvPv(arg0, ((u8 *) arg0) + 0x38);
      *((s32 *) (((s8 *) arg0) + 0x50)) = 6;
      clear_flag__15TWindowFukidasiFPv(arg0);
      set_flag2c_bit100__15TWindowFukidasiFPv(arg0);
      *((u8 *) (((s8 *) arg0) + 0x70)) = 2U;
    case 2:
      if (approach__15TWindowFukidasiFPvf(arg0, TWindowFukidasi__data_805DCCE8) != 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x70)) = 3U;
    }
      sync_display_pos__15TWindowFukidasiFPv(arg0);
      break;
    case 3:
      TWindowFukidasi__sub_80252C38(arg0);
      set_flag2c_bit100__15TWindowFukidasiFPv(arg0);
      *((u8 *) (((s8 *) arg0) + 0x70)) = 4U;
    case 4:
      if ((*((u8 *) (((s8 *) arg0) + 0x71))) & 8)
    {
      *((s16 *) (((s8 *) arg0) + 0x74)) = (s16) ((*((s16 *) (((s8 *) arg0) + 0x74))) - 1);
      *((f32 *) (((s8 *) arg0) + 0x58)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x58))) + TWindowFukidasi__data_805DCCF4);
      *((f32 *) (((s8 *) arg0) + 0x1C)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x1C))) + TWindowFukidasi__data_805DCCF4);
      if ((*((s16 *) (((s8 *) arg0) + 0x74))) < 0)
      {
        *((u8 *) (((s8 *) arg0) + 0x70)) = 7U;
      }
    }
      break;
    case 5:
      TWindowFukidasi__sub_80250314(arg0, ((u8 *) arg0) + 0x38);
      *((s32 *) (((s8 *) arg0) + 0x50)) = 6;
      clear_flag__15TWindowFukidasiFPv(arg0);
      set_flag2c_bit100__15TWindowFukidasiFPv(arg0);
      *((u8 *) (((s8 *) arg0) + 0x70)) = 6U;
    case 6:
      if (approach__15TWindowFukidasiFPvf(arg0, TWindowFukidasi__data_805DCD0C) != 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x70)) = 1U;
    }
      sync_display_pos__15TWindowFukidasiFPv(arg0);
      break;
    case 7:
      clear_flag__15TWindowFukidasiFPv(arg0);
      clear_flag2c_bit100__15TWindowFukidasiFPv(arg0);
      *((s32 *) (((s8 *) arg0) + 0x2C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x2C))) & 0xFFFFFFFE);
      *((u8 *) (((s8 *) arg0) + 0x71)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x71))) | 0x10);
      *((u8 *) (((s8 *) arg0) + 0x70)) = 8U;
    case 8:
      if (approach__15TWindowFukidasiFPvf(arg0, TWindowFukidasi__data_805DCD30) != 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x70)) = 9U;
    }
      sync_display_pos__15TWindowFukidasiFPv(arg0);
      break;
    case 9:
      queue_destruction__7TObjectFv(arg0);
      break;
  }
  TWindowFukidasi__sub_80251790(arg0);
  if (is_active__15TWindowFukidasiFPv(arg0) != 0)
  {
    update_window_entry_list(arg0, ((u8 *) arg0) + 0x24);
  }
}

}
