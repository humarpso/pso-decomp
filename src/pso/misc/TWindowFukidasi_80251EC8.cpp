#include "types.h"
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
}

extern "C" {

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
