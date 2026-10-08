#include "types.h"
#include <stddef.h>
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VWarp_8019DD34 { char pad[0x18]; };
struct TObjWarpBossMulti_8019DD34 : VWarp_8019DD34 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct P_A_8019DD34 { char pad[0x18]; };
struct P_V_8019DD34 : P_A_8019DD34 {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual s32 m31();
};
#undef CAT
#undef CAT2

struct RecoveredGlobal_8019E418_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct Wb_8019DE74 { u8 pad0[0xF4]; s32 fF4; };

struct Tbl_8019DFE8 { u8 pad[4]; u32 count; };
struct Obj_8019DFE8 {
    u8 pad0[0x38];
    u8 f38[0xAC - 0x38];
    f32 fAC;
    u8 padB0[0xC4 - 0xB0];
    s32 fC4[4];
    u8 padD4[0xE0 - 0xD4];
    Tbl_8019DFE8 *fE0;
    Tbl_8019DFE8 *fE4;
    u8 padE8[0xF0 - 0xE8];
    s32 fF0;
    s32 fF4;
    f32 fF8;
    f32 fFC;
};

struct Obj_8019E238 {
    s32 f0;
    u8 pad4[0x18 - 4];
    void *vt18;
    u8 pad1C[0x38 - 0x1C];
    u8 f38[0xA4 - 0x38];
    s32 fA4;
    u8 padA8[0xAC - 0xA8];
    f32 fAC;
    u8 padB0[0xBC - 0xB0];
    s32 fBC;
    void *fC0;
    s32 fC4[4];
};

struct Pl_8019E4E8 { u8 pad0[0x38]; f32 pos[3]; };
struct Wb_8019E4E8 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x68]; f32 fAC; };
struct Pkt_8019E6C0 { u8 cmd; u8 size; u16 id; u16 value; u16 pad; };

struct Obj_8019E6C0 { u8 pad[0x1c]; u16 id; };

struct Base_A_8019e97c { char pad[0x18]; };
struct V_A_8019e97c : Base_A_8019e97c {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(s32);
};

struct Warp_8019EE14 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0xAC - 0x44];
    f32 radius;
    u8 padb0[0xBC - 0xB0];
    s32 fbc;
    u8 padc0[0xE4 - 0xC0];
    char names[4][0x18];
    s32 inside[4];
    s32 count;
    s32 n_inside;
    s32 f15c;
    u8 pad160[4];
    u32 window;
    u8 pad168[0x180 - 0x168];
    s32 warping;
};

struct Player_8019EE14 {
    u8 pad0[0x38];
    f32 pos[3];
    u8 pad44[0x85C - 0x44];
    char name[0x18];
};

struct Wb_8019F2C0 { u8 pad0[0x88]; s32 f88; u8 pad8C[0xE0]; s32 f16C; };

extern "C" {

struct Base2_8019f358_8019F22C { char pad[0x18]; };
struct VObj2_8019f358_8019F22C : Base2_8019f358_8019F22C { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

extern u8 lbl_8044663C[];
extern u8 lbl_80446650[];
extern RecoveredGlobal_8019E418_lbl_8050E208 lbl_8050E208;
extern u32 lbl_8050EA10[];
extern s32 lbl_805D348C;
extern s32 lbl_805D4DF0;
extern s32 lbl_805D53A0;
extern s32 lbl_805D55C0;
extern s32 lbl_805D5C8C;
extern s32 lbl_805D5C94;
extern s32 lbl_805D5C9C;
extern s32 lbl_805D5CA0;
extern s32 lbl_805D5CA4;
extern M2C_UNK __vt__17TObjWarpBossMulti[];
extern void *tl_05;
extern const f32 lbl_805DC000;
extern const f32 lbl_805DC004;
extern const f32 lbl_805DC008;
extern const f32 lbl_805DC00C;
extern const f32 lbl_805DC010;
extern const f32 lbl_805DC014;
extern const f32 lbl_805DC018;
extern const f32 lbl_805DC01C;
extern const f32 lbl_805DC02C;

s32 get_global_state__14TOKeyMachine01Fv();
void set_global_count__12TObjNpcEnemyFi(int);
void debug_printf_at(int, void *, ...);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
void register_entity_by_id(void *);
void TObjAreaWarp__ct(void *);
s32 get_boss_warp_destination(void);
void *init__13TAdVIConfigGCFPvf(void *, void *, f32);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_ginja_object(s32);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
void unregister_object_by_id(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 get_player_by_client_id(s32);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK allow_rendering__7TObjectFv(u32);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
s32 check_flag_100__10TObjPlayerFPv(void *);
M2C_UNK clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK disallow_rendering__7TObjectFv(u32);
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 xz_distance_squared(s32, void *);
int fn_8019F9AC(void);
int fn_8019F9B4(void);
int fn_8019F9BC(void);
int fn_8019F9C4(void);
int fn_8019F9CC(void);
int fn_8019F9D4(void);
int fn_8019F9DC(void);
M2C_UNK set_flag_4__9TObjLukerFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
s32 get_current_floor();
s32 get_field_3e4__10TObjPlayerFPv(void *);
void handle_area_selection__12TObjAreaWarpFPv(void *);
s32 is_flag_clear__17TObjWarpBossMultiFPv(void *);
M2C_UNK has_item_flag_4096__10TObjPlayerFPv(void *);
M2C_UNK check_technique_flag__10TObjPlayerFPv(void *);
u8 is_current_floor_switch_set(int);
s32 get_main_phase();
void init_pkt_cmd_6A__19TWindowSubTradeMainFPv(void *p);
void send_60_update__19TWindowSubTradeMainFPv(void *p);
void *find_entity_by_id(u16);
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK unsuppress_slot__11TWindowCtrlFi(s32);
M2C_UNK suppress_slot__11TWindowCtrlFi(s32);
M2C_UNK TWindowSubTradeMain__sub_80187CCC();
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag__11TWindowCtrlFv();
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_state__6TLobbyFv();
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK add_text_entry__19TWindowSubTradeMainFPviiii(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 check_room_seq_4__16TAdChrSelASlotGCFii(M2C_UNK, M2C_UNK);
M2C_UNK begin_player_keyboard_hold(s32);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK obj_clear_flag30_20000(s32);
M2C_UNK obj_set_flag_20000(s32);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, s32);
M2C_UNK request_active_window_close();
M2C_UNK send_code_45_1__10TObjPlayerFi();
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
void TObjWarpBossMulti__sub_8019EB94(void *);
M2C_UNK TObjWarpBossMulti__sub_8019EFF0(void *);
s32 get_warp_state__19TWindowSubTradeMainFv();
char *strcpy(char *, const char *);
s32 check_demo_mode__10TObjPlayerFv();
s32 is_locally_controlled__10TObjPlayerFPv(u32);

void *create__17TObjWarpBossMultiFPv(void *arg0);
void init_warp_params__17TObjWarpBossMultiFPv(void* a0);
void update__17TObjWarpBossMultiFPv(void *arg0);
void TObjWarpBossMulti__vt18(Wb_8019DE74 *arg0);
void render__17TObjWarpBossMultiFv(u8 *arg0);
void run_task__17TObjWarpBossMultiFv(Obj_8019DFE8 *self);
void *__dt__17TObjWarpBossMultiFv(void *arg0, s16 arg1);
Obj_8019E238 *TObjWarpBossMulti__ct(Obj_8019E238 *self, void * _w1, void * _w2);
void update_warp_boss_visibility(void *arg0);
s32 TObjWarpBossMulti__sub_8019E418(u8 *arg0);
s32 is_lobby_active__17TObjWarpBossMultiFv(void);
s32 TObjWarpBossMulti__sub_8019E4B4(void);
s32 are_all_players_in_range__17TObjWarpBossMultiFPv(Wb_8019E4E8 *arg0);
s32 TObjWarpBossMulti__sub_8019E570(s32 arg0, f32 farg0);
void close_windows__17TObjWarpBossMultiFPv(void *arg0);
void handle_6x6A_set_boss_warp_flags(void *arg0);
void TObjWarpBossMulti__sub_8019E6C0(Obj_8019E6C0 *self, u16 value);
void notify_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1);
void warp_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1);
s32 TLobby__sub_800C6C10();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(void *);
extern s32 lbl_805D5C90;
extern s32 lbl_805D5C98;
void TObjWarpBossMulti__sub_8019E798(u8 *arg0);
void warp_boss_handle_window(void *arg0);
void update_state__17TObjWarpBossMultiFPv(void *arg0);
void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0);
void update_warp_occupants__10TObjPlayerFPv(u8 *arg0);
void update__12TObjWarpBossFPv(void *arg0);
void TObjWarpBoss__vt18(Wb_8019F2C0 *arg0);
void render__12TObjWarpBossFv(u8 *arg0);
void run_task__12TObjWarpBossFv(u8 *arg0);

void *create__17TObjWarpBossMultiFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TObjWarpBossMulti__ct((Obj_8019E238 *)(o), (void *)(tl_05), (void *)(arg0));
    }
    return o;
}

void init_warp_params__17TObjWarpBossMultiFPv(void* a0) { *(int*)((char*)a0 + 0xd4) = fn_8019F9DC(); *(int*)((char*)a0 + 0xd8) = fn_8019F9D4(); *(int*)((char*)a0 + 0xdc) = fn_8019F9CC(); *(int*)((char*)a0 + 0xe0) = fn_8019F9C4(); *(int*)((char*)a0 + 0xe4) = fn_8019F9BC(); *(int*)((char*)a0 + 0xe8) = fn_8019F9B4(); *(int*)((char*)a0 + 0xec) = fn_8019F9AC(); *(float*)((char*)a0 + 0xf8) = lbl_805DC000; *(float*)((char*)a0 + 0xfc) = lbl_805DC004; }

void update__17TObjWarpBossMultiFPv(void *arg0) {
    s32 temp_r0;

    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        M2C_FIELD(arg0, s32 *, 0xF4) = -1;
    } else {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x88);
        if ((temp_r0 < 0) || (temp_r0 > 0xFF)) {
            M2C_FIELD(arg0, s32 *, 0xF4) = -1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xF4) = temp_r0;
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF4) >= 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 1;
}

void TObjWarpBossMulti__vt18(Wb_8019DE74 *arg0) {
    update__17TObjWarpBossMultiFPv(arg0);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        debug_printf_at(0x130020, lbl_8044663C);
    }
    debug_printf_at(0x130021, lbl_80446650, arg0->fF4);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__17TObjWarpBossMultiFv(u8 *arg0) {
    s32 temp_r0;

    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (xz_distance_squared(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DC008) {
            return;
        }
        goto block_4;
    }
    if (((TObjWarpBossMulti_8019DD34*)arg0)->m8(lbl_805DC00C, lbl_805DC010) != 0) {
block_4:
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xE8));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0xD4));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xEC));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xF0);
        switch (temp_r0) {
        case 0:
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xD8), M2C_FIELD(arg0, s32 *, 0xE0), M2C_FIELD(arg0, f32 *, 0xF8));
            break;
        case 1:
            draw_ginja_model_with_motion(M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, s32 *, 0xE4), M2C_FIELD(arg0, f32 *, 0xF8));
            break;
        }
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void run_task__17TObjWarpBossMultiFv(Obj_8019DFE8 *self) {
    s32 i;
    u32 pl;
    f32 r;

    for (i = 0; i < 4; i++) {
        pl = lbl_8050EA10[i];
        if (pl != 0U && is_locally_controlled__10TObjPlayerFPv(pl) != 0) {
            if (((s32 (*)(u32))get_field_3e4__10TObjPlayerFPv)(pl) == get_current_floor()) {
                if (xz_distance_squared(pl + 0x38, self->f38) <= (r = lbl_805DC014 + self->fAC) * r) {
                    if (((s32 (*)(u32))is_flag_clear__17TObjWarpBossMultiFPv)(pl) != 0) {
                        self->fC4[i] = 1;
                        ((void (*)(u32))check_technique_flag__10TObjPlayerFPv)(pl);
                    }
                } else if (((s32 (*)(u32))is_flag_clear__17TObjWarpBossMultiFPv)(pl) == 0) {
                    if (self->fC4[i] != 0) {
                        self->fC4[i] = 0;
                        ((void (*)(u32))has_item_flag_4096__10TObjPlayerFPv)(pl);
                    }
                }
            }
        }
    }
    if (self->fF4 >= 0) {
        if (((u8 (*)(u16))is_current_floor_switch_set)(self->fF4) == 1) {
            self->fF0 = 1;
        } else {
            self->fF0 = 0;
        }
    }
    switch (self->fF0) {
    case 0:
        self->fF8 += self->fFC;
        if (self->fF8 > (f32)(self->fE0->count - 1)) {
            self->fF8 = lbl_805DC000;
        }
        break;
    case 1:
        self->fF8 += self->fFC;
        if (self->fF8 > (f32)(self->fE4->count - 1)) {
            self->fF8 = lbl_805DC000;
        }
        handle_area_selection__12TObjAreaWarpFPv(self);
        break;
    }
}

void *__dt__17TObjWarpBossMultiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjWarpBossMulti;
        unregister_object_by_id(arg0);
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Obj_8019E238 *TObjWarpBossMulti__ct(Obj_8019E238 *self, void * _w1, void * _w2) {
    int i;
    TObjAreaWarp__ct(self);
    self->vt18 = ((s32 *)&__vt__17TObjWarpBossMulti);
    self->f0 = lbl_805D348C;
    self->fBC = get_boss_warp_destination();
    self->fA4 = 0;
    register_entity_by_id(self);
    update__17TObjWarpBossMultiFPv(self);
    init_warp_params__17TObjWarpBossMultiFPv((void*)(self));
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        void *p = alloc__23TAdSinglePlyChrSelectGCFPv(0x88);
        if (p != NULL) {
            p = init__13TAdVIConfigGCFPvf(p, self->f38, lbl_805DC018);
        }
        self->fC0 = p;
    } else {
        self->fC0 = NULL;
    }
    self->fAC = lbl_805DC018;
    for (i = 0; i < 4; i++) {
        self->fC4[i] = 0;
    }
    return self;
}

void update_warp_boss_visibility(void *arg0) {
    void *temp_r3;
    s32 var_r30;

    temp_r3 = ((void *(*)(s32))get_player_by_client_id)(lbl_805D53A0);
    var_r30 = 1;
    if ((temp_r3 != NULL) && (((P_V_8019DD34 *) temp_r3)->m31() != 0)) {
        var_r30 = 0;
    }
    if ((temp_r3 != NULL) && (check_flag_100__10TObjPlayerFPv(temp_r3) != 0)) {
        var_r30 = 0;
    }
    if (var_r30 == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
            set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x168));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x168));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0xB0));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xB0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
            set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x164));
            disallow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x164));
        }
    } else {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x168));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x168));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0xB0));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0xB0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x164));
            allow_rendering__7TObjectFv(M2C_FIELD(arg0, u32 *, 0x164));
        }
    }
}

typedef char RecoveredGlobal_8019E418_lbl_8050E208_size[sizeof(RecoveredGlobal_8019E418_lbl_8050E208) == 0x1B0 ? 1 : -1];
s32 TObjWarpBossMulti__sub_8019E418(u8 *arg0) {
    if (is_lobby_active__17TObjWarpBossMultiFv() == 0) {
        return 0;
    }
    if ((M2C_FIELD(&lbl_8050E208.value, f32 *, 0x44) > lbl_805DC01C) || (TObjWarpBossMulti__sub_8019E570((s32) arg0, M2C_FIELD(arg0, f32 *, 0xAC)) == 0U)) {
        return 1;
    }
    return 0;
}

s32 is_lobby_active__17TObjWarpBossMultiFv(void) {
    return get_state__6TLobbyFv() ? 1 : 0;
}

s32 TObjWarpBossMulti__sub_8019E4B4(void) {
    return ((get_main_phase() - 0xF) == 0) ? lbl_805D55C0 : 0;
}

s32 are_all_players_in_range__17TObjWarpBossMultiFPv(Wb_8019E4E8 *arg0) {
    s32 ok = 1;
    s32 i;
    for (i = 0; i < 4; i++) {
        Pl_8019E4E8 *p = (Pl_8019E4E8 *)get_player_by_client_id(i);
        if (p != 0) {
            if (((s32 (*)(void *))get_field_3e4__10TObjPlayerFPv)(p) != get_current_floor() || ((f32 (*)(void *, void *))xz_distance_squared)(p->pos, arg0->pos) > arg0->fAC * arg0->fAC) {
                ok = 0;
            }
        }
    }
    return ok;
}

#pragma push
#pragma fp_contract on
s32 TObjWarpBossMulti__sub_8019E570(s32 arg0, f32 farg0) {
    s32 temp_r31;
    s32 temp_r3b;
    s32 temp_r3;
    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != 0) {
        temp_r31 = get_current_floor();
        temp_r3b = ((s32 (*)(s32))get_field_3e4__10TObjPlayerFPv)(temp_r3);
        if ((temp_r3b == temp_r31) && (((f32 (*)(s32, s32))xz_distance_squared)(arg0 + 0x38, temp_r3 + 0x38) < (farg0 * farg0))) {
            return temp_r3;
        }
    }
    return 0;
}
#pragma pop

void close_windows__17TObjWarpBossMultiFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x168) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x168));
        M2C_FIELD(arg0, u32 *, 0x168) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
        M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x164) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x164));
        M2C_FIELD(arg0, u32 *, 0x164) = 0U;
    }
    end_player_keyboard_hold(lbl_805D53A0);
    clear_flag__11TWindowCtrlFv();
    unsuppress_slot__11TWindowCtrlFi(lbl_805D53A0);
}

void handle_6x6A_set_boss_warp_flags(void *arg0) {
    void *temp_r3;

    TWindowSubTradeMain__sub_80187CCC();
    temp_r3 = find_entity_by_id(M2C_FIELD(arg0, u16 *, 2));
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0xDC) = (s16) M2C_FIELD(arg0, s16 *, 4);
    }
}

void TObjWarpBossMulti__sub_8019E6C0(Obj_8019E6C0 *self, u16 value) {
    Pkt_8019E6C0 pkt;
    init_pkt_cmd_6A__19TWindowSubTradeMainFPv(&pkt);
    pkt.id = self->id;
    pkt.value = value;
    send_60_update__19TWindowSubTradeMainFPv(&pkt);
}

void notify_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 != 0) {
        send_code_45_1__10TObjPlayerFi();
        obj_clear_flag30_20000(temp_r3);
    }
}

void warp_player__17TObjWarpBossMultiFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id(arg1);
    if (temp_r3 != 0) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
        obj_set_flag_20000(temp_r3);
        M2C_FIELD(arg0, s32 *, 0x174) = 0x12C;
    }
}

void TObjWarpBossMulti__sub_8019E798(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        return;
    case 1:
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x16C);
        if ((temp_r0_2 >= 0) && (is_current_floor_switch_set((int) ((u16) temp_r0_2)) == 1)) {
            M2C_FIELD(arg0, s16 *, 0xDC) = 0;
        }
        return;
    case -1:
        break;
    }
}

void warp_boss_handle_window(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = 0;
        return;
    case 1:
        if (((u32 (*)(f32))TObjWarpBossMulti__sub_8019E570)(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
                M2C_FIELD(arg0, u32 *, 0xB0) = check_room_seq_4__16TAdChrSelASlotGCFii(get_window_layout_position(0x35), 7);
                if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
                    add_text_entry__19TWindowSubTradeMainFPviiii(M2C_FIELD(arg0, u32 *, 0xB0), get_message_10__20TWindowSubStatusDispFPv(0x40), 0, 0, -1);
                    set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
                    calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0xB0));
                    align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0xB0));
                }
                begin_player_keyboard_hold(lbl_805D53A0);
                request_active_window_close();
                suppress_slot__11TWindowCtrlFi(lbl_805D53A0);
            }
        } else {
            if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
                M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
            }
            end_player_keyboard_hold(lbl_805D53A0);
            clear_flag__11TWindowCtrlFv();
            unsuppress_slot__11TWindowCtrlFi(lbl_805D53A0);
        }
        if ((s32) M2C_FIELD(arg0, s32 *, 0x15C) == 0) {
            M2C_FIELD(arg0, s16 *, 0xDC) = 0;
        }
        return;
    case -1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
            M2C_FIELD(arg0, u32 *, 0xB0) = 0U;
        }
        end_player_keyboard_hold(lbl_805D53A0);
        clear_flag__11TWindowCtrlFv();
        unsuppress_slot__11TWindowCtrlFi(lbl_805D53A0);
        break;
    }
}

void update_state__17TObjWarpBossMultiFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x17C) = 0x96;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) | 1);
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (TObjWarpBossMulti__sub_8019E4B4() == 0) {
            temp_r3 = ((s32 (*)(void *, f32))TObjWarpBossMulti__sub_8019E570)(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
            if (temp_r3 != 0) {
                ((M2C_UNK (*)(void *, s32))notify_player__17TObjWarpBossMultiFPvi)(arg0, lbl_805D53A0);
                ((V_A_8019e97c *)arg0)->m17(temp_r3);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x17C) - 1;
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
        }
        break;
    case -1:
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s16 *, 0xDC) = 3;
        break;
    }
}

void update_warp_state__17TObjWarpBossMultiFPv(u8 *arg0) {
    s16 temp_r0;
    s32 var_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 2:
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x160) = 0x12C;
        play_sound_effect(0x40003205, arg0 + 0x38, 0, 0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) lbl_805D5C94;
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) lbl_805D5C9C;
        return;
    case 1:
        if (((u32 (*)(f32))TObjWarpBossMulti__sub_8019E570)(M2C_FIELD(arg0, f32 *, 0xAC)) != 0U) {
            TObjWarpBossMulti__sub_8019EFF0(arg0);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x170) == 0) {
                ((M2C_UNK (*)(void *, s32))warp_player__17TObjWarpBossMultiFPvi)(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0x170) = 1;
            }
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x160) = (s32) (M2C_FIELD(arg0, s32 *, 0x160) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x160) <= 0) {
                var_r3 = 1;
            } else {
                var_r3 = ((s32 (*)(void *))are_all_players_in_range__17TObjWarpBossMultiFPv)(arg0);
            }
            if (var_r3 != 0) {
                ((M2C_UNK (*)(void *, M2C_UNK))TObjWarpBossMulti__sub_8019E6C0)(arg0, 2);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        break;
    case -1:
        ((M2C_UNK (*)())close_windows__17TObjWarpBossMultiFPv)();
        break;
    }
}

#define arg0 ((u8 *)arg0_)
void TObjWarpBossMulti__sub_8019EB94(void *arg0_) {
    s32 r;

    if (M2C_FIELD(arg0, s32 *, 0x15C) == 1) {
        M2C_FIELD(arg0, s16 *, 0xDC) = 3;
        return;
    }
    switch (M2C_FIELD(arg0, s16 *, 0xE0)) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x170) = 0;
        M2C_FIELD(arg0, s32 *, 0x174) = 0;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s32 *, 0xD0) = lbl_805D5C90;
        M2C_FIELD(arg0, s32 *, 0xD4) = lbl_805D5C98;
        break;
    case 1:
        if (TObjWarpBossMulti__sub_8019E418(arg0) == 0 && (u32) TObjWarpBossMulti__sub_8019E570((s32) arg0, M2C_FIELD(arg0, f32 *, 0xAC)) != 0) {
            TObjWarpBossMulti__sub_8019EFF0(arg0);
            warp_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            break;
        }
        if (M2C_FIELD(arg0, void **, 0xB0) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0xB0));
            M2C_FIELD(arg0, void **, 0xB0) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x164) != NULL) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x164));
            M2C_FIELD(arg0, void **, 0x164) = NULL;
        }
        break;
    case 2:
        TObjWarpBossMulti__sub_8019EFF0(arg0);
        if (M2C_FIELD(arg0, void **, 0x168) != NULL) {
            if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x168)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xE0) = 3;
            } else if (is_child_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x168)) != 0) {
                r = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x168));
                if (r == 0) {
                    warp_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
                    M2C_FIELD(arg0, s32 *, 0x170) = 1;
                    TObjWarpBossMulti__sub_8019E6C0((Obj_8019E6C0 *) arg0, 1);
                    M2C_FIELD(arg0, s16 *, 0xE0) = 5;
                } else if (r == 1) {
                    M2C_FIELD(arg0, s16 *, 0xE0) = 3;
                }
            }
        }
        if (TObjWarpBossMulti__sub_8019E418(arg0) != 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 3;
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0 && get_main_phase() == 0xF && TLobby__sub_800C6C10() != 0 && are_all_players_in_range__17TObjWarpBossMultiFPv((Wb_8019E4E8 *) arg0) != 0) {
            TObjWarpBossMulti__sub_8019E6C0((Obj_8019E6C0 *) arg0, 2);
            M2C_FIELD(arg0, s16 *, 0xE0) = 5;
        }
        if (M2C_FIELD(arg0, s16 *, 0xE0) != 2) {
            close_windows__17TObjWarpBossMultiFPv(arg0);
        }
        break;
    case 3:
        notify_player__17TObjWarpBossMultiFPvi(arg0, lbl_805D53A0);
        M2C_FIELD(arg0, s16 *, 0xE0) = 4;
        break;
    case 4:
        if ((u32) TObjWarpBossMulti__sub_8019E570((s32) arg0, M2C_FIELD(arg0, f32 *, 0xAC)) == 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 1;
            break;
        }
        if (get_warp_state__19TWindowSubTradeMainFv() != 0 && get_main_phase() == 0xF && TLobby__sub_800C6C10() != 0 && are_all_players_in_range__17TObjWarpBossMultiFPv((Wb_8019E4E8 *) arg0) != 0) {
            TObjWarpBossMulti__sub_8019E6C0((Obj_8019E6C0 *) arg0, 2);
            M2C_FIELD(arg0, s16 *, 0xE0) = 5;
        }
        break;
    case -1:
        close_windows__17TObjWarpBossMultiFPv(arg0);
        break;
    case 5:
        break;
    }
}
#undef arg0

void update_warp_occupants__10TObjPlayerFPv(u8 *arg0) {
    Warp_8019EE14 *self = (Warp_8019EE14 *)arg0;
    s32 i;
    s32 inside;
    Player_8019EE14 *pl;
    s32 room;
    s32 old;
    Player_8019EE14 *pl2;
    old = self->count;
    self->count = 0;
    self->n_inside = 0;
    self->f15c = 0;
    for (i = 0; i < 4; i++) {
        pl = ((Player_8019EE14 *(*)(s32))get_player_by_client_id)(i);
        if (pl != NULL) {
            room = get_field_3e4__10TObjPlayerFPv(pl);
            if (room == self->fbc) {
                self->f15c = 1;
            }
            inside = 0;
            if (room == get_current_floor()) {
                if (((f32 (*)(void *, void *))xz_distance_squared)(pl->pos, self->pos) <= self->radius * self->radius) {
                    inside = 1;
                    self->n_inside++;
                }
            }
            self->inside[self->count] = inside;
            strcpy(self->names[self->count], pl->name);
            self->count++;
        }
    }
    for (i = self->count; i < 4; i++) {
        self->names[i][0] = 0;
    }
    if (old != self->count && self->window != 0) {
        ((M2C_UNK (*)(u32))TWindow__close)(self->window);
        self->window = 0;
    }
    pl2 = ((Player_8019EE14 *(*)(s32))get_player_by_client_id)(lbl_805D53A0);
    if (pl2 != NULL && get_field_3e4__10TObjPlayerFPv(pl2) == get_current_floor()) {
        if (((f32 (*)(void *, void *))xz_distance_squared)(pl2->pos, self->pos) <= (lbl_805DC014 + self->radius) * (lbl_805DC014 + self->radius)) {
            if (is_flag_clear__17TObjWarpBossMultiFPv(pl2) != 0) {
                self->warping = 1;
                check_technique_flag__10TObjPlayerFPv(pl2);
            }
        } else if (is_flag_clear__17TObjWarpBossMultiFPv(pl2) == 0 && self->warping != 0) {
            self->warping = 0;
            has_item_flag_4096__10TObjPlayerFPv(pl2);
        }
    }
}

void update__12TObjWarpBossFPv(void *arg0) {
    s16 temp_r0;

    ((M2C_UNK (*)())update_warp_boss_visibility)();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        TObjWarpBossMulti__sub_8019EB94(arg0);
        return;
    case 1:
        ((M2C_UNK (*)(void *))update_warp_state__17TObjWarpBossMultiFPv)(arg0);
        return;
    case 2:
        ((M2C_UNK (*)(void *))update_state__17TObjWarpBossMultiFPv)(arg0);
        return;
    case 3:
        ((M2C_UNK (*)(void *))warp_boss_handle_window)(arg0);
        return;
    case 4:
        ((M2C_UNK (*)(void *))TObjWarpBossMulti__sub_8019E798)(arg0);
        return;
    }
}

void TObjWarpBoss__vt18(Wb_8019F2C0 *arg0) {
    s32 t = arg0->f88;
    if (t < 0 || t > 0xFF) {
        arg0->f16C = -1;
    } else {
        arg0->f16C = t;
    }
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        debug_printf_at(0x130020, lbl_8044663C);
    }
    debug_printf_at(0x130021, lbl_80446650, arg0->f16C);
}

void render__12TObjWarpBossFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (xz_distance_squared(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DC008) {
            return;
        }
        goto block_4;
    }
    if (((VObj2_8019f358_8019F22C*)arg0)->m8(lbl_805DC00C, lbl_805DC010) != 0) {
block_4:
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(lbl_805D5CA0);
        draw_ginja_object(lbl_805D5C8C);
        if (M2C_FIELD(arg0, void **, 0xD0) != 0) {
            begin_effect_render__13TParticleCtrlFv();
            set_global_param__8TObjFishFi(lbl_805D5CA4);
            ((M2C_UNK (*)(u32, s32, f32))draw_ginja_model_with_motion)(M2C_FIELD(arg0, u32 *, 0xD0), M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, f32 *, 0xC4));
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
    }
}

void run_task__12TObjWarpBossFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 1) {
        if (!(M2C_FIELD(arg0, s16 *, 0xE2) & 1) && ((s16) M2C_FIELD(arg0, s16 *, 0xDE) != (s16) M2C_FIELD(arg0, s16 *, 0xDC))) {
            if ((s16) M2C_FIELD(arg0, s16 *, 0xE0) != -1) {
                M2C_FIELD(arg0, s16 *, 0xE0) = -1;
                update__12TObjWarpBossFPv((void *) (arg0));
            }
            M2C_FIELD(arg0, s16 *, 0xDE) = (s16) M2C_FIELD(arg0, s16 *, 0xDC);
            M2C_FIELD(arg0, s16 *, 0xE0) = 0;
        }
        ((M2C_UNK (*)(void *))update_warp_occupants__10TObjPlayerFPv)((void *) (arg0));
        update__12TObjWarpBossFPv((void *) (arg0));
        if ((void *) M2C_FIELD(arg0, u8 **, 0xD4) != NULL) {
            M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) + lbl_805DC004);
            if ((lbl_805DC02C + M2C_FIELD(arg0, f32 *, 0xC4)) >= (f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD4), u32 *, 4)) {
                M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DC000;
            }
        }
    }
}

}
