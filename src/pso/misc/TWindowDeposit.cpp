#include "types.h"

struct RecoveredGlobal_8024E548_lbl_804CEB70
{
  s32 value;
  u8 remaining[0x10];
};

struct RecoveredGlobal_8024E548___vt__14TWindowDeposit
{
  s32 value;
  u8 remaining[0x18];
};

extern "C" {
s32 setup_window_draw_context(void *, void *);
void render_status__14TWindowDepositFPvi(void *arg0, s32 arg1);
s32 draw_visible_window_entries(void *, void *, int);
void render__14TWindowDepositFv(s32 arg0);
f32 get_base_y__20TWindowSubStatusDispFf(f32);
f32 TWindowSubStatusDisp__sub_802877A4(f32);
s32 get_camera_id__11TCameraCtrlFv();
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
u32 calc_text_width(int);
void * get_array_entry__20TWindowSubStatusDispFPvi(s32 a0, s32 a1);
s32 save_position__17TWindowSubComCardFPv(void *);
s32 construct_base__9TWindowDDFPvPvsPv(void *, void *, void *, int);
s32 set_text_entry_string(int, int, int);
s32 get_window_layout_position(int);
extern RecoveredGlobal_8024E548_lbl_804CEB70 window_deposit_layout;
extern s32 __vt__14TWindowDeposit[];
extern s32 TWindowDeposit__name;
extern const f32 lbl_805DCC60;
extern const f32 lbl_805DCC64;
extern const f32 lbl_805DCC68;
extern const f32 lbl_805DCC6C;
extern const f32 lbl_805DCC70;
u8 *TWindowDeposit__ct(u8 *arg0, s32 arg1);
}

extern "C" {

void *__dt__14TWindowDepositFv(void *arg0, s16 arg1);
void render_status__14TWindowDepositFPvi(void *arg0, s32 arg1);
void run_task__14TWindowDepositFv(void* p);
void TWindowMainMenu__sub_8024E3CC(void);
void TWindowMainMenu__sub_8024E3D0(void);
int TWindowMainMenu__sub_8024E3D4(void* p);
int TWindowMainMenu__sub_8024E3E0(void* p);
int TWindowMainMenu__sub_8024E3F4(void* p);
void TWindowMainMenu__vt4(void);
void TWindowMainMenu__vt6(void);
int update_window_entry_list(void*, void*);
s32 draw_window_tab(s32, s32, s32, f32);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void * get_array_entry__20TWindowSubStatusDispFPvi(s32 a0 = 0, s32 a1 = 0);
int initialize_subwindow__9TWindowDDFPv(void*);

void render_status__14TWindowDepositFPvi(void *arg0, s32 arg1) {
    draw_window_tab(arg1, arg1 + 0x10, 3, *(f32 *)((s8 *)arg0 + 0x60));
}

void render__14TWindowDepositFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = setup_window_draw_context((void *)(arg0), (void *) (arg0 + 0x64));
    render_status__14TWindowDepositFPvi((void *)((void *) (arg0)), (s32)((int) (temp_r3)));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__14TWindowDepositFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

extern s32 __vt__14TWindowDeposit[];

void *__dt__14TWindowDepositFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TWindowDeposit;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef struct RecoveredGlobal_8024E548___vt__14TWindowDeposit RecoveredGlobal_8024E548___vt__14TWindowDeposit;
typedef struct RecoveredGlobal_8024E548_lbl_804CEB70 RecoveredGlobal_8024E548_lbl_804CEB70;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
u8 *TWindowDeposit__ct(u8 *arg0, s32 arg1) {
  u8 *temp_r30;
  u32 spC;
  s32 sp8;
  f32 temp_f31;
  s32 temp_r3;
  u32 temp_r3_2;
  u8 *temp_r31;
  construct_base__9TWindowDDFPvPvsPv((void *) arg0, (void *) (&window_deposit_layout.value), (void *) arg1, (int) get_window_layout_position((int) 0x29));
  *((s32 **) (((s8 *) arg0) + (((((0x18 & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu) & 0xFFFFFFFFFFFFFFFFu))) = &(*(RecoveredGlobal_8024E548___vt__14TWindowDeposit *)&__vt__14TWindowDeposit).value;
  *((s32 *) (((s8 *) arg0) + 0)) = (s32) TWindowDeposit__name;
  temp_r3 = TQuestVmDownLoadServer__sub_8006EF6C((int) 2);
  temp_r3_2 = calc_text_width((int) temp_r3);
  spC = temp_r3_2;
  sp8 = 0x43300000;
  temp_f31 = (f32) temp_r3_2;
  *((f32 *) (((s8 *) arg0) + 0x60)) = TWindowSubStatusDisp__sub_802877A4(lbl_805DCC60 + (lbl_805DCC64 + temp_f31));
  temp_r30 = (u8 *) ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi((s32)(arg0), (s32)(0)));
  temp_r31 = (u8 *) ((u8 *)get_array_entry__20TWindowSubStatusDispFPvi((s32)(arg0), (s32)(1)));
  set_text_entry_string((int) temp_r30, (int) temp_r3, (int) 0);
  *((f32 *) (((s8 *) temp_r31) + 8)) = (f32) (lbl_805DCC60 + (lbl_805DCC64 + (lbl_805DCC68 + temp_f31)));
  *((f32 *) (((s8 *) arg0) + 0x38)) = get_base_y__20TWindowSubStatusDispFf(*((f32 *) (((s8 *) arg0) + 0x60)));
  save_position__17TWindowSubComCardFPv((void *) arg0);
  if (get_camera_id__11TCameraCtrlFv() > 2)
  {
    *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) lbl_805DCC6C;
    *((f32 *) (((s8 *) arg0) + 0x68)) = (f32) lbl_805DCC6C;
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) lbl_805DCC70;
    *((f32 *) (((s8 *) arg0) + 0x68)) = (f32) lbl_805DCC70;
  }
  return arg0;
}

}
