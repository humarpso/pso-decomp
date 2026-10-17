#include "types.h"
#include "pso/misc/TWindowDD_80342254.h"
#include "pso/misc/TWindowDD_WS_Word.h"
#include "pso/misc/TWindowDD.h"

struct RecoveredGlobal_80342384_TWindowDD__data_804EFC50 { s32 value; u8 remaining[0x3C]; };
typedef char RecoveredGlobal_80342384_TWindowDD__data_804EFC50_size[sizeof(RecoveredGlobal_80342384_TWindowDD__data_804EFC50) == 0x40 ? 1 : -1];

struct O_80342268 { u8 pad[0x60]; s32 f; };

struct O_80342254 { u8 pad[0x60]; s32 f; };

struct O_803422F0 { s32 f0; u8 pad[0x14]; void *f18; u8 pad2[0x5C - 0x1C]; s32 f5c; s32 f60; s32 f64; u8 pad3[0x70 - 0x68]; s32 f70; u8 pad4[4]; s32 f78; u8 pad5[0x84 - 0x7C]; f32 f84; f32 f88; };

extern "C" {
s16 TWindowDD__sub_80342158(int);
s32 apply_entry_layout__9TWindowDDFPv(void *);
s32 TWindowDD__sub_803435A0(void *);
s32 TWindowDD__sub_80347C50();
s32 TWindowDD__sub_803482B0(void *);
s32 TWindowDD__sub_803484C4(void *);
s32 __nw__7TObjectFUl(int);
s32 reset_fields__9TWindowDDFv(void *, void *);
extern s32 lbl_805D42E0;
extern const f32 TWindowDD__data_805DFCA8;
void *destroy__17TWindowDD_WS_WordFs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void mem_free(void *);

extern "C" {
void TWindowDD__sub_80341500();
}
extern "C" {
void handle_scroll_input__9TWindowDDFv();
}
extern "C" {
void render_shadows__7TObjectFv();
}
extern void *TWindowDD__data_804EFC50[9];
void *TWindowDD__data_804EFC50[9] = {
    (void *)0x1, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3e4ccccd, (void *)0x0, (void *)0x40,
    (void *)0x0,
};
__declspec(section ".data") void *lbl_804EFC74[2] = {
    (void *)0x0, (void *)0x0,
};
void *lbl_804EFC7C[5] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)&TWindowDD__data_804EFC50,
    (void *)0x3,
};
void *lbl_804EFC90[6] = {
    (void *)0x0, (void *)0x0, (void *)&destroy__17TWindowDD_WS_WordFs, (void *)&handle_scroll_input__9TWindowDDFv,
    (void *)&TWindowDD__sub_80341500, (void *)&render_shadows__7TObjectFv,
};
#define TWindowDD__data_804EFC50 (*(RecoveredGlobal_80342384_TWindowDD__data_804EFC50 *)TWindowDD__data_804EFC50)
#define lbl_804EFC90 ((s32 *)lbl_804EFC90)

u8 TWindowDD_WS_Word::sub_80342254() {
    TWindowDD_WS_Word *self = this;
    return !(self->m_60 & 1);
}

u8 TWindowDD_WS_Word::sub_80342268() {
    TWindowDD_WS_Word *self = this;
    return !(self->m_60 & 1);
}

void *TWindowDD_WS_Word::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x18) = lbl_804EFC90;
        if (this->m_80 != NULL) { mem_free(this->m_80); this->m_80 = 0; }
        ((TWindowDD *)this)->destroy_window_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(this);
        }
    }
    return this;
}

s32 TWindowDD__sub_803422F0(int a0, void *a1, void *a2) {
#define arg0 ((O_803422F0 *)a0)
#define arg1 ((s32)a1)
#define arg2 ((s32)a2)
    s32 v;
    ((TWindowDD *)arg0)->construct_base((u8 *)lbl_804EFC7C, (s16)4, (u8 *)lbl_804EFC74);
    arg0->f18 = lbl_804EFC90;
    v = lbl_805D42E0;
    arg0->f0 = v;
    arg0->f78 = arg2;
    arg0->f64 = 0;
    arg0->f88 = TWindowDD__data_805DFCA8;
    arg0->f84 = TWindowDD__data_805DFCA8;
    arg0->f60 = 0;
    arg0->f70 = arg1;
    reset_fields__9TWindowDDFv(arg0, (void *)v);
    ((TWindowDD *)arg0)->load_element_list();
    arg0->f5c = 0x01000000;
    return a0;
#undef arg0
#undef arg1
#undef arg2
}

s32 TWindowDD__sub_80342384(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    *(s32 *)((s8 *)&TWindowDD__data_804EFC50.value + 4) = arg1;
    temp_r3 = __nw__7TObjectFUl(0x90);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowDD__sub_803422F0((int)temp_r3, (void *)arg0, (void *)arg1);
    }
    return var_r0;
}

void TWindowDD__sub_80342428(u8 *arg0) {
  u8 *new_var;
  TWindowDD__sub_80347C50();
  ((TWindowDD *)arg0)->update_selection_state();
  if (((TWindowDD *)arg0)->test_input_flag_4())
  {
    TWindowDD::play_sound();
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0xB0)))) == 0xA)
    {
      new_var = arg0;
      new_var = new_var + ((*((s32 *) (((s8 *) arg0) + 0x20))) * 4);
      if (TWindowDD__sub_80342158((int) (*((s32 *) (((s8 *) new_var) + 0x24)))) == 0x685)
      {
        *((s32 *) (((s8 *) arg0) + 0xB4)) = 0x14;
        *(s32 *)&((TWindowDD *)arg0)->m_a8 = -0x3C;
        TWindowDD__sub_803435A0((void *) arg0);
        return;
      }
      TWindowDD__sub_803484C4((void *) arg0);
      return;
    }
    TWindowDD__sub_803484C4((void *) arg0);
    return;
  }
  if (TWindowDD__sub_803482B0((void *) arg0) != 0)
  {
    TWindowDD::play_se();
    apply_entry_layout__9TWindowDDFPv((void *) arg0);
  }
}

}
