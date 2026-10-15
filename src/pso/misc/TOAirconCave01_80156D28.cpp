#include "types.h"
#include "pso/misc/TOAirconCave01.h"

struct RecoveredGlobal_80156D70_lbl_8050BEC0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80156D70_lbl_8058D4C0 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
int copy_vec4__13TRaderMapCoreFPvPv(void*, void*);
void set_color_blend_mode(s32, s32, s32, s32);
void set_chunk_material_color(void *);
extern unsigned char saved_model_draw_color[];
extern unsigned char model_material_color[];
extern int lbl_805D5660;
extern int lbl_805D5664;
extern int lbl_805D5668;
extern int chunk_polygon_flags_or_mask;
extern int chunk_polygon_flags_and_mask;
extern int model_render_flags;
void TOAirconCave01__sub_80156D70(u8 *arg0);
}

extern "C" {

void TOAirconCave01__sub_80156D28(void);
s32 TObjPlayer__sub_800D96D0(s32, s32 *);
void TObjPlayer__sub_800D9718(void *);
s32 __dl__FPv(void *);
int copy_vec4__13TRaderMapCoreFPvPv(void*, void*);
void fn_80156CEC(void *);

    extern unsigned char saved_model_draw_color[];
    extern unsigned char model_material_color[];
    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int chunk_polygon_flags_or_mask;
    extern int chunk_polygon_flags_and_mask;
    extern int model_render_flags;
void TOAirconCave01__sub_80156D28(void) { copy_vec4__13TRaderMapCoreFPvPv(model_material_color, saved_model_draw_color); chunk_polygon_flags_and_mask = lbl_805D5664; chunk_polygon_flags_or_mask = lbl_805D5668; model_render_flags = lbl_805D5660; }

extern s32 lbl_804AF8D8[];

typedef char RecoveredGlobal_80156D70_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80156D70_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80156D70_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80156D70_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TOAirconCave01__sub_80156D70(u8 *arg0) {
    (*(s32 *)&lbl_805D5660) = (*(s32 *)&model_render_flags);
    (*(s32 *)&lbl_805D5664) = (*(s32 *)&chunk_polygon_flags_and_mask);
    (*(s32 *)&lbl_805D5668) = (*(s32 *)&chunk_polygon_flags_or_mask);
    copy_vec4__13TRaderMapCoreFPvPv((void*)(&(*(RecoveredGlobal_80156D70_lbl_8050BEC0 *)&saved_model_draw_color).value), (void*)(&(*(RecoveredGlobal_80156D70_lbl_8058D4C0 *)&model_material_color).value));
    (*(s32 *)&model_render_flags) |= 0x8021;
    set_chunk_material_color(arg0);
    set_color_blend_mode(1, 4, 5, 0);
}

void *TOAirconCave01::destroy(s16 arg1) {
    if (this != NULL) {
        *(s32 **)((s8 *)this + 0x14) = lbl_804AF8D8;
        TObjPlayer__sub_800D96D0((s32)this, 0);
        if (arg1 > 0) {
            __dl__FPv(this);
        }
    }
    return this;
}

extern s32 lbl_804AF8D8[];

void *TOAirconCave01::init_vtable_804AF8D8() {
    TObjPlayer__sub_800D9718(this);
    *(s32 **)((s8 *)this + 0x14) = lbl_804AF8D8;
    fn_80156CEC(this);
    return this;
}

}
