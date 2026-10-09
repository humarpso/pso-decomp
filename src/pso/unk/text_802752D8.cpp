#include "types.h"
extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void draw_selection_bar(void *, void *, s32);
volatile char get_type__20TWindowSubStatusDispFPv(void *);
s16 get_selected_index__20TWindowShortListCtrlFPv(void *);
extern s32 actor_frame_tick;
void draw_card_list_selection(u8 *arg0, u8 *arg1);
}

extern "C" {

void draw_card_list_selection(u8 *arg0, u8 *arg1) {
  s16 temp_r0;
  s16 temp_r31;
  u16 *temp_r3;
  if (!(actor_frame_tick & 0x10))
  {
    temp_r31 = get_selected_index__20TWindowShortListCtrlFPv(arg0);
    temp_r0 = temp_r31 - (get_type__20TWindowSubStatusDispFPv(*((u8 **) (((s8 *) arg0) + 0x8C))) * 7);
    if ((temp_r0 >= 0) && (temp_r0 < 7))
    {
      temp_r3 = (u16 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) temp_r0);
      if ((*temp_r3) & 1)
      {
        draw_selection_bar(arg1, temp_r3, 1);
      }
    }
  }
}

}
