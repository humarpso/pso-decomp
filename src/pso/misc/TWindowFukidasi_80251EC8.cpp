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

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TWindowFukidasi__sub_80250314(void *, void *);
void TWindowFukidasi__sub_80250380(void *, void *);
void sync_display_pos__15TWindowFukidasiFPv(void *);
s32 approach__15TWindowFukidasiFPvf(void *, f32);
void TWindowFukidasi__sub_80251790(void *);
void set_flag2c_bit100__15TWindowFukidasiFPv(void *);
void clear_flag2c_bit100__15TWindowFukidasiFPv(void *);
void TWindowFukidasi__sub_80252C38(void *);
int is_active__15TWindowFukidasiFPv(void *);
void clear_flag__15TWindowFukidasiFPv(void *);
void TWindowSubStatusDisp__sub_80257C28(void *, void *);
extern const f32 TWindowFukidasi__data_805DCCE8;
extern const f32 TWindowFukidasi__data_805DCCF4;
extern const f32 TWindowFukidasi__data_805DCD0C;
extern const f32 TWindowFukidasi__data_805DCD30;
void TWindowFukidasi__sub_8025291C(u8 *arg0);
f32 get_fov__11TCameraCtrlFv();
f32 get_view_scale__11TCameraCtrlFv();
View_80252764 *TWindowSubStatusDisp__sub_80244364(void *);
void TWindowFukidasi__sub_802504C0(Fuki_802504C0 *);
void TWindowFukidasi__sub_80251028(void *);
s32 TWindowFukidasi__sub_802511E4(Fuki_80250F70 *, f32 *, f32 *);
void TWindowFukidasi__sub_80251594(void *);
void TWindowFukidasi__sub_80251EC8(void *, View_80252764 *, u32);
void TWindowFukidasi__sub_802521E8(Fuki_802521E8 *, void *, u32, f32 *, f32);
void TWindowFukidasi__sub_80252558(void *, View_80252764 *, u32, f32 *, f32);
int is_active__15TWindowFukidasiFPv(void *);
void TWindowSubStatusDisp__sub_80257BC0(void *, void *, View_80252764 *);
extern const f32 TWindowFukidasi__data_805DCD0C;
extern const f32 TWindowFukidasi__data_805DCD28;
extern const f32 TWindowFukidasi__data_805DCD30;
extern const f32 lbl_805DCD90;
extern const f32 lbl_805DCDB8;
extern const f32 lbl_805DCDBC;
extern const f32 lbl_805DCDC0;
void TWindowFukidasi__sub_80252764(Fuki_80252764 *b);
}

extern "C" {

#pragma push
#pragma fp_contract on
void TWindowFukidasi__sub_80252764(Fuki_80252764 *b) {
    f32 off[2];
    View_80252764 *v;
    switch (b->phase) {
    case 0:
        TWindowFukidasi__sub_802511E4((Fuki_80250F70 *)b, NULL, b->head);
        TWindowFukidasi__sub_802504C0((Fuki_802504C0 *)b);
        b->center[0] = TWindowFukidasi__data_805DCD0C * b->anchor[0] + b->rect[0];
        b->center[1] = TWindowFukidasi__data_805DCD0C * b->anchor[1] + b->rect[1];
        b->phase = 1;
        break;
    case 2:
        TWindowFukidasi__sub_80251028(b);
        break;
    case 4:
        TWindowFukidasi__sub_80251028(b);
        break;
    case 6:
        TWindowFukidasi__sub_80251028(b);
        break;
    case 8:
        TWindowFukidasi__sub_802504C0((Fuki_802504C0 *)b);
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
    TWindowFukidasi__sub_80252558(b, v, 0xFF000000, off, lbl_805DCDBC + b->f54);
    TWindowFukidasi__sub_802521E8((Fuki_802521E8 *)b, v, 0xFF000000, off, lbl_805DCDC0 + b->f54);
    off[0] = TWindowFukidasi__data_805DCD30;
    off[1] = TWindowFukidasi__data_805DCD30;
    TWindowFukidasi__sub_80252558(b, v, b->color, off, lbl_805DCDC0 + b->f54);
    TWindowFukidasi__sub_802521E8((Fuki_802521E8 *)b, v, b->color, off, lbl_805DCD90 + b->f54);
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
      TWindowFukidasi__sub_80250380(arg0, ((u8 *) arg0) + 0x38);
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
    TWindowSubStatusDisp__sub_80257C28(arg0, ((u8 *) arg0) + 0x24);
  }
}

}
