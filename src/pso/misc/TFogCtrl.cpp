#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct RecoveredGlobal_800FAD08_TFogCtrl__data_80501188 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct M2CCopy_8 { u8 bytes[0x8]; };

struct M2CCopy_20 { u8 bytes[0x20]; };

struct Row_800FAFE0 { u8 pad[0x40]; s32 identity; };

struct Ctrl_800FAFE0 {
    u8 pad[0x174];
    struct Row_800FAFE0 *slots[4];
    s32 selected;
};

struct GXFogAdjTable_800FAE1C {
    u16 r[10];
};

struct TFogCtrl_800FAE1C {
    u8 pad[0x188];
    u32 color;
    f32 end;
    f32 start;
    f32 width;
};

typedef char RecoveredGlobal_800FAD08_TFogCtrl__data_80501188_size[sizeof(RecoveredGlobal_800FAD08_TFogCtrl__data_80501188) == 0x10 ? 1 : -1];

struct RecoveredGlobal_800FB8A0___vt__8TFogCtrl {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct O_800FB400 { u8 pad[0x174]; s32 arr[1]; };

struct Fog_800FB424 { u8 pad[0x40]; s32 entry; f32 f44; s32 f48[3]; };

struct Ctrl_800FB424 { u8 pad[0x174]; Fog_800FB424 *fogs[1]; };

struct FogRow_800FB134 {
    u32 flags;
    u32 color;
    f32 end;
    f32 start;
    f32 rate;
    u32 reserved14;
    f32 speed;
    f32 reserved1c;
    f32 end_amplitude;
    f32 reserved24;
    f32 start_amplitude;
    f32 reserved2c;
    f32 width;
    f32 reserved34;
    u8 phases[8];
};

struct FogCtrl_800FB134 {
    u8 prefix[0x1C];
    u32 dirty;
    u8 pad20[0x174 - 0x20];
    FogRow_800FB134 *slots[4];
    s32 selected;
    u32 color;
    f32 end;
    f32 start;
    f32 width;
};

struct TFogCtrl_800FB92C {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt;
    s32 f1C;
    s32 f20;
    Fog_800FB424 fogs[4];
    Fog_800FB424 *ptrs[4];
    s32 f184;
    u8 pad188[0x19C - 0x188];
    s32 f19C;
    s32 f1A0;
    s32 f1A4;
    s32 f1A8;
    s32 f1AC;
    s32 f1B0;
    s32 f1B4;
    f32 f1B8;
    f32 f1BC;
    s32 f1C0;
    s32 index;
};

typedef char RecoveredGlobal_800FB8A0___vt__8TFogCtrl_size[sizeof(RecoveredGlobal_800FB8A0___vt__8TFogCtrl) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188_size[sizeof(RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188) == 0x10 ? 1 : -1];

struct Stack_800FBD74 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    f32 sp20;
    f32 sp24;
};

struct RecoveredGlobal_800FBB68_lbl_8049C670 { M2C_UNK value; u8 remaining[0x8C]; };

typedef char RecoveredGlobal_800FBB68_lbl_8049C670_size[sizeof(RecoveredGlobal_800FBB68_lbl_8049C670) == 0x90 ? 1 : -1];

struct Pos_800FBEA8 {
    f32 x;
    f32 y;
    u8 pad[0x18];
};

struct Pos_800FBFD8 {
    f32 x;
    f32 y;
    u8 pad[0x18];
};

struct FogParam_800FBC5C {
    s32 f0;
    s32 f4;
    f32 f8;
    f32 fC;
    f32 f10;
    s32 f14;
    f32 f18[8];
    u8 f38[8];
};

struct E_800FC220 { f32 w; f32 x; };

struct Quad_800FC310 { f32 x0; f32 y0; f32 x1; f32 y1; f32 u0; f32 v0; f32 u1; f32 v1; };

struct Row_800FB498 {
    u32 flags;
    u32 color;
    f32 end;
    f32 start;
    f32 rate;
    u32 f14;
    f32 speed;
    f32 f1C;
    f32 endAmp;
    f32 f24;
    f32 startAmp;
    f32 f2C;
    f32 width;
    f32 f34;
    u8 phases[8];
    s32 identity;
    f32 randomPhase;
};

struct Ctrl_800FB498 {
    u8 pad0[0x20];
    s32 mode;
    u8 pad24[0x150];
    Row_800FB498 *slots[4];
    s32 selected;
    u8 pad188[0x14];
    s32 reqFrom;
    s32 reqTo;
    s32 reqCommit;
    s32 pad1A8;
    s32 blendFrom;
    s32 blendTo;
    s32 blendCommit;
    f32 amount;
    f32 rate;
};

struct O_800FB400;

struct FogCtrl_800FB134;

struct Quad_800FC24C { f32 x0; f32 y0; f32 x1; f32 y1; f32 u0; f32 v0; f32 u1; f32 v1; };

s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
M2C_UNK get_random_float__21TObjEneMe3ShinowaRealFv(f32);
s32 get_nth_view_player_id__11TCameraCtrlFi(int);
void read_disc_file(void *, void *);
M2C_UNK destroy_instance__22TQuestVmDownLoadServerFv();
void create_instance__8TFogCtrlFv(void);
s32 update_all__8TFogCtrlFii(int, int);
s32 select_fog_for_viewport__8TFogCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
s32 restore_fog_for_player__8TFogCtrlFii(s32 arg1, s32 arg0);
s32 TFogCtrl__sub_800FAC84(void* p);
void copy_fog_entry(u8 *arg0, u8 *arg1);
void* get_entry__8TFogCtrlFi(int a0);
void clear_split_screen_fog__8TFogCtrlFv(void);
void update_all__8TFogCtrlFv(void);
void clear_active_flag__8TFogCtrlFPv(void *arg0);
s32 apply_fog_entry(void *arg0);
s32 restore_fog__8TFogCtrlFPvi(u8 *arg0, s32 arg1);
s32 select_fog__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 request_fog__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
void request_transition__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 get_param__8TFogCtrlFPv(void* p);
void apply_slot_params__8TFogCtrlFPvi(FogCtrl_800FB134 *self, s32 idx);
s32 is_controller_animated__8TFogCtrlFii(s32 arg0, s32 arg1);
void TFogCtrl__sub_800FB400(O_800FB400 *self, s32 i, s32 j);
void load_entry_into_slot__8TFogCtrlFPvii(Ctrl_800FB424 *self, s32 i, s32 entry);
void render__8TFogCtrlFv(void);
u8 * __dt__8TFogCtrlFv(u8 *arg0, s16 arg1);
TFogCtrl_800FB92C * TFogCtrl__ct(TFogCtrl_800FB92C *self, void *parent, s32 index);
void TFogCtrl__sub_800FBA54(void);
void TFogCtrl__sub_800FBA58(void);
void TFogCtrl__sub_800FBAAC(void);
void update_fog_entries__8TFogCtrlFv(void);
void create_area_fog_ctrl(void);
void reset__8TFogCtrlFv(void);
void init_scene_fog_system(void);
void TWindowSubStatusDisp__sub_800FBD74(s32 arg0, f32 farg0, f32 farg1, f32 farg2);
void draw_number_digits__20TWindowSubStatusDispFPvsUsfff(void *color, s16 value, u16 digits, f32 x, f32 y, f32 scale);
void draw_small_font_text(void *color, const char *s, f32 x, f32 y, f32 scale);
int get_name_text_width(void* p);
u32 calc_small_font_text_width(const char *s);
s32 get_small_font_glyph_width(u8 c);
void TWindowSubStatusDisp__sub_800FC248(void);
void build_small_font_glyph_quad(u8 c, Quad_800FC310 *q);
s32 render_forward__20TWindowSubStatusDispFPv();
s32 reset_transform_state__10TObjPlayerFv();
M2C_UNK free__11TOBoss4RockFUi(void*);
FogParam_800FBC5C * alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK create__22TObjFogCollisionPoisonFv();
M2C_UNK TObjFogCollisionPoison__sub_801533BC();
void clear_state_array__22TObjFogCollisionPoisonFv(void);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv(void);
s32 get_global_state__14TOKeyMachine01Fv();
void __dl__7TObjectFPv(s32);
u32 __nw__7TObjectFUl(int);
u8 * __dt__7TObjectFv(void *, s16);
void __ct__7TObjectFP7TObject(void *, void *);
s32 is_online_ready__6TLobbyFv();
void GXInitFogAdjTable(GXFogAdjTable_800FAE1C *, s32, void *);
void GXSetFogRangeAdj(s32, s32, GXFogAdjTable_800FAE1C *);
f32 sin_table_lookup(s32);
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, void *);
void fn_803E1FC8(u32);
void set_scene_fog_distances(f32, f32);
void set_scene_fog_type(s32);
void reset_scene_fog(void);

extern M2C_UNK TFogCtrl__fog_instance_table[];
extern RecoveredGlobal_800FB8A0___vt__8TFogCtrl __vt__8TFogCtrl;
extern u8 lbl_8043DA20[];
extern u8 lbl_8043DA30[];
extern RecoveredGlobal_800FBB68_lbl_8049C670 area_fog_row_table;
extern u8 fog_default_entry[];
extern u8 scene_projection_state[];
extern s32 lbl_805D2B18;
extern u32 fog_entry_array;
extern s32 fog_update_flags;
extern E_800FC220 *small_font_metrics_table_ptr;
extern s32 actor_frame_tick;
extern M2C_UNK *tl_02;

extern const f32 TFogCtrl__data_805DA948 = 0.0f;
extern const f32 TFogCtrl__data_805DA94C = 640.0f;
#define FOG_ZERO (*(const f32 *)&TFogCtrl__data_805DA948)
#define FOG_MAX (*(const f32 *)&TFogCtrl__data_805DA94C)

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 select_fog_for_viewport__8TFogCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (is_split_screen() == 0) {
        arg0 = 0;
    }
    if ((arg0 >= 0) && (arg0 < 4) && ((u32) TFogCtrl__fog_instance_table[arg0] != 0U)) {
        return ((s32)select_fog__8TFogCtrlFPvii((u8 *)((s32)(TFogCtrl__fog_instance_table[arg0])), (s32)((s32)(arg1)), (s32)((s32)(arg2))));
    }
    return 0;
}
extern int fold_flush_0;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 restore_fog_for_player__8TFogCtrlFii(s32 arg1, s32 arg0) {
    if (is_split_screen() == 0) {
        arg1 = 0;
    }
    if ((arg1 >= 0) && (arg1 < 4)) {
        s32 elem = *(s32 *)(((s8 *)&TFogCtrl__fog_instance_table) + arg1 * 4);
        if ((u32) elem != 0U) {
            return restore_fog__8TFogCtrlFPvi((u8 *)(elem), (s32)(arg0));
        }
    }
    return 0;
}
extern int fold_flush_1;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 TFogCtrl__sub_800FAC84(void* p) { return *(s32*)((char*)*(void**)((char*)p + 0x174) + 0x40); }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void copy_fog_entry(u8 *arg0, u8 *arg1) {
    s32 var_r5;
    s32 var_r7;
    u8 *var_r6;
    var_r5 = M2C_FIELD(arg1, s32 *, 0);
    var_r6 = (u8 *)(arg1) + 0x14;
    var_r7 = (long) ((u8 *)(arg0) + 0x14);
    M2C_FIELD(arg0, s32 *, 0) = var_r5;
    var_r5 = M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 4) = var_r5;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    var_r5 = M2C_FIELD(arg1, s32 *, 0x14);
    M2C_FIELD(arg0, s32 *, 0x14) = var_r5;
    *(M2CCopy_20 *)(var_r7 + 4) = *(const M2CCopy_20 *)((s32) var_r6 + 4);
    var_r7 += 0x20;
    var_r6 += 0x20;
    *(M2CCopy_8 *)((s32) arg0 + 0x38) = *(const M2CCopy_8 *)((s32) arg1 + 0x38);
}
extern int fold_flush_2;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void* get_entry__8TFogCtrlFi(int a0) {  return (char*)((*(int *)&fog_entry_array)) + a0 * 64; }
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_split_screen_fog__8TFogCtrlFv(void) {
    u32 temp_r3;
    if (is_split_screen() == 1) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_800FAD08_TFogCtrl__data_80501188 *)&TFogCtrl__fog_instance_table).value, M2C_UNK *, ((get_nth_view_player_id__11TCameraCtrlFi((int) (get_camera_mode__11TCameraCtrlFv())) * 4) & 0x3FFFC));
        if (temp_r3 != 0U) {
            clear_active_flag__8TFogCtrlFPv((void *)((int) (temp_r3)));
        }
    }
}
extern int fold_flush_3;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void update_all__8TFogCtrlFv(void) {
    s32 var_r29;
    s32 var_r31;
    s32 temp_r3;

    if (is_split_screen() == 0) {
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r3 = *(TFogCtrl__fog_instance_table + var_r31);
            if ((u32)temp_r3 != 0U) {
                clear_active_flag__8TFogCtrlFPv((void *)(temp_r3));
            }
            var_r29 += 1;
            var_r31 += 1;
        } while (var_r29 != 4);
    }
}
extern int fold_flush_4;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void clear_active_flag__8TFogCtrlFPv(void *arg0) {
    s32 temp_r3;

    if (is_split_screen() == 0) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_r3 & 1) {
            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_r3 & 0xFFFFFFFE);
            apply_fog_entry((void *)(arg0));
        }
    } else {
        apply_fog_entry((void *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) & 0xFFFFFFFE);
    }
}
extern int fold_flush_5;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 apply_fog_entry(void *arg0) {
    TFogCtrl_800FAE1C *self = (TFogCtrl_800FAE1C *)arg0;
    GXFogAdjTable_800FAE1C tbl;
    set_scene_fog_type(2);
    fn_803E1FC8((self->color << 8) | (self->color >> 24));
    set_scene_fog_distances(self->start, self->end);
    if (is_split_screen() == 0) {
        if (self->width >= FOG_MAX) {
            self->width = FOG_MAX;
        } else if (self->width <= FOG_ZERO) {
            self->width = FOG_ZERO;
        }
        GXInitFogAdjTable(&tbl, (s32)self->width, scene_projection_state);
        GXSetFogRangeAdj(1, 0x140, &tbl);
    } else {
        if (self->width >= (3.2e+02f)) {
            self->width = (3.2e+02f);
        } else if (self->width <= FOG_ZERO) {
            self->width = FOG_ZERO;
        }
        GXInitFogAdjTable(&tbl, (s32)self->width, scene_projection_state);
        GXSetFogRangeAdj(1, 0xA0, &tbl);
    }
    end_effect_render__13TParticleCtrlFv();
}
extern int fold_flush_6;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 restore_fog__8TFogCtrlFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    if (get_param__8TFogCtrlFPv((void*)arg0) != 0) {
        return 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x184);
    if (temp_r0 == 0) {
        return 1;
    }
    if ((temp_r0 == 3) && ((s32) M2C_FIELD(arg0, s32 *, 0x1B4) == 0)) {
        return 1;
    }
    if (arg1 & 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
    return 1;
}
extern int fold_flush_7;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 select_fog__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    struct Ctrl_800FAFE0 *self = (struct Ctrl_800FAFE0 *)arg0;
    if (get_param__8TFogCtrlFPv((void*)((void *)arg0)) != 0) {
        return 0;
    }
    if (self->slots[self->selected]->identity == arg1) {
        return 1;
    }
    ((M2C_UNK (*)(int, int, int))load_entry_into_slot__8TFogCtrlFPvii)((int)arg0, 2, arg1);
    request_transition__8TFogCtrlFPvii(arg0, 1, arg2);
    return 1;
}
extern int fold_flush_8;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
s32 request_fog__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2) {
  s32 var_r30;
  s32 var_r31;
  s32 var_r4;
  s32 var_r5;
  u8 *var_r29;
  u8 *var_r3;
  var_r29 = arg0;
  var_r30 = arg1;
  var_r31 = arg2;
  if (get_param__8TFogCtrlFPv((void*)(arg0)) != 0)
  {
    var_r3 = (u8 *) 0;
    return 0;
  }
  var_r3 = (u8 *) (var_r29 + ((*((s32 *) (((s8 *) var_r29) + 0x184))) * 4));
  var_r3 = (u8 *) (*((u8 **) (((s8 *) var_r3) + 0x174)));
  if (((s32) (*((s32 *) (((s8 *) var_r3) + 0x40)))) == var_r30)
  {
    var_r3 = (u8 *) ((void *) 1);
    if (var_r3 && var_r3)
    {
    }
    return 1;
  }
  var_r3 = (u8 *) var_r29;
  var_r5 = var_r30;
  var_r4 = 2;
  ((M2C_UNK (*)(int, int, int))load_entry_into_slot__8TFogCtrlFPvii)((int) var_r3, (int) 2, (int) var_r5);
  var_r3 = (u8 *) var_r29;
  var_r5 = var_r31;
  var_r4 = 0;
  request_transition__8TFogCtrlFPvii((u8 *)((int) var_r3), (s32)((int) 0), (s32)((int) var_r5));
  var_r3 = (u8 *) ((void *) 1);
  return 1;
}
extern int fold_flush_9;
#pragma pop

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
void request_transition__8TFogCtrlFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    if (arg2 & 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x20) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x19C) = (s32) M2C_FIELD(arg0, s32 *, 0x184);
    M2C_FIELD(arg0, s32 *, 0x1A0) = 2;
    M2C_FIELD(arg0, s32 *, 0x1A4) = arg1;
}
extern int fold_flush_10;
#pragma pop

s32 get_param__8TFogCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c0); }

#pragma push
#pragma fp_contract on
void apply_slot_params__8TFogCtrlFPvi(FogCtrl_800FB134 *self, s32 idx) {
    FogRow_800FB134 *row = self->slots[idx];
    f32 t;
    self->color = row->color;
    self->end = row->end;
    self->start = row->start;
    self->width = FOG_MAX;
    if (FOG_ZERO != row->end_amplitude) {
        t = row->end_amplitude * sin_table_lookup((s32)((182.04445f) * ((f32)actor_frame_tick * row->speed + (f32)row->phases[2])));
        self->end += t;
    }
    if (FOG_ZERO != row->start_amplitude) {
        t = row->start_amplitude * sin_table_lookup((s32)((182.04445f) * ((f32)actor_frame_tick * row->speed + (f32)row->phases[4])));
        self->start += t;
    }
    if (FOG_ZERO != row->width) {
        self->width = (f32)row->phases[6] * sin_table_lookup((s32)((182.04445f) * ((f32)actor_frame_tick * row->speed))) + row->width;
    }
    self->dirty |= 1;
}
extern int fold_flush_11;
#pragma pop

s32 is_controller_animated__8TFogCtrlFii(s32 arg0, s32 arg1) {
  f32 temp_f31;
  f32 var_f31;
  s32 temp_r3;
  u8 *temp_r31;
  temp_r3 = arg0 + (arg1 * 4);
  temp_r31 = (u8 *) (*((u8 **) (((s8 *) temp_r3) + 0x174)));
  temp_r3 = *((s32 *) (((s8 *) temp_r31) + 0));
  if (temp_r3 & 2)
  {
    if (((FOG_ZERO != (*((f32 *) (((s8 *) temp_r31) + 0x20)))) || (FOG_ZERO != (*((f32 *) (((s8 *) temp_r31) + 0x28))))) || (((u8) (*((u8 *) (((s8 *) temp_r31) + 0x3E)))) != 0))
    {
      return 1;
    }
    return 0;
  }
  if (temp_r3 & 4)
  {
    temp_f31 = *((f32 *) (((s8 *) temp_r31) + 0x44));
    get_random_float__21TObjEneMe3ShinowaRealFv((f32) temp_f31);
    var_f31 = temp_f31 + (*((f32 *) (((s8 *) temp_r31) + 0x18)));
    get_random_float__21TObjEneMe3ShinowaRealFv((f32) var_f31);
    if (var_f31 < FOG_ZERO)
    {
      var_f31 += (128.0f);
    }
    else
      if (var_f31 >= (128.0f))
    {
      var_f31 -= (128.0f);
    }
    *((f32 *) (((s8 *) temp_r31) + 0x44)) = var_f31;
    return 1;
  }
  return 0;
}

void TFogCtrl__sub_800FB400(O_800FB400 *self, s32 i, s32 j) {
    s32 t = self->arr[i];
    self->arr[i] = self->arr[j];
    self->arr[j] = t;
}

void load_entry_into_slot__8TFogCtrlFPvii(Ctrl_800FB424 *self, s32 i, s32 entry) {
    s32 k;
    Fog_800FB424 *f = self->fogs[i];
    f->entry = entry;
    copy_fog_entry((u8 *)f, (u8 *)get_entry__8TFogCtrlFi(entry));
    f->f44 = FOG_ZERO;
    for (k = 0; k < 3; k++) {
        f->f48[k] = 0;
    }
}

void render__8TFogCtrlFv(void) {  }

#pragma push
#pragma fp_contract on
void run_task__8TFogCtrlFv(Ctrl_800FB498 *arg0) {
    u32 c0;
    u32 c1;
    Row_800FB498 *mixed;
    Row_800FB498 *from;
    Row_800FB498 *to;
    s32 update;
    f32 amount;
    f32 inv;
    f32 a;
    f32 b;
    u32 color;

    update = 0;
    switch (arg0->mode) {
    case 0:
        if (is_controller_animated__8TFogCtrlFii((s32)arg0, arg0->selected) != 0) {
            update = 1;
        }
        break;
    case 1:
        TFogCtrl__sub_800FB400((O_800FB400 *)arg0, arg0->reqTo, arg0->reqCommit);
        update = 1;
        arg0->selected = arg0->reqCommit;
        arg0->mode = 0;
        break;
    case 2:
        arg0->blendFrom = arg0->reqFrom;
        arg0->blendTo = arg0->reqTo;
        arg0->blendCommit = arg0->reqCommit;
        arg0->amount = FOG_ZERO;
        if (arg0->blendTo == 0) {
            arg0->rate = arg0->slots[arg0->blendFrom]->rate;
        } else {
            arg0->rate = arg0->slots[arg0->blendTo]->rate;
        }
        if (arg0->rate <= FOG_ZERO) {
            arg0->rate = (0.001f);
        }
        arg0->selected = 3;
        arg0->slots[3]->identity = arg0->slots[arg0->blendTo]->identity;
        arg0->mode = 3;
    case 3:
        mixed = arg0->slots[3];
        from = arg0->slots[arg0->blendFrom];
        to = arg0->slots[arg0->blendTo];
        mixed->randomPhase = FOG_ZERO;
        amount = arg0->amount;
        if (amount >= 1.0f) {
            TFogCtrl__sub_800FB400((O_800FB400 *)arg0, arg0->reqTo, arg0->reqCommit);
            arg0->selected = arg0->blendCommit;
            arg0->mode = 0;
        } else {
            c0 = from->color;
            c1 = to->color;
            inv = 1.0f - amount;
            a = (f32)((c0 >> 16) & 0xFF) * inv;
            b = (f32)((c1 >> 16) & 0xFF) * amount;
            color = (u8)(u32)(a + b) << 16;
            a = (f32)((c0 >> 8) & 0xFF) * inv;
            b = (f32)((c1 >> 8) & 0xFF) * amount;
            color |= (u8)(u32)(a + b) << 8;
            a = (f32)(c0 & 0xFF) * inv;
            b = (f32)(c1 & 0xFF) * amount;
            color |= (u8)(u32)(a + b);
            mixed->color = color;
            mixed->end = from->end * inv + to->end * amount;
            mixed->start = from->start * inv + to->start * amount;
            mixed->speed = to->speed;
            mixed->endAmp = from->endAmp * inv + to->endAmp * amount;
            mixed->startAmp = from->startAmp * inv + to->startAmp * amount;
            mixed->width = from->width * inv + to->width * amount;
            mixed->phases[2] = from->phases[2] * inv + to->phases[2] * amount;
            mixed->phases[4] = from->phases[4] * inv + to->phases[4] * amount;
            mixed->phases[6] = from->phases[6] * inv + to->phases[6] * amount;
            arg0->amount += arg0->rate;
        }
        update = 1;
        break;
    }
    if (update != 0) {
        apply_slot_params__8TFogCtrlFPvi((FogCtrl_800FB134 *)arg0, arg0->selected);
    }
}
extern int fold_flush_12;
#pragma pop

u8 *__dt__8TFogCtrlFv(u8 *arg0, s16 arg1) {
    s32 temp_r0;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TFogCtrl.value;
        reset_scene_fog();
        end_effect_render__13TParticleCtrlFv();
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C4);
        if ((temp_r0 >= 0) && (temp_r0 < 4)) {
            M2C_FIELD(&(*(RecoveredGlobal_800FB8A0_TFogCtrl__data_80501188 *)&TFogCtrl__fog_instance_table).value, M2C_UNK *, (temp_r0 * 4)) = 0;
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((s32) arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
TFogCtrl_800FB92C *TFogCtrl__ct(TFogCtrl_800FB92C *self, void *parent, s32 index) {
    s32 i;
    f32 one;
    __ct__7TObjectFP7TObject(self, parent);
    self->vt = &__vt__8TFogCtrl;
    self->f0 = lbl_805D2B18;
    self->index = index;
    if (self->index >= 0 && self->index < 4) {
        ((TFogCtrl_800FB92C **)&TFogCtrl__fog_instance_table)[self->index] = self;
    }
    self->f20 = 0;
    one = FOG_ZERO;
    for (i = 0; i < 4; i++) {
        self->fogs[i].entry = 0;
        copy_fog_entry((u8 *)&self->fogs[i], fog_default_entry);
        self->fogs[i].f44 = one;
        self->ptrs[i] = &self->fogs[i];
    }
    self->f184 = 0;
    one = FOG_ZERO;
    self->f19C = 0;
    self->f1A0 = 0;
    self->f1A4 = 0;
    self->f1A8 = 0;
    self->f1AC = 0;
    self->f1B0 = 0;
    self->f1B4 = 0;
    self->f1B8 = one;
    self->f1BC = one;
    self->f1C0 = 0;
    self->f1C = 0;
    apply_slot_params__8TFogCtrlFPvi((FogCtrl_800FB134 *)(self), (s32)(0));
    return self;
}
extern int fold_flush_13;
#pragma pop

void TFogCtrl__sub_800FBA54(void) {  }

void TFogCtrl__sub_800FBA58(void) {
    s32 var_r29;
    s32 var_r31;
    M2C_UNK temp_r3;

    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__fog_instance_table + var_r31);
        if ((u32) temp_r3 != 0U) {
            ((M2C_UNK (*)(M2C_UNK))TFogCtrl__sub_800FBA54)(temp_r3);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
}

void TFogCtrl__sub_800FBAAC(void) {  }

void update_fog_entries__8TFogCtrlFv(void) {
    s32 i;
    s32 j;
    M2C_UNK v;
    if (is_online_ready__6TLobbyFv() != 0) {
        if (!(fog_update_flags & 2)) {
            read_disc_file(lbl_8043DA30, (void *)fog_entry_array);
            fog_update_flags |= 2;
        }
    } else if (fog_update_flags & 2) {
        read_disc_file(lbl_8043DA20, (void *)fog_entry_array);
        fog_update_flags &= ~2;
    }
    i = 0;
    j = 0;
    do {
        v = *(TFogCtrl__fog_instance_table + j);
        if ((u32)v != 0U) {
            ((void (*)(M2C_UNK))TFogCtrl__sub_800FBAAC)(v);
        }
        i += 1;
        j += 1;
    } while (i != 4);
    ((M2C_UNK (*)(void))end_effect_render__13TParticleCtrlFv)();
}

void create_area_fog_ctrl(void) {
    M2C_UNK *var_r3;
    M2C_UNK *var_r4;
    s32 var_r31;
    s32 var_r5;
    u32 temp_r3;
    u32 temp_r3_2;
    if (is_split_screen() != 0) {
        var_r31 = 0;
        do {
            var_r3 = (M2C_UNK *)((u8 *)((M2C_UNK *)0x1C8));
            temp_r3 = __nw__7TObjectFUl((int) (0x1C8));
            if (temp_r3 != 0U) {
                var_r4 = (M2C_UNK *)((u8 *)(tl_02));
                var_r5 = var_r31;
                ((s32 (*)(int, int, int))TFogCtrl__ct)((int) (temp_r3), (int) (var_r4), (int) (var_r5));
            }
            var_r31 += 1;
        } while (var_r31 != 4);
    } else {
        var_r3 = (M2C_UNK *)((u8 *)((M2C_UNK *)0x1C8));
        temp_r3_2 = __nw__7TObjectFUl((int) (0x1C8));
        if (temp_r3_2 != 0U) {
            var_r4 = (M2C_UNK *)((u8 *)(tl_02));
            var_r5 = 0;
            ((s32 (*)(int, int, int))TFogCtrl__ct)((int) (temp_r3_2), (int) (var_r4), (int) (0));
        }
    }
    create__22TObjFogCollisionPoisonFv();
    var_r4 = (M2C_UNK *)(&area_fog_row_table.value);
    var_r3 = (M2C_UNK *)(&area_fog_row_table.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&area_fog_row_table.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4)));
    var_r4 = (M2C_UNK *)((u8 *)((M2C_UNK *)1));
    update_all__8TFogCtrlFii((int) (var_r3), (int) (1));
}

void reset__8TFogCtrlFv(void) {
    TObjFogCollisionPoison__sub_801533BC();
    destroy_instance__22TQuestVmDownLoadServerFv();
    if ((u32) fog_entry_array != 0U) {
        free__11TOBoss4RockFUi((void*)fog_entry_array);
    }
    fog_entry_array = 0U;
    ((M2C_UNK (*)(M2C_UNK))fn_803E1FC8)(-1);
    ((M2C_UNK (*)(f32, f32))set_scene_fog_distances)((1e+03f), (1e+04f));
    ((M2C_UNK (*)(void))reset_scene_fog)();
    begin_effect_render__13TParticleCtrlFv();
}

void init_scene_fog_system(void) {
    s32 i;
    fog_update_flags = 0;
    (*(FogParam_800FBC5C *)&fog_default_entry).f0 = 1;
    (*(FogParam_800FBC5C *)&fog_default_entry).f4 = 0;
    (*(FogParam_800FBC5C *)&fog_default_entry).f8 = 4000.0f;
    (*(FogParam_800FBC5C *)&fog_default_entry).fC = 100.0f;
    (*(FogParam_800FBC5C *)&fog_default_entry).f10 = 0.01f;
    (*(FogParam_800FBC5C *)&fog_default_entry).f14 = 0;
    for (i = 0; i < 8; i++) {
        (*(FogParam_800FBC5C *)&fog_default_entry).f18[i] = FOG_ZERO;
        (*(FogParam_800FBC5C *)&fog_default_entry).f38[i] = 0;
    }
    (*(FogParam_800FBC5C *)&fog_default_entry).f18[6] = FOG_MAX;
    fog_entry_array = (u32)alloc_buffer__11TOBoss4RockFPv(0x2000);
    for (i = 0; i < 0x80; i++) {
        copy_fog_entry((u8 *)&((FogParam_800FBC5C *)fog_entry_array)[i], (u8 *)&fog_default_entry);
    }
    read_disc_file(lbl_8043DA20, (void *)fog_entry_array);
    for (i = 0; i < 4; i++) {
        TFogCtrl__fog_instance_table[i] = 0;
    }
    ((M2C_UNK (*)(void))end_effect_render__13TParticleCtrlFv)();
    create_instance__8TFogCtrlFv();
    clear_state_array__22TObjFogCollisionPoisonFv();
}

}
