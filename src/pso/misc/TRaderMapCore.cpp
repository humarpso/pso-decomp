#include "types.h"
#include "pso/misc/TRaderMapCore.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801FA964_lbl_804C8784 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 {
    M2C_UNK value;
    u8 remaining[0x74];
};

#include <stddef.h>
struct Stack_801FA9D8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
    s32 sp20;
    RadarViewportParameters viewport;
};

struct RecoveredGlobal_801FA9D8_lbl_8044A770 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801FA9D8_lbl_8044A77C {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801FA9D8_lbl_804C8748 {
    M2C_UNK value;
    u8 remaining[0x38];
};

struct RecoveredGlobal_801FA9D8_lbl_804C8784 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708 {
    M2C_UNK value;
    u8 remaining[0x74];
};

typedef struct RadarInitPiece_801F9474 {
    s16 id, flags;
    f32 translation[3]; u32 rotation[3];
    f32 fade, radius; void *object;
} RadarInitPiece_801F9474;

typedef struct RadarInitMap_801F9474 { RadarInitPiece_801F9474 *pieces; void *textures; s32 count; } RadarInitMap_801F9474;

struct Region_801F9C54 {
    s16 id; s16 flags; f32 x, y, z;
    u32 angles[3]; f32 fade, radius; void *model;
};

struct Map_801F9C54 { struct Region_801F9C54 *regions; void *textures; s32 count; };

struct Region_801F9CB8 {
    s16 id; s16 flags; f32 x, y, z;
    u32 angles[3]; f32 fade, radius; void *model;
};

struct Map_801F9CB8 { struct Region_801F9CB8 *regions; void *textures; s32 count; };

struct Piece_801F9418 {
    s16 a;
    s16 flags;
    u8 rest[0x24];
};

struct Map_801F9418 {
    Piece_801F9418* pieces;
    s32 b;
    s32 count;
};

struct Piece_801F9630 {
    s16 a;
    s16 flags;
    u8 rest[0x24];
};

struct Map_801F9630 {
    Piece_801F9630* pieces;
    s32 b;
    s32 count;
};

struct Rect_801F9228 {
    f32 x0;
    f32 y0;
    f32 x1;
    f32 y1;
};

struct Radar_801FADF0 {
    u8 pad0[0x90];
    s32 f90;
    u8 pad94[0x184 - 0x94];
    u32 f184;
};

struct RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08 {
    M2C_UNK value;
    u8 remaining[0x9FC];
};

struct Vec_801F9B8C { f32 x, y, z; };

struct Dot_801F9B8C { f32 x, z, w; s16 c; s16 type; s32 color; };

struct Vec_801F9D84 { f32 x, y, z; };

struct Model_801F9D84 { u8 pad[8]; Vec_801F9D84 a; Vec_801F9D84 b; };

struct ModelRef_801F9D84 { void *p0; Model_801F9D84 *m; };

struct Region_801F9D84 {
    s16 id; s16 flags; f32 x, y, z;
    u32 angles[3]; f32 fade, radius; ModelRef_801F9D84 *model;
};

struct Map_801F9D84 { Region_801F9D84 *regions; void *textures; s32 count; };

struct Vec3_801F9314 { f32 x, y, z; };

struct Cam_801F9314 { Vec3_801F9314 dir; Vec3_801F9314 pos; s32 rot; };

struct Color_801FAAEC { f32 r, g, b, a; };

struct Model_801FAAEC { u8 pad[4]; s32 obj; };

struct Rec_801FAAEC {
    s16 id; s16 flags;
    f32 x, y, z;
    s32 rx, ry, rz;
    f32 alpha;
    u8 pad20[4];
    Model_801FAAEC *model;
};

struct Map_801FAAEC { Rec_801FAAEC *recs; u32 tex; s32 count; };

struct Self_801FAAEC { u8 pad[0x194]; s32 flags; u8 pad198[8]; f32 maxAlpha; };

struct RecoveredGlobal_801FA1E0_lbl_8050BEC0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801FA1E0_TRaderMapCore__data_80512D08 {
    M2C_UNK value;
    u8 remaining[0x9FC];
};

struct Gate_801FA1E0 { f32 x; f32 z; f32 scale; u16 rot; s16 kind; s32 color; };

struct RecoveredGlobal_801FA1E0_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801FA350_lbl_8050BEC0 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801FA350_lbl_8058D4C0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

typedef struct Vec4_801F9E9C {
    f32 v[4];
} Vec4_801F9E9C;

typedef struct Entry_801F9E9C {
    f32 x;
    f32 y;
    f32 z;
    s32 unkC;
    f32 unk10;
    u8 pad14[2];
    s16 id;
    Vec4_801F9E9C color;
} Entry_801F9E9C;

typedef struct Core_801F9E9C {
    u8 pad0[0x94];
    Entry_801F9E9C e[4];
    s32 unk134;
    u8 pad138[0x34];
    s32 mode;
} Core_801F9E9C;

typedef struct Player_801F9E9C {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0x1C];
    s32 unk60;
    u8 pad64[0x828 - 0x64];
    u8 sub828[4];
} Player_801F9E9C;

struct Glob_801F97C4 {
    u8 pad0[0x28];
    f32 f28;
    u8 pad2c[0x4];
    f32 f30;
    u8 rest[0x44];
};

struct Glob_801F986C {
    u8 pad0[0x28];
    f32 f28;
    u8 pad2c[0x4];
    f32 f30;
    u8 rest[0x44];
};

struct Pair_801F9770 { f32 x; f32 y; };

struct Glob_801F9770 {
    u8 pad0[0x28];
    f32 f28;
    u8 pad2c[0x4];
    f32 f30;
    u8 rest[0x44];
};

struct Pad_801FAF24 {
    u8 pad0[0x20];
    u8 ctl[0x30];
};

struct Radar_801FAF24 {
    u8 pad0[0x184];
    u32 f184;
    f32 f188;
    f32 f18C;
    f32 f190;
};

extern "C" {
M2C_UNK TCameraCtrl__sub_80068EF0();
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
M2C_UNK draw_compass__13TRaderMapCoreFv(void *, void *);
M2C_UNK draw_backdrop__13TRaderMapCoreFv(void *, void *);
extern u32 TRaderMapCore__floor_map_resource;
extern s32 lbl_805D5F2C;
extern s32 TRaderMapCore__data_805D5F30;
extern s32 TRaderMapCore__view_mode;
void render__13TRaderMapCoreFv(u8 *arg0);
void disallow_rendering__7TObjectFv(void *);
void reset_counter__13TRaderMapCoreFPv(void* p);
extern void *TRaderMapCore__instance;
void hide_radar__13TRaderMapCoreFv(void);
void allow_rendering__7TObjectFv(void *);
void reset_counter__13TRaderMapCoreFPv(void* p);
extern void *TRaderMapCore__instance;
void show_radar__13TRaderMapCoreFv(void);
extern s32 TRaderMapCore__view_mode;
s32 is_render_admitted_default__13TRaderMapCoreFPv(u8 *arg0);
M2C_UNK setup_default_view__11TCameraCtrlFPvPv(void *, int);
M2C_UNK apply_distant_light__9TObjLightFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TCameraCtrl__sub_801E32D8(f32, f32);
M2C_UNK GXSetScissorBoxOffset(int, int);
extern RecoveredGlobal_801FA964_lbl_804C8784 radar_map_view_scissor_table;
extern s32 camera_ctrl_instance;
extern const f32 radar_screen_center_x_f32;
extern const f32 radar_screen_center_y_f32;
void setup_view__13TRaderMapCoreFii(s32 arg0, s32 arg1);
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern const f32 lbl_805D35F4;
extern const f32 lbl_805D35F8;
extern s32 TRaderMapCore__view_mode;
void add_zoom_distance__13TRaderMapCoreFf(f32 farg0);
M2C_UNK memset(void *, int, int);
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
s32 set_light__9TObjLightFPvPvf(void *, void *, f32);
s32 begin_effect_render__13TParticleCtrlFv();
extern RecoveredGlobal_801FA9D8_lbl_8044A770 lbl_8044A770;
extern RecoveredGlobal_801FA9D8_lbl_8044A77C lbl_8044A77C;
extern RecoveredGlobal_801FA9D8_lbl_804C8748 radar_map_view_rect_table;
extern RecoveredGlobal_801FA964_lbl_804C8784 radar_map_view_scissor_table;
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern const f32 TRaderMapCore__data_805DC534;
void begin_map_view__13TRaderMapCoreFii(s32 arg0, s32 arg1);
void *heap_zalloc__5THeapFUl(int, u32);
extern s16 *TRaderMapCore__floor_discovery_table[];
extern int TRaderMapCore__map_heap;
s32 init_radar_floor_flags(s32 floor, RadarInitMap_801F9474 *map);
extern u32 TRaderMapCore__floor_map_resource;
s32 block_region_by_id__13TRaderMapCoreFs(s16 id);
extern u32 TRaderMapCore__floor_map_resource;
extern const f32 TRaderMapCore__data_805DC568;
s32 reveal_region_by_id__13TRaderMapCoreFs(s16 id);
extern s16 *TRaderMapCore__floor_discovery_table[];
s32 save_floor_discovery__13TRaderMapCoreFiPv(s32 arg0, Map_801F9418* arg1);
void heap_free__5THeapFPv(int, void*);
extern s16 *TRaderMapCore__floor_discovery_table[];
extern int TRaderMapCore__map_heap;
void free_map_data__13TRaderMapCoreFv(void);
void* __ct__5THeapFUli(void*, u32, s32);
void* __nw__5THeapFUl(u32);
extern s16 *TRaderMapCore__floor_discovery_table[];
extern int TRaderMapCore__map_heap;
void TRaderMapCore__sub_801F95CC(void);
extern u32 TRaderMapCore__floor_map_resource;
void set_piece_flags__13TRaderMapCoreFi(s32 arg0);
void GXSetScissor(u32, u32, u32, u32);
extern const f32 radar_screen_center_x_f32;
extern const f32 radar_screen_center_y_f32;
s32 set_view_scissor__13TRaderMapCoreFPviPv(void *self, int mode, void *arg2);
s32 TCameraCtrl__sub_80069304();
s32 test_flag_2000000__10TObjPlayerFPv(u32);
s32 check_flag_100__10TObjPlayerFPv(u32);
u32 get_player_by_client_id(s32);
s32 get_flag_bit0__11TWindowCtrlFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern u8 TCameraCtrl__view_state[];
extern s32 TRaderMapCore__view_mode;
extern s32 TRaderMapCore__render_mode;
s32 is_render_admitted__13TRaderMapCoreFPvPv(void *arg0v, void *arg1);
f32 xz_distance_squared(void *, void *);
extern RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08 TRaderMapCore__marker_buffer;
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern s32 TRaderMapCore__data_805D5F30;
extern const f32 TRaderMapCore__data_805DC534;
extern const f32 lbl_805DC564;
s32 minimap_render_dot(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3);
f32 xz_distance_squared(void *, void *);
extern RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08 TRaderMapCore__marker_buffer;
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern s32 TRaderMapCore__data_805D5F30;
extern const f32 lbl_805DC564;
s32 add_radar_scaled_marker(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3, f32 scale);
f32 xz_distance_squared(void *, void *);
extern u32 TRaderMapCore__floor_map_resource;
extern const f32 TRaderMapCore__data_805DC568;
void update_radar_auto_discovery(M2C_UNK arg0, M2C_UNK arg1, void *arg2);
void set_camera_look_at(Vec3_801F9314 *, Vec3_801F9314 *, Vec3_801F9314 *);
void set_perspective_projection_from_fov(s32, f32, f32, f32);
void rotate_vector_by_matrix(void *, Vec3_801F9314 *, Vec3_801F9314 *);
void rotate_matrix_y(void *, s32);
void push_matrix_from(void *);
void pop_matrix(void);
extern Vec3_801F9314 lbl_8044A794;
extern u8 identity_matrix[];
extern f32 lbl_805D3608;
extern f32 radar_overhead_projection_scale;
extern const f32 TRaderMapCore__data_805DC534;
extern const f32 lbl_805DC548;
extern const f32 lbl_805DC54C;
extern const f32 lbl_805DC550;
void setup_overhead_projection__13TRaderMapCoreFv(s32 arg0, Cam_801F9314 *arg1);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void rotate_matrix_zyx(s32, s32, s32, s32);
void translate_matrix(s32, f32, f32, f32);
void push_matrix(void);
void pop_matrix(void);
void set_global_param__8TObjFishFi(s32);
void draw_ginja_model(s32);
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern Color_801FAAEC radar_map_backdrop_color;
extern u8 saved_model_draw_color[];
extern u8 lbl_8058D4C0[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern u32 TRaderMapCore__floor_map_resource;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DC590;
void render_region_records__13TRaderMapCoreFv(Self_801FAAEC *arg0, void * _w1);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void TRaderMapCore__sub_801F967C(void *, s32);
void scale_matrix(s32, f32, f32, f32);
void rotate_matrix_y(void *, s32);
void translate_matrix(s32, f32, f32, f32);
void push_matrix(void);
void pop_matrix(void);
void draw_ginja_object(s32);
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern u8 saved_model_draw_color[];
extern RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08 TRaderMapCore__marker_buffer;
extern u8 lbl_8058D4C0[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 TRaderMapCore__data_805D5F30;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 TRaderMapCore__data_805DC528;
extern const f32 lbl_805DC57C;
extern const f32 lbl_805DC580;
extern const f32 lbl_805DC584;
void draw_enemy_gate_markers__13TRaderMapCoreFv(u8 *arg0);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void scale_matrix(s32, f32, f32, f32);
void rotate_matrix_y(void *, s32);
void translate_matrix(s32, f32, f32, f32);
void push_matrix(void);
void pop_matrix(void);
void draw_ginja_object(s32);
void set_chunk_material_override_pair(s32, s32);
void set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern u8 saved_model_draw_color[];
extern u8 lbl_8058D4C0[];
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 TRaderMapCore__data_805DC528;
void draw_player_markers__13TRaderMapCoreFv(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
int obj_getField1c(void*);
s32 get_current_floor(void);
s32 get_field_3e4__10TObjPlayerFPv(void);
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 test_flag_2000000__10TObjPlayerFPv(u32);
u32 get_player_by_client_id(s32);
s32 TLobby__sub_801C19D0(void *);
s32 should_show_map__13TRaderMapCoreFv(void);
void reset__13TRaderMapCoreFPv(void *);
extern Vec4_801F9E9C radar_player_slot_color_table[];
extern s32 local_client_id;
extern const f32 lbl_805DC560;
extern const f32 lbl_805DC570;
extern const f32 lbl_805DC578;
void gather_player_markers__13TRaderMapCoreFv(Core_801F9E9C *self);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern s32 TRaderMapCore__view_mode;
void pan_vertical__13TRaderMapCoreFv(f32 farg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern s32 TRaderMapCore__view_mode;
void pan_horizontal__13TRaderMapCoreFv(f32 farg0);
Pair_801F9770 TRaderMapCore__sub_801F9D38(void *);
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern s32 TRaderMapCore__view_mode;
extern void *TRaderMapCore__instance;
void open_free_map_view__13TRaderMapCoreFv(void);
s32 has_flag__13TRaderMapCoreFPv(void *, s32);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
s32 apply_packed_flags__13TRaderMapCoreFiiii(void *, s32, s32, s32);
s32 get_map_id__13TRaderMapCoreFPv(u32);
s32 check_flag_100__10TObjPlayerFPv(u32);
u32 get_player_by_client_id(s32);
void add_zoom_distance__13TRaderMapCoreFf(f32 farg0);
void pan_vertical__13TRaderMapCoreFv(f32 farg0);
void pan_horizontal__13TRaderMapCoreFv(f32 farg0);
extern Pad_801FAF24 controller_input_state[];
extern RecoveredGlobal_801F9720_TRaderMapCore__data_80513708 TRaderMapCore__map_view_state;
extern const f32 TRaderMapCore__data_805DC528;
extern const f32 TRaderMapCore__data_805DC58C;
extern const f32 lbl_805DC598;
void update_pan_zoom_input__13TRaderMapCoreFPv(u8 *arg0);
M2C_UNK TCameraCtrl__sub_801E32D8(f32, f32);
void GXSetViewport(f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetScissorBoxOffset(int, int);
extern const f32 TRaderMapCore__data_805DC528;
extern const f32 radar_screen_width_f32;
extern const f32 radar_screen_height_f32;
extern const f32 TRaderMapCore__data_805DC534;
extern const f32 radar_screen_center_x_f32;
extern const f32 radar_screen_center_y_f32;

}

extern "C" {

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q);
void free_heap__13TRaderMapCoreFv(void);
s32 is_active__13TRaderMapCoreFv(void);
void reset_counter__13TRaderMapCoreFPv(void* p);
s32 should_show_map__13TRaderMapCoreFv(void);
void update_target__13TRaderMapCoreFPv(void *arg0);
u32 get_player_by_client_id(s32);
int __dt__5THeapFv(void*, void*);
s32 is_card_flag_set__19TWindowKeyBoardHardFPv(u16);
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 is_ready__6TLobbyFv();
s32 is_technique_ready__8TTecCtrlFv();
int obj_getField1c(void*);

extern void *TRaderMapCore__instance;

s32 is_render_admitted_default__13TRaderMapCoreFPv(u8 *arg0) {
    return is_render_admitted__13TRaderMapCoreFPvPv((void *)((void *)(arg0)), (void *)((void *)(TRaderMapCore__view_mode)));
}

s32 is_active__13TRaderMapCoreFv(void) {
    if ((void *) TRaderMapCore__instance != NULL) {
        if (M2C_FIELD(TRaderMapCore__instance, u16 *, 4) & 0x10) {
            return 0;
        }
        return is_render_admitted_default__13TRaderMapCoreFPv((u8 *)(TRaderMapCore__instance));
    }
    return 0;
}

s32 should_show_map__13TRaderMapCoreFv(void) {
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && (is_ready__6TLobbyFv() == 0)) {
        return 0;
    }
    return is_technique_ready__8TTecCtrlFv();
}
void reset_counter__13TRaderMapCoreFPv(void* p) { *(s32*)((char*)p + 0x184) = 0; }

    extern int TRaderMapCore__map_heap;

void hide_radar__13TRaderMapCoreFv(void) {
    if ((void *) (*(u8 * *)&TRaderMapCore__instance) != NULL) {
        reset_counter__13TRaderMapCoreFPv((void*)((*(u8 * *)&TRaderMapCore__instance)));
        disallow_rendering__7TObjectFv((*(u8 * *)&TRaderMapCore__instance));
    }
}

void show_radar__13TRaderMapCoreFv(void) {
    if ((void *) (*(u8 * *)&TRaderMapCore__instance) != NULL) {
        reset_counter__13TRaderMapCoreFPv((void*)((*(u8 * *)&TRaderMapCore__instance)));
        allow_rendering__7TObjectFv((*(u8 * *)&TRaderMapCore__instance));
    }
}

#pragma fp_contract on

}

void TRaderMapCore::configure_viewport(const RadarViewportParameters* view) {
    f32 temp_f31;
    f32 temp_f2;
    f32 temp_f30;
    f32 temp_f1;
    GXSetViewport(TRaderMapCore__data_805DC528, TRaderMapCore__data_805DC528, radar_screen_width_f32, radar_screen_height_f32, TRaderMapCore__data_805DC528, TRaderMapCore__data_805DC534);
    GXSetScissorBoxOffset((int)(0), (int)(0));
    temp_f1 = view->center_x;
    temp_f2 = view->center_y;
    temp_f31 = -(temp_f1 - radar_screen_center_x_f32);
    temp_f30 = -(temp_f2 - radar_screen_center_y_f32);
    TCameraCtrl__sub_801E32D8(temp_f1, temp_f2);
    GXSetScissorBoxOffset((int)((s32) temp_f31), (int)((s32) temp_f30));
}

extern "C" {

s32 set_view_scissor__13TRaderMapCoreFPviPv(void *self, int mode, void *arg2) {
    Rect_801F9228 *rect = (Rect_801F9228 *)arg2;
    u32 w;
    u32 h;
    u32 y;
    if (mode == 2) {
        w = 32.0f * (rect->x1 - rect->x0);
        h = 32.0f * (rect->y1 - rect->y0);
        y = radar_screen_center_y_f32 - 0.5f * h;
        GXSetScissor((u32)(radar_screen_center_x_f32 - 0.5f * w), y, w, h);
    } else {
        GXSetScissor(0, 0, 0x280, 0x1E0);
    }
}
#pragma fp_contract reset

void setup_overhead_projection__13TRaderMapCoreFv(s32 arg0, Cam_801F9314 *arg1) {
    Vec3_801F9314 up = lbl_8044A794;
    Vec3_801F9314 eye;
    Vec3_801F9314 at;
    eye.x = arg1->dir.x * lbl_805D3608;
    eye.y = arg1->dir.y * lbl_805D3608;
    eye.z = arg1->dir.z * lbl_805D3608;
    at.x = arg1->pos.x + eye.x;
    at.y = arg1->pos.y + eye.y;
    at.z = arg1->pos.z + eye.z;
    push_matrix_from(identity_matrix);
    rotate_matrix_y(0, 0x8000 - arg1->rot);
    rotate_vector_by_matrix(0, &up, &up);
    pop_matrix();
    set_perspective_projection_from_fov((s32)(lbl_805DC548 * radar_overhead_projection_scale), lbl_805DC54C, TRaderMapCore__data_805DC534, lbl_805DC550);
    set_camera_look_at(&eye, &at, &up);
}

s32 save_floor_discovery__13TRaderMapCoreFiPv(s32 arg0, Map_801F9418* arg1) {
    s16* saved = ((s16* *)&TRaderMapCore__floor_discovery_table)[arg0];
    s16* p;
    Piece_801F9418* piece;
    s32 i;
    if (saved != NULL) {
        for (i = 0, piece = arg1->pieces, p = saved; i < arg1->count; i++, piece++, p++) {
            *p = piece->flags;
        }
    } else {
        return 0;
    }
    return 1;
}

s32 init_radar_floor_flags(s32 floor, RadarInitMap_801F9474 *map) {
    s16 *saved = TRaderMapCore__floor_discovery_table[floor];
    s16 *p;
    RadarInitPiece_801F9474 *piece;
    s32 i;
    s32 j;
    if (saved != NULL) {
        for (i = 0, piece = map->pieces, p = saved; i < map->count; i++, piece++, p++) {
            piece->flags = *p;
        }
    } else {
        saved = (s16 *) heap_zalloc__5THeapFUl(TRaderMapCore__map_heap, (u32) map->count * 2);
        if (saved != NULL) {
            TRaderMapCore__floor_discovery_table[floor] = saved;
        } else {
            return 0;
        }
        for (j = 0, piece = map->pieces; j < map->count; j++, piece++) {
            piece->flags |= 1;
        }
    }
    return 1;
}

void free_map_data__13TRaderMapCoreFv(void) {
    s32 i;
    for (i = 0x11; i >= 0; i--) {
        if (((s16* *)&TRaderMapCore__floor_discovery_table)[i] != NULL) {
            heap_free__5THeapFPv(TRaderMapCore__map_heap, ((s16* *)&TRaderMapCore__floor_discovery_table)[i]);
            ((s16* *)&TRaderMapCore__floor_discovery_table)[i] = NULL;
        }
    }
}

void free_heap__13TRaderMapCoreFv(void) { __dt__5THeapFv((void*)(TRaderMapCore__map_heap), (void*)1); TRaderMapCore__map_heap = 0; }

typedef char RecoveredGlobal_801F9720_TRaderMapCore__data_80513708_size[sizeof(RecoveredGlobal_801F9720_TRaderMapCore__data_80513708) == 0x78 ? 1 : -1];

void TRaderMapCore__sub_801F95CC(void) {
    s32 i;
    void* p = __nw__5THeapFUl(0x14);
    if (p != NULL) {
        p = __ct__5THeapFUli(p, 0x1000, 0x20);
    }
    TRaderMapCore__map_heap = (int)p;
    for (i = 0; i < 0x12; i++) {
        ((s16* *)&TRaderMapCore__floor_discovery_table)[i] = NULL;
    }
}

void set_piece_flags__13TRaderMapCoreFi(s32 arg0) {
    if (TRaderMapCore__floor_map_resource != 0) {
        Map_801F9630* m = (Map_801F9630*)TRaderMapCore__floor_map_resource;
        if (m->pieces != 0) {
            Piece_801F9630* piece = m->pieces;
            s32 i;
            for (i = 0; i < ((Map_801F9630*)TRaderMapCore__floor_map_resource)->count; i++, piece++) {
                piece->flags |= arg0;
            }
        }
    }
}

void add_zoom_distance__13TRaderMapCoreFf(f32 farg0) {
    f32 temp_f0;
    if (((s32) TRaderMapCore__view_mode == 1) || ((s32) TRaderMapCore__view_mode == 2)) {
        temp_f0 = M2C_FIELD(&TRaderMapCore__map_view_state.value, f32 *, 0x2C) + farg0;
        M2C_FIELD(&TRaderMapCore__map_view_state.value, f32 *, 0x2C) = temp_f0;
        if (temp_f0 < lbl_805D35F4) {
            M2C_FIELD(&TRaderMapCore__map_view_state.value, f32 *, 0x2C) = (f32) lbl_805D35F4;
        }
        if (M2C_FIELD(&TRaderMapCore__map_view_state.value, f32 *, 0x2C) > lbl_805D35F8) {
            M2C_FIELD(&TRaderMapCore__map_view_state.value, f32 *, 0x2C) = (f32) lbl_805D35F8;
        }
    }
}

#define MAP_801F9C54 ((struct Map_801F9C54 *) TRaderMapCore__floor_map_resource)

typedef char RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08_size[sizeof(RecoveredGlobal_801F9B8C_TRaderMapCore__data_80512D08) == 0xA00 ? 1 : -1];

void open_free_map_view__13TRaderMapCoreFv(void) {
    s32 g = (s32)&TRaderMapCore__map_view_state;
    TRaderMapCore__view_mode = 1;
    {
        Pair_801F9770 p = TRaderMapCore__sub_801F9D38(TRaderMapCore__instance);
        ((Glob_801F9770 *)g)->f28 = p.x;
        ((Glob_801F9770 *)g)->f30 = p.y;
    }
}

void pan_vertical__13TRaderMapCoreFv(f32 farg0) {
    if (TRaderMapCore__view_mode == 1 || TRaderMapCore__view_mode == 2) {
        Glob_801F97C4 *g = (Glob_801F97C4 *)&TRaderMapCore__map_view_state;
        g->f30 -= farg0;
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 0xD:
        case 0xE:
        case 0x1F:
        case 0x23:
            return;
        default:
            if (g->f30 < -6000.0f) {
                g->f30 = -6000.0f;
            }
            if (g->f30 > 6000.0f) {
                g->f30 = 6000.0f;
            }
            break;
        }
    }
}

void pan_horizontal__13TRaderMapCoreFv(f32 farg0) {
    if (TRaderMapCore__view_mode == 1 || TRaderMapCore__view_mode == 2) {
        Glob_801F986C *g = (Glob_801F986C *)&TRaderMapCore__map_view_state;
        g->f28 -= farg0;
        switch (get_global_state__14TOKeyMachine01Fv()) {
        case 0xD:
        case 0xE:
        case 0x1F:
        case 0x23:
            return;
        default:
            if (g->f28 < -6000.0f) {
                g->f28 = -6000.0f;
            }
            if (g->f28 > 6000.0f) {
                g->f28 = 6000.0f;
            }
            break;
        }
    }
}

s32 add_radar_scaled_marker(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3, f32 scale) {
    Vec_801F9B8C *cam = (Vec_801F9B8C *)&TRaderMapCore__map_view_state;
    Vec_801F9B8C v;
    u8 pad[0x10];
    Dot_801F9B8C *d;
    if (TRaderMapCore__data_805D5F30 > 0x7F) {
        return 0;
    }
    if (!(arg3 & 1)) {
        v.x = cam->x;
        v.z = cam->z;
        if (xz_distance_squared(arg0, &v) > lbl_805DC564) {
            return 0;
        }
    }
    ((Dot_801F9B8C *)&TRaderMapCore__marker_buffer)[TRaderMapCore__data_805D5F30].x = arg0->x;
    d = &((Dot_801F9B8C *)&TRaderMapCore__marker_buffer)[TRaderMapCore__data_805D5F30];
    d->z = arg0->z;
    d->w = scale;
    d->color = arg1;
    d->type = arg2;
    d->c = 0;
    TRaderMapCore__data_805D5F30++;
    return 1;
}

s32 minimap_render_dot(Vec_801F9B8C *arg0, s32 arg1, s16 arg2, s32 arg3) {
    Vec_801F9B8C *cam = (Vec_801F9B8C *)&TRaderMapCore__map_view_state;
    Vec_801F9B8C v;
    u8 pad[0x10];
    Dot_801F9B8C *d;
    if (TRaderMapCore__data_805D5F30 > 0x7F) {
        return 0;
    }
    if (!(arg3 & 1)) {
        v.x = cam->x;
        v.z = cam->z;
        if (xz_distance_squared(arg0, &v) > lbl_805DC564) {
            return 0;
        }
    }
    ((Dot_801F9B8C *)&TRaderMapCore__marker_buffer)[TRaderMapCore__data_805D5F30].x = arg0->x;
    d = &((Dot_801F9B8C *)&TRaderMapCore__marker_buffer)[TRaderMapCore__data_805D5F30];
    d->z = arg0->z;
    d->w = TRaderMapCore__data_805DC534;
    d->color = arg1;
    d->type = arg2;
    d->c = 0;
    TRaderMapCore__data_805D5F30++;
    return 1;
}

s32 block_region_by_id__13TRaderMapCoreFs(s16 id) {
    s32 i;
    if (MAP_801F9C54 == NULL) {
        return 0;
    }
    for (i = 0; i < MAP_801F9C54->count; i++) {
        if (MAP_801F9C54->regions[i].id == id) {
            MAP_801F9C54->regions[i].flags |= 2;
            return 1;
        }
    }
    return 0;
}

#define MAP_801F9CB8 ((struct Map_801F9CB8 *) TRaderMapCore__floor_map_resource)
s32 reveal_region_by_id__13TRaderMapCoreFs(s16 id) {
    s32 i;
    if (MAP_801F9CB8 == NULL) {
        return 0;
    }
    for (i = 0; i < MAP_801F9CB8->count; i++) {
        if (MAP_801F9CB8->regions[i].id == id && (MAP_801F9CB8->regions[i].flags & 1)) {
            MAP_801F9CB8->regions[i].flags &= ~1;
            MAP_801F9CB8->regions[i].fade = TRaderMapCore__data_805DC568;
            return 1;
        }
    }
    return 0;
}

#define MAP_801F9D84 ((Map_801F9D84 *) TRaderMapCore__floor_map_resource)
void update_radar_auto_discovery(M2C_UNK arg0, M2C_UNK arg1, void *arg2) {
    Vec_801F9D84 v;
    Region_801F9D84 *r;
    s32 i;
    if (MAP_801F9D84 != NULL) {
        r = MAP_801F9D84->regions;
        for (i = 0; i < MAP_801F9D84->count; i++, r++) {
            if (!(r->flags & 2) && (r->flags & 1)) {
                if (r->flags & 4) {
                    v.x = r->x + r->model->m->b.x;
                    v.y = r->y + r->model->m->b.y;
                    v.z = r->z + r->model->m->b.z;
                } else {
                    v.x = r->x + r->model->m->a.x;
                    v.y = r->y + r->model->m->a.y;
                    v.z = r->z + r->model->m->a.z;
                }
                if (xz_distance_squared(&v, arg2) < r->radius * r->radius) {
                    r->flags &= ~1;
                    r->fade = TRaderMapCore__data_805DC568;
                }
            }
        }
    }
}

typedef char RecoveredGlobal_801FA1E0_lbl_8050BEC0_size[sizeof(RecoveredGlobal_801FA1E0_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801FA1E0_TRaderMapCore__data_80512D08_size[sizeof(RecoveredGlobal_801FA1E0_TRaderMapCore__data_80512D08) == 0xA00 ? 1 : -1];
typedef char RecoveredGlobal_801FA1E0_lbl_8058D4C0_size[sizeof(RecoveredGlobal_801FA1E0_lbl_8058D4C0) == 0x10 ? 1 : -1];

#define SHOW(t) ((s32 (*)(void *))should_show_map__13TRaderMapCoreFv)(t)
void gather_player_markers__13TRaderMapCoreFv(Core_801F9E9C *self) {
    s32 floor;
    Entry_801F9E9C *e;
    s32 team;
    s32 i;
    Player_801F9E9C *p;
    Entry_801F9E9C *me;
    team = 0;
    floor = get_current_floor();
    self->unk134 = -1;
    p = (Player_801F9E9C *)get_player_by_client_id(local_client_id);
    me = &self->e[0];
    if (p != NULL) {
        team = TLobby__sub_801C19D0(p->sub828);
        if (test_flag_2000000__10TObjPlayerFPv((u32)p) == 0) {
            VecCopy__FP3VecPC3Vec(me, p->pos);
            me->y = lbl_805DC570;
            me->unkC = p->unk60;
            me->id = local_client_id;
            self->unk134 = 0;
            if (SHOW(self) != 0) {
                if (team == 1) {
                    copy_vec4__13TRaderMapCoreFPvPv(&me->color, &radar_player_slot_color_table[0]);
                } else if (team == 2) {
                    copy_vec4__13TRaderMapCoreFPvPv(&me->color, &radar_player_slot_color_table[1]);
                } else {
                    copy_vec4__13TRaderMapCoreFPvPv(&me->color, &radar_player_slot_color_table[2]);
                }
            } else {
                copy_vec4__13TRaderMapCoreFPvPv(&me->color, &radar_player_slot_color_table[(u16)obj_getField1c((void*)(p))]);
            }
        } else {
            reset__13TRaderMapCoreFPv(me);
        }
    } else {
        reset__13TRaderMapCoreFPv(me);
    }
    e = &self->e[1];
    for (i = 0; i < 4; i++) {
        if (i == local_client_id) {
            continue;
        }
        if (SHOW(self) == 0) {
            p = (Player_801F9E9C *)get_player_by_client_id(i);
            if (p != NULL && floor == get_field_3e4__10TObjPlayerFPv() &&
                test_flag_2000000__10TObjPlayerFPv((u32)p) == 0) {
                VecCopy__FP3VecPC3Vec(e, p->pos);
                e->y = lbl_805DC570;
                e->unkC = p->unk60;
                e->id = i;
                copy_vec4__13TRaderMapCoreFPvPv(&e->color, &radar_player_slot_color_table[(u16)obj_getField1c((void*)(p))]);
            } else {
                reset__13TRaderMapCoreFPv(e);
            }
        } else if (team != 0) {
            p = (Player_801F9E9C *)get_player_by_client_id(i);
            if (p != NULL && floor == get_field_3e4__10TObjPlayerFPv() &&
                team == TLobby__sub_801C19D0(p->sub828) &&
                test_flag_2000000__10TObjPlayerFPv((u32)p) == 0) {
                VecCopy__FP3VecPC3Vec(e, p->pos);
                e->y = lbl_805DC570;
                e->unkC = p->unk60;
                e->id = i;
                if (team == 1) {
                    copy_vec4__13TRaderMapCoreFPvPv(&e->color, &radar_player_slot_color_table[0]);
                } else if (team == 2) {
                    copy_vec4__13TRaderMapCoreFPvPv(&e->color, &radar_player_slot_color_table[1]);
                } else {
                    copy_vec4__13TRaderMapCoreFPvPv(&e->color, &radar_player_slot_color_table[2]);
                }
            } else {
                reset__13TRaderMapCoreFPv(e);
            }
        } else {
            reset__13TRaderMapCoreFPv(e);
        }
        e++;
    }
    switch (self->mode) {
    case 0:
        for (s32 j = 0; j < 4; j++) {
            self->e[j].unk10 = lbl_805DC560;
        }
        break;
    case 1:
        for (s32 j = 0; j < 4; j++) {
            self->e[j].unk10 = lbl_805DC560;
        }
        break;
    case 2:
        for (s32 j = 0; j < 4; j++) {
            self->e[j].unk10 = lbl_805DC578;
        }
        break;
    }
}

void draw_enemy_gate_markers__13TRaderMapCoreFv(u8 *arg0) {
    Gate_801FA1E0 *g;
    s32 i;
    lbl_805D5660 = some_id_805c6f74;
    copy_vec4__13TRaderMapCoreFPvPv(&(*(RecoveredGlobal_801FA1E0_lbl_8050BEC0 *)&saved_model_draw_color).value, &(*(RecoveredGlobal_801FA1E0_lbl_8058D4C0 *)&lbl_8058D4C0).value);
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    some_id_805c6f74 |= M2C_FIELD(arg0, s32 *, 0x194);
    set_chunk_material_override_pair(-0xFF01, 0x100);
    for (i = 0, g = (Gate_801FA1E0 *)&TRaderMapCore__marker_buffer; i < TRaderMapCore__data_805D5F30; i++, g++) {
        TRaderMapCore__sub_801F967C(arg0, g->color);
        push_matrix();
        translate_matrix(0, g->x, TRaderMapCore__data_805DC528, g->z);
        rotate_matrix_y(0, g->rot);
        switch (g->kind) {
        case 0:
            scale_matrix(0, lbl_805DC57C * g->scale, lbl_805DC580, lbl_805DC584 * g->scale);
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x180));
            break;
        case 1:
            scale_matrix(0, lbl_805DC580 * g->scale, lbl_805DC580, lbl_805DC580 * g->scale);
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x17C));
            break;
        }
        pop_matrix();
    }
    set_chunk_material_color(chunk_material_color_half_alpha_f32);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    copy_vec4__13TRaderMapCoreFPvPv(&(*(RecoveredGlobal_801FA1E0_lbl_8058D4C0 *)&lbl_8058D4C0).value, &(*(RecoveredGlobal_801FA1E0_lbl_8050BEC0 *)&saved_model_draw_color).value);
    some_id_805c6f74 = lbl_805D5660;
}

typedef char RecoveredGlobal_801FA350_lbl_8050BEC0_size[sizeof(RecoveredGlobal_801FA350_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801FA350_lbl_8058D4C0_size[sizeof(RecoveredGlobal_801FA350_lbl_8058D4C0) == 0x10 ? 1 : -1];
void draw_player_markers__13TRaderMapCoreFv(u8 *arg0) {
    u8 *var_r31;
    s32 var_r30;
    lbl_805D5660 = some_id_805c6f74;
    copy_vec4__13TRaderMapCoreFPvPv(&(*(RecoveredGlobal_801FA350_lbl_8050BEC0 *)&saved_model_draw_color).value, &(*(RecoveredGlobal_801FA350_lbl_8058D4C0 *)&lbl_8058D4C0).value);
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    some_id_805c6f74 |= M2C_FIELD(arg0, s32 *, 0x194);
    set_chunk_material_override_pair(-0xFF01, 0x100);
    var_r31 = (u8 *)((void *)((u8 *)(arg0) + 0x94));
    var_r30 = 0;
    do {
        if ((s16) M2C_FIELD(var_r31, s16 *, 0x16) != -1) {
            set_chunk_material_color((u8 *)(var_r31) + 0x18);
            push_matrix();
            translate_matrix(0, M2C_FIELD(var_r31, f32 *, 0x0), TRaderMapCore__data_805DC528, M2C_FIELD(var_r31, f32 *, 0x8));
            rotate_matrix_y(0, M2C_FIELD(var_r31, s32 *, 0xC));
            scale_matrix(0, M2C_FIELD(var_r31, f32 *, 0x10), M2C_FIELD(var_r31, f32 *, 0x10), M2C_FIELD(var_r31, f32 *, 0x10));
            draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x178));
            pop_matrix();
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
        }
        var_r30 += 1;
        var_r31 = (u8 *)((void *)((u8 *)(var_r31) + 0x28));
    } while (var_r30 < 4);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    copy_vec4__13TRaderMapCoreFPvPv(&(*(RecoveredGlobal_801FA350_lbl_8058D4C0 *)&lbl_8058D4C0).value, &(*(RecoveredGlobal_801FA350_lbl_8050BEC0 *)&saved_model_draw_color).value);
    some_id_805c6f74 = lbl_805D5660;
}

void copy_transform__13TRaderMapCoreFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); *(f32*)((char*)p + 0xc) = *(f32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); *(f32*)((char*)p + 0x14) = *(f32*)((char*)q + 0x14); *(u32*)((char*)p + 0x18) = *(u32*)((char*)q + 0x18); *(u32*)((char*)p + 0x1c) = *(u32*)((char*)q + 0x1c); *(f32*)((char*)p + 0x20) = *(f32*)((char*)q + 0x20); *(f32*)((char*)p + 0x24) = *(f32*)((char*)q + 0x24); }

extern s32 local_client_id;
extern s32 lbl_805DC56C;

typedef char RecoveredGlobal_801FA964_lbl_804C8784_size[sizeof(RecoveredGlobal_801FA964_lbl_804C8784) == 0x30 ? 1 : -1];
void setup_view__13TRaderMapCoreFii(s32 arg0, s32 arg1) {
    GXSetScissorBoxOffset((int) (0), (int) (0));
    TCameraCtrl__sub_801E32D8((f32) (radar_screen_center_x_f32), (f32) (radar_screen_center_y_f32));
    setup_default_view__11TCameraCtrlFPvPv((void *) (camera_ctrl_instance), (int) (0));
    set_view_scissor__13TRaderMapCoreFPviPv((void *)((void *) (arg0)), (int)((int) (0)), (void *)((void *) ((u8 *)&radar_map_view_scissor_table.value + (arg1 * 0x10))));
    apply_distant_light__9TObjLightFv();
    end_effect_render__13TParticleCtrlFv();
}

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_801FA9D8_lbl_8044A770_size[sizeof(RecoveredGlobal_801FA9D8_lbl_8044A770) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_lbl_8044A77C_size[sizeof(RecoveredGlobal_801FA9D8_lbl_8044A77C) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_lbl_804C8748_size[sizeof(RecoveredGlobal_801FA9D8_lbl_804C8748) == 0x3C ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_lbl_804C8784_size[sizeof(RecoveredGlobal_801FA9D8_lbl_804C8784) == 0x30 ? 1 : -1];
typedef char RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708_size[sizeof(RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708) == 0x78 ? 1 : -1];
void begin_map_view__13TRaderMapCoreFii(s32 arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_801FA9D8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801FA9D8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801FA9D8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801FA9D8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801FA9D8, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_801FA9D8, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_801FA9D8, sp20) == 0x18) ? 1 : -1];
    typedef char viewport_offset[(offsetof(Stack_801FA9D8, viewport) == 0x1C) ? 1 : -1];
    Stack_801FA9D8 stack;
    u8 *temp_r5;
    restore_full_screen_view__11TCameraCtrlFv();
    memset((void *) (&stack.viewport), (int) (0), (int) (0x30));
    temp_r5 = (u8 *)&radar_map_view_rect_table.value + (arg1 * 0x14);
    stack.viewport.center_x = M2C_FIELD(temp_r5, f32 *, 0);
    stack.viewport.center_y = M2C_FIELD(temp_r5, f32 *, 4);
    stack.viewport.screen_width = M2C_FIELD(temp_r5, f32 *, 8);
    stack.viewport.screen_height = M2C_FIELD(temp_r5, f32 *, 0xC);
    stack.viewport.value18 = M2C_FIELD(temp_r5, f32 *, 0x10);
    ((TRaderMapCore*)arg0)->configure_viewport(&stack.viewport);
    set_view_scissor__13TRaderMapCoreFPviPv((void *)((void *) (arg0)), (int)((int) (2)), (void *)((void *) ((u8 *)&(*(RecoveredGlobal_801FA9D8_lbl_804C8784 *)&radar_map_view_scissor_table).value + (arg1 * 0x10))));
    setup_overhead_projection__13TRaderMapCoreFv((s32)((void *) (arg0)), (Cam_801F9314 *)((void *) ((u8 *)&(*(RecoveredGlobal_801FA9D8_TRaderMapCore__data_80513708 *)&TRaderMapCore__map_view_state).value + (arg1 * 0x28))));
    stack.sp18 = M2C_FIELD(&lbl_8044A770.value, s32 *, 0);
    stack.sp1C = M2C_FIELD(&lbl_8044A770.value, s32 *, 4);
    stack.sp20 = M2C_FIELD(&lbl_8044A770.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_8044A77C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8044A77C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8044A77C.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_8044A77C.value, s32 *, 0xC);
    set_light__9TObjLightFPvPvf((void *) (&stack.sp18), (void *) (&stack.sp8), (f32) (TRaderMapCore__data_805DC534));
    begin_effect_render__13TParticleCtrlFv();
}
#pragma pop

#define MAP_801FAAEC ((Map_801FAAEC *)TRaderMapCore__floor_map_resource)
void render_region_records__13TRaderMapCoreFv(Self_801FAAEC *arg0, void * _w1) {
    Rec_801FAAEC *r;
    s32 i;
    lbl_805D5660 = some_id_805c6f74;
    copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, lbl_8058D4C0);
    lbl_805D5664 = lbl_805D7784;
    lbl_805D5668 = lbl_805D7780;
    some_id_805c6f74 |= arg0->flags;
    set_chunk_material_override_pair(-0xFF01, 0x900);
    if (MAP_801FAAEC->tex != 0) {
        set_global_param__8TObjFishFi(MAP_801FAAEC->tex);
    }
    i = 0;
    {
    Color_801FAAEC c = radar_map_backdrop_color;
    r = MAP_801FAAEC->recs;
    for (; i < MAP_801FAAEC->count; i++, r++) {
        if (!(r->flags & 1)) {
            r->alpha += lbl_805DC590;
            if (r->alpha > arg0->maxAlpha) {
                r->alpha = arg0->maxAlpha;
            }
            c.r = r->alpha;
            set_chunk_material_color(&c);
            push_matrix();
            translate_matrix(0, r->x, r->y, r->z);
            rotate_matrix_zyx(0, r->rx, r->ry, r->rz);
            draw_ginja_model(r->model->obj);
            pop_matrix();
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
        }
    }
    }
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, saved_model_draw_color);
    some_id_805c6f74 = lbl_805D5660;
}

void render__13TRaderMapCoreFv(u8 *arg0) {
    if ((u32) TRaderMapCore__floor_map_resource != 0U) {
        if (is_render_admitted__13TRaderMapCoreFPvPv((void *)((void *) (arg0)), (void *)((void *) (TRaderMapCore__view_mode))) == 0) {
            lbl_805D5F2C = 0;
            TRaderMapCore__data_805D5F30 = 0;
            return;
        }
        switch ((s32) TRaderMapCore__view_mode) {
        case 0:
            draw_backdrop__13TRaderMapCoreFv((void *) (arg0), (void *) (TRaderMapCore__view_mode));
            begin_map_view__13TRaderMapCoreFii((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__view_mode)));
            render_region_records__13TRaderMapCoreFv((Self_801FAAEC *)((void *) (arg0)), (void *)((void *) (TRaderMapCore__view_mode)));
            draw_enemy_gate_markers__13TRaderMapCoreFv((u8 *)((void *) (arg0)));
            draw_player_markers__13TRaderMapCoreFv((u8 *)((void *) (arg0)));
            setup_view__13TRaderMapCoreFii((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__view_mode)));
            draw_compass__13TRaderMapCoreFv((void *) (arg0), (void *) (TRaderMapCore__view_mode));
            break;
        case 1:
            restore_full_screen_view__11TCameraCtrlFv();
            draw_backdrop__13TRaderMapCoreFv((void *) (arg0), (void *) (TRaderMapCore__view_mode));
            TCameraCtrl__sub_80068EF0();
            begin_map_view__13TRaderMapCoreFii((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__view_mode)));
            render_region_records__13TRaderMapCoreFv((Self_801FAAEC *)((void *) (arg0)), (void *)((void *) (TRaderMapCore__view_mode)));
            draw_enemy_gate_markers__13TRaderMapCoreFv((u8 *)((void *) (arg0)));
            draw_player_markers__13TRaderMapCoreFv((u8 *)((void *) (arg0)));
            setup_view__13TRaderMapCoreFii((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__view_mode)));
            restore_full_screen_view__11TCameraCtrlFv();
            M2C_FIELD(arg0, s32 *, 0x174) = 0;
            draw_compass__13TRaderMapCoreFv((void *) (arg0), (void *) (TRaderMapCore__view_mode));
            TCameraCtrl__sub_80068EF0();
            break;
        case 2:
            draw_backdrop__13TRaderMapCoreFv((void *) (arg0), (void *) (TRaderMapCore__view_mode));
            begin_map_view__13TRaderMapCoreFii((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__view_mode)));
            render_region_records__13TRaderMapCoreFv((Self_801FAAEC *)((void *) (arg0)), (void *)((void *) (TRaderMapCore__view_mode)));
            draw_enemy_gate_markers__13TRaderMapCoreFv((u8 *)((void *) (arg0)));
            draw_player_markers__13TRaderMapCoreFv((u8 *)((void *) (arg0)));
            setup_view__13TRaderMapCoreFii((s32)((void *) (arg0)), (s32)((void *) (TRaderMapCore__view_mode)));
            break;
        }
        lbl_805D5F2C = 0;
        TRaderMapCore__data_805D5F30 = 0;
    }
}

s32 is_render_admitted__13TRaderMapCoreFPvPv(void *arg0v, void *arg1) {
    s32 i;
    u32 p;
    if (TRaderMapCore__render_mode == 0) {
        return 0;
    }
    if (((Radar_801FADF0 *)arg0v)->f184 != 0) {
        if (test_flag_2000000__10TObjPlayerFPv(((Radar_801FADF0 *)arg0v)->f184) != 0) {
            return 0;
        }
        if (check_flag_100__10TObjPlayerFPv(((Radar_801FADF0 *)arg0v)->f184) != 0 && TRaderMapCore__view_mode != 1) {
            return 0;
        }
    } else {
        return 0;
    }
    if (TCameraCtrl__sub_80069304() != 0 && get_flag_bit0__11TWindowCtrlFv() == 0) {
        return 0;
    }
    if (TCameraCtrl__view_state[0] == 5 || TCameraCtrl__view_state[0] == 9) {
        ((Radar_801FADF0 *)arg0v)->f184 = 0;
        return 0;
    }
    if (((Radar_801FADF0 *)arg0v)->f90 > 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && check_flag_100__10TObjPlayerFPv(p) != 0 && (s32)arg1 == 2) {
            return 0;
        }
    }
    return all_parents_unqueued_for_destruction__7TObjectFv(arg0v) != 0 ? 1 : 0;
}

void update_pan_zoom_input__13TRaderMapCoreFPv(u8 *arg0) {
    Radar_801FAF24 *self = (Radar_801FAF24 *)arg0;
    u32 p;
    s32 i;
    s32 j;
    s32 k;
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && check_flag_100__10TObjPlayerFPv(p) != 0) {
            return;
        }
    }
    if (self->f184 != 0) {
        for (j = 0; j < 4; j++) {
            p = get_player_by_client_id(j);
            if (p != 0 && TWindowShortListCtrl__check_controller_button(controller_input_state[get_map_id__13TRaderMapCoreFPv(p)].ctl, 0x200) != 0) {
                self->f184 = 0;
                return;
            }
        }
        if (is_on_current_screen__11TCameraCtrlFPv(controller_input_state[get_map_id__13TRaderMapCoreFPv(self->f184)].ctl, 0x10) != 0) {
            self->f18C += lbl_805DC598;
        }
        if (is_on_current_screen__11TCameraCtrlFPv(controller_input_state[get_map_id__13TRaderMapCoreFPv(self->f184)].ctl, 0x20) != 0) {
            self->f18C -= lbl_805DC598;
        }
        if (is_on_current_screen__11TCameraCtrlFPv(controller_input_state[get_map_id__13TRaderMapCoreFPv(self->f184)].ctl, 0x40) != 0) {
            self->f188 += lbl_805DC598;
        }
        if (is_on_current_screen__11TCameraCtrlFPv(controller_input_state[get_map_id__13TRaderMapCoreFPv(self->f184)].ctl, 0x80) != 0) {
            self->f188 -= lbl_805DC598;
        }
        if (apply_packed_flags__13TRaderMapCoreFiiii(controller_input_state[get_map_id__13TRaderMapCoreFPv(self->f184)].ctl, 0x20000, 0x27, 1) != 0) {
            self->f190 -= lbl_805DC598;
        }
        if (apply_packed_flags__13TRaderMapCoreFiiii(controller_input_state[get_map_id__13TRaderMapCoreFPv(self->f184)].ctl, 0x10000, 0x27, 1) != 0) {
            self->f190 += lbl_805DC598;
        }
        pan_horizontal__13TRaderMapCoreFv(self->f188);
        pan_vertical__13TRaderMapCoreFv(self->f18C);
        add_zoom_distance__13TRaderMapCoreFf(self->f190);
        self->f188 *= TRaderMapCore__data_805DC58C;
        self->f18C *= TRaderMapCore__data_805DC58C;
        self->f190 *= TRaderMapCore__data_805DC58C;
        return;
    }
    for (k = 0; k < 4; k++) {
        p = get_player_by_client_id(k);
        if (p != 0 && TWindowShortListCtrl__check_controller_button(controller_input_state[get_map_id__13TRaderMapCoreFPv(p)].ctl, 0x200) != 0 &&
            has_flag__13TRaderMapCoreFPv(controller_input_state[get_map_id__13TRaderMapCoreFPv(p)].ctl, 0x10000) != 0) {
            self->f184 = p;
            u8 *cam = (u8 *)&TRaderMapCore__map_view_state;
            M2C_FIELD(cam, f32 *, 0x28) = M2C_FIELD(self->f184, f32 *, 0x38);
            M2C_FIELD(cam, f32 *, 0x30) = M2C_FIELD(self->f184, f32 *, 0x40);
            self->f188 = TRaderMapCore__data_805DC528;
            self->f18C = TRaderMapCore__data_805DC528;
            self->f190 = TRaderMapCore__data_805DC528;
            return;
        }
    }
}

void update_target__13TRaderMapCoreFPv(void *arg0) {
    u32 temp_r3;

    temp_r3 = get_player_by_client_id(local_client_id);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, u32 *, 0x184) = temp_r3;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x184) != 0U) {
        if (is_card_flag_set__19TWindowKeyBoardHardFPv(obj_getField1c((void*)M2C_FIELD(arg0, u32 *, 0x184))) != 0) {
            M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) | lbl_805DC56C);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x168) = (s32) (M2C_FIELD(arg0, s32 *, 0x168) & 0xFFFFFFFE);
    }
}

}
