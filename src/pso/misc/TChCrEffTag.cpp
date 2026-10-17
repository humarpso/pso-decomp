#include "pso/TChCrEffTag.h"

#include "types.h"

#include <stddef.h>
struct Stack_8029AA74 {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_8029AA74_lbl_804652A4 {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
s32 TChCrEffTagStr__sub_8029AED0(int);
u32 create_str__11TChCrEffTagFPvPvPv(void *, int, void *);
extern RecoveredGlobal_8029AA74_lbl_804652A4 lbl_804652A4;
extern s32 TChCrEffTag__selected_heading;
extern const f32 lbl_805DDC90;
extern const f32 lbl_805DDC94;
int restore_saved_depth_alpha_state(void);
int draw_chcr_tag_heading_frame(void*);
int set_depth_buffer_settings_1__Fv(void*);

void TChCrEffTag::render() { set_depth_buffer_settings_1__Fv(this); draw_chcr_tag_frame(); draw_chcr_tag_heading_frame(this); restore_saved_depth_alpha_state(); }
typedef char RecoveredGlobal_8029AA74_lbl_804652A4_size[sizeof(RecoveredGlobal_8029AA74_lbl_804652A4) == 0x34 ? 1 : -1];
void TChCrEffTag::refresh_label() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_8029AA74, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8029AA74, spC) == 0x4) ? 1 : -1];
    Stack_8029AA74 stack;
    s32 temp_r0;
    u32 temp_r3;
    temp_r3 = *(u32 *)&this->label;
    if (temp_r3 != 0U) {
        TChCrEffTagStr__sub_8029AED0((int) (temp_r3));
        *(u32 *)&this->label = 0U;
    }
    this->heading = (s32) TChCrEffTag__selected_heading;
    temp_r0 = this->heading;
    if (temp_r0 >= 0) {
        stack.sp8 = lbl_805DDC90;
        stack.spC = lbl_805DDC94;
        *(u32 *)&this->label = create_str__11TChCrEffTagFPvPvPv((void *) (arg0), (int) (*(s32 *)((s8 *)(&lbl_804652A4.value) + (temp_r0 * 4))), (void *) (&stack.sp8));
    }
}

s32 get_creation_sprite_id__14TObjCMMainMenuFl(int);
extern const f32 lbl_805DDC98,lbl_805DDC9C,lbl_805DDCA0,lbl_805DDCA4,lbl_805DDCA8;
}
#pragma push
#pragma fp_contract on
void TChCrEffTag::run_task()
{
  f32 temp_f0;
  f32 temp_f0_2;
  f32 temp_f1;
  f32 temp_f2;
  f32 temp_f3;
  s32 temp_r0;
  if (((s32) heading) != ((s32) TChCrEffTag__selected_heading))
  {
    refresh_label();
  }
  temp_r0 = heading;
  if (temp_r0 >= 0)
  {
    targetWidth = (f32) (lbl_805DDC98 + ((f32) get_creation_sprite_id__14TObjCMMainMenuFl((int) ((s32*)&lbl_804652A4)[temp_r0])));
  }
  width = width;
  temp_f2 = width;
  temp_f3 = targetWidth;
  temp_f0 = lbl_805DDC9C + temp_f2;
  if (temp_f0 < temp_f3)
  {
    width = temp_f0;
  }
  else
  {
    temp_f0_2 = temp_f2 - lbl_805DDC9C;
    if (temp_f0_2 > temp_f3)
    {
      width = temp_f0_2;
    }
    else
    {
      width = (f32) ((lbl_805DDCA0 * (temp_f3 - temp_f2)) + temp_f2);
    }
  }
  temp_f1 = width;
  if (temp_f1 < lbl_805DDCA4)
  {
    width = (f32) lbl_805DDCA4;
    return;
  }
  if ((temp_f3 && temp_f3) && temp_f3)
  {
  }
  if (temp_f1 > lbl_805DDCA8)
  {
    width = (f32) lbl_805DDCA8;
  }
}
#pragma pop

TChCrEffTag::~TChCrEffTag() {}
