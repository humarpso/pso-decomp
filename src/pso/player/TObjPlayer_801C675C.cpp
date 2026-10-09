#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#include "pso/player/TObjPlayer.h"

extern "C" {
void TObjPlayer__sub_801C6FCC(void*, f32);
void TObjPlayer__sub_801C6FDC(void);
void TObjPlayer__sub_801C6FE0(void*, f32, f32, f32);
f32 apply_stat_multipliers__10TObjPlayerFiif(s32, s32, f32);
void apply_stat_multipliers_default__10TObjPlayerFv(void);
u16 get_obj_type__10TObjPlayerFPv(void*);
TObjPlayer* get_player_by_client_id(int);
f32 get_stat_f32__8TItemMagFPv(s32);
void set_ring_action__10TObjPlayerFPvi(void*, s32);
void set_stat_scale__10TObjPlayerFPvf(void*, f32);
s32 test_flags_any(s32, M2C_UNK);
}
#define apply_stat_multipliers__10TObjPlayerFiif ((int (*)(void*))apply_stat_multipliers__10TObjPlayerFiif)
#define set_stat_scale__10TObjPlayerFPvf ((int (*)(void*))set_stat_scale__10TObjPlayerFPvf)

extern "C" {

void apply_stat_multipliers_and_reset__10TObjPlayerFPv(void* p);
s32 get_slot_value__10TObjPlayerFPvi(s32 *arg0, s32 arg1);

s32 get_slot_value__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    if (arg1 < 0 || arg1 >= 13) {
        return 0;
    }
    return arg0[arg1];
}

void apply_stat_multipliers_and_reset__10TObjPlayerFPv(void* p) { apply_stat_multipliers__10TObjPlayerFiif(p); set_stat_scale__10TObjPlayerFPvf(p); }

}
#undef apply_stat_multipliers__10TObjPlayerFiif
#undef set_stat_scale__10TObjPlayerFPvf

#define TObjPlayer__sub_801C6FCC ((M2C_UNK (*)(s32, f32))TObjPlayer__sub_801C6FCC)
#define apply_stat_multipliers_default__10TObjPlayerFv ((int (*)(void*))apply_stat_multipliers_default__10TObjPlayerFv)
#define set_stat_scale__10TObjPlayerFPvf ((int (*)(void*))set_stat_scale__10TObjPlayerFPvf)

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 apply_stat_multipliers__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0);
void apply_stats_and_update__10TObjPlayerFPv(void* p);
s32 test_flags_any(s32, M2C_UNK);
s32 check_state_flag_1__8TItemMagFPv(s32);
f32 get_stat_f32__8TItemMagFPv(s32);
s32 is_flag30_8_set__10TObjPlayerFi(s32);

void apply_stats_and_update__10TObjPlayerFPv(void* p) { apply_stat_multipliers_default__10TObjPlayerFv(p); set_stat_scale__10TObjPlayerFPvf(p); }

extern const f32 lbl_805DC33C;
extern const f32 lbl_805DC340;

f32 apply_stat_multipliers__10TObjPlayerFiif(s32 arg0, s32 arg1, f32 farg0) {
    f32 var_f31;

    var_f31 = farg0;
    if (is_flag30_8_set__10TObjPlayerFi(arg1) != 0) {
        var_f31 *= lbl_805DC33C;
    } else if (test_flags_any(arg0 + 0xC, 8) != 0) {
        var_f31 *= lbl_805DC340;
    }
    TObjPlayer__sub_801C6FCC(arg0, var_f31);
    if (check_state_flag_1__8TItemMagFPv(arg1 + 0x5B0) != 0) {
        var_f31 *= get_stat_f32__8TItemMagFPv(arg1 + 0x5B0);
    }
    return var_f31;
}

}
#undef TObjPlayer__sub_801C6FCC
#undef apply_stat_multipliers_default__10TObjPlayerFv
#undef set_stat_scale__10TObjPlayerFPvf

#define TObjPlayer__sub_801C6FDC ((f32* (*)(f32*))TObjPlayer__sub_801C6FDC)
#define TObjPlayer__sub_801C6FE0 ((void (*)(f32*, f32, f32, f32))TObjPlayer__sub_801C6FE0)
#define apply_stat_multipliers__10TObjPlayerFiif ((M2C_UNK (*)(f32))apply_stat_multipliers__10TObjPlayerFiif)
#define get_obj_type__10TObjPlayerFPv ((u16 (*)(PlayerScaleState*))get_obj_type__10TObjPlayerFPv)
#define get_stat_f32__8TItemMagFPv ((f32 (*)(PlayerScaleState*))get_stat_f32__8TItemMagFPv)
#define set_ring_action__10TObjPlayerFPvi ((M2C_UNK (*)(s32, M2C_UNK))set_ring_action__10TObjPlayerFPvi)
#define set_stat_scale__10TObjPlayerFPvf ((M2C_UNK (*)(f32))set_stat_scale__10TObjPlayerFPvf)

extern "C" {
TObjPlayer* get_player_by_client_id(int);
int obj_isState2_324(TObjPlayer*);
void init_shrink_effect__10TObjPlayerFPv(PlayerShrinkPacket*);
void update_and_send_60__10TObjPlayerFPv(PlayerShrinkPacket*);
extern s32 local_client_id;
void request_player_shrink(PlayerScaleState* state);
TObjPlayer* get_player_by_client_id(int);
int obj_isState2_324(TObjPlayer*);
void init_6x88_packet__10TObjPlayerFPv(PlayerRestoreSizePacket*);
void send_font_update_60__10TObjPlayerFPv(PlayerRestoreSizePacket*);
void request_player_size_restore(PlayerScaleState* state);
TObjPlayer* get_player_by_client_id(int);
int check_camera_mode__10TObjPlayerFv();
void init_shrink_effect__10TObjPlayerFPv(PlayerShrinkPacket*);
void TObjPlayer__sub_801C7360(PlayerShrinkPacket*, const PlayerShrinkPacket*);
void bswap_shrink__10TObjPlayerFPv(PlayerShrinkPacket*);
int validate_6x87_shrink_player(PlayerShrinkPacket*);
void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0);
void handle_6x87_shrink_player(const PlayerShrinkPacket* input);
TObjPlayer* get_player_by_client_id(int);
int check_camera_mode__10TObjPlayerFv();
void init_6x88_packet__10TObjPlayerFPv(PlayerRestoreSizePacket*);
void restore_shrunken_font__10TObjPlayerFPv(PlayerRestoreSizePacket*, const PlayerRestoreSizePacket*);
void TFontSmallLobby__sub_801C01BC(PlayerRestoreSizePacket*);
int validate_6x88_restore_shrunken_player(PlayerRestoreSizePacket*);
int clear_shrink_flag__10TObjPlayerFPv(void* p);
void handle_6x88_restore_shrunken_player(const PlayerRestoreSizePacket* input);
void request_follow_camera_offsets(f32*, f32*, u16);
extern const f32 lbl_805DC32C, lbl_805DC344, lbl_805DC348, lbl_805DC34C, lbl_805DC350, lbl_805DC354;
void update_player_scale_camera(PlayerScaleState *state);
}

extern "C" {

void apply_stat_multipliers_default__10TObjPlayerFv(void);
int clear_shrink_flag__10TObjPlayerFPv(void* p);
void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0);
void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);

extern const f32 lbl_805DC320;

void apply_stat_multipliers_default__10TObjPlayerFv(void) {
    apply_stat_multipliers__10TObjPlayerFiif(lbl_805DC320);
}

extern const f32 lbl_805DC320;

void reset_stat_scale_and_ring__10TObjPlayerFi(s32 arg0) {
    set_stat_scale__10TObjPlayerFPvf(lbl_805DC320);
    set_ring_action__10TObjPlayerFPvi(arg0, 0);
}

void update_player_scale_camera(PlayerScaleState *state) {
  f32 z = lbl_805DC34C * get_stat_f32__8TItemMagFPv(state);
  TObjPlayer__sub_801C6FE0(state->camera_position, lbl_805DC32C, lbl_805DC344 * (lbl_805DC348 * get_stat_f32__8TItemMagFPv(state)), z);
  TObjPlayer__sub_801C6FE0(state->camera_target, lbl_805DC32C, lbl_805DC350 * get_stat_f32__8TItemMagFPv(state), lbl_805DC354);
  request_follow_camera_offsets(TObjPlayer__sub_801C6FDC(state->camera_target), TObjPlayer__sub_801C6FDC(state->camera_position), 0xFFFF);
}

void handle_6x88_restore_shrunken_player(const PlayerRestoreSizePacket* input) {
    PlayerRestoreSizePacket packet;
    init_6x88_packet__10TObjPlayerFPv(&packet);
    restore_shrunken_font__10TObjPlayerFPv(&packet, input);
    TFontSmallLobby__sub_801C01BC(&packet);
    if (validate_6x88_restore_shrunken_player(&packet)) {
        TObjPlayer* player = get_player_by_client_id(packet.actor_id);
        if (player && check_camera_mode__10TObjPlayerFv())
            clear_shrink_flag__10TObjPlayerFPv((void*)(&player->scale_state));
    }
}

int clear_shrink_flag__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x4, 1); }

void request_player_size_restore(PlayerScaleState* state) {
    TObjPlayer* player = get_player_by_client_id(get_obj_type__10TObjPlayerFPv(state));
    if (!player || !obj_isState2_324(player)) {
        PlayerRestoreSizePacket packet;
        init_6x88_packet__10TObjPlayerFPv(&packet);
        packet.actor_id = get_obj_type__10TObjPlayerFPv(state);
        send_font_update_60__10TObjPlayerFPv(&packet);
    }
}

void handle_6x87_shrink_player(const PlayerShrinkPacket* input) {
    PlayerShrinkPacket packet;
    init_shrink_effect__10TObjPlayerFPv(&packet);
    TObjPlayer__sub_801C7360(&packet, input);
    bswap_shrink__10TObjPlayerFPv(&packet);
    if (validate_6x87_shrink_player(&packet)) {
        TObjPlayer* player = get_player_by_client_id(packet.actor_id);
        if (player && check_camera_mode__10TObjPlayerFv())
            handle_6x87_shrink__10TObjPlayerFPvf((u8 *)(&player->scale_state), packet.scalar);
    }
}

void handle_6x87_shrink__10TObjPlayerFPvf(u8 *arg0, f32 farg0) {
    set_flags__10TObjPlayerFPvUi(arg0 + 4, 1);
    M2C_FIELD(arg0, f32 *, 8) = farg0;
}
void request_player_shrink(PlayerScaleState* state) {
    TObjPlayer* player = get_player_by_client_id(get_obj_type__10TObjPlayerFPv(state));
    if (!player || !obj_isState2_324(player)) {
        if (local_client_id == get_obj_type__10TObjPlayerFPv(state))
            update_player_scale_camera((PlayerScaleState *)(state));
        PlayerShrinkPacket packet;
        init_shrink_effect__10TObjPlayerFPv(&packet);
        packet.actor_id = get_obj_type__10TObjPlayerFPv(state);
        packet.scalar = state->scalar;
        update_and_send_60__10TObjPlayerFPv(&packet);
    }
}

}
#undef TObjPlayer__sub_801C6FDC
#undef TObjPlayer__sub_801C6FE0
#undef apply_stat_multipliers__10TObjPlayerFiif
#undef get_obj_type__10TObjPlayerFPv
#undef get_stat_f32__8TItemMagFPv
#undef set_ring_action__10TObjPlayerFPvi
#undef set_stat_scale__10TObjPlayerFPvf

#define get_player_by_client_id ((s32 (*)(u16))get_player_by_client_id)
#define test_flags_any ((int (*)(void*, int))test_flags_any)

struct RecoveredGlobal_801C6FF8_lbl_804C4008 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;

extern "C" {
u8 fn_801C6F2C(u8 *arg0);
s32 has_water_ground_flag(void *);
int set_action_flag16__10TObjPlayerFPv(void* p);
int test_flag_8__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C7098(void* p);
s32 get_contact_surface_type(s32 arg0);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_801C6FF8_lbl_804C4008 lbl_804C4008;
u8 *init_lobby_font_entry__10TObjPlayerFPvPvsc(u8 *arg0, u8 *arg1, s16 arg2, s8 arg3);
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
M2C_UNK get_cursor_state__11TMainCursorFv();
s32 test_flag_2000000__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF914(s32);
u8 TObjPlayer__sub_801C6BEC(void *arg0);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 all_parents_unqueued_for_destruction__7TObjectFv();
M2C_UNK scale_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(M2C_UNK, s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_chunk_material_color(void *);
M2C_UNK draw_chunk_object();
extern u8 lbl_80447020[];
extern u8 lbl_8048E5A0[];
extern u8 lbl_8050BEC0[];
extern u8 lbl_8058D4C0[];
extern void *camera_ctrl_instance;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DC358;
void draw_marker_model__10TObjPlayerFPv(void *arg0);
u8 *init_lobby_font_entry__10TObjPlayerFPvPvsc(u8 *arg0, u8 *arg1, s16 arg2, s8 arg3);
void *__nw__7TObjectFUl(u32);
u8 *create_lobby_font_for_player__10TObjPlayerFsc(s16 arg0, s8 arg1);
s32 TMainCursor__sub_8013E03C(void);
s32 TObjPlayer__sub_801C6DAC(u8 *arg0);
}

extern "C" {

u8 TObjPlayer__sub_801C6BEC(void *arg0);
void TObjPlayer__sub_801C6D30(void *arg0);
int TObjPlayer__sub_801C6F90(void* p);
void TObjPlayer__sub_801C6FB4(void* p, s32 v);
void TObjPlayer__sub_801C6FBC(void* p, s16 v);
void TObjPlayer__sub_801C6FCC(void* p, f32 v);
void TObjPlayer__sub_801C6FDC(void);
void TObjPlayer__sub_801C6FE0(void* p, f32 a, f32 b, f32 c);
void *__dt__13TForceOperateFv(void *arg0, s16 arg1);
int clear_target_lock_flag__10TObjPlayerFPv(void* p);
void free__10TObjPlayerFPv(void* a0);
u16 get_obj_type__10TObjPlayerFPv(void* p);
void heap_alloc__10TObjPlayerFPv(void* a0);
int set_action_flag16__10TObjPlayerFPv(void* p);
int set_lock_flag__10TObjPlayerFPv(void* p);
void set_lock_timer__10TObjPlayerFPvi(void* p, s32 v);
void set_ring_action__10TObjPlayerFPvi(void* p, s32 v);
void set_stat_scale__10TObjPlayerFPvf(void* p, f32 v);
int test_flag_8__10TObjPlayerFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
void destroy__13TForceOperateFis(void *, int);
int heap_alloc__5THeapFUl(void*, void*);
int heap_free__5THeapFPv(void*, void*);

u8 TObjPlayer__sub_801C6BEC(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) >= 0xDU) {
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    }
    return M2C_FIELD(arg0, u8 *, 0x1C);
}

void draw_marker_model__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;
    temp_r3 = get_player_by_client_id(M2C_FIELD(arg0, u16 *, 0x1E));
    if ((temp_r3 != 0) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0) && (TObjPlayer__sub_801C6BEC(arg0) != 0) && (test_flag_2000000__10TObjPlayerFPv(temp_r3) == 0)) {
        push_matrix();
        begin_effect_render__13TParticleCtrlFv();
        lbl_805D5660 = some_id_805c6f74;
        copy_vec4__13TRaderMapCoreFPvPv(lbl_8050BEC0, lbl_8058D4C0);
        set_global_param__8TObjFishFi(lbl_8048E5A0);
        some_id_805c6f74 |= 0x11;
        set_position_vec3__10TObjPlayerFPvPv(0, TObjPlayer__sub_801BF914(temp_r3 + 0x84C));
        rotate_matrix_y(0, M2C_FIELD(camera_ctrl_instance, s32 *, 0x194) + M2C_FIELD(arg0, s32 *, 0x20));
        scale_matrix(0, lbl_805DC358, lbl_805DC358, lbl_805DC358);
        set_chunk_material_color(lbl_80447020 + TObjPlayer__sub_801C6BEC(arg0) * 0x10);
        get_cursor_state__11TMainCursorFv();
        draw_chunk_object();
        copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
        some_id_805c6f74 = lbl_805D5660;
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void TObjPlayer__sub_801C6D30(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) + 0x800);
}

    extern int obj_heap;

u8 *create_lobby_font_for_player__10TObjPlayerFsc(s16 arg0, s8 arg1) {
    u8 *e;
    u8 *p;
    e = ((u8 *)get_player_by_client_id(arg0));
    if (e == NULL) {
        return NULL;
    }
    p = (u8 *)__nw__7TObjectFUl(0x24);
    if (p != NULL) {
        p = init_lobby_font_entry__10TObjPlayerFPvPvsc(p, e, arg0, arg1);
    }
    return p;
}

s32 TObjPlayer__sub_801C6DAC(u8 *arg0) {
    M2C_FIELD(arg0, u8 **, 4) = (u8 *)get_player_by_client_id(TMainCursor__sub_8013E03C());
    if (M2C_FIELD(arg0, u8 **, 4) != NULL) {
        return 1;
    }
    return 0;
}

void free__10TObjPlayerFPv(void* a0) { heap_free__5THeapFPv((void*)(obj_heap), a0); }

    extern int obj_heap;
void heap_alloc__10TObjPlayerFPv(void* a0) { heap_alloc__5THeapFUl((void*)(obj_heap), a0); }

extern M2C_UNK __vt__13TForceOperate[];

s32 get_contact_surface_type(s32 arg0) {
    if (((s32)TObjPlayer__sub_801C7098((void*)(arg0))) != 0) {
        return 1;
    }
    if (has_water_ground_flag((void *) (arg0)) != 0) {
        return 2;
    }
    if (((s32)test_flag_8__10TObjPlayerFPv((void*)((void *) (arg0)))) != 0) {
        return 3;
    }
    return (((s32)set_action_flag16__10TObjPlayerFPv((void*)((void *) (arg0)))) != 0) ? 4 : 0;
}

void *__dt__13TForceOperateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
        destroy__13TForceOperateFis((s8 *)arg0 + 0x1C, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 fn_801C6F2C(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 4) == 1);
}

void set_lock_timer__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }

int clear_target_lock_flag__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 1); }
int set_lock_flag__10TObjPlayerFPv(void* p) { return test_flags_any(p, 1); }
int TObjPlayer__sub_801C6F90(void* p) { return test_flags_any(p, 2); }

void TObjPlayer__sub_801C6FB4(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }
void TObjPlayer__sub_801C6FBC(void* p, s16 v) { *(s16*)((char*)p + 0x1c) = v; }
void set_stat_scale__10TObjPlayerFPvf(void* p, f32 v) { *(f32*)((char*)p + 0x0) = v; }
void TObjPlayer__sub_801C6FCC(void* p, f32 v) { *(f32*)((char*)p + 0x8) = v; }
void set_ring_action__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void TObjPlayer__sub_801C6FDC(void) {  }
void TObjPlayer__sub_801C6FE0(void* p, f32 a, f32 b, f32 c) { *(f32*)((char*)p + 0x0) = a; *(f32*)((char*)p + 0x4) = b; *(f32*)((char*)p + 0x8) = c; }
u16 get_obj_type__10TObjPlayerFPv(void* p) { return *(u16*)((char*)p + 0x0); }

typedef char RecoveredGlobal_801C6FF8_lbl_804C4008_size[sizeof(RecoveredGlobal_801C6FF8_lbl_804C4008) == 0x18 ? 1 : -1];
u8 *init_lobby_font_entry__10TObjPlayerFPvPvsc(u8 *arg0, u8 *arg1, s16 arg2, s8 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804C4008.value;
    M2C_FIELD(arg0, s8 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    M2C_FIELD(arg0, s16 *, 0x1E) = arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

int set_action_flag16__10TObjPlayerFPv(void* p) { return test_flags_any(p, 16); }
int test_flag_8__10TObjPlayerFPv(void* p) { return test_flags_any(p, 8); }
int TObjPlayer__sub_801C7098(void* p) { return test_flags_any(p, 2); }

}
#undef get_player_by_client_id
#undef test_flags_any
