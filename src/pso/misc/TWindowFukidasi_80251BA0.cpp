#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct RecoveredGlobal_80251BA0_lbl_804CF080
{
  M2C_UNK value;
  u8 remaining[0x20];
};

extern "C" {
M2C_UNK TWindowSubStatusDisp__sub_80257D44(void *, void *, int);
f32 get_card_window_scale__20TWindowSubStatusDispFi(int);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 play_sound_effect(int, int, int, int);
u32 strnlen__19TWindowKeyBoardSoftFPvUi(void *, int);
s32 refresh_status_display__9TWindowDDFv(int);
s32 init_flags__15TWindowFukidasiFPvi(void *, void *);
s32 clear_flag__15TWindowFukidasiFPv(void *);
s32 TWindowSubStatusDisp__sub_80257CB8(void *);
s32 TWindowSubStatusDisp__sub_8025A9C0(int, f32);
s32 TWindowSubStatusDisp__sub_8025AC50(int, void *, int);
extern RecoveredGlobal_80251BA0_lbl_804CF080 lbl_804CF080;
extern const f32 lbl_805DCCEC;
extern const f32 lbl_805DCCF0;
extern const f32 TWindowFukidasi__data_805DCD30;
extern const f32 lbl_805DCD50;
void set_text__15TWindowFukidasiFPvii(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef struct RecoveredGlobal_80251BA0_lbl_804CF080 RecoveredGlobal_80251BA0_lbl_804CF080;
#pragma fp_contract on
void set_text__15TWindowFukidasiFPvii(u8 *arg0, s32 arg1, s32 arg2) {
  u32 new_var;
  u8 *temp_r3;
  init_flags__15TWindowFukidasiFPvi((void *) arg0, (void *) arg2);
  clear_flag__15TWindowFukidasiFPv((void *) arg0);
  if (((u8) (*((u8 *) (((s8 *) arg0) + 0x72)))) != 0)
  {
    *((u8 *) (((s8 *) arg0) + 0x72)) = 0U;
    TWindowSubStatusDisp__sub_80257CB8((void *) (arg0 + 0x24));
    TWindowSubStatusDisp__sub_80257D44((void *) (arg0 + 0x24), (void *) (&lbl_804CF080.value), (int) (*((s16 *) (((s8 *) arg0) + 0x20))));
  }
  temp_r3 = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
  if (arg2 & 1)
  {
    TWindowSubStatusDisp__sub_8025AC50((int) temp_r3, (void *) arg1, (int) 0x20);
  }
  else
  {
    TWindowSubStatusDisp__sub_8025AC50((int) temp_r3, (void *) arg1, (int) 0);
  }
  if (arg2 & 4)
  {
    *((u16 *) (((s8 *) temp_r3) + 0)) = (u16) ((*((u16 *) (((s8 *) temp_r3) + 0))) | 0x40);
    refresh_status_display__9TWindowDDFv((int) temp_r3);
  }
  else
  {
    TWindowSubStatusDisp__sub_8025A9C0((int) temp_r3, (f32) lbl_805DCD50);
  }
  if (arg2 & 0x80)
  {
    *((u16 *) (((s8 *) temp_r3) + 0)) = (u16) ((*((u16 *) (((s8 *) temp_r3) + 0))) | 0x200);
  }
  else
  {
    *((u16 *) (((s8 *) temp_r3) + 0)) = (u16) ((*((u16 *) (((s8 *) temp_r3) + 0))) & 0xFFFFFDFF);
  }
  *((s32 *) (((s8 *) temp_r3) + 0x24)) = 0xFF000000;
  new_var = strnlen__19TWindowKeyBoardSoftFPvUi((void *) arg1, (int) 0x100);
  *((s16 *) (((s8 *) arg0) + 0x74)) = (s16) ((lbl_805DCCF0 * ((f32) new_var)) + lbl_805DCCEC);
  if (get_card_window_scale__20TWindowSubStatusDispFi((int) ((s32) (*((s16 *) (((s8 *) arg0) + 0x20))))) > TWindowFukidasi__data_805DCD30)
  {
    *((s32 *) (((s8 *) arg0) + 0x5C)) = 0;
  }
  play_sound_effect((int) 0x53705, (int) 0, (int) 0, (int) 0);
  if (((u8) (*((u8 *) (((s8 *) arg0) + 0x70)))) != 0)
  {
    *((u8 *) (((s8 *) arg0) + 0x70)) = 5U;
  }
}

}
