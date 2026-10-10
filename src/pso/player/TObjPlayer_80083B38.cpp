#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80083CEC_lbl_8048E5D0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct C_800845F8 { u8 pad[0x20]; s32 x20; };

struct B_800845F8 { u8 pad[0xc]; C_800845F8 *c; };

struct A_800845F8 { u8 pad[0x8]; B_800845F8 *b; };

struct G_800845F8 { A_800845F8 *a; u8 pad[0x1c]; };

struct Rect_80083F38 { u8 data[0x20]; };

struct Rect_800846C8 { u8 data[0x20]; };

struct G_800846C8 { void *a; u8 pad[0x1c]; };

struct A_80084694 { u8 pad[0x8]; u32 f8; };

struct G_80084694 { A_80084694 *a; u8 pad[0x1c]; };

struct GXColor_80083B8C { u8 r, g, b, a; };

typedef s32 M2C_UNK;
struct Vec_80083D54 { f32 x, y, z; };

struct View_80083D54 {
    u8 pad0[0x178];
    Vec_80083D54 pos;
    Vec_80083D54 target;
};

struct Mtx44_80083D54 { f32 m[4][4]; };

struct C_800842A4 { u8 pad[0x20]; s32 x20; };

struct B_800842A4 { u8 pad[0xc]; C_800842A4 *c; };

struct A_800842A4 { u8 pad[0x8]; B_800842A4 *b; };

struct G_800842A4 { A_800842A4 *a; u8 pad[0x1c]; };

extern "C" {
extern int lbl_805D4EE0;
void TObjPlayer__sub_80083FB0(void);
int TObjPlayer__sub_80083F9C(void);
u32 get_player_by_client_id(s32);
s32 get_main_phase();
s32 is_inactive__10TObjPlayerFPv();
s32 check_all_players_ready__10TObjPlayerFv(void);
    extern unsigned char camera_capture_flags;
void TObjPlayer__sub_80084614(void);
extern unsigned char camera_capture_flags;
void TObjPlayer__sub_8008463C(void);
extern unsigned char camera_capture_flags;
void reset_movie_state__10TObjPlayerFv(void);
extern unsigned char camera_capture_flags;
void TObjPlayer__sub_80084744(void);
extern unsigned char camera_capture_flags;
void TObjPlayer__sub_80084754(void);
extern unsigned char camera_capture_flags;
void TObjPlayer__sub_80084764(void);
extern unsigned char camera_capture_flags;
s32 get_camera_flag__10TObjPlayerFv(void);
extern unsigned char camera_capture_flags;
void TObjPlayer__sub_80084780(void);
extern u8 lbl_805D2910;
extern unsigned char camera_capture_flags;
void TObjPlayer__sub_80084790(void);
void **TLobby__sub_803DA16C();
extern M2C_UNK lbl_8048E5C8[];
void **TObjPlayer__sub_80083F04(void);
f32 horizontal_distance_squared(void *, void *);
extern RecoveredGlobal_80083CEC_lbl_8048E5D0 shadow_light_position;
extern u32 camera_ctrl_instance;
extern const f32 lbl_805D9434;
s32 is_in_shadow_range(u8 *arg0, f32 farg0);
extern G_800845F8 shared_capture_texture_list;
s32 TObjPlayer__sub_800845F8(void);
extern G_800845F8 shared_capture_texture_list;
M2C_UNK set_global_param__8TObjFishFi(M2C_UNK *);
M2C_UNK load_list_texture(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void TObjPlayer__sub_80084500(void);
extern M2C_UNK lbl_8048E5C8[];
extern int lbl_805D4EE0;
void set_render_rect__10TObjPlayerFPviiii(void *, int, int, int, int);
void set_texture_name(void *, void *, int, int);
s32 load_texture_list(void *);
void TObjPlayer__sub_80083F38(void);
extern G_800845F8 shared_capture_texture_list;
void set_render_rect__10TObjPlayerFPviiii(void *, int, int, int, int);
void set_texture_name(void *, void *, int, int);
s32 load_texture_list(void *);
void init_capture_texture(s32 wide);
void **TLobby__sub_803DA16C();
extern G_800845F8 shared_capture_texture_list;
void **TObjPlayer__sub_80084694(void);
s32 is_split_screen();
M2C_UNK TCameraCtrl__sub_80068EF0();
s32 check_all_players_ready__10TObjPlayerFv(void);
M2C_UNK set_cull_none__8TObjFishFv();
u8 TObjBoss2Tunnel__sub_8036EF44();
M2C_UNK GXPixModeSync();
M2C_UNK GXSetTexCopySrc(int, int, int, int);
M2C_UNK GXSetTexCopyDst(int, int, int, int);
void GXSetCopyClear(GXColor_80083B8C, u32);
M2C_UNK Dolphin_GXSetCopyFilter(int, void *, int, void *);
M2C_UNK GXCopyTex(void *, int);
M2C_UNK GXSetProjection(void *, int);
M2C_UNK GXSetViewport(f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetScissor(int, int, int, int);
M2C_UNK pop_matrix();
M2C_UNK set_ginja_draw_flags(int);
M2C_UNK set_light_ambient_color(f32, f32, f32);
M2C_UNK submit_light0(int, int);
M2C_UNK load_gx_light_slot(int);
extern M2C_UNK lbl_8048E5C8[];
extern M2C_UNK lbl_8058CA60[];
extern u32 camera_ctrl_instance;
extern u8 *lbl_805D7734;
extern const f32 lbl_805D93D0;
extern const f32 lbl_805D93D8;
extern const f32 lbl_805D9404;
extern const f32 lbl_805D9408;
extern const f32 lbl_805D9430;
extern GXColor_80083B8C lbl_805E120C;
void func_80083a00__Fv(void);
s32 is_split_screen();
M2C_UNK restore_full_screen_view__11TCameraCtrlFv();
void TObjPlayer__sub_80083FA4(void);
s32 check_all_players_ready__10TObjPlayerFv(void);
void C_MTXFrustum(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetProjection(void *, int);
M2C_UNK GXSetViewport(f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetScissor(int, int, int, int);
f32 vec_squared_length(void *);
void normalize_vector(void *);
M2C_UNK push_matrix();
M2C_UNK set_ginja_draw_flags(int);
M2C_UNK set_light_ambient_color(f32, f32, f32);
M2C_UNK submit_light0(int, int);
M2C_UNK load_gx_light_slot(int);
void translate_current_matrix_ps(f32, f32, f32);
void rotate_current_matrix_x_ps(s32);
void push_identity_matrix_ps();
extern RecoveredGlobal_80083CEC_lbl_8048E5D0 shadow_light_position;
extern u32 camera_ctrl_instance;
extern const f32 lbl_805D93C8;
extern const f32 lbl_805D93D0;
extern const f32 lbl_805D93D8;
extern const f32 lbl_805D9418;
extern const f32 lbl_805D941C;
extern const f32 lbl_805D9420;
extern const f32 lbl_805D9424;
extern const f32 lbl_805D9438;
extern const f32 lbl_805D943C;
void camera_stuff__Fv(void);
M2C_UNK GXPixModeSync();
M2C_UNK GXSetTexCopySrc(int, int, int, int);
M2C_UNK GXSetTexCopyDst(int, int, int, int);
void GXSetCopyClear(GXColor_80083B8C, u32);
M2C_UNK GXCopyTex(void *, int);
extern G_800845F8 shared_capture_texture_list;
extern unsigned char camera_capture_flags;
extern GXColor_80083B8C lbl_805E1208;
void capture_viewport_texture(void);
M2C_UNK set_tex_coord_gen__10TObjPlayerFiiii(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_800847FC();
M2C_UNK TObjPlayer__sub_80084824(f32, f32);
M2C_UNK TObjPlayer__sub_80084834(s32);
M2C_UNK TObjPlayer__sub_80084840(f32, f32, f32);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK Dolphin_GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK GXClearVtxDesc();
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetNumTexGens(M2C_UNK);
M2C_UNK GXBegin(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetNumChans(M2C_UNK);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(M2C_UNK *);
M2C_UNK load_list_texture(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK load_screen_space_matrix__10TObjPlayerFv();
M2C_UNK setup_blended_textured_draw();
extern G_800845F8 shared_capture_texture_list;
extern const f32 lbl_805D93D0;
extern const f32 lbl_805D93D8;
extern const f32 lbl_805D9404;
extern const f32 lbl_805D9408;
extern const f32 lbl_805D9440;
void draw_screen_quad__10TObjPlayerFUiif(u32 arg0, s32 arg1, f32 farg0);
M2C_UNK set_tex_coord_gen__10TObjPlayerFiiii(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_800847FC();
M2C_UNK TObjPlayer__sub_80084824(f32, f32);
M2C_UNK TObjPlayer__sub_80084834(s32);
M2C_UNK TObjPlayer__sub_80084840(f32, f32, f32);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK Dolphin_GXSetVtxDesc(M2C_UNK, M2C_UNK);
M2C_UNK GXClearVtxDesc();
M2C_UNK GXSetVtxAttrFmt(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetNumTexGens(M2C_UNK);
M2C_UNK GXBegin(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetNumChans(M2C_UNK);
M2C_UNK GXSetTevOp(M2C_UNK, M2C_UNK);
M2C_UNK GXSetTevOrder(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK set_global_param__8TObjFishFi(M2C_UNK *);
M2C_UNK load_list_texture(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK load_screen_space_matrix__10TObjPlayerFv();
M2C_UNK setup_blended_textured_draw();
extern G_800845F8 shared_capture_texture_list;
extern const f32 lbl_805D93D0;
extern const f32 lbl_805D93D8;
extern const f32 lbl_805D9444;
void draw_textured_screen_quad__10TObjPlayerFUiPvPvi(u32 arg0, f32 *arg1, f32 *arg2, s32 arg3);
}

extern "C" {

int TObjPlayer__sub_80083F9C(void);
void TObjPlayer__sub_80083FA4(void);
void draw_if_all_ready__10TObjPlayerFv(void);
M2C_UNK load_list_texture(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_split_screen();
M2C_UNK set_global_param__8TObjFishFi(M2C_UNK *);

extern M2C_UNK lbl_8048E5C8[];

void draw_if_all_ready__10TObjPlayerFv(void) {
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0)) {
        set_global_param__8TObjFishFi(lbl_8048E5C8);
        load_list_texture(0, 0, 0, 1);
    }
}

    extern int lbl_805D4EE0;

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_80083CEC_lbl_8048E5D0_size[sizeof(RecoveredGlobal_80083CEC_lbl_8048E5D0) == 0xC ? 1 : -1];

void func_80083a00__Fv(void) {
    u8 *temp_r31;
    if ((is_split_screen() == 0) && (check_all_players_ready__10TObjPlayerFv() != 0) && ((u32) camera_ctrl_instance != 0U)) {
        pop_matrix();
        pop_matrix();
        GXColor_80083B8C c = lbl_805E120C;
        Dolphin_GXSetCopyFilter((int) (0U), (void *) (NULL), (int) (0U), (void *) (NULL));
        set_cull_none__8TObjFishFv();
        GXSetCopyClear(c, 0xFFFFFF);
        GXSetTexCopySrc((int) (0), (int) (0), (int) (0x100), (int) (0x100));
        GXSetTexCopyDst((int) (0x100), (int) (0x100), (int) (2), (int) (0));
        GXCopyTex((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(((u8 **)lbl_8048E5C8)[0], u8 **, 8), void **, 0xC), s32 *, 0x20)), (int) (1));
        GXPixModeSync();
        temp_r31 = (u8 *)(lbl_805D7734);
        Dolphin_GXSetCopyFilter((int) (M2C_FIELD(temp_r31, u8 *, 0x19)), (void *) (temp_r31 + 0x1A), (int) (TObjBoss2Tunnel__sub_8036EF44()), (void *) (temp_r31 + 0x32));
        GXSetViewport((f32) (lbl_805D93D0), (f32) (lbl_805D93D0), (f32) (lbl_805D9404), (f32) (lbl_805D9408), (f32) (lbl_805D93D0), (f32) (lbl_805D93D8));
        GXSetScissor((int) (0), (int) (0), (int) (0x280), (int) (0x1E0));
        GXSetProjection((void *) (lbl_8058CA60), (int) (0));
        set_light_ambient_color((f32) (lbl_805D9430), (f32) (lbl_805D9430), (f32) (lbl_805D9430));
        submit_light0((int) (0), (int) (1));
        load_gx_light_slot((int) (0));
        set_ginja_draw_flags((int) (0));
        TCameraCtrl__sub_80068EF0();
    }
}

s32 is_in_shadow_range(u8 *arg0, f32 farg0) {
    if (((u32) camera_ctrl_instance != 0U) && (((farg0 * farg0) + horizontal_distance_squared(arg0, &shadow_light_position.value)) <= lbl_805D9434)) {
        return 1;
    }
    return 0;
}
#pragma pop

#pragma push
#pragma fp_contract on
#define VIEW ((View_80083D54 *)camera_ctrl_instance)
#define LIGHT (*(Vec_80083D54 *)&shadow_light_position)
void camera_stuff__Fv(void) {
    Mtx44_80083D54 proj;
    Vec_80083D54 d;
    f32 t;
    f32 r;
    if (is_split_screen() != 0) {
        return;
    }
    TObjPlayer__sub_80083FA4();
    if (check_all_players_ready__10TObjPlayerFv() == 0) {
        return;
    }
    restore_full_screen_view__11TCameraCtrlFv();
    if (camera_ctrl_instance == 0) {
        return;
    }
    d.x = VIEW->target.x - VIEW->pos.x;
    d.y = VIEW->target.y - VIEW->pos.y;
    d.z = VIEW->target.z - VIEW->pos.z;
    if (lbl_805D93D0 != vec_squared_length(&d)) {
        normalize_vector(&d);
        LIGHT.x = VIEW->pos.x + lbl_805D9438 * (lbl_805D93C8 * d.x);
        LIGHT.y = VIEW->pos.y;
        LIGHT.z = VIEW->pos.z + lbl_805D9438 * (lbl_805D93C8 * d.z);
    } else {
        LIGHT.x = lbl_805D93D0;
        LIGHT.y = lbl_805D93D0;
        LIGHT.z = lbl_805D93D0;
    }
    push_matrix();
    GXSetViewport(lbl_805D93D0, lbl_805D93D0, lbl_805D93C8, lbl_805D93C8, lbl_805D93D0, lbl_805D93D8);
    GXSetScissor(1, 1, 0xFE, 0xFE);
    t = lbl_805D941C;
    r = lbl_805D9420;
    C_MTXFrustum(&proj, t, -t, r, -r, lbl_805D9424, lbl_805D943C);
    GXSetProjection(&proj, 0);
    set_light_ambient_color(lbl_805D93D8, lbl_805D93D8, lbl_805D93D8);
    submit_light0(0, 0);
    load_gx_light_slot(0);
    push_identity_matrix_ps();
    translate_current_matrix_ps(lbl_805D93D0, lbl_805D93D0, lbl_805D9418);
    rotate_current_matrix_x_ps(0x3800);
    translate_current_matrix_ps(-LIGHT.x, -LIGHT.y, -LIGHT.z);
    set_ginja_draw_flags(2);
}
#pragma pop

void **TObjPlayer__sub_80083F04(void) {
    void **var_r3;
    void **var_r3_2;
    u8 *var_r4;
    void **phi_r3;
    var_r3 = (void **)(&lbl_8048E5C8);
    var_r4 = (u8 *)((*(u8 * *)&lbl_8048E5C8));
    var_r3 = (void **)(&lbl_8048E5C8);
    phi_r3 = (void **)(&lbl_8048E5C8);
    if ((u32) M2C_FIELD(var_r4, u32 *, 8) != 0U) {
        var_r3_2 = (void **)(TLobby__sub_803DA16C());
        phi_r3 = (void **)(var_r3_2);
    }
    return phi_r3;
}

void TObjPlayer__sub_80083F38(void) {
    Rect_80083F38 r;
    set_render_rect__10TObjPlayerFPviiii(&r, 0, 2, 0x100, 0x100);
    set_texture_name((void *)((s32 *)&lbl_8048E5C8)[0], &r, 0x2EE1, 0x08800000);
    load_texture_list(((s32 *)&lbl_8048E5C8));
    lbl_805D4EE0 = 0;
}

int TObjPlayer__sub_80083F9C(void) {  return lbl_805D4EE0; }

    extern int lbl_805D4EE0;
void TObjPlayer__sub_80083FA4(void) { lbl_805D4EE0 = 1; }
void TObjPlayer__sub_80083FB0(void) { lbl_805D4EE0 = 0; }
s32 check_all_players_ready__10TObjPlayerFv(void) {
    s32 flag;
    s32 counter;
    flag = 1;
    if (((s32)TObjPlayer__sub_80083F9C()) == 0) {
        return 0;
    }
    if (get_main_phase() == 0xF) {
        counter = 0;
        do {
            if ((get_player_by_client_id(counter) != 0U) && (is_inactive__10TObjPlayerFPv() == 0)) {
                flag = 0;
            }
            counter += 1;
        } while (counter < 4);
    }
    return flag;
}

void draw_screen_quad__10TObjPlayerFUiif(u32 arg0, s32 arg1, f32 farg0) {
    f32 temp_f31;
    f32 temp_f30;
    f32 temp_f30_2;
    f32 s0;
    f32 s1;
    u32 temp_r31;
    void *temp_r4;
    void *temp_r4_2;
    set_global_param__8TObjFishFi((M2C_UNK *)&shared_capture_texture_list);
    if (arg1 != 0) {
        temp_r4 = shared_capture_texture_list.a->b->c;
        M2C_FIELD(temp_r4, s32 *, 0x10) = 0x100;
        M2C_FIELD(temp_r4, s32 *, 0x14) = 0xC0;
    }
    load_list_texture(0, 0, 0, 0);
    reset_transform_state__10TObjPlayerFv();
    load_screen_space_matrix__10TObjPlayerFv();
    setup_blended_textured_draw();
    GXSetNumTexGens(1);
    GXSetNumChans(1);
    set_tex_coord_gen__10TObjPlayerFiiii(0, 1, 4, 0x3C);
    GXSetTevOp(0, 1);
    GXSetTevOrder(0, 0, 0, 4);
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc(9, 1);
    Dolphin_GXSetVtxDesc(0xB, 1);
    Dolphin_GXSetVtxDesc(0xD, 1);
    GXSetVtxAttrFmt(4, 9, 1, 4, 0);
    GXSetVtxAttrFmt(4, 0xB, 1, 5, 0);
    GXSetVtxAttrFmt(4, 0xD, 1, 4, 0);
    GXBegin(0x80, 4, 4);
    temp_f31 = -farg0 * lbl_805D9440;
    TObjPlayer__sub_80084840(temp_f31, temp_f31, lbl_805D9440);
    temp_r31 = (arg0 << 8) | (arg0 >> 24);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D0, lbl_805D93D0);
    s0 = lbl_805D9404 + farg0;
    temp_f30 = s0 * lbl_805D9440;
    TObjPlayer__sub_80084840(temp_f30, temp_f31, lbl_805D9440);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D8, lbl_805D93D0);
    s1 = lbl_805D9408 + farg0;
    temp_f30_2 = s1 * lbl_805D9440;
    TObjPlayer__sub_80084840(temp_f30, temp_f30_2, lbl_805D9440);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D8, lbl_805D93D8);
    TObjPlayer__sub_80084840(temp_f31, temp_f30_2, lbl_805D9440);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D0, lbl_805D93D8);
    TObjPlayer__sub_800847FC();
    reset_transform_state__10TObjPlayerFv();
    if (arg1 != 0) {
        temp_r4_2 = shared_capture_texture_list.a->b->c;
        M2C_FIELD(temp_r4_2, s32 *, 0x10) = 0x280;
        M2C_FIELD(temp_r4_2, s32 *, 0x14) = 0x1E0;
    }
}

void draw_textured_screen_quad__10TObjPlayerFUiPvPvi(u32 arg0, f32 *arg1, f32 *arg2, s32 arg3) {
    u32 temp_r31;
    void *temp_r4;
    void *temp_r4_2;
    set_global_param__8TObjFishFi((M2C_UNK *)&shared_capture_texture_list);
    if (arg3 != 0) {
        temp_r4 = (*(G_800842A4 *)&shared_capture_texture_list).a->b->c;
        M2C_FIELD(temp_r4, s32 *, 0x10) = 0x100;
        M2C_FIELD(temp_r4, s32 *, 0x14) = 0xC0;
    }
    load_list_texture(0, 0, 0, 0);
    reset_transform_state__10TObjPlayerFv();
    load_screen_space_matrix__10TObjPlayerFv();
    setup_blended_textured_draw();
    GXSetNumTexGens((M2C_UNK)(1));
    GXSetNumChans((M2C_UNK)(1));
    set_tex_coord_gen__10TObjPlayerFiiii((M2C_UNK)(0), (M2C_UNK)(1), (M2C_UNK)(4), (M2C_UNK)(0x3C));
    GXSetTevOp((M2C_UNK)(0), (M2C_UNK)(1));
    GXSetTevOrder((M2C_UNK)(0), (M2C_UNK)(0), (M2C_UNK)(0), (M2C_UNK)(4));
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc((M2C_UNK)(9), (M2C_UNK)(1));
    Dolphin_GXSetVtxDesc((M2C_UNK)(0xB), (M2C_UNK)(1));
    Dolphin_GXSetVtxDesc((M2C_UNK)(0xD), (M2C_UNK)(1));
    GXSetVtxAttrFmt((M2C_UNK)(4), (M2C_UNK)(9), (M2C_UNK)(1), (M2C_UNK)(4), (M2C_UNK)(0));
    GXSetVtxAttrFmt((M2C_UNK)(4), (M2C_UNK)(0xB), (M2C_UNK)(1), (M2C_UNK)(5), (M2C_UNK)(0));
    GXSetVtxAttrFmt((M2C_UNK)(4), (M2C_UNK)(0xD), (M2C_UNK)(1), (M2C_UNK)(4), (M2C_UNK)(0));
    GXBegin((M2C_UNK)(0x80), (M2C_UNK)(4), (M2C_UNK)(4));
    TObjPlayer__sub_80084840(arg1[0] * lbl_805D9444, arg1[1] * lbl_805D9444, lbl_805D9444);
    temp_r31 = (arg0 << 8) | (arg0 >> 24);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D0, lbl_805D93D0);
    TObjPlayer__sub_80084840(lbl_805D9444 * (arg1[0] + arg2[0]), arg1[1] * lbl_805D9444, lbl_805D9444);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D8, lbl_805D93D0);
    TObjPlayer__sub_80084840(lbl_805D9444 * (arg1[0] + arg2[0]), lbl_805D9444 * (arg1[1] + arg2[1]), lbl_805D9444);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D8, lbl_805D93D8);
    TObjPlayer__sub_80084840(arg1[0] * lbl_805D9444, lbl_805D9444 * (arg1[1] + arg2[1]), lbl_805D9444);
    TObjPlayer__sub_80084834(temp_r31);
    TObjPlayer__sub_80084824(lbl_805D93D0, lbl_805D93D8);
    TObjPlayer__sub_800847FC();
    reset_transform_state__10TObjPlayerFv();
    if (arg3 != 0) {
        temp_r4_2 = (*(G_800842A4 *)&shared_capture_texture_list).a->b->c;
        M2C_FIELD(temp_r4_2, s32 *, 0x10) = 0x280;
        M2C_FIELD(temp_r4_2, s32 *, 0x14) = 0x1E0;
    }
}

void TObjPlayer__sub_80084500(void) {
    set_global_param__8TObjFishFi((M2C_UNK *)(((u8 *)&shared_capture_texture_list)));
    load_list_texture((M2C_UNK)(0), (M2C_UNK)(0), (M2C_UNK)(0), (M2C_UNK)(0));
}

void capture_viewport_texture(void) {
    if (!(camera_capture_flags & 4)) {
        GXColor_80083B8C c = lbl_805E1208;
        GXSetCopyClear(c, 0xFFFFFF);
        GXSetTexCopySrc(0, 0, 0x280, 0x1E0);
        GXSetTexCopyDst(0x280, 0x1E0, 4, 0);
        if (camera_capture_flags & 8) {
            GXCopyTex((void *)shared_capture_texture_list.a->b->c->x20, 1);
        } else {
            GXCopyTex((void *)shared_capture_texture_list.a->b->c->x20, 0);
        }
        GXPixModeSync();
    }
}

s32 TObjPlayer__sub_800845F8(void) {
    return shared_capture_texture_list.a->b->c->x20;
}

void TObjPlayer__sub_80084614(void) { camera_capture_flags = 0; TObjPlayer__sub_80084694(); }
void TObjPlayer__sub_8008463C(void) { camera_capture_flags = 0; init_capture_texture((s32)((void*)0)); }
void reset_movie_state__10TObjPlayerFv(void) { camera_capture_flags = 0; init_capture_texture((s32)((void*)1)); }

void **TObjPlayer__sub_80084694(void) {
    void **var_r3;
    var_r3 = (void **)&shared_capture_texture_list;
    if ((*(G_80084694 *)&shared_capture_texture_list).a->f8 != 0) {
        var_r3 = TLobby__sub_803DA16C();
    }
    return var_r3;
}

void init_capture_texture(s32 wide) {
    Rect_800846C8 r;
    s32 mode;
    u16 w;
    u16 h;
    if (wide != 0) {
        mode = 6;
        w = 640;
        h = 480;
    } else {
        mode = 4;
        w = 640;
        h = 480;
    }
    set_render_rect__10TObjPlayerFPviiii(&r, 0, mode, w, h);
    set_texture_name((*(G_800846C8 *)&shared_capture_texture_list).a, &r, 0x2EE0, 0x08800000);
    load_texture_list(&shared_capture_texture_list);
}

void TObjPlayer__sub_80084744(void) { (*(u8 *)&camera_capture_flags) = ((*(u8 *)&camera_capture_flags) & 0xfffffffb); }
void TObjPlayer__sub_80084754(void) { (*(u8 *)&camera_capture_flags) = ((*(u8 *)&camera_capture_flags) | 0x4); }
void TObjPlayer__sub_80084764(void) { (*(u8 *)&camera_capture_flags) = ((*(u8 *)&camera_capture_flags) & 0xffffffef); }
s32 get_camera_flag__10TObjPlayerFv(void) {
    return ((u8) (*(u8 *)&camera_capture_flags) >> 4U) & 1;
}
void TObjPlayer__sub_80084780(void) { (*(u8 *)&camera_capture_flags) = ((*(u8 *)&camera_capture_flags) | 0x1); }
void TObjPlayer__sub_80084790(void) {
  int temp = (*(u8 *)&camera_capture_flags);
  (*(u8 *)&camera_capture_flags) = temp & (~2);
  lbl_805D2910 = 0x8F;
}

}
