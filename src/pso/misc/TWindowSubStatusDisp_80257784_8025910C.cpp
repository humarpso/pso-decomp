#include "types.h"
#include "pso/ui/ItemListRow.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_flag_4_set__20TWindowSubStatusDispFPv(void *p);
void TWindowSubStatusDisp__sub_80259814(void *p);
void reset_transform_state__10TObjPlayerFv();
void init_xyz_limits__10TObjPlayerFv();
u32 TWindowSubStatusDisp__sub_80144D68(s32);
s32 get_field24__11TWindowCtrlFv();
s32 is_flag_4_set__20TWindowSubStatusDispFPv(void *p);
void TWindowSubStatusDisp__sub_8024FD8C(void *, s32, s32, s32, f32);
void set_text_draw_params(void *, s32, s32, f32, f32);
void TWindowSubStatusDisp__sub_8025941C(s32, u8 *, s32, s32, f32);
extern const f32 lbl_805DCF14;
extern const f32 lbl_805DCF20;
extern const f32 lbl_805DCF24;
extern const f32 lbl_805DCF28;
extern const f32 lbl_805DCF2C;
void draw_item_list_row(ItemListRow *row, ItemListWindowView *win);
}

extern "C" {

void* get_entry_ptr__20TWindowSubStatusDispFi(int a0);
void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2);
void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2);
s32 TItemData__sub_8010C52C(void *);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowSubStatusDisp__sub_80228F5C(s32);
M2C_UNK text_builder_reset();
M2C_UNK select_item_icon__20TWindowSubStatusDispFPviUcUci(void *, s32, u8, u8, s32);
s32 TWindowSubStatusDisp__sub_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);
M2C_UNK forward_message__6TLobbyFiUi(s32, void *);
s32 get_camera_id__11TCameraCtrlFv();
s32 get_item_data__6TLobbyFUi(void *);
M2C_UNK update_item_colors__20TWindowSubStatusDispFPvi(void *, void *);

extern const f32 lbl_805DCF08;

void set_ground_item__20TWindowSubStatusDispFPvPvi(void *arg0, void *arg1, s32 arg2) {
    s32 temp_r31;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    temp_r31 = get_item_data__6TLobbyFUi(arg1);
    select_item_icon__20TWindowSubStatusDispFPviUcUci(arg0, temp_r31, M2C_FIELD(arg1, u8 *, 0), M2C_FIELD(arg1, u8 *, 1), TItemData__sub_8010C52C(arg1));
    forward_message__6TLobbyFiUi(TLobby__sub_8001DC24(), arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (get_camera_id__11TCameraCtrlFv() <= 2) {
        text_builder_reset();
        TWindowSubStatusDisp__sub_80228F5C(M2C_FIELD(arg1, s32 *, 0x10));
        M2C_FIELD(arg0, s32 *, 0x24) = TWindowSubStatusDisp__sub_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    update_item_colors__20TWindowSubStatusDispFPvi(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

extern const f32 lbl_805DCF0C;

void init_display__20TWindowSubStatusDispFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF0C;
    M2C_FIELD(arg0, s8 *, 0x1C) = 0x33;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0x33;
    M2C_FIELD(arg0, s32 *, 0x20) = TWindowSubStatusDisp__sub_80259268(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}

    extern unsigned char lbl_8044EE60[];
void* get_entry_ptr__20TWindowSubStatusDispFi(int a0) {  return (char*)lbl_8044EE60 + (unsigned char)(a0) * 8; }

typedef struct ItemListRow ItemListRow;
typedef struct ItemListPosition ItemListPosition;
typedef struct ItemListWindowView ItemListWindowView;
#pragma fp_contract on
void draw_item_list_row(ItemListRow *row, ItemListWindowView *win) {
  ItemListPosition pos;
  ItemListRow *new_var;
  f32 y;
  f32 depth;
  s32 style;
  if (is_flag_4_set__20TWindowSubStatusDispFPv(row) != 0)
  {
    y = win->y + row->y;
    if (((!((row->height + y) < win->clip_top)) && (!((win->y + row->y) > win->clip_bottom))) && (win->visible >= 0))
    {
      pos.x = win->x + row->x;
      pos.y = win->y + row->y;
      depth = lbl_805DCF20 / (lbl_805DCF24 + win->depth);
      if (row->flags & 0x200)
      {
        TWindowSubStatusDisp__sub_8025941C((s32) win, (u8 *) (&pos), row->status_icon, -1, depth);
        pos.x += lbl_805DCF14;
        TWindowSubStatusDisp__sub_8025941C((s32) win, (u8 *) (&pos), row->category_icon, -1, depth);
        pos.x += lbl_805DCF14;
        TWindowSubStatusDisp__sub_8025941C((s32) win, (u8 *) (&pos), (u8) row->status_style, -1, depth);
        pos.x += lbl_805DCF14;
      }
      else
      {
        init_xyz_limits__10TObjPlayerFv();
        if (row->flags & 0x100)
        {
          pos.x += lbl_805DCF14;
          TWindowSubStatusDisp__sub_8025941C((s32) win, (u8 *) (&pos), row->status_icon, row->status_style, depth);
        }
        else
        {
          TWindowSubStatusDisp__sub_8025941C((s32) win, (u8 *) (&pos), row->status_icon, row->status_style, depth);
          pos.x += lbl_805DCF14;
        }
        reset_transform_state__10TObjPlayerFv();
        TWindowSubStatusDisp__sub_8025941C((s32) win, (u8 *) (&pos), row->category_icon, row->category_style, depth);
        pos.x += lbl_805DCF14;
      }
      new_var = row;
      if (new_var->flags & 0x1000)
      {
        set_text_draw_params(win, 1, 0, depth, win->text_clip);
      }
      else
      {
        set_text_draw_params(win, 1, 1, depth, lbl_805DCF28);
      }
      if (new_var->flags & 0x400)
      {
        pos.x = (lbl_805DCF2C * win->width) + win->x;
        pos.x = -((lbl_805DCF2C * ((f32) TWindowSubStatusDisp__sub_80144D68(new_var->label))) - pos.x);
      }
      if (row->flags & 0x800)
      {
        style = get_field24__11TWindowCtrlFv();
      }
      else
      {
        style = new_var->style;
      }
      if (new_var->flags & 0x1000)
      {
        TWindowSubStatusDisp__sub_8024FD8C(&pos, row->label, style, 0, lbl_805DCF28);
      }
      else
      {
        TWindowSubStatusDisp__sub_8024FD8C(&pos, new_var->label, style, 1, lbl_805DCF28);
      }
      f32 width = (f32) TWindowSubStatusDisp__sub_80144D68(new_var->suffix);
      pos.x = (win->x + win->width) - width;
      TWindowSubStatusDisp__sub_8024FD8C(&pos, row->suffix, new_var->suffix_style, 1, lbl_805DCF28);
    }
  }
}

void TWindowSubStatusDisp__sub_80259814(void *p) {
    if (is_flag_4_set__20TWindowSubStatusDispFPv(p)) return;
}

}
