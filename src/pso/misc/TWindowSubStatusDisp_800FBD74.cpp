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

#pragma push
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off

void TWindowSubStatusDisp__sub_800FBD74(s32 arg0, f32 farg0, f32 farg1, f32 farg2) {
    typedef char sp8_offset[(offsetof(Stack_800FBD74, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800FBD74, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800FBD74, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800FBD74, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800FBD74, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_800FBD74, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_800FBD74, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_800FBD74, sp24) == 0x1C) ? 1 : -1];
    Stack_800FBD74 stack;
    f32 temp_f7;
    f32 temp_f8;
    reset_transform_state__10TObjPlayerFv();
    begin_screen_draw((int) (1));
    render_forward__20TWindowSubStatusDispFPv();
    set_draw_texture_and_color((int) (0), (void *) (arg0));
    stack.sp8 = farg0;
    stack.spC = farg1;
    stack.sp10 = (109.0f) + farg0;
    stack.sp14 = (12.0f) + farg1;
    stack.sp18 = (0.00390625f);
    stack.sp1C = (0.921875f);
    stack.sp20 = (0.4296875f);
    stack.sp24 = (0.96875f);
    draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) (farg2));
    stack.sp8 += (114.0f);
    stack.spC += (-3.0f);
    stack.sp10 = (15.0f) + stack.sp8;
    stack.sp14 = (14.0f) + stack.spC;
    stack.sp18 = (0.4453125f);
    stack.sp1C = (0.92578125f);
    stack.sp20 = (0.50390625f);
    stack.sp24 = (0.98046875f);
    draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) (farg2));
    get_player__20TWindowSubStatusDispFv();
}

void draw_number_digits__20TWindowSubStatusDispFPvsUsfff(void *color, s16 value, u16 digits, f32 x, f32 y, f32 scale) {
    Pos_800FBEA8 pos;
    s32 id;
    s32 i;
    reset_transform_state__10TObjPlayerFv();
    begin_screen_draw(1);
    render_forward__20TWindowSubStatusDispFPv();
    set_draw_texture_and_color(0, color);
    for (i = 0; i < digits; i++) {
        id = ((s32 (*)(s32))TWindowSubStatusDisp__sub_800FC248)((u8)(value % 10) + '0');
        x -= ((u8 (*)(s32))get_small_font_glyph_width)(id);
        pos.x = x;
        pos.y = y;
        ((void (*)(s32, Pos_800FBEA8 *))build_small_font_glyph_quad)(id, &pos);
        draw_textured_quad_at_depth(&pos, scale);
        value /= 10;
    }
    get_player__20TWindowSubStatusDispFv();
}

void draw_small_font_text(void *color, const char *s, f32 x, f32 y, f32 scale) {
    Pos_800FBFD8 pos;
    s32 id;
    reset_transform_state__10TObjPlayerFv();
    begin_screen_draw(1);
    render_forward__20TWindowSubStatusDispFPv();
    set_draw_texture_and_color(0, color);
    while (*s != 0) {
        u8 c = *s++;
        pos.x = x;
        pos.y = y;
        id = ((s32 (*)(s32))TWindowSubStatusDisp__sub_800FC248)(c);
        ((void (*)(s32, Pos_800FBEA8 *))build_small_font_glyph_quad)((s32)(id), (Pos_800FBEA8 *)(&pos));
        draw_textured_quad_at_depth(&pos, scale);
        x += ((u8 (*)(s32))get_small_font_glyph_width)(id);
    }
    get_player__20TWindowSubStatusDispFv();
}

int get_name_text_width(void* p) { return ((int (*)(void*))calc_small_font_text_width)(p); }

u32 calc_small_font_text_width(const char *s) {
    f32 max = (0.0f);
    u32 w = 0;
    u8 c;

    if (s == NULL) {
        return 0;
    }
    while (*s != 0) {
        c = *s++;
        if (c == '\n') {
            if (max < (f32)w) {
                max = (f32)w;
            }
            w = 0;
        } else if (c == ' ') {
            { f32 t = (f32)w; t += (5.0f); w = t; }
        } else {
            w += ((u8 (*)(u8))get_small_font_glyph_width)(c);
        }
    }
    if (max < (f32)w) {
        max = (f32)w;
    }
    return max;
}

s32 get_small_font_glyph_width(u8 c) {
    return (s32)small_font_metrics_table_ptr[c - 0x20].w;
}

void TWindowSubStatusDisp__sub_800FC248(void) {  }

void calc_plain_glyph_quad(u8 c, Quad_800FC24C *q) {
    f32 a = (f32)((c & 0xF) << 4);
    f32 b = 109.0f + (f32)(c & 0xF0);
    E_800FC220 *g = &small_font_metrics_table_ptr[c - 0x20];
    q->y0 = q->y0 + g->x;
    q->x1 = q->x0 + g->w;
    q->y1 = 13.0f + q->y0;
    q->u0 = a / 256.0f;
    q->v0 = b / 256.0f;
    q->u1 = (a + g->w) / 256.0f;
    q->v1 = (13.0f + b) / 256.0f;
}

void build_small_font_glyph_quad(u8 c, Quad_800FC310 *q) {
    f32 a = (f32)((c << 4) & 0xF0);
    f32 b = (f32)(c & 0xF0);
    E_800FC220 *g = &small_font_metrics_table_ptr[c - 0x20];
    q->y0 = q->y0 + g->x;
    q->x1 = q->x0 + g->w;
    q->y1 = 13.0f + q->y0;
    q->u0 = a / 256.0f;
    q->v0 = b / 256.0f;
    q->u1 = (a + g->w) / 256.0f;
    q->v1 = (13.0f + b) / 256.0f;
}

}
