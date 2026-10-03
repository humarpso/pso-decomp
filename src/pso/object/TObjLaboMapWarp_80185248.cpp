#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80185428_lbl_80444878 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void TObjLaboMapWarp__sub_80185400(u8 *arg0);
s32 get_localized_text_entry(s32, s32);
s32 TWindowSubTradeMain__sub_80266200(s32, s32, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
s32 get_window_layout_position(s32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(int);
void TObjLaboMapWarp__sub_80185400(u8 *arg0);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(int);
M2C_UNK TWindowSubComCard__sub_80265C30(int);
M2C_UNK TWindowSubComCard__sub_80265F60(int);
extern RecoveredGlobal_80185428_lbl_80444878 lbl_80444878;
void TObjLaboMapWarp__vt13(u8 *arg0, s32 arg1);
s32 get_instance__6TLobbyFv(void);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
M2C_UNK process_player_warps__11TObjMapWarpFPv(void *);
s32 get_game_play_mode();
extern s32 TObjLaboMapWarp__data_805D5B58;
extern const f32 lbl_805DBC88;
void run_task__15TObjLaboMapWarpFv(u8 *arg0);
}

extern "C" {

struct Base_80185248 { u8 pad[0x18]; };
struct VObj_80185248 : Base_80185248 {
    virtual void m0() = 0;
    virtual void m1() = 0;
    virtual void m2() = 0;
    virtual void m3() = 0;
    virtual void m4() = 0;
    virtual void m5() = 0;
    virtual void m6() = 0;
    virtual void m7() = 0;
    virtual s32 m8(f32, f32) = 0;
};

int is_field88_zero__15TObjLaboMapWarpFPv(void* p);
void render__15TObjLaboMapWarpFv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK draw_ginja_object();
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);
M2C_UNK TObjFish__sub_8001EDB0(s32, M2C_UNK);
M2C_UNK get_bml_model(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK set_global_param__8TObjFishFi();

extern s32 TObjLaboMapWarp__data_805D5B58;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;

void render__15TObjLaboMapWarpFv(u8 *arg0) {
    s32 temp_r31;

    if (((VObj_80185248 *)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        TObjFish__sub_8001EDB0(TObjLaboMapWarp__data_805D5B58, 1);
        set_global_param__8TObjFishFi();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (is_field88_zero__15TObjLaboMapWarpFPv((void*)(arg0)) != 0) {
            get_bml_model(TObjLaboMapWarp__data_805D5B58, 1);
            draw_ginja_object();
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_model_with_motion(get_bml_model(TObjLaboMapWarp__data_805D5B58, 0), TObjFish__sub_8001ED9C(TObjLaboMapWarp__data_805D5B58, 0), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        } else {
            begin_effect_render__13TParticleCtrlFv();
            draw_ginja_model_with_motion(get_bml_model(TObjLaboMapWarp__data_805D5B58, 0), TObjFish__sub_8001ED9C(TObjLaboMapWarp__data_805D5B58, 0), M2C_FIELD(arg0, f32 *, 0xFC));
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
    }
}

void run_task__15TObjLaboMapWarpFv(u8 *arg0) {
    f32 lim;
    lim = (f32)(u32)(M2C_FIELD(TObjFish__sub_8001ED9C(TObjLaboMapWarp__data_805D5B58, 0), s32 *, 4) - 1);
    M2C_FIELD(arg0, f32 *, 0xFC) += lbl_805DBC88;
    if (M2C_FIELD(arg0, f32 *, 0xFC) >= lim) {
        M2C_FIELD(arg0, f32 *, 0xFC) -= lim;
    }
    if (get_instance__6TLobbyFv() == 0 && (get_game_play_mode() == 1 || get_game_play_mode() == 2)) {
        return;
    }
    process_player_warps__11TObjMapWarpFPv(arg0);
}

int is_field88_zero__15TObjLaboMapWarpFPv(void* p) { return *(u32*)((char*)p + 0x88) == 0; }

void TObjLaboMapWarp__sub_80185400(u8 *arg0) {
    s32 var_r0;
    var_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    if (var_r0 < 0) {
        var_r0 = 0;
    } else if (var_r0 >= 3) {
        var_r0 = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x8C) = var_r0;
}
#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_80185428_lbl_80444878_size[sizeof(RecoveredGlobal_80185428_lbl_80444878) == 0xC ? 1 : -1];
void TObjLaboMapWarp__vt13(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    if ((u32) M2C_FIELD(temp_r31, u32 *, 0xEC) == 0U) {
        M2C_FIELD(temp_r31, u32 *, 0xEC) = TCheckRoomSequence__sub_802664A8(get_window_layout_position(0x33), 1, arg1);
        TObjLaboMapWarp__sub_80185400((u8 *)((void *) (arg0)));
        TWindowSubTradeMain__sub_80266200(M2C_FIELD(temp_r31, u32 *, 0xEC), get_localized_text_entry(9, M2C_FIELD(&lbl_80444878.value, M2C_UNK *, (M2C_FIELD(arg0, s32 *, 0x8C) * 4))), 0xA, 0, -1);
        set_flag70_bit10__16TObjCityMainWarpFPv((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        set_flag_40__16TAdChrSelASlotGCFPv((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        TWindowSubComCard__sub_80265F60((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
        TWindowSubComCard__sub_80265C30((int) (M2C_FIELD(temp_r31, u32 *, 0xEC)));
    }
}
#pragma pop

}
