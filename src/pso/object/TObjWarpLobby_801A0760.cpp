#include "types.h"
#include "pso/object/TObjWarpLobby.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/object/TObjFish.h"

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
s32 request_active_window_close();
s32 align_menu_entry_positions(s32);
s32 calc_window_size__17TWindowSubComCardFPv(s32);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFl(f32 *, s32, f32);
extern s32 warp_lobby_directory_label_table[];
extern const f32 lbl_805DC058;
extern const f32 lbl_805DC05C;
s32 queue_destruction__7TObjectFv(u32);
s32 send_room_change__6TLobbyFi(s32);
s32 is_idle__6TLobbyFv();
u32 find_warp_player_in_range(void *, u16, f32);
s32 TWindow__close(void *);
s32 get_selected_menu_value(u32);
extern s32 local_client_id;
extern const f32 lbl_805DC068;
extern const f32 lbl_805DC06C;
extern const f32 lbl_805DC070;
void run_task__13TObjWarpLobbyFv(VO_801A0894 *arg0);
}

extern "C" {

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1);
s32 post_translate_matrix(void *);
s32 draw_ginja_model_with_motion(s32, s32, f32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern u8 *TObjWarpLobby__instance;
extern s32 lbl_805D5CCC;
extern const f32 lbl_805DC060;
extern const f32 lbl_805DC064;

void TObjWarpLobby::open_lobby_menu() {
    f32 sp[2];
    s32 i;
    sp[0] = lbl_805DC058;
    sp[1] = lbl_805DC05C;
    *(s32 *)&this->m_cc = check_room_seq_4__16TAdChrSelASlotGCFl(sp, 0xF, lbl_805DC058);
    for (i = 0; i < 0xF; i++) {
        forward_trade_action_default__16TObjCityMainWarpFPviii(*(s32 *)&this->m_cc, warp_lobby_directory_label_table[i], 6, i);
    }
    calc_window_size__17TWindowSubComCardFPv(*(s32 *)&this->m_cc);
    align_menu_entry_positions(*(s32 *)&this->m_cc);
    ((TObjCityMainWarp *)(*(s32 *)&this->m_cc))->set_flag70_bit10();
    request_active_window_close();
}

void TObjWarpLobby::render() {
    u8 *arg0 = (u8 *)this;
    if (((s32) *(s32 *)((s8 *)arg0 + 0xCC) != 0) && (((WarpLobbyVObj_801A07F8*)arg0)->m8(lbl_805DC060, lbl_805DC064) != 0)) {
        TObjFish::set_global_param(lbl_805D5CCC);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        TParticleCtrl::begin_effect_render();
        draw_ginja_model_with_motion(*(s32 *)((s8 *)(*(void **)((s8 *)TObjWarpLobby__instance + 0x42C)) + 8), *(s32 *)((s8 *)(*(void **)((s8 *)TObjWarpLobby__instance + 0x430)) + 4), *(f32 *)((s8 *)arg0 + 0xC8));
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

extern s32 __vt__13TObjWarpLobby[];

void run_task__13TObjWarpLobbyFv(VO_801A0894 *arg0) {
    s32 temp_r31;
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) (*(f32 *)((s8 *)arg0 + 0xC8) + lbl_805DC068);
    if ((f32) (*(u32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xD8)) + 4) - 1) < *(f32 *)((s8 *)arg0 + 0xC8)) {
        *(f32 *)((s8 *)arg0 + 0xC8) = (f32) lbl_805DC06C;
    }
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) (*(f32 *)((s8 *)arg0 + 0xC4) + lbl_805DC070);
    if ((find_warp_player_in_range(arg0, (u16) local_client_id, *(f32 *)((s8 *)arg0 + 0xAC)) != 0U) && (arg0->m14() != 0)) {
        if (((u32) *(u32 *)((s8 *)arg0 + 0xB0) == 0U) && (is_idle__6TLobbyFv() != 0)) {
            ((TObjWarpLobby *)arg0)->open_lobby_menu();
        }
        if (((u32) *(u32 *)((s8 *)arg0 + 0xB0) != 0U) && (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0xB0)))->is_visible() != 0)) {
            temp_r31 = get_selected_menu_value(*(u32 *)((s8 *)arg0 + 0xB0));
            if (*(u32 *)((s8 *)arg0 + 0xB0) != 0U) {
                queue_destruction__7TObjectFv(*(u32 *)((s8 *)arg0 + 0xB0));
                *(u32 *)((s8 *)arg0 + 0xB0) = 0U;
                TWindowCtrl::clear_flag();
            }
            send_room_change__6TLobbyFi(temp_r31);
        }
    } else if ((u32) *(u32 *)((s8 *)arg0 + 0xB0) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0xB0));
        *(u32 *)((s8 *)arg0 + 0xB0) = 0U;
        TWindowCtrl::clear_flag();
    }
}

void *__dt__13TObjWarpLobbyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TObjWarpLobby;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
