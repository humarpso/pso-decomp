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

typedef s32 M2C_UNK;

struct C_803DB9A0 { u8 r, g, b, a; };

struct S_803DB9A0 { u8 pad[0x60]; C_803DB9A0 c; };

struct F_803DB9A0 { f32 r, g, b, a; };

typedef void (*RecoveredCallback_bfe74032a8e8)(s32);
typedef void (*RecoveredCallback_bfe74032a8e8)(s32);
typedef void (*RecoveredCallback_bfe74032a8e8)(s32);
typedef void (*RecoveredCallback_b52dc2a08a00)(u8);
typedef void (*RecoveredCallback_b52dc2a08a00)(u8);
typedef void (*RecoveredCallback_b52dc2a08a00)(u8);
typedef struct GinjaCounts_803DB734 {
    u8 pad0[0x58];
    s32 tevDirty;
    s32 texGenDirty;
    u8 pad60[0x70 - 0x60];
    u8 count[3];
    u8 pre[3];
    u8 post[3];
    u8 total[3];
    u32 flags7C;
    u32 pad80;
    u32 texGenCount;
} GinjaCounts_803DB734;

extern "C" {
void draw_ginja_model(s32 arg0);
M2C_UNK Dolphin_GXSetVtxDesc(int, void *);
M2C_UNK GXClearVtxDesc();
s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);
void set_ginja_indexed_vtx_desc(s32 arg0);
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void set_effect_active__10TObjPlayerFv(void);
void apply_scene_fog(void);
extern RecoveredCallback_d26337a2813d lbl_805D76E4;
extern s32 lbl_805D7788;
extern s32 some_id_805c6f74;
void end_ginja_model_draw(void);
void queue_model_draw_matrix(s32, s32);
extern s32 lbl_805D7774;
s32 queue_model_draw_current_matrix(s32 arg0);
extern S_803DB560 lbl_8058CD80;
u32 TObjPlayer__sub_803DB560(s32 i, u32 v);
extern S_803DB560 lbl_8058CD80;
extern s32 some_id_805c6f74;
extern u32 lbl_805D46C0;
void set_ginja_blend_param(u32 x);
void GXSetAlphaCompare(s32 comp0, s32 ref0, s32 op, s32 comp1, s32 ref1);
void ginja_set_alpha_compare(s32 ref);
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
void ginja_set_vertex_format(u32 arg0);
extern S_803DB560 lbl_8058CD80;
void load_list_texture(u32, u32, u32, u32);
void ginja_load_texture_slot(u32 arg0);
extern s32 lbl_804FC56C[];
void GXSetArray(s32, void *, u8);
void set_ginja_vertex_arrays(Arr_803DC3BC *arg0);
extern S_803DB560 lbl_8058CD80;
extern s32 some_id_805c6f74;
GinjaMaterialCache *invalidate_ginja_inherited_state();
s32 apply_ginja_material_params(GinjaDrawRecord *);
s32 GXCallDisplayList(void *, u32);
extern s32 lbl_805D7704, lbl_805D7708, lbl_805D7788;
s32 draw_ginja_model_lists(GinjaModel *model);
extern s32 lbl_805D7788;
extern s32 some_id_805c6f74;
extern S_803DB560 lbl_8058CD80;
void reset_particle_counter__10TObjPlayerFv(void);
void apply_scene_fog(void);
void prepare_ginja_model(void);
void GXSetTexCoordGen2(s32 dst, u32 func, u32 src, s32 mtx, s32 normalize, s32 pt);
extern s32 lbl_804FC5A4[];
extern s32 lbl_804FC63C[];
extern S_803DB560 lbl_8058CD80;
extern s32 lbl_805D7700;
extern s32 some_id_805c6f74;
void OSDetachThread(u32 arg0);
void PSMTXConcat(void *, void *, void *);
void PSMTXTranspose(void *, void *);
void PSMTXInverse(void *, void *);
void PSMTXTrans(void *, f32, f32, f32);
void PSMTXScale(void *, f32, f32, f32);
void GXLoadPosMtxImm(void *, void *);
void GXLoadNrmMtxImm(void *, void *);
void GXLoadTexMtxImm(void *, int, int);
extern s32 lbl_805D7774;
extern s32 some_id_805c6f74;
M2C_UNK load_ginja_model_matrices(int arg0);
void GXSetChanMatColor(s32, C_803DB9A0);
void convert_color_f32_to_u8(const F_803DB9A0 *, C_803DB9A0 *);
void convert_color_u8_to_f32(const C_803DB9A0 *, F_803DB9A0 *);
extern F_803DB9A0 lbl_8058D4C0;
extern const C_803DB9A0 lbl_805E0F68;
extern S_803DB560 lbl_8058CD80;
extern s32 lbl_805D7788;
extern s32 some_id_805c6f74;
void set_ginja_material_color(u32 v);
void init_model_draw_queue(void *);
void flush_model_draw_queue(void);
void prepare_ginja_model(void);
void TObjPlayer__sub_803DC9E4(void *, void *);
void set_effect_active__10TObjPlayerFv(void);
void apply_scene_fog(void);
s32 queue_model_draw_current_matrix(s32 arg0);
s32 draw_ginja_model_lists(GinjaModel *model);
extern RecoveredCallback_d26337a2813d lbl_805D76E4;
extern s32 lbl_805D7788;
void draw_ginja_object(void *arg0);
void GXSetChanCtrl(s32,s32,s32,s32,s32,s32,s32);
extern s32 lbl_805D7788;
extern s32 some_id_805c6f74;
extern s32 lbl_805D7794;
void set_ginja_channel_ctrl(s32 channel,s32 flags);
void GXSetNumChans(u8);
void GXSetNumTexGens(u8);
void GXSetNumTevStages(u8);
void set_ginja_channel_ctrl(s32 channel,s32 flags);
extern S_803DB560 lbl_8058CD80;
extern RecoveredCallback_bfe74032a8e8 lbl_805D76E8;
extern RecoveredCallback_bfe74032a8e8 lbl_805D76EC;
extern RecoveredCallback_bfe74032a8e8 lbl_805D76F0;
extern RecoveredCallback_b52dc2a08a00 lbl_805D76F4;
extern RecoveredCallback_b52dc2a08a00 lbl_805D76F8;
extern RecoveredCallback_b52dc2a08a00 lbl_805D76FC;
extern s32 some_id_805c6f74;
void GXSetVtxDesc(s32 arg0, s32 arg1);
}

extern "C" {

s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);

void draw_ginja_object(void *arg0) {
    prepare_ginja_model();
    init_model_draw_queue((void *) draw_ginja_model_lists);
    TObjPlayer__sub_803DC9E4(arg0, (void *) queue_model_draw_current_matrix);
    flush_model_draw_queue();
    if (lbl_805D76E4 != NULL) {
        lbl_805D76E4();
    }
    if ((u32) (lbl_805D7788 & 2) != 0U) {
        set_effect_active__10TObjPlayerFv();
        apply_scene_fog();
    }
}

#pragma push
#pragma scheduling off
s32 queue_model_draw_current_matrix(s32 arg0) {
    queue_model_draw_matrix(arg0, lbl_805D7774);
    return 1;
}
#pragma pop

void draw_ginja_model(s32 arg0) {
    load_ginja_model_matrices((int)((int) (0)));
    prepare_ginja_model();
    draw_ginja_model_lists((GinjaModel *)arg0);
    end_ginja_model_draw();
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

void set_ginja_indexed_vtx_desc(s32 arg0) {
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc((int) (9), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (1)))));
    Dolphin_GXSetVtxDesc((int) (0xA), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (2)))));
    Dolphin_GXSetVtxDesc((int) (0xB), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (3)))));
    Dolphin_GXSetVtxDesc((int) (0xD), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (5)))));
}

void set_ginja_channel_ctrl(s32 channel,s32 flags) {
    s32 ambientSource,materialSource,enabled;
    if((u32)(flags&0x100)!=0)enabled=0;else enabled=1;
    if((u32)(flags&0x1000)!=0)ambientSource=1;else ambientSource=0;
    if((u32)(lbl_805D7788&2)!=0) {
        GXSetChanCtrl(4,0,0,0,0,2,2);return;
    }
    if((u32)(some_id_805c6f74&0x30)!=0)materialSource=0;
    else if((u32)(flags&0x800)!=0)materialSource=1;
    else materialSource=0;
    GXSetChanCtrl(channel,enabled,ambientSource,materialSource,lbl_805D7794,2,2);
    GXSetChanCtrl(channel+2,0,ambientSource,materialSource,lbl_805D7794,2,2);
}

#define GC ((GinjaCounts_803DB734 *)&lbl_8058CD80)
#pragma push
#pragma use_lmw_stmw off
void GXSetVtxDesc(s32 arg0, s32 arg1) {
    s32 sum;
    s32 sum2;
    s32 i;
    if ((u32)(arg1 & 0x1903) != 0) {
        s32 n = arg0 & 3;
        if ((u32)(some_id_805c6f74 & 0x80000) != 0) {
            s32 pre = GC->pre[0];
            s32 post = GC->post[0];
            GC->count[0] = n;
            sum = pre + n;
            GXSetNumChans(GC->total[0] = post + sum);
            if (pre != 0 && lbl_805D76E8 != NULL) {
                lbl_805D76E8(0);
            }
            for (i = 0; i < n; i++) {
                set_ginja_channel_ctrl(pre + i, arg0);
            }
            if (post != 0 && lbl_805D76F4 != NULL) {
                lbl_805D76F4(sum);
            }
        } else {
            GXSetNumChans(n);
            for (i = 0; i < n; i++) {
                set_ginja_channel_ctrl(i, arg0);
            }
        }
    }
    if ((u32)(arg1 & 0xF0) != 0) {
        u8 n = (u32)(arg0 & 0xF0) >> 4;
        if ((u32)(some_id_805c6f74 & 0x80000) != 0) {
            s32 pre = GC->pre[1];
            s32 post = GC->post[1];
            GC->count[1] = n;
            sum = pre + n;
            GXSetNumTexGens(GC->total[1] = post + sum);
            if (pre != 0 && lbl_805D76EC != NULL) {
                lbl_805D76EC(0);
            }
            if (post != 0 && lbl_805D76F8 != NULL) {
                lbl_805D76F8(sum);
            }
        } else {
            GXSetNumTexGens(n);
        }
        GC->texGenDirty = -1;
        GC->flags7C |= 4;
        GC->texGenCount = n;
    }
    if ((u32)(arg1 & 0xF0000) != 0) {
        u8 n = (u32)(arg0 & 0xF0000) >> 16;
        if ((u32)(some_id_805c6f74 & 0x80000) != 0) {
            s32 pre = GC->pre[2];
            s32 post = GC->post[2];
            GC->count[2] = n;
            sum2 = pre + n;
            GXSetNumTevStages(GC->total[2] = post + sum2);
            if (pre != 0 && lbl_805D76F0 != NULL) {
                lbl_805D76F0(0);
            }
            if (post != 0 && lbl_805D76FC != NULL) {
                lbl_805D76FC(sum2);
            }
        } else {
            GXSetNumTevStages(n);
        }
        GC->tevDirty = -1;
    }
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma peephole off
void set_ginja_material_color(u32 v) {
    C_803DB9A0 fallback = lbl_805E0F68;
    C_803DB9A0 *mat;
    F_803DB9A0 add;
    C_803DB9A0 converted;
    C_803DB9A0 convertedAdd;
    (mat = &(*(S_803DB9A0 *)&lbl_8058CD80).c)->r = (v & 0xFF000000) >> 24;
    (*(S_803DB9A0 *)&lbl_8058CD80).c.g = (v & 0xFF0000) >> 16;
    (*(S_803DB9A0 *)&lbl_8058CD80).c.b = (v & 0xFF00) >> 8;
    (*(S_803DB9A0 *)&lbl_8058CD80).c.a = v & 0xFF;
    if ((u32) (lbl_805D7788 & 2) != 0U) {
        GXSetChanMatColor(4, fallback);
    } else if ((u32) (some_id_805c6f74 & 0x10) != 0U) {
        convert_color_f32_to_u8(&lbl_8058D4C0, &converted);
        GXSetChanMatColor(4, converted);
    } else if ((u32) (some_id_805c6f74 & 0x20) != 0U) {
        convert_color_u8_to_f32(mat, &add);
        add.r += lbl_8058D4C0.r;
        add.g += lbl_8058D4C0.g;
        add.b += lbl_8058D4C0.b;
        add.a += lbl_8058D4C0.a;
        convert_color_f32_to_u8(&add, &convertedAdd);
        GXSetChanMatColor(4, convertedAdd);
    } else {
        GXSetChanMatColor(4, *mat);
    }
}
#pragma pop

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
void set_ginja_blend_param(u32 x) {
    if ((u32)some_id_805c6f74 & 0x8000) {
        x = lbl_805D46C0;
    }
    (*(S_803DBB78 *)&lbl_8058CD80).f80 = x;
    (*(S_803DBB78 *)&lbl_8058CD80).f7c |= 1;
}
#pragma pop

void ginja_set_vertex_format(u32 arg0) {
    GXSetVtxAttrFmt(0, lbl_804FC56C[(arg0 & 0xFF0000) >> 16], lbl_804FC5EC[(arg0 & 0xF000) >> 12], lbl_804FC610[(arg0 & 0xF00) >> 8], arg0);
}

void ginja_load_texture_slot(u32 arg0) {
    (*(G_803DBC1C *)&lbl_8058CD80).f88 = arg0;
    (*(G_803DBC1C *)&lbl_8058CD80).f7c |= 2;
    load_list_texture(arg0 & 0x1FFF, (arg0 & 0xC0000) >> 18, (arg0 & 0x30000) >> 16, (arg0 & 0x6000) >> 13);
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

void OSDetachThread(u32 arg0) {
    u32 idx;
    s32 coord;
    u32 func;
    u32 src;
    s32 mtx;
    idx = (arg0 & 0xF0000) >> 16;
    if ((u32)some_id_805c6f74 & 0x80000) {
        idx += lbl_8058CD80.reserved70[4];
    }
    coord = lbl_804FC5A4[idx];
    func = (arg0 & 0xF000) >> 12;
    src = (arg0 & 0xFF0) >> 4;
    mtx = lbl_804FC63C[arg0 & 0xF];
    if (lbl_805D7700 != 0 && mtx == 0x3C) {
        mtx = 0x1E;
    }
    GXSetTexCoordGen2(coord, func, src, mtx, 0, 0x7D);
}

#pragma push
#pragma scheduling off
#pragma peephole off
void ginja_set_alpha_compare(s32 ref) {
    GXSetAlphaCompare(4, ref, 0, 7, 0);
}
#pragma pop

void set_ginja_vertex_arrays(Arr_803DC3BC *arg0) {
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
    result = ((s32 (*)(void *))set_ginja_vertex_arrays)(model->vertices);
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
      result = apply_ginja_material_params(primary);
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
        apply_ginja_material_params(secondary);
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
#pragma scheduling off
#pragma peephole off
void prepare_ginja_model(void) {
    if ((*(u32 *)&lbl_805D7788) & 2) {
        reset_particle_counter__10TObjPlayerFv();
        apply_scene_fog();
    }
    for (s32 i = 0; i < 11; ++i) {
        (*(GinjaMaterialCache *)&lbl_8058CD80).parameters[i] = 0;
        (*(GinjaMaterialCache *)&lbl_8058CD80).dirty[i] = -1;
    }
    *(u32 *)((*(GinjaMaterialCache *)&lbl_8058CD80).prefix + 0) = 0;
    *(u32 *)((*(GinjaMaterialCache *)&lbl_8058CD80).prefix + 4) = -1;
    (*(GinjaMaterialCache *)&lbl_8058CD80).inherited_flags = (*(u32 *)&some_id_805c6f74);
    (*(GinjaMaterialCache *)&lbl_8058CD80).blend_valid = 0;
}
#pragma pop

#pragma push
#pragma peephole off
void end_ginja_model_draw(void) {
    if ((u32) (lbl_805D7788 & 2) != 0) {
        set_effect_active__10TObjPlayerFv();
        apply_scene_fog();
    }
    if ((u32) (some_id_805c6f74 & 1) == 0) {
        GXSetZCompLoc(1);
        GXSetZMode(1U, 1, 1);
        ginja_set_alpha_compare((s32)(0));
        if (((M2C_UNK (*)()) lbl_805D76E4) != NULL) {
            lbl_805D76E4();
        }
    }
}
#pragma pop

M2C_UNK load_ginja_model_matrices(int arg0) {
    f32 s[3][4];
    f32 t[3][4];
    f32 m[3][4];
    GXLoadPosMtxImm((void *)lbl_805D7774, (void *)arg0);
    GXLoadNrmMtxImm((void *)lbl_805D7774, (void *)arg0);
    if ((u32)some_id_805c6f74 & 0x100000) {
        PSMTXScale(s, -0.5f, -0.5f, 0.0f);
        PSMTXTrans(t, 0.5f, 0.5f, 1.0f);
        PSMTXInverse((void *)lbl_805D7774, m);
        PSMTXTranspose(m, m);
        PSMTXConcat(s, m, m);
        PSMTXConcat(t, m, m);
        GXLoadTexMtxImm(m, 0x2A, 0);
    }
}

}
