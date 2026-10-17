#include "types.h"
#include "pso/system/memory.h"
#include "pso/misc/TWindowSubStatusDisp.h"

struct RecoveredGlobal_8025A0A4_lbl_804CF9E0 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80259D3C_lbl_804CF9C8 {
    s32 value;
    u8 remaining[0x14];
};

struct Pos_80259A84
{
  f32 x;
  f32 y;
  u8 pad[0x18];
};

extern "C" {
f32 fabs_float(f32, f32);
s32 play_persistent_sound(s32 id, s32 a1, u32 src, s32 a3, s32 flags);
extern const f32 lbl_805DCF58;
extern const f32 lbl_805DCF5C;
extern const f32 lbl_805DCF60;
extern const f32 lbl_805DCF64;
void set_status_entry_target(void *arg0, s32 arg1);
extern s32 lbl_804CF9E0[];
void reset_entry__20TWindowSubStatusDispFPv(void*, int);
extern s32 lbl_804CF9C8[];
u8 *TWindowSubStatusDisp__sub_80259D3C(u8 *arg0, u8 *arg1, s32 arg2);
u8 get_font_char_advance();
s32 map_char_to_font_code(s32);
extern const f32 lbl_805DCF30;
extern const f32 lbl_805DCF34;
extern const f32 lbl_805DCF38;
extern const f32 lbl_805DCF3C;
void draw_right_aligned_number(void *arg0);
u8 get_small_font_glyph_width();
s32 TWindowSubStatusDisp__sub_800FC248(s32);
s32 build_small_font_glyph_quad(s32, Pos_80259A84 *);
s32 render_forward__20TWindowSubStatusDispFPv();
s32 set_glyph_quad_extents(s32, Pos_80259A84 *);
s32 calc_gauge_scale__20TWindowSubStatusDispFPvPvi(s32, Pos_80259A84 *, s32);
s32 end_render_forward__20TWindowSubStatusDispFPv();
s32 try_open__19TWindowKeyBoardSoftFii(void *, Pos_80259A84 *);
void begin_screen_draw(s32 arg0);
s32 draw_textured_quad_at_depth(Pos_80259A84 *, f32);
void set_draw_texture_and_color(s32 idx, s32 arg1);
void render_numeric_digit_entries(u8 *arg0, u8 *arg1);
void TWindowSubStatusDisp__sub_80259CE0(void);
void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1);
void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1);
s32 deleting_destructor__20TWindowSubStatusDispFs(void *, s32);

    extern unsigned char lbl_804CF9B0[];
    extern const float lbl_805DCF14;
void*TWindowSubStatusDisp::reset_entry(int a1, int a2) { reset_entry__20TWindowSubStatusDispFPv(this, a2); *(int*)((char*)this + 0x4) = (int)lbl_804CF9B0; *(float*)((char*)this + 0x14) = lbl_805DCF14; *(unsigned char*)((char*)this + 0x1c) = 51; *(unsigned char*)((char*)this + 0x1d) = 51; *(int*)((char*)this + 0x20) = 0; *(int*)((char*)this + 0x24) = 0; *(int*)((char*)this + 0x28) = -1; *(int*)((char*)this + 0x2c) = -1; *(int*)((char*)this + 0x30) = -1; *(int*)((char*)this + 0x34) = -1; *(int*)((char*)this + 0x18) = 0; return this; }

void draw_right_aligned_number(void *arg0) {
    s32 n;
    n = *(s32 *)((s8 *)arg0 + 0x20);
    if (*(u16 *)((s8 *)arg0 + 0) & 4) {
        n /= 10;
        *(f32 *)((s8 *)arg0 + 0x10) = lbl_805DCF30;
        *(f32 *)((s8 *)arg0 + 0x14) = lbl_805DCF34;
        while (n > 0) {
            n /= 10;
            *(f32 *)((s8 *)arg0 + 0x10) += lbl_805DCF30;
        }
        return;
    }
    *(f32 *)((s8 *)arg0 + 0x14) = lbl_805DCF38;
    if (n <= 0) {
        map_char_to_font_code(0x30);
        *(f32 *)((s8 *)arg0 + 0x10) = get_font_char_advance();
        return;
    }
    *(f32 *)((s8 *)arg0 + 0x10) = lbl_805DCF3C;
    while (n > 0) {
        map_char_to_font_code((u16)(n % 10) + 0x30);
        *(f32 *)((s8 *)arg0 + 0x10) += get_font_char_advance();
        n /= 10;
    }
}

typedef struct Pos_80259A84 Pos_80259A84;
#pragma fp_contract on
void render_numeric_digit_entries(u8 *arg0, u8 *arg1) {
  f32 t;
  Pos_80259A84 pos;
  f32 x;
  f32 y;
  f32 scale;
  s32 n;
  s32 mode;
  s32 g;
  s32 r;
  u8 d;
  f32 w;
  f32 h;
  h = *((f32 *) (((s8 *) arg0) + 0xC));
  w = *((f32 *) (((s8 *) arg0) + 8));
  t = (h / 21.0f) + (w / (*((f32 *) (((s8 *) arg1) + 0x18))));
  t *= 7.5f;
  t = 17.0f * (((f32) (*((s32 *) (((s8 *) arg1) + 0x30)))) - t);
  if (t <= 0.0f)
  {
    return;
  }
  mode = ((*((u16 *) (((s8 *) arg0) + 0))) >> 2) & 1;
  n = *((s32 *) (((s8 *) arg0) + 0x20));
  x = (*((f32 *) (((s8 *) arg1) + 0x10))) + w;
  y = (*((f32 *) (((s8 *) arg1) + 0x14))) + h;
  scale = (-1.0f) / ((0.299f * (*((f32 *) (((s8 *) arg0) + 0x18)))) + (*((f32 *) (((s8 *) arg1) + 0x38))));
  switch (mode)
  {
    case 0:
      TWindowSubStatusDisp::reset_gauge(0);
      arg1 = arg1;
      break;
    case 1:
      begin_screen_draw(1);
      render_forward__20TWindowSubStatusDispFPv();
      set_draw_texture_and_color(0, *((s32 *) (((s8 *) arg0) + 0x1C)));
      break;
  }
  do
  {
    if (n < 0)
    {
      n = 0;
    }
    d = n % 10;
    switch (mode)
    {
      if (1)
      {
        case 0:
          r = calc_gauge_scale__20TWindowSubStatusDispFPvPvi(((u8 (*)(u16)) map_char_to_font_code)(d + 0x30), &pos, *((s32 *) (((s8 *) arg0) + 0x1C)));
          pos.y = y;
          x -= (u8) r;
          pos.x = x;
          set_glyph_quad_extents(r, &pos);
          break;
      }
      case 1:
        g = TWindowSubStatusDisp__sub_800FC248(d + 0x30);
        x -= get_small_font_glyph_width();
        pos.y = y;
        pos.x = x;
        build_small_font_glyph_quad(g, &pos);
        break;
    }
    if (try_open__19TWindowKeyBoardSoftFii(arg1, &pos) != 0)
    {
      draw_textured_quad_at_depth(&pos, scale);
    }
  }
  while ((n /= 10) > 0);
  switch (mode)
  {
    case 0:
      end_render_forward__20TWindowSubStatusDispFPv();
      break;
    case 1:
      TWindowSubStatusDisp::get_player();
      break;
  }
}

void TWindowSubStatusDisp__sub_80259CE0(void) {  }

void *TWindowSubStatusDisp__sub_80259CE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 4) = lbl_804CF9C8;
        deleting_destructor__20TWindowSubStatusDispFs(arg0, 0);
        if (arg1 > 0) {
            ::operator delete(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80259D3C_lbl_804CF9C8_size[sizeof(RecoveredGlobal_80259D3C_lbl_804CF9C8) == 0x18 ? 1 : -1];
u8 *TWindowSubStatusDisp__sub_80259D3C(u8 *arg0, u8 *arg1, s32 arg2) {
    reset_entry__20TWindowSubStatusDispFPv((void*)((void *) (arg0)), (int)((void *) (arg2)));
    *(s32 **)((s8 *)arg0 + 4) = &(*(RecoveredGlobal_80259D3C_lbl_804CF9C8 *)&lbl_804CF9C8).value;
    *(f32 *)((s8 *)arg0 + 8) = (f32) *(f32 *)((s8 *)arg1 + 4);
    *(f32 *)((s8 *)arg0 + 0xC) = (f32) *(f32 *)((s8 *)arg1 + 8);
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) *(f32 *)((s8 *)arg1 + 0xC);
    *(s16 *)((s8 *)arg0 + 0) = (s16) *(s32 *)((s8 *)arg1 + 0x14);
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) *(s32 *)((s8 *)arg1 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x20) = (s32) *(s32 *)((s8 *)arg1 + 0x18);
    return arg0;
}

void TWindowSubStatusDisp::set_all_values(s32 arg1) {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) arg1;
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) arg1;
    *(s32 *)((s8 *)arg0 + 0x20) = arg1;
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) lbl_805DCF58;
}

void TWindowSubStatusDisp::set_animated_target(s32 arg1, f32 farg0) {
    f32 temp_f2;
    f32 var_f31;

    if (*(f32 *)((s8 *)this + 0x28) != (f32) arg1) {
        *(f32 *)((s8 *)this + 0x28) = (f32) arg1;
        temp_f2 = *(f32 *)((s8 *)this + 0x28);
        var_f31 = temp_f2 - *(f32 *)((s8 *)this + 0x24);
        var_f31 = var_f31 / farg0;
        if (fabs_float(var_f31, temp_f2) < lbl_805DCF5C) {
            if (var_f31 > lbl_805DCF58) {
                var_f31 = lbl_805DCF5C;
            } else {
                var_f31 = lbl_805DCF60;
            }
        }
        *(f32 *)((s8 *)this + 0x2C) = var_f31;
    }
}

void set_status_entry_target(void *arg0, s32 arg1) {
  f32 temp_f2;
  f32 var_f31;
  if ((*((f32 *) (((s8 *) arg0) + 0x28))) != ((f32) arg1))
  {
    *((f32 *) (((s8 *) arg0) + 0x28)) = (f32) arg1;
    temp_f2 = *((f32 *) (((s8 *) arg0) + 0x28));
    var_f31 = temp_f2 - (*((f32 *) (((s8 *) arg0) + 0x24)));
    var_f31 = var_f31 * lbl_805DCF64;
    if (fabs_float(var_f31, temp_f2) < lbl_805DCF5C)
    {
      if (var_f31 > lbl_805DCF58)
      {
        var_f31 = lbl_805DCF5C;
      }
      else
      {
        var_f31 = lbl_805DCF60;
      }
    }
    *((f32 *) (((s8 *) arg0) + 0x2C)) = var_f31;
  }
}

#pragma push
#pragma fp_contract on
void TWindowSubStatusDisp::update_pb_counter_approach() {
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f31;
    if (*(f32 *)((s8 *)((u8 *)this) + 0x28) != *(f32 *)((s8 *)((u8 *)this) + 0x24)) {
        if (*(u16 *)((s8 *)((u8 *)this) + 0) & 8) {
            play_persistent_sound((0x44E03), (s32)(((u8 *)this)), (0), (0), (0));
        }
        temp_f2 = *(f32 *)((s8 *)((u8 *)this) + 0x28);
        temp_f30 = temp_f2 - *(f32 *)((s8 *)((u8 *)this) + 0x24);
        temp_f31 = fabs_float((f32) (*(f32 *)((s8 *)((u8 *)this) + 0x2C)), (f32) (temp_f2));
        if (((f32 (*)(f32)) fabs_float)(temp_f30) < temp_f31) {
            *(f32 *)((s8 *)((u8 *)this) + 0x24) = (f32) *(f32 *)((s8 *)((u8 *)this) + 0x28);
        } else {
            *(f32 *)((s8 *)((u8 *)this) + 0x24) = (f32) (*(f32 *)((s8 *)((u8 *)this) + 0x24) + *(f32 *)((s8 *)((u8 *)this) + 0x2C));
        }
        *(s32 *)((s8 *)((u8 *)this) + 0x20) = (s32) *(f32 *)((s8 *)((u8 *)this) + 0x24);
    }
}
#pragma pop

void *TWindowSubStatusDisp__sub_8025A04C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 4) = lbl_804CF9E0;
        TWindowSubStatusDisp__sub_80259CE4((void *)((void *)(arg0)), (s16)((s16)(0)));
        if (arg1 > 0) {
            ::operator delete(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8025A0A4_lbl_804CF9E0_size[sizeof(RecoveredGlobal_8025A0A4_lbl_804CF9E0) == 0x18 ? 1 : -1];
u8 *TWindowSubStatusDisp::init_layout_entry_scaled(u8 *arg1, s32 arg2) {
    u8 *arg0 = (u8 *)this;
    TWindowSubStatusDisp__sub_80259D3C((u8 *)(arg0), (u8 *)(arg1), (s32)(arg2));
    *(s32 **)((s8 *)arg0 + 4) = &(*(RecoveredGlobal_8025A0A4_lbl_804CF9E0 *)&lbl_804CF9E0).value;
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) *(s32 *)((s8 *)arg0 + 0x20);
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) *(s32 *)((s8 *)arg0 + 0x20);
    *(f32 *)((s8 *)arg0 + 0x2C) = (f32) lbl_805DCF58;
    return arg0;
}

}
