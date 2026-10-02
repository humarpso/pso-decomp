#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
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

typedef s32 M2C_UNK;

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

extern "C" {
s32 render_forward__20TWindowSubStatusDispFPv();
s32 reset_transform_state__10TObjPlayerFv();
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 TWindowSubStatusDisp__sub_803DF160(int, void *);
extern const f32 lbl_805DA978;
extern const f32 lbl_805DA97C;
extern const f32 lbl_805DA980;
extern const f32 lbl_805DA984;
extern const f32 lbl_805DA988;
extern const f32 lbl_805DA98C;
extern const f32 lbl_805DA990;
extern const f32 lbl_805DA994;
extern const f32 lbl_805DA998;
extern const f32 lbl_805DA99C;
extern const f32 lbl_805DA9A0;
extern const f32 lbl_805DA9A4;
extern const f32 lbl_805DA9A8;
extern const f32 lbl_805DA9AC;
void TWindowSubStatusDisp__sub_800FBD74(s32 arg0, f32 farg0, f32 farg1, f32 farg2);
M2C_UNK create__22TObjFogCollisionPoisonFv();
u32 __nw__7TObjectFUl(int);
s32 is_split_screen();
s32 update_all__8TFogCtrlFii(int, int);
s32 TFogCtrl__ct(int, int, int);
s32 get_global_state__14TOKeyMachine01Fv();
extern RecoveredGlobal_800FBB68_lbl_8049C670 lbl_8049C670;
extern M2C_UNK *tl_02;
void TFogCtrl__sub_800FBB68(void);
u8 get_small_font_glyph_width(s32);
s32 TWindowSubStatusDisp__sub_800FC248(s32);
void build_small_font_glyph_quad(s32, Pos_800FBEA8 *);
s32 render_forward__20TWindowSubStatusDispFPv();
s32 reset_transform_state__10TObjPlayerFv();
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 TWindowSubStatusDisp__sub_803DF160(int, void *);
void TWindowSubStatusDisp__sub_800FBEA8(void *color, s16 value, u16 digits, f32 x, f32 y, f32 scale);
u8 get_small_font_glyph_width(s32);
s32 TWindowSubStatusDisp__sub_800FC248(s32);
void build_small_font_glyph_quad(s32, Pos_800FBEA8 *);
s32 render_forward__20TWindowSubStatusDispFPv();
s32 reset_transform_state__10TObjPlayerFv();
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 TWindowSubStatusDisp__sub_803DF160(int, void *);
void TLobby__sub_800FBFD8(void *color, const char *s, f32 x, f32 y, f32 scale);
void TLobby__sub_800F9DF4(void *, void *);
void TFogCtrl__sub_800FBAAC(void);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 is_online_ready__6TLobbyFv();
extern u8 lbl_8043DA20[];
extern u8 lbl_8043DA30[];
extern M2C_UNK TFogCtrl__data_80501188[];
extern u32 lbl_805D5388;
extern s32 lbl_805D538C;
void TFogCtrl__sub_800FBAB0(void);
void TLobby__sub_800F9DF4(void *, void *);
void create_instance__8TFogCtrlFv(void);
void TFogCtrl__sub_800FAC90(u8 *arg0, u8 *arg1);
FogParam_800FBC5C *alloc_buffer__11TOBoss4RockFPv(s32);
void TObjFogCollisionPoison__sub_801533C0(void);
M2C_UNK end_effect_render__13TParticleCtrlFv();
extern u8 lbl_8043DA20[];
extern M2C_UNK TFogCtrl__data_80501188[];
extern FogParam_800FBC5C lbl_80501198;
extern u32 lbl_805D5388;
extern s32 lbl_805D538C;
void init_scene_fog_system(void);
}

extern "C" {

void TFogCtrl__sub_800FBA58(void);
void TFogCtrl__sub_800FBAAC(void);
int fn_800FC0D8(void* p);
void reset__8TFogCtrlFv(void);
M2C_UNK TFogCtrl__sub_800FBA54(M2C_UNK);
M2C_UNK TObjFogCollisionPoison__sub_801533BC();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK destroy_instance__22TQuestVmDownLoadServerFv();
int fn_800FC0F8(void*);
M2C_UNK fn_803E1FC8(M2C_UNK);
M2C_UNK fn_803E1FFC(f32, f32);
M2C_UNK fn_803E2070();
M2C_UNK free__11TOBoss4RockFUi(void*);

extern M2C_UNK TFogCtrl__data_80501188[];

void TFogCtrl__sub_800FBA58(void) {
    s32 var_r29;
    s32 var_r31;
    M2C_UNK temp_r3;

    var_r29 = 0;
    var_r31 = 0;
    do {
        temp_r3 = *(TFogCtrl__data_80501188 + var_r31);
        if ((u32) temp_r3 != 0U) {
            TFogCtrl__sub_800FBA54(temp_r3);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 != 4);
}

void TFogCtrl__sub_800FBAAC(void) {  }

extern u32 lbl_805D5388;
extern f32 lbl_805DA964;
extern f32 lbl_805DA968;

void TFogCtrl__sub_800FBAB0(void) {
    s32 i;
    s32 j;
    M2C_UNK v;
    if (is_online_ready__6TLobbyFv() != 0) {
        if (!(lbl_805D538C & 2)) {
            TLobby__sub_800F9DF4(lbl_8043DA30, (void *)lbl_805D5388);
            lbl_805D538C |= 2;
        }
    } else if (lbl_805D538C & 2) {
        TLobby__sub_800F9DF4(lbl_8043DA20, (void *)lbl_805D5388);
        lbl_805D538C &= ~2;
    }
    i = 0;
    j = 0;
    do {
        v = *(TFogCtrl__data_80501188 + j);
        if ((u32)v != 0U) {
            ((void (*)(M2C_UNK))TFogCtrl__sub_800FBAAC)(v);
        }
        i += 1;
        j += 1;
    } while (i != 4);
    end_effect_render__13TParticleCtrlFv();
}

void TFogCtrl__sub_800FBB68(void) {
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
                TFogCtrl__ct((int) (temp_r3), (int) (var_r4), (int) (var_r5));
            }
            var_r31 += 1;
        } while (var_r31 != 4);
    } else {
        var_r3 = (M2C_UNK *)((u8 *)((M2C_UNK *)0x1C8));
        temp_r3_2 = __nw__7TObjectFUl((int) (0x1C8));
        if (temp_r3_2 != 0U) {
            var_r4 = (M2C_UNK *)((u8 *)(tl_02));
            var_r5 = 0;
            TFogCtrl__ct((int) (temp_r3_2), (int) (var_r4), (int) (0));
        }
    }
    create__22TObjFogCollisionPoisonFv();
    var_r4 = (M2C_UNK *)(&lbl_8049C670.value);
    var_r3 = (M2C_UNK *)(&lbl_8049C670.value);
    var_r3 = (M2C_UNK *)(M2C_FIELD(&lbl_8049C670.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4)));
    var_r4 = (M2C_UNK *)((u8 *)((M2C_UNK *)1));
    update_all__8TFogCtrlFii((int) (var_r3), (int) (1));
}

void reset__8TFogCtrlFv(void) {
    TObjFogCollisionPoison__sub_801533BC();
    destroy_instance__22TQuestVmDownLoadServerFv();
    if ((u32) lbl_805D5388 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5388);
    }
    lbl_805D5388 = 0U;
    fn_803E1FC8(-1);
    fn_803E1FFC(lbl_805DA964, lbl_805DA968);
    fn_803E2070();
    begin_effect_render__13TParticleCtrlFv();
}

void init_scene_fog_system(void) {
    s32 i;
    lbl_805D538C = 0;
    lbl_80501198.f0 = 1;
    lbl_80501198.f4 = 0;
    lbl_80501198.f8 = 4000.0f;
    lbl_80501198.fC = 100.0f;
    lbl_80501198.f10 = 0.01f;
    lbl_80501198.f14 = 0;
    for (i = 0; i < 8; i++) {
        lbl_80501198.f18[i] = 0.0f;
        lbl_80501198.f38[i] = 0;
    }
    lbl_80501198.f18[6] = 640.0f;
    lbl_805D5388 = (u32)alloc_buffer__11TOBoss4RockFPv(0x2000);
    for (i = 0; i < 0x80; i++) {
        TFogCtrl__sub_800FAC90((u8 *)&((FogParam_800FBC5C *)lbl_805D5388)[i], (u8 *)&lbl_80501198);
    }
    TLobby__sub_800F9DF4(lbl_8043DA20, (void *)lbl_805D5388);
    for (i = 0; i < 4; i++) {
        TFogCtrl__data_80501188[i] = 0;
    }
    end_effect_render__13TParticleCtrlFv();
    create_instance__8TFogCtrlFv();
    TObjFogCollisionPoison__sub_801533C0();
}

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
    TWindowSubStatusDisp__sub_803DF160((int) (0), (void *) (arg0));
    stack.sp8 = farg0;
    stack.spC = farg1;
    stack.sp10 = lbl_805DA978 + farg0;
    stack.sp14 = lbl_805DA97C + farg1;
    stack.sp18 = lbl_805DA980;
    stack.sp1C = lbl_805DA984;
    stack.sp20 = lbl_805DA988;
    stack.sp24 = lbl_805DA98C;
    draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) (farg2));
    temp_f8 = stack.sp8 + lbl_805DA990;
    temp_f7 = stack.spC + lbl_805DA994;
    stack.sp8 = temp_f8;
    stack.spC = temp_f7;
    stack.sp10 = lbl_805DA998 + temp_f8;
    stack.sp14 = lbl_805DA99C + temp_f7;
    stack.sp18 = lbl_805DA9A0;
    stack.sp1C = lbl_805DA9A4;
    stack.sp20 = lbl_805DA9A8;
    stack.sp24 = lbl_805DA9AC;
    draw_textured_quad_at_depth((void *) (&stack.sp8), (f32) (farg2));
    get_player__20TWindowSubStatusDispFv();
}

void TWindowSubStatusDisp__sub_800FBEA8(void *color, s16 value, u16 digits, f32 x, f32 y, f32 scale) {
    Pos_800FBEA8 pos;
    s32 id;
    s32 i;
    reset_transform_state__10TObjPlayerFv();
    begin_screen_draw(1);
    render_forward__20TWindowSubStatusDispFPv();
    TWindowSubStatusDisp__sub_803DF160(0, color);
    for (i = 0; i < digits; i++) {
        id = TWindowSubStatusDisp__sub_800FC248((u8)(value % 10) + '0');
        x -= get_small_font_glyph_width(id);
        pos.x = x;
        pos.y = y;
        build_small_font_glyph_quad(id, &pos);
        draw_textured_quad_at_depth(&pos, scale);
        value /= 10;
    }
    get_player__20TWindowSubStatusDispFv();
}

void TLobby__sub_800FBFD8(void *color, const char *s, f32 x, f32 y, f32 scale) {
    Pos_800FBFD8 pos;
    s32 id;
    reset_transform_state__10TObjPlayerFv();
    begin_screen_draw(1);
    render_forward__20TWindowSubStatusDispFPv();
    TWindowSubStatusDisp__sub_803DF160(0, color);
    while (*s != 0) {
        u8 c = *s++;
        pos.x = x;
        pos.y = y;
        id = TWindowSubStatusDisp__sub_800FC248(c);
        build_small_font_glyph_quad((s32)(id), (Pos_800FBEA8 *)(&pos));
        draw_textured_quad_at_depth(&pos, scale);
        x += get_small_font_glyph_width(id);
    }
    get_player__20TWindowSubStatusDispFv();
}

int fn_800FC0D8(void* p) { return fn_800FC0F8(p); }

}
