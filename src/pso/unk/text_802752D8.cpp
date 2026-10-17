#include "types.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowShortListCtrl.h"
#include "pso/misc/TWindowSubStatusDisp.h"
extern "C" {
void draw_selection_bar(u8 *arg0, u8 *arg1, s32 arg2);
volatile char get_type__20TWindowSubStatusDispFv(void *);
extern s32 actor_frame_tick;
void TWindowSubComCardList::draw_card_list_selection(u8 *arg1) {
  s16 temp_r0;
  s16 temp_r31;
  u16 *temp_r3;
  if (!(actor_frame_tick & 0x10))
  {
    temp_r31 = ((TWindowSubComCardList *)((u8 *)this))->get_selected_index();
    temp_r0 = temp_r31 - (get_type__20TWindowSubStatusDispFv(*((u8 **) (((s8 *) ((u8 *)this)) + 0x8C))) * 7);
    if ((temp_r0 >= 0) && (temp_r0 < 7))
    {
      temp_r3 = (u16 *) ((TUnk_804CE018 *)((u8 *)this))->get_array_entry((s32) temp_r0);
      if ((*temp_r3) & 1)
      {
        draw_selection_bar(arg1, (u8 *)temp_r3, 1);
      }
    }
  }
}

}
