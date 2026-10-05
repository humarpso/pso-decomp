#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80342384_TWindowDD__data_804EFC50 { M2C_UNK value; u8 remaining[0x3C]; };
typedef char RecoveredGlobal_80342384_TWindowDD__data_804EFC50_size[sizeof(RecoveredGlobal_80342384_TWindowDD__data_804EFC50) == 0x40 ? 1 : -1];

struct O_80342268 { u8 pad[0x60]; s32 f; };

struct O_80342254 { u8 pad[0x60]; s32 f; };

struct O_803422F0 { s32 f0; u8 pad[0x14]; void *f18; u8 pad2[0x5C - 0x1C]; s32 f5c; s32 f60; s32 f64; u8 pad3[0x70 - 0x68]; s32 f70; u8 pad4[4]; s32 f78; u8 pad5[0x84 - 0x7C]; f32 f84; f32 f88; };

extern "C" {
s16 TWindowDD__sub_80342158(int);
M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK play_se__9TWindowDDFv();
M2C_UNK play_sound__9TWindowDDFv();
s32 TWindowDD__sub_803482B0(void *);
s32 test_input_flag_4__9TWindowDDFPv(void *);
M2C_UNK TWindowDD__sub_803484C4(void *);
void TWindowDD__sub_80342428(u8 *arg0);
s32 __nw__7TObjectFUl(int);
s32 TWindowDD__sub_80342384(s32 arg0, s32 arg1);
u8 TWindowDD__sub_80342268(O_80342268 *self);
u8 TWindowDD__sub_80342254(O_80342254 *self);
s32 TWindowDD__sub_802466E0(void *, void *, int, void *);
s32 reset_fields__9TWindowDDFPv(void *, void *);
s32 TWindowDD__sub_80341FFC(void *);
extern s32 lbl_805D42E0;
extern const f32 TWindowDD__data_805DFCA8;
s32 TWindowDD__sub_803422F0(int a0, void *a1, void *a2);
}

extern "C" {

void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
void free__11TOBoss4RockFUi(void *);
s32 get_field_68__9TWindowDDFPv(void* p);
int spawn_window__9TWindowDDFv(void);

extern "C" {
void TWindowDD__sub_80341500();
}
extern "C" {
void TWindowDD__sub_80341B28();
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
    (void *)0x0, (void *)0x0, (void *)&destroy__9TWindowDDFPvs, (void *)&TWindowDD__sub_80341B28,
    (void *)&TWindowDD__sub_80341500, (void *)&render_shadows__7TObjectFv,
};
#define TWindowDD__data_804EFC50 (*(RecoveredGlobal_80342384_TWindowDD__data_804EFC50 *)TWindowDD__data_804EFC50)
#define lbl_804EFC90 ((M2C_UNK *)lbl_804EFC90)

u8 TWindowDD__sub_80342254(O_80342254 *self) {
    return !(self->f & 1);
}

u8 TWindowDD__sub_80342268(O_80342268 *self) {
    return !(self->f & 1);
}

void *destroy__9TWindowDDFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFC90;
        if (M2C_FIELD(arg0, void **, 0x80) != NULL) { free__11TOBoss4RockFUi(M2C_FIELD(arg0, void **, 0x80)); M2C_FIELD(arg0, M2C_UNK *, 0x80) = 0; }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 TWindowDD__sub_803422F0(int a0, void *a1, void *a2) {
#define arg0 ((O_803422F0 *)a0)
#define arg1 ((s32)a1)
#define arg2 ((s32)a2)
    s32 v;
    TWindowDD__sub_802466E0(arg0, lbl_804EFC7C, 4, lbl_804EFC74);
    arg0->f18 = lbl_804EFC90;
    v = lbl_805D42E0;
    arg0->f0 = v;
    arg0->f78 = arg2;
    arg0->f64 = 0;
    arg0->f88 = TWindowDD__data_805DFCA8;
    arg0->f84 = TWindowDD__data_805DFCA8;
    arg0->f60 = 0;
    arg0->f70 = arg1;
    reset_fields__9TWindowDDFPv(arg0, (void *)v);
    TWindowDD__sub_80341FFC(arg0);
    arg0->f5c = 0x01000000;
    return a0;
#undef arg0
#undef arg1
#undef arg2
}

s32 TWindowDD__sub_80342384(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 var_r0;
    M2C_FIELD(&TWindowDD__data_804EFC50.value, s32 *, 4) = arg1;
    temp_r3 = __nw__7TObjectFUl((int) (0x90));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowDD__sub_803422F0((int)((int) (temp_r3)), (void *)((void *) (arg0)), (void *)((void *) (arg1)));
    }
    return var_r0;
}

void TWindowDD__sub_80342428(u8 *arg0) {
  u8 *new_var;
  TWindowDD__sub_80347C50();
  TWindowDD__sub_80347B70((void *) arg0);
  if (test_input_flag_4__9TWindowDDFPv((void *) arg0))
  {
    play_sound__9TWindowDDFv();
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0xB0)))) == 0xA)
    {
      new_var = arg0;
      new_var = new_var + ((*((s32 *) (((s8 *) arg0) + 0x20))) * 4);
      if (TWindowDD__sub_80342158((int) (*((s32 *) (((s8 *) new_var) + 0x24)))) == 0x685)
      {
        *((s32 *) (((s8 *) arg0) + 0xB4)) = 0x14;
        *((s32 *) (((s8 *) arg0) + 0x8C)) = -0x3C;
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
    play_se__9TWindowDDFv();
    TWindowDD__sub_8034330C((void *) arg0);
  }
}

}
