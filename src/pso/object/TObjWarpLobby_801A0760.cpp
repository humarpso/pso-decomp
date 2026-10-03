#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct WarpLobbyBase_801A07F8 { char pad[0x18]; };
struct WarpLobbyVObj_801A07F8 : WarpLobbyBase_801A07F8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct VB_801A0894 { char pad[0x18]; };

struct VO_801A0894 : VB_801A0894 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13();
    virtual s32 m14();
};

extern "C" {
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK request_active_window_close();
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265F60(s32);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, M2C_UNK, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(f32 *, M2C_UNK, f32);
extern s32 lbl_804B9710[];
extern const f32 lbl_805DC058;
extern const f32 lbl_805DC05C;
void TObjWarpLobby__sub_801A0760(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(u32);
s32 is_visible__17TWindowSubComCardFPv(u32);
M2C_UNK send_room_change__6TLobbyFi(s32);
s32 is_idle__6TLobbyFv();
u32 find_warp_player_in_range(void *, u16, f32);
void TObjWarpLobby__sub_801A0760(void *arg0);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag__11TWindowCtrlFv();
s32 get_selected_menu_value(u32);
extern s32 lbl_805D53A0;
extern const f32 lbl_805DC068;
extern const f32 lbl_805DC06C;
extern const f32 lbl_805DC070;
void run_task__13TObjWarpLobbyFv(VO_801A0894 *arg0);
}

extern "C" {

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1);
void render__13TObjWarpLobbyFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern u8 *TObjWarpLobby__data_805D5CC8;
extern s32 lbl_805D5CCC;
extern const f32 lbl_805DC060;
extern const f32 lbl_805DC064;

void TObjWarpLobby__sub_801A0760(void *arg0) {
    f32 sp[2];
    s32 i;
    sp[0] = lbl_805DC058;
    sp[1] = lbl_805DC05C;
    M2C_FIELD(arg0, s32 *, 0xB0) = check_room_seq_4__16TAdChrSelASlotGCFii(sp, 0xF, lbl_805DC058);
    for (i = 0; i < 0xF; i++) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(M2C_FIELD(arg0, s32 *, 0xB0), lbl_804B9710[i], 6, i);
    }
    TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, s32 *, 0xB0));
    TWindowSubComCard__sub_80265C30(M2C_FIELD(arg0, s32 *, 0xB0));
    set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, s32 *, 0xB0));
    request_active_window_close();
}

void render__13TObjWarpLobbyFv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0xCC) != 0) && (((WarpLobbyVObj_801A07F8*)arg0)->m8(lbl_805DC060, lbl_805DC064) != 0)) {
        set_global_param__8TObjFishFi(lbl_805D5CCC);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion(M2C_FIELD(M2C_FIELD(TObjWarpLobby__data_805D5CC8, void **, 0x42C), s32 *, 8), M2C_FIELD(M2C_FIELD(TObjWarpLobby__data_805D5CC8, void **, 0x430), s32 *, 4), M2C_FIELD(arg0, f32 *, 0xC8));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

extern M2C_UNK __vt__13TObjWarpLobby[];

void run_task__13TObjWarpLobbyFv(VO_801A0894 *arg0) {
    s32 temp_r31;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (M2C_FIELD(arg0, f32 *, 0xC8) + lbl_805DC068);
    if ((f32) (M2C_FIELD(M2C_FIELD(arg0, void **, 0xD8), u32 *, 4) - 1) < M2C_FIELD(arg0, f32 *, 0xC8)) {
        M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DC06C;
    }
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) + lbl_805DC070);
    if ((find_warp_player_in_range(arg0, (u16) lbl_805D53A0, M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) && (arg0->m14() != 0)) {
        if (((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) && (is_idle__6TLobbyFv() != 0)) {
            TObjWarpLobby__sub_801A0760(arg0);
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) && (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0xB0)) != 0)) {
            temp_r31 = get_selected_menu_value(M2C_FIELD(arg0, u32 *, 0xB0));
            if (M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xB0));
                M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
                clear_flag__11TWindowCtrlFv();
            }
            send_room_change__6TLobbyFi(temp_r31);
        }
    } else if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
        clear_flag__11TWindowCtrlFv();
    }
}

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjWarpLobby;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
