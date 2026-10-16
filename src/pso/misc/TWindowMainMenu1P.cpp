#include "types.h"
#include "pso/misc/TWindowMainMenu1P.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TWindowCtrlMain.h"

struct RecoveredGlobal_80288838___vt__17TWindowMainMenu1P { s32 value; u8 remaining[0x24]; };
typedef char RecoveredGlobal_80288838___vt__17TWindowMainMenu1P_size[sizeof(RecoveredGlobal_80288838___vt__17TWindowMainMenu1P) == 0x28 ? 1 : -1];

extern "C" {
void TCameraCtrl__sub_800694A8(void);
void __dl__7TObjectFPv(s32);
u8 * __dt__15TWindowMainMenuFv(void *, s16);
extern s32 __vt__17TWindowMainMenu1P[];
u8 *__dt__17TWindowMainMenu1PFv(u8 *arg0, s16 arg1);
void TCameraCtrl__sub_800694A8(void);
extern const f32 lbl_805DD8A0;
extern const f32 lbl_805DD8A4;
extern const f32 lbl_805DD8A8;
extern const f32 lbl_805DD8AC;
extern const f32 lbl_805DD8B0;
extern const f32 lbl_805DD8B4;
extern const f32 lbl_805DD8B8;
extern const f32 lbl_805DD8BC;
extern const f32 lbl_805DD8C0;
extern const f32 lbl_805DD8C4;
extern const f32 lbl_805DD8C8;
}

extern "C" {

void *TWindowMainMenu1P__ct(void *arg0);
void TWindowMainMenu__ct(void *);
int TWindowMainMenu__sub_80263FE0(void*);
int handle_menu_selection__15TWindowMainMenuFPv(void*);

#pragma fp_contract on
void TWindowMainMenu1P::update_backdrop_transition() {
    u8 *arg0 = (u8 *)this;
  f32 temp_f1;
  s32 temp_r3;
  s32 temp_r3_2;
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x4C));
  if (!(temp_r3 & 1))
  {
    *((u8 *) (((s8 *) arg0) + 0x60)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x60))) - 1);
    *((u8 *) (((s8 *) arg0) + 0x61)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x61))) + -1);
    if (((s8) (*((u8 *) (((s8 *) arg0) + 0x60)))) < 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x60)) = 0U;
    }
    if (((s8) (*((u8 *) (((s8 *) arg0) + 0x61)))) < 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x61)) = 0U;
    }
    if ((((s8) (*((u8 *) (((s8 *) arg0) + 0x60)))) == 0) && (((s8) (*((u8 *) (((s8 *) arg0) + 0x61)))) == 0))
    {
      temp_r3_2 = *((s32 *) (((s8 *) arg0) + 0x4C));
      if (temp_r3_2 & 2)
      {
        *((s32 *) (((s8 *) arg0) + 0x4C)) = (s32) (temp_r3_2 & 0xFFFFFFFD);
        TCameraCtrl__sub_800694A8();
      }
    }
  }
  else
    if (temp_r3 & 8)
  {
    *((u8 *) (((s8 *) arg0) + 0x60)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x60))) + 1);
    *((u8 *) (((s8 *) arg0) + 0x61)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x61))) - 1);
    if (((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x60))))) > lbl_805DD8A0)
    {
      *((u8 *) (((s8 *) arg0) + 0x60)) = 6U;
    }
    if (((s8) (*((u8 *) (((s8 *) arg0) + 0x61)))) < 0)
    {
      *((u8 *) (((s8 *) arg0) + 0x61)) = 0U;
    }
  }
  else
  {
    *((u8 *) (((s8 *) arg0) + 0x60)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x60))) + 1);
    *((u8 *) (((s8 *) arg0) + 0x61)) = (u8) ((*((u8 *) (((s8 *) arg0) + 0x61))) + 1);
    if (((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x60))))) > lbl_805DD8A4)
    {
      *((u8 *) (((s8 *) arg0) + 0x60)) = 3U;
    }
    if (((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x61))))) > lbl_805DD8A4)
    {
      *((u8 *) (((s8 *) arg0) + 0x61)) = 3U;
    }
  }
  *((f32 *) (((s8 *) arg0) + 0x6C)) = (f32) ((lbl_805DD8AC * ((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x60)))))) + lbl_805DD8A8);
  *((f32 *) (((s8 *) arg0) + 0x70)) = (f32) (-((lbl_805DD8B4 * ((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x61)))))) - lbl_805DD8B0));
  TWindowCtrlMain::set_depth(lbl_805DD8B8 * ((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x60))))), *((s32 *) (((s8 *) arg0) + 0x54)));
  TWindowCtrlMain::set_field18(-((lbl_805DD8C0 * ((f32) ((s8) (*((u8 *) (((s8 *) arg0) + 0x61)))))) - lbl_805DD8BC), *((s32 *) (((s8 *) arg0) + 0x54)));
  *((f32 *) (((s8 *) arg0) + 0xA4)) = (f32) ((lbl_805DD8C4 - (*((f32 *) (((s8 *) arg0) + 0x6C)))) / lbl_805DD8A8);
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x70))) / lbl_805DD8B0);
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0xA8));
  if ((*((f32 *) (((s8 *) arg0) + 0xA4))) < (*((f32 *) (((s8 *) arg0) + 0xA8))))
  {
    *((f32 *) (((s8 *) arg0) + 0xA4)) = *((f32 *) (((s8 *) arg0) + 0xA8));
  }
  *((f32 *) (((s8 *) arg0) + 0xA8)) = (f32) (lbl_805DD8C8 * (*((f32 *) (((s8 *) arg0) + 0xA4))));
  if ((*((s32 *) (((s8 *) arg0) + 0x4C))) & 2)
  {
    ((TCameraCtrl *)(((u8 *) arg0) + 0x64))->apply_view_params_if_flagged();
  }
}

void TWindowMainMenu1P::render() {  }
void TWindowMainMenu1P::run_task() { handle_menu_selection__15TWindowMainMenuFPv(this); TWindowMainMenu__sub_80263FE0(this); update_backdrop_transition(); }

extern s32 __vt__17TWindowMainMenu1P[];
extern const f32 lbl_805DD8A8;
extern const f32 lbl_805DD8B0;
extern void *TWindowMainMenu1P__name;
extern const f32 lbl_805DD8C4;
extern const f32 lbl_805DD8BC;
extern const f32 lbl_805DD8CC;
extern const f32 lbl_805DD8D0;
extern const f32 lbl_805DD8D4;
extern const f32 lbl_805DD8D8;
extern const f32 lbl_805DD8C8;

u8 *__dt__17TWindowMainMenu1PFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80288838___vt__17TWindowMainMenu1P *)&__vt__17TWindowMainMenu1P).value;
        if (*(s32 *)((s8 *)arg0 + 0x4C) & 2) {
            TCameraCtrl__sub_800694A8();
        }
        __dt__15TWindowMainMenuFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

void *TWindowMainMenu1P__ct(void *arg0) {
    TWindowMainMenu__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TWindowMainMenu1P;
    *(void **)((s8 *)arg0 + 0x0) = TWindowMainMenu1P__name;
    *(u8 *)((s8 *)arg0 + 0x60) = 0;
    *(u8 *)((s8 *)arg0 + 0x61) = 0;
    *(f32 *)((s8 *)arg0 + 0x6C) = lbl_805DD8A8;
    *(f32 *)((s8 *)arg0 + 0x70) = lbl_805DD8B0;
    *(f32 *)((s8 *)arg0 + 0x8C) = lbl_805DD8C4;
    *(f32 *)((s8 *)arg0 + 0x90) = lbl_805DD8BC;
    *(f32 *)((s8 *)arg0 + 0x94) = lbl_805DD8CC;
    *(f32 *)((s8 *)arg0 + 0x98) = lbl_805DD8CC;
    *(f32 *)((s8 *)arg0 + 0x9C) = lbl_805DD8D0;
    *(f32 *)((s8 *)arg0 + 0xA0) = lbl_805DD8D4;
    *(f32 *)((s8 *)arg0 + 0xA4) = lbl_805DD8D8;
    *(f32 *)((s8 *)arg0 + 0xA8) = lbl_805DD8C8;
    return arg0;
}

}
