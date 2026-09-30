#include "pso/system/GinjaMaterialState.h"
#include "pso/system/GinjaModel.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
#pragma scheduling off
typedef M2C_UNK (*RecoveredCallback_d26337a2813d)();

typedef GinjaMaterialCache S_803DB560;

struct S_803DBB78 { u8 pad[0x7c]; u32 f7c; u32 f80; };

struct C_803DBB38 { u8 r, g, b, a; };

struct S_803DBB38 { u8 pad[0x68]; C_803DBB38 c; };

struct C_803DBAF8 { u8 r, g, b, a; };

struct S_803DBAF8 { u8 pad[0x64]; C_803DBAF8 c; };

struct GinjaTevCache { u8 reserved[0x75]; u8 stageOffset; };

struct G_803DBC1C { u8 pad[0x7C]; u32 f7c; u32 f80; u32 f84; u32 f88; };

struct Arr_803DC3BC { u8 idx; u8 stride; u8 pad[6]; void *base; u32 pad2; };

extern "C" {
M2C_UNK TObjPlayer__sub_803DC600();
M2C_UNK TObjPlayer__sub_803DC76C(int);
void TOSignCave03__sub_803DB510(s32 arg0);
M2C_UNK Dolphin_GXSetVtxDesc(int, void *);
M2C_UNK GXClearVtxDesc();
s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);
void TObjPlayer__sub_803DB59C(s32 arg0);
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void set_effect_active__10TObjPlayerFv(void);
void TParticleCtrl__sub_803E2010(void);
extern RecoveredCallback_d26337a2813d lbl_805D76E4;
extern s32 lbl_805D7788;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_803DC6F4(void);
void TObjPlayer__sub_803DB270(s32, s32);
extern s32 lbl_805D7774;
s32 TObjPlayer__sub_803DB4E8(s32 arg0);
extern S_803DB560 lbl_8058CD80;
u32 TObjPlayer__sub_803DB560(s32 i, u32 v);
extern S_803DB560 lbl_8058CD80;
extern s32 some_id_805c6f74;
extern u32 lbl_805D46C0;
void TObjPlayer__sub_803DBB78(u32 x);
void GXSetAlphaCompare(s32 comp0, s32 ref0, s32 op, s32 comp1, s32 ref1);
void TObjPlayer__sub_803DBDE8(s32 ref);
extern S_803DB560 lbl_8058CD80;
void TObjPlayer__sub_803DBB38(u32 v);
extern S_803DB560 lbl_8058CD80;
void TObjPlayer__sub_803DBAF8(u32 v);
extern S_803DB560 lbl_8058CD80;
extern s32 some_id_805c6f74;
extern s32 lbl_804FC5A4[];
extern s32 lbl_804FC5C8[];
void GXSetTevOp(s32, s32);
void GXSetTevOrder(s32, s32, s32, s32);
void set_ginja_tev_order(u32 parameter);
extern s32 lbl_804FC56C[];
extern s32 lbl_804FC5EC[];
extern s32 lbl_804FC610[];
void GXSetVtxAttrFmt(s32, s32, s32, s32, u8);
void TObjPlayer__sub_803DBBA8(u32 arg0);
extern S_803DB560 lbl_8058CD80;
void TObjPlayer__sub_803E1D90(u32, u32, u32, u32);
void TObjPlayer__sub_803DBC1C(u32 arg0);
extern s32 lbl_804FC56C[];
void GXSetArray(s32, void *, u8);
void TObjPlayer__sub_803DC3BC(Arr_803DC3BC *arg0);
extern S_803DB560 lbl_8058CD80;
extern s32 some_id_805c6f74;
GinjaMaterialCache *invalidate_ginja_inherited_state();
s32 TObjPlayer__sub_803DBE1C(GinjaDrawRecord *);
s32 GXCallDisplayList(void *, u32);
extern s32 lbl_805D7704, lbl_805D7708, lbl_805D7788;
s32 draw_ginja_model_lists(GinjaModel *model);
}

extern "C" {

s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);

#pragma push
#pragma scheduling off
s32 TObjPlayer__sub_803DB4E8(s32 arg0) {
    TObjPlayer__sub_803DB270(arg0, lbl_805D7774);
    return 1;
}
#pragma pop

void TOSignCave03__sub_803DB510(s32 arg0) {
    TObjPlayer__sub_803DC76C((int) (0));
    TObjPlayer__sub_803DC600();
    draw_ginja_model_lists((GinjaModel *)arg0);
    TObjPlayer__sub_803DC6F4();
}

s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1) {
    return (arg0 >> (arg1 * 2)) & 3;
}

#pragma push
#pragma scheduling off
#pragma peephole off
u32 TObjPlayer__sub_803DB560(s32 i, u32 v) {
  u32 r = v ^ lbl_8058CD80.parameters[i];
  r |= lbl_8058CD80.dirty[i];
  lbl_8058CD80.parameters[i] = v;
  lbl_8058CD80.dirty[i] = 0;
  return r;
}
#pragma pop

void TObjPlayer__sub_803DB59C(s32 arg0) {
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc((int) (9), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (1)))));
    Dolphin_GXSetVtxDesc((int) (0xA), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (2)))));
    Dolphin_GXSetVtxDesc((int) (0xB), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (3)))));
    Dolphin_GXSetVtxDesc((int) (0xD), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (5)))));
}

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803DBAF8(u32 v) {
    (*(S_803DBAF8 *)&lbl_8058CD80).c.r = (v & 0xFF000000) >> 24;
    (*(S_803DBAF8 *)&lbl_8058CD80).c.g = (v & 0xFF0000) >> 16;
    (*(S_803DBAF8 *)&lbl_8058CD80).c.b = (v & 0xFF00) >> 8;
    (*(S_803DBAF8 *)&lbl_8058CD80).c.a = v & 0xFF;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803DBB38(u32 v) {
    (*(S_803DBB38 *)&lbl_8058CD80).c.r = (v & 0xFF000000) >> 24;
    (*(S_803DBB38 *)&lbl_8058CD80).c.g = (v & 0xFF0000) >> 16;
    (*(S_803DBB38 *)&lbl_8058CD80).c.b = (v & 0xFF00) >> 8;
    (*(S_803DBB38 *)&lbl_8058CD80).c.a = v & 0xFF;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803DBB78(u32 x) {
    if ((u32)some_id_805c6f74 & 0x8000) {
        x = lbl_805D46C0;
    }
    (*(S_803DBB78 *)&lbl_8058CD80).f80 = x;
    (*(S_803DBB78 *)&lbl_8058CD80).f7c |= 1;
}
#pragma pop

void TObjPlayer__sub_803DBBA8(u32 arg0) {
    GXSetVtxAttrFmt(0, lbl_804FC56C[(arg0 & 0xFF0000) >> 16], lbl_804FC5EC[(arg0 & 0xF000) >> 12], lbl_804FC610[(arg0 & 0xF00) >> 8], arg0);
}

void TObjPlayer__sub_803DBC1C(u32 arg0) {
    (*(G_803DBC1C *)&lbl_8058CD80).f88 = arg0;
    (*(G_803DBC1C *)&lbl_8058CD80).f7c |= 2;
    TObjPlayer__sub_803E1D90(arg0 & 0x1FFF, (arg0 & 0xC0000) >> 18, (arg0 & 0x30000) >> 16, (arg0 & 0x6000) >> 13);
}

void set_ginja_tev_order(u32 parameter) {
    u32 selectedStage = (parameter & 0xF000) >> 12;
    if ((u32)some_id_805c6f74 & 0x80000)
        selectedStage += (*(GinjaTevCache *)&lbl_8058CD80).stageOffset;
    s32 stage = selectedStage;
    s32 coordinate = lbl_804FC5A4[(parameter & 0xF00) >> 8];
    s32 texture = lbl_804FC5C8[(parameter & 0xF0) >> 4];
    s32 channel = parameter & 0xF;
    if (texture == 0xFF)
        GXSetTevOp(selectedStage, 4);
    else
        GXSetTevOp(selectedStage, 0);
    GXSetTevOrder(stage, coordinate, texture, channel);
}

#pragma push
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803DBDE8(s32 ref) {
    GXSetAlphaCompare(4, ref, 0, 7, 0);
}
#pragma pop

void TObjPlayer__sub_803DC3BC(Arr_803DC3BC *arg0) {
    while (arg0->idx != 0xFF) {
        GXSetArray(lbl_804FC56C[arg0->idx], arg0->base, arg0->stride);
        arg0++;
    }
}

#pragma push
#pragma scheduling off
#pragma peephole off
GinjaMaterialCache *invalidate_ginja_inherited_state() {
  GinjaMaterialCache *state = &lbl_8058CD80;
  if ((state->inherited_flags ^ some_id_805c6f74) & 0x80000) {
    state->inherited_flags = some_id_805c6f74;
    state->dirty[2] |= 0xF00F3;
    state->dirty[9] = -1;
    state->dirty[10] = -1;
  }
  return state;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
s32 draw_ginja_model_lists(GinjaModel *model) {
  s32 secondaryCount;
  GinjaDrawRecord *secondary;
  GinjaDrawRecord *primary;
  s32 primaryCount;
  s32 result = (s32)invalidate_ginja_inherited_state();
  if (model->vertices) {
    result = ((s32 (*)(void *))TObjPlayer__sub_803DC3BC)(model->vertices);
  }
  lbl_805D7704 = 0;
  if ((lbl_805D7708 & 1) && (lbl_805D7708 & 2)) {
    lbl_805D7704 |= 8;
  }
  if (lbl_805D7708 & 1) {
    lbl_805D7704 |= 1;
    primaryCount = model->primary_count;
    primary = model->primary;
    for (; primaryCount > 0; primaryCount--, primary++) {
      lbl_805D7704 &= ~4;
      result = TObjPlayer__sub_803DBE1C(primary);
      if ((((u32)(lbl_805D7704 & 8)) != 0U) ||
          (((u32)(lbl_805D7704 & 4)) == 0U)) {
        result = GXCallDisplayList(primary->display_list,
                                   primary->display_list_size);
      }
    }
  }
  if (((u32)(lbl_805D7788 & 2)) == 0U) {
    lbl_805D7704 = 0;
    if ((lbl_805D7708 & 1) && (lbl_805D7708 & 2)) {
      lbl_805D7704 |= 8;
    }
    if ((lbl_805D7708 & 2) || (lbl_805D7708 & 1)) {
      lbl_805D7704 |= 2;
      secondaryCount = model->secondary_count;
      secondary = model->secondary;
      for (; secondaryCount > 0; secondaryCount--, secondary++) {
        lbl_805D7704 &= ~4;
        TObjPlayer__sub_803DBE1C(secondary);
        if ((((u32)(lbl_805D7704 & 8)) != 0U) ||
            (((u32)(lbl_805D7704 & 4)) == 0U)) {
          GXCallDisplayList(secondary->display_list,
                            secondary->display_list_size);
        }
      }
    }
    result = 0;
  }
  return result;
}
#pragma pop

#pragma push
#pragma peephole off
void TObjPlayer__sub_803DC6F4(void) {
    if ((u32) (lbl_805D7788 & 2) != 0) {
        set_effect_active__10TObjPlayerFv();
        TParticleCtrl__sub_803E2010();
    }
    if ((u32) (some_id_805c6f74 & 1) == 0) {
        GXSetZCompLoc(1);
        GXSetZMode(1U, 1, 1);
        TObjPlayer__sub_803DBDE8((s32)(0));
        if (((M2C_UNK (*)()) lbl_805D76E4) != NULL) {
            lbl_805D76E4();
        }
    }
}
#pragma pop

}
