#include "types.h"
#include "pso/object/TObjAreaWarp.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/object/TObjCityAreaWarp.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/object/TObjCityMapWarp.h"
#include "pso/object/TObjLaboMapWarp.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/npc/TObjNpcEnemy.h"
#include "pso/ui/TAdChrSelASlotGC.h"

extern "C" {
s32 is_split_screen();
int is_main_phase_15__9TObjEneDDFv(void*);
s32 get_story_flag(s32);
extern s32 TObjCityMainWarp__visible_destination_mask;
s32 is_split_screen();
int is_main_phase_15__9TObjEneDDFv(void*);
s32 get_story_flag(s32);
extern s32 TObjCityMainWarp__visible_destination_mask;
}

extern "C" {

struct RecoveredGlobal_80185428_lbl_80444878 {
    s32 value;
    u8 remaining[0x8];
};

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

typedef char RecoveredGlobal_80185428_lbl_80444878_size[sizeof(RecoveredGlobal_80185428_lbl_80444878) == 0xC ? 1 : -1];

struct RecoveredGlobal_80185514_lbl_804B600C { s32 value; u8 remaining[0xC]; };

typedef char RecoveredGlobal_80185514_lbl_804B600C_size[sizeof(RecoveredGlobal_80185514_lbl_804B600C) == 0x10 ? 1 : -1];

struct Obj_80185664 { u8 pad[0x8C]; s32 dest; };

struct VObjBase_8018574C { char pad[0x18]; };

struct VObj_8018574C : VObjBase_8018574C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8018590C_lbl_80444878 {
    s32 value;
    u8 remaining[0x8];
};

typedef char RecoveredGlobal_8018590C_lbl_80444878_size[sizeof(RecoveredGlobal_8018590C_lbl_80444878) == 0xC ? 1 : -1];

struct VBase80185B58_80185AFC { char pad[0x18]; };

struct VObj80185B58_80185AFC : VBase80185B58_80185AFC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Obj_80185E14 { u8 pad0[0x88]; s32 f88; u8 pad1[0xC4]; s32 f150; };

struct V3_80185E14 { s32 w[3]; };

struct VBase80185EC8_80185EC8 { char pad[0x18]; };

struct VObj80185EC8_80185EC8 : VBase80185EC8_80185EC8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Base_80186030_80185EC8 { char pad[0x18]; };

struct VObj_80186030_80185EC8 : Base_80186030_80185EC8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
};

struct RecoveredGlobal_8018605C_lbl_804447F4 { s32 value; u8 remaining[0x3C]; };

typedef char RecoveredGlobal_8018605C_lbl_804447F4_size[sizeof(RecoveredGlobal_8018605C_lbl_804447F4) == 0x40 ? 1 : -1];

struct RecoveredGlobal_8018605C_lbl_80444834 { s32 value; u8 remaining[0x40]; };

typedef char RecoveredGlobal_8018605C_lbl_80444834_size[sizeof(RecoveredGlobal_8018605C_lbl_80444834) == 0x44 ? 1 : -1];

struct Obj_801864B4 {
    u8 pad[0x38];
    u8 pos[0x88 - 0x38];
    s32 mode;
    u8 pad8c[0xAC - 0x8C];
    f32 xac;
    u8 padb0[0xC0 - 0xB0];
    void *vi;
    f32 xc4;
    s32 a[17];
    s32 b[17];
    s32 x150;
};

struct Obj_80185824 { u8 pad[0xFC]; f32 fFC; };

struct Info_80185BE8 { u32 f0; u32 n; };

struct Anim_80185BE8 { u8 pad[0x3C]; Info_80185BE8 *info; };

struct Root_80185BE8 { u8 pad[0x430]; Anim_80185BE8 *anim; };

struct Obj_80185BE8 { u8 pad[0xC4]; f32 t; };

s32 is_split_screen();
s32 get_bml_motion(s32, s32);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(s32, s32);
void TLobby__sub_8001FE7C(void*, int);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
s32 is_quest_active();
int alloc__23TAdSinglePlyChrSelectGCFv(void *);
int is_main_phase_15__9TObjEneDDFv(void*);
s32 get_localized_text_entry(s32, s32);
void run_task__15TObjLaboMapWarpFv(u8 *arg0);
void TObjLaboMapWarp__vt13(u8 *arg0, s32 arg1);
void * __dt__15TObjLaboMapWarpFv(void *arg0, s16 arg1);
void * TObjLaboMapWarp__ct(void *arg0);
void TObjCityMapWarp__vt13(u8 *arg0, s32 arg1);
void * __dt__15TObjCityMapWarpFv(void *arg0, s16 arg1);
void * TObjCityMapWarp__ct(void *arg0);
void TObjCityAreaWarp__vt13(void *arg0, s16 arg1);
void * __dt__16TObjCityAreaWarpFv(void *arg0, s16 arg1);
void * TObjCityAreaWarp__ct(void *arg0);
s32 TObjCityMainWarp__vt14(s32 arg0);
s32 TObjCityMainWarp__vt15(u8 *arg0);
void * __dt__16TObjCityMainWarpFv(void *arg0, s16 arg1);
void * TObjCityMainWarp__ct(void *arg0, void *arg1, void *arg2);
void unlock_main_warp_destination(s32 id);
void clear_enabled_main_warps(void);
s32 get_floor_warp_bit__16TObjCityMainWarpFl();
void __dt__12TObjAreaWarpFv(void *, int);
void TObjAreaWarp__ct(void *);
s32 process_player_warps__11TObjMapWarpFPv(void *);
void __dt__11TObjMapWarpFv(void *, int);
void TObjMapWarp__ct(void *);
int vfunc_14__12TObjWarpBaseFv(void*);
s32 play_sound_effect(s32, s32, s32, s32);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
s32 get_selected_menu_value(void *);
s32 align_menu_entry_positions(int);
s32 create_window_menu(s32, s32, s32);
s32 get_window_layout_position(s32);
void * init__13TAdVIConfigGCFf(void *, void *, f32);
s32 get_game_play_mode();
void debug_printf_at(s32 id, const char *fmt, ...);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(s32);
s32 draw_ginja_object(s32);
s32 draw_ginja_model_with_motion(s32, s32, f32);

struct Win_8018615C { u8 pad0[0x3C]; f32 f3C; };
struct Warp_8018615C {
    u8 pad0[0xB0];
    Win_8018615C *win;
    u8 padB4[0x4];
    s16 fB8;
    u8 padBA[0xE];
    s32 fC8[17];
    s32 f10C[17];
    s32 f150;
};
extern s32 city_warp_group9_text_table[];
extern s32 city_warp_group9_text_table_b[];
extern const f32 lbl_805DBC9C;
extern const f32 lbl_805DBCA0;
extern s32 TObjCityMainWarp__sub_80186AF4();
extern void update_main_warp_visible_mask(int);
extern void request_active_window_close();
extern void forward_trade_action_default__16TObjCityMainWarpFPviii(void *, int, int, int);
extern s16 TLobby__data_805D5CE8;
extern s32 TObjCityMainWarp__enabled_destinations;
extern s32 TObjLaboMapWarp__resource_bundle;
extern s32 __vt__15TObjCityMapWarp[];
extern s32 __vt__15TObjLaboMapWarp[];
extern s32 __vt__16TObjCityAreaWarp[];
extern s32 __vt__16TObjCityMainWarp[];
extern RecoveredGlobal_8018605C_lbl_804447F4 city_warp_floor_destination_table;
extern RecoveredGlobal_8018605C_lbl_80444834 lbl_80444834;
extern RecoveredGlobal_80185428_lbl_80444878 lbl_80444878;
extern V3_80185E14 lbl_80444998[];
extern const char lbl_804449C0[];
extern const char lbl_804449D0[];
extern const char lbl_804449E0[];
extern const char lbl_804449F0[];
extern const char lbl_80444A00[];
extern const char lbl_80444A10[];
extern RecoveredGlobal_80185514_lbl_804B600C bm_obj_warp_labo_resource_descriptor;
extern const char *lbl_804B601C[];
extern s32 lbl_805D32A8;
extern void *lbl_805D32AC;
extern void *lbl_805D32B0;
extern void *lbl_805D32B4;
extern u8 *city_common_model_archive;
extern s32 city_common_texture_list;
extern const f32 lbl_805DBC80;
extern const f32 lbl_805DBC84;
extern const f32 lbl_805DBC88;
extern const f32 lbl_805DBC8C;
extern const f32 lbl_805DBC90;
extern u8 lbl_805DBC94;
extern const f32 lbl_805DBC98;
extern const f32 lbl_805DBCA4;
extern void *tl_05;

void TObjLaboMapWarp::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r31;

    if (((VObj_80185248 *)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        TObjFish__sub_8001EDB0(TObjLaboMapWarp__resource_bundle, 1);
        ((s32 (*)(void))set_global_param__8TObjFishFl)();
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        if (is_field88_zero() != 0) {
            get_bml_model(TObjLaboMapWarp__resource_bundle, 1);
            ((s32 (*)(void))draw_ginja_object)();
            TParticleCtrl::begin_effect_render();
            draw_ginja_model_with_motion(get_bml_model(TObjLaboMapWarp__resource_bundle, 0), get_bml_motion(TObjLaboMapWarp__resource_bundle, 0), *(f32 *)((s8 *)arg0 + 0xFC));
            TParticleCtrl::end_effect_render();
        } else {
            TParticleCtrl::begin_effect_render();
            draw_ginja_model_with_motion(get_bml_model(TObjLaboMapWarp__resource_bundle, 0), get_bml_motion(TObjLaboMapWarp__resource_bundle, 0), *(f32 *)((s8 *)arg0 + 0xFC));
            TParticleCtrl::end_effect_render();
        }
        pop_matrix();
    }
}

void run_task__15TObjLaboMapWarpFv(u8 *arg0) {
    f32 lim;
    lim = (f32)(u32)(*(s32 *)((s8 *)(get_bml_motion(TObjLaboMapWarp__resource_bundle, 0)) + 4) - 1);
    *(f32 *)((s8 *)arg0 + 0xFC) += lbl_805DBC88;
    if (*(f32 *)((s8 *)arg0 + 0xFC) >= lim) {
        *(f32 *)((s8 *)arg0 + 0xFC) -= lim;
    }
    if (TLobby::get_instance() == 0 && (get_game_play_mode() == 1 || get_game_play_mode() == 2)) {
        return;
    }
    process_player_warps__11TObjMapWarpFPv(arg0);
}

int TObjLaboMapWarp::is_field88_zero() { return *(u32*)((char*)this + 0x88) == 0; }

void TObjLaboMapWarp::clamp_index() {
    u8 *arg0 = (u8 *)this;
    s32 var_r0;
    var_r0 = *(s32 *)((s8 *)arg0 + 0x8C);
    if (var_r0 < 0) {
        var_r0 = 0;
    } else if (var_r0 >= 3) {
        var_r0 = 2;
    }
    *(s32 *)((s8 *)arg0 + 0x8C) = var_r0;
}

#pragma push
#pragma opt_common_subs off
void TObjLaboMapWarp__vt13(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    if ((u32) *(u32 *)((s8 *)temp_r31 + 0xEC) == 0U) {
        *(u32 *)((s8 *)temp_r31 + 0xEC) = create_window_menu(get_window_layout_position(0x33), 1, arg1);
        ((TObjLaboMapWarp *)arg0)->clamp_index();
        ((TWindowSubTradeMain *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->add_text_entry(get_localized_text_entry(9, *(s32 *)((s8 *)(&lbl_80444878.value) + (*(s32 *)((s8 *)arg0 + 0x8C) * 4))), 0xA, 0, -1);
        ((TWindowSubComCardList *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->set_flag70_bit10();
        ((TAdChrSelASlotGC *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->set_flag_40();
        ((TWindowSubComCard *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->calc_window_size();
        align_menu_entry_positions((int) (*(u32 *)((s8 *)temp_r31 + 0xEC)));
    }
}
#pragma pop

void TObjLaboMapWarp::release_static_resource() {
    if ((u32) (*(u32 *)&TObjLaboMapWarp__resource_bundle) != 0U) {
        TLobby__sub_8001FE7C((void*)(*(u32 *)&TObjLaboMapWarp__resource_bundle), 1);
        (*(u32 *)&TObjLaboMapWarp__resource_bundle) = 0U;
    }
}

void TObjLaboMapWarp::load_static_resource() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &bm_obj_warp_labo_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjLaboMapWarp__resource_bundle) = var_r0;
}

void *TObjLaboMapWarp::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjLaboMapWarp__ct)(o, tl_05, arg0);
    }
    return o;
}

void *__dt__15TObjLaboMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjLaboMapWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjLaboMapWarp__ct(void *arg0) {
    TObjMapWarp__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjLaboMapWarp;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D32B4;
    ((TObjLaboMapWarp *)arg0)->clamp_index();
    *(f32 *)((s8 *)arg0 + 0xAC) = lbl_805DBC8C;
    *(f32 *)((s8 *)arg0 + 0xFC) = lbl_805DBC90;
    return arg0;
}

void TObjCityMapWarp::slot4C() {
    Obj_80185664 *self = (Obj_80185664 *)this;
    ((TObjCityMapWarp *)self)->clamp_destination_index();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x13001C, lbl_804449C0);
    debug_printf_at(0x13001D, lbl_804449D0);
    debug_printf_at(0x13001E, lbl_804449E0);
    debug_printf_at(0x130020, lbl_804449F0);
    debug_printf_at(0x130021, lbl_80444A00);
    debug_printf_at(0x130022, lbl_80444A10, lbl_804B601C[self->dest]);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjCityMapWarp::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_8018574C*)arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        set_global_param__8TObjFishFl(city_common_texture_list);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        if (is_field88_zero() != 0) {
            draw_ginja_object(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 0xD8));
            TParticleCtrl::begin_effect_render();
            draw_ginja_model_with_motion(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 0x38), *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x3C), *(f32 *)((s8 *)arg0 + 0xFC));
            TParticleCtrl::end_effect_render();
        } else {
            TParticleCtrl::begin_effect_render();
            draw_ginja_model_with_motion(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 0x18), *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x34), *(f32 *)((s8 *)arg0 + 0xFC));
            TParticleCtrl::end_effect_render();
        }
        pop_matrix();
    }
}

void TObjCityMapWarp::run_task() {
    Obj_80185824 *arg0 = (Obj_80185824 *)this;
    u32 n = *(u32 *)(*(u8 **)(*(u8 **)(city_common_model_archive + 0x430) + 0x3C) + 4);
    f32 lim = (f32)(n - 1);
    arg0->fFC += lbl_805DBC88;
    if (arg0->fFC >= lim) {
        arg0->fFC -= lim;
    }
    if (TLobby::get_instance() == 0 && (get_game_play_mode() == 1 || get_game_play_mode() == 2)) {
        return;
    }
    ((void (*)(void *))process_player_warps__11TObjMapWarpFPv)(arg0);
}

int TObjCityMapWarp::is_field88_zero() { return *(u32*)((char*)this + 0x88) == 0; }

void TObjCityMapWarp::clamp_destination_index() {
    u8 *arg0 = (u8 *)this;
    s32 var_r0;
    var_r0 = *(s32 *)((s8 *)arg0 + 0x8C);
    if (var_r0 < 0) {
        var_r0 = 0;
    } else if (var_r0 >= 3) {
        var_r0 = 1;
    }
    *(s32 *)((s8 *)arg0 + 0x8C) = var_r0;
}

#pragma push
#pragma opt_common_subs off
void TObjCityMapWarp__vt13(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    temp_r31 = (u8 *)(arg0 + (arg1 * 4));
    if ((u32) *(u32 *)((s8 *)temp_r31 + 0xEC) == 0U) {
        *(u32 *)((s8 *)temp_r31 + 0xEC) = create_window_menu(get_window_layout_position(0x33), 1, arg1);
        ((TObjCityMapWarp *)arg0)->clamp_destination_index();
        ((TWindowSubTradeMain *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->add_text_entry(get_localized_text_entry(9, *(s32 *)((s8 *)(&lbl_80444878.value) + (*(s32 *)((s8 *)arg0 + 0x8C) * 4))), 0xA, 0, -1);
        ((TWindowSubComCardList *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->set_flag70_bit10();
        ((TAdChrSelASlotGC *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->set_flag_40();
        ((TWindowSubComCard *)(*(u32 *)((s8 *)temp_r31 + 0xEC)))->calc_window_size();
        align_menu_entry_positions((int) (*(u32 *)((s8 *)temp_r31 + 0xEC)));
    }
}
#pragma pop

void *TObjCityMapWarp::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjCityMapWarp__ct)(o, tl_05, arg0);
    }
    return o;
}

void *__dt__15TObjCityMapWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjCityMapWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjCityMapWarp__ct(void *arg0) {
    TObjMapWarp__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjCityMapWarp;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D32B0;
    ((TObjCityMapWarp *)arg0)->clamp_destination_index();
    *(f32 *)((s8 *)arg0 + 0xAC) = lbl_805DBC8C;
    *(f32 *)((s8 *)arg0 + 0xFC) = lbl_805DBC90;
    return arg0;
}

void TObjCityAreaWarp::confirm_area_transfer(s32) {
    play_sound_effect(0x40003205, 0, 0, 0);
    TLobby__data_805D5CE8 = 1;
}

void TObjCityAreaWarp::debug_print_area_num() { ((TObjCityAreaWarp *)this)->do_warp(); }

void TObjCityAreaWarp::render() { if (is_main_phase_15__9TObjEneDDFv(this) != 0) { do_warp(); } }

void TObjCityAreaWarp::do_warp() {
    u8 *arg0 = (u8 *)this;
    if (((VObj80185B58_80185AFC *) arg0)->m8(lbl_805DBC80, lbl_805DBC84) != 0) {
        set_global_param__8TObjFishFl(city_common_texture_list);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        TParticleCtrl::begin_effect_render();
        draw_ginja_model_with_motion(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 0x18), *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x34), *(f32 *)((s8 *)arg0 + 0xC4));
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

void TObjCityAreaWarp::run_task() {
    Obj_80185BE8 *arg0 = (Obj_80185BE8 *)this;
    f32 lim;
    if (is_main_phase_15__9TObjEneDDFv(arg0) != 0) {
        lim = (f32)(((Root_80185BE8 *)city_common_model_archive)->anim->info->n - 1);
        arg0->t += lbl_805DBC88;
        if (arg0->t >= lim) {
            arg0->t -= lim;
        }
        ((TObjAreaWarp *)arg0)->handle_area_selection();
    }
}

void TObjCityAreaWarp__vt13(void *arg0, s16 arg1) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0xB0) == 0U) {
        *(u32 *)((s8 *)arg0 + 0xB0) = ((u32 (*)(s32, s32, s16))create_window_menu)(get_window_layout_position(0x33), 1, arg1);
        ((TWindowSubTradeMain *)(*(u32 *)((s8 *)arg0 + 0xB0)))->add_text_entry(get_localized_text_entry(9, 0x24), 0xA, 0, -1);
        ((TWindowSubComCardList *)(*(u32 *)((s8 *)arg0 + 0xB0)))->set_flag70_bit10();
        ((TAdChrSelASlotGC *)(*(u32 *)((s8 *)arg0 + 0xB0)))->set_flag_40();
        ((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0xB0)))->calc_window_size();
        ((s32 (*)(u32))align_menu_entry_positions)(*(u32 *)((s8 *)arg0 + 0xB0));
        *(s16 *)((s8 *)arg0 + 0xB8) = arg1;
    }
}

void *TObjCityAreaWarp::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC8);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjCityAreaWarp__ct)(o, tl_05, arg0);
    }
    return o;
}

void *__dt__16TObjCityAreaWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjCityAreaWarp;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjCityAreaWarp__ct(void *arg0) {
    TObjAreaWarp__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjCityAreaWarp;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D32AC;
    *(f32 *)((s8 *)arg0 + 0xAC) = lbl_805DBC8C;
    *(f32 *)((s8 *)arg0 + 0xC4) = lbl_805DBC90;
    *(u32 *)((s8 *)arg0 + 0xBC) = 15;
    return arg0;
}

void TObjCityMainWarp::debug_print_area_num() {
    Obj_80185E14 *arg0 = (Obj_80185E14 *)this;
    arg0->f150 = arg0->f88;
    if (arg0->f150 < 0) {
        arg0->f150 = 0;
    }
    if (arg0->f150 > 2) {
        arg0->f150 = 2;
    }
    V3_80185E14 sp8 = lbl_80444998[0];
    TObjNpcEnemy::set_global_count(0xFF00FF);
    ((void (*)(int, void *, ...))debug_printf_at)(0x130021, &lbl_805DBC94, sp8.w[arg0->f150]);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjCityMainWarp::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj80185EC8_80185EC8 *) arg0)->m8(lbl_805DBC80, lbl_805DBC98) != 0) {
        set_global_param__8TObjFishFl(city_common_texture_list);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_ginja_object(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 0xC8));
        TParticleCtrl::begin_effect_render();
        draw_ginja_model_with_motion(*(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x42C)) + 8), *(s32 *)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x2C), *(f32 *)((s8 *)arg0 + 0xC4));
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

void run_task__16TObjCityMainWarpFv(u8 *arg0) {
    f32 lim = (f32)(*(u32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)city_common_model_archive + 0x430)) + 0x3C)) + 4) - 1);

    *(f32 *)((s8 *)arg0 + 0xC4) += lbl_805DBC88;
    if (*(f32 *)((s8 *)arg0 + 0xC4) >= lim) {
        *(f32 *)((s8 *)arg0 + 0xC4) -= lim;
    }
    ((TObjAreaWarp *)arg0)->handle_area_selection();
}

s32 TObjCityMainWarp__vt14(s32 arg0) {
    if ((get_game_play_mode() == 1) && (is_quest_active() == 0)) {
        return 0;
    }
    return TObjAreaWarp::is_warp_enabled(arg0);
}

void TObjCityMainWarp::vfunc_18(s32) {
    struct VObj_80186030_80185EC8 *o = (struct VObj_80186030_80185EC8 *)this;
    o->m15();
}

s32 TObjCityMainWarp__vt15(u8 *arg0) {
    s32 *var_r4;
    u8 *var_r31;
    u8 *var_r3;
    u8 *var_r5;
    var_r31 = (u8 *)(arg0);
    if (TLobby::get_instance() == 0) {
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0xB0));
        if ((var_r3 != NULL) && (((TWindowMenu *)var_r3)->is_visible() != 0)) {
            var_r3 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0xB0));
            var_r4 = (s32 *)(&city_warp_floor_destination_table.value);
            var_r5 = (u8 *)(var_r31 + (get_selected_menu_value(var_r3) * 4));
            var_r3 = (u8 *)((void *)1U);
            var_r4 = (s32 *)(&city_warp_floor_destination_table.value);
            *(s32 *)((s8 *)var_r31 + 0xBC) = (s32) *(s32 *)((s8 *)(&city_warp_floor_destination_table.value) + (*(s32 *)((s8 *)var_r5 + 0xC8) * 4));
            return 1;
        }
        var_r3 = (u8 *)(NULL);
        return 0;
    }
    var_r3 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0xB0));
    if ((var_r3 != NULL) && (((TWindowMenu *)var_r3)->is_visible() != 0)) {
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r31 + 0xB0));
        var_r4 = (s32 *)(&lbl_80444834.value);
        var_r5 = (u8 *)(var_r31 + (get_selected_menu_value(var_r3) * 4));
        var_r3 = (u8 *)((void *)1U);
        var_r4 = (s32 *)(&lbl_80444834.value);
        *(s32 *)((s8 *)var_r31 + 0xBC) = (s32) *(s32 *)((s8 *)(&lbl_80444834.value) + (*(s32 *)((s8 *)var_r5 + 0x10C) * 4));
        return 1;
    }
    var_r3 = (u8 *)(NULL);
    return 0;
}

void TObjCityMainWarp::vfunc_14() { if (*(unsigned int*)((char*)this + 0xb0) != 0) { vfunc_14__12TObjWarpBaseFv(this); TWindowCtrl::clear_flag(); } }

#pragma push
#pragma opt_lifetimes off
void TObjCityMainWarp__vt13(Warp_8018615C *w, s16 arg1) {
    s32 i;
    s32 n;
    s32 j;
    s32 k;
    s32 j2;
    s32 k2;

    if (w->win != NULL) {
        return;
    }
    if (is_quest_active() == 0) {
        ((void (*)(int))update_main_warp_visible_mask)(w->f150);
    } else {
        TObjCityMainWarp__visible_destination_mask = TObjCityMainWarp__enabled_destinations;
    }
    if (TLobby::get_instance() == 0) {
        for (i = 0; i < 17; i++) {
            w->fC8[i] = 0;
        }
        n = 0;
        for (i = 0; i < 17; i++) {
            if (TObjCityMainWarp__visible_destination_mask & (1 << i)) {
                w->fC8[n++] = i;
            }
        }
    } else {
        for (i = 0; i < 17; i++) {
            w->f10C[i] = 0;
        }
        n = 0;
        for (i = 0; i < 17; i++) {
            if (TObjCityMainWarp__visible_destination_mask & (1 << i)) {
                w->f10C[n++] = i;
            }
        }
    }
    if (n > 0) {
        w->win = ((Win_8018615C *(*)(s32, s32, s16))create_window_menu)(get_window_layout_position(0x32), n, arg1);
        if (w->win != NULL) {
            if (TLobby::get_instance() == 0) {
                for (j = 0, k = 0; j < 17; j++) {
                    if (TObjCityMainWarp__visible_destination_mask & (1 << j)) {
                        if (get_game_play_mode() == 1) {
                            ((void (*)(void *, int, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)(w->win, ((s32 (*)())TObjCityMainWarp__sub_80186AF4)(), 0xE, k);
                        } else {
                            ((void (*)(void *, int, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)(w->win, get_localized_text_entry(9, city_warp_group9_text_table[j]), 0xE, k);
                        }
                        k++;
                    }
                }
            } else {
                for (j2 = 0, k2 = 0; j2 < 17; j2++) {
                    if (TObjCityMainWarp__visible_destination_mask & (1 << j2)) {
                        if (get_game_play_mode() == 1) {
                            ((void (*)(void *, int, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)(w->win, ((s32 (*)())TObjCityMainWarp__sub_80186AF4)(), 0xE, k2);
                        } else {
                            ((void (*)(void *, int, int, int))forward_trade_action_default__16TObjCityMainWarpFPviii)(w->win, get_localized_text_entry(9, city_warp_group9_text_table_b[j2]), 0xE, k2);
                        }
                        k2++;
                    }
                }
            }
            ((TWindowSubComCardList *)(w->win))->set_flag70_bit10();
            ((TLobby *)(w->win))->set_loss_flag();
            ((TWindowSubComCardList *)(w->win))->update_layout_height(lbl_805DBC9C);
            if (w->win->f3C > lbl_805DBCA0) {
                ((TWindowSubComCardList *)(w->win))->set_scroll_target(lbl_805DBC9C, lbl_805DBCA0);
            }
            ((void (*)(void *))align_menu_entry_positions)(w->win);
        }
    }
    ((void (*)())request_active_window_close)();
    w->fB8 = arg1;
}
#pragma pop

void *TObjCityMainWarp::create() {
    void *o = __nw__7TObjectFUl(0x154);
    if (o != NULL) {
        o = TObjCityMainWarp__ct((void *)(o), (void *)(tl_05), (void *)(this));
    }
    return o;
}

void *__dt__16TObjCityMainWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjCityMainWarp;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjCityMainWarp__ct(void *arg0, void *arg1, void *arg2) {
    Obj_801864B4 *self = (Obj_801864B4 *)arg0;
    s32 i;
    s32 j;
    void *p;
    ((void (*)(void *, void *, void *))TObjAreaWarp__ct)(self, arg1, arg2);
    *(s32 **)((u8 *)self + 0x18) = __vt__16TObjCityMainWarp;
    *(s32 *)self = lbl_805D32A8;
    self->xac = lbl_805DBCA4;
    self->xc4 = lbl_805DBC90;
    for (i = 0; i < 17; i++) {
        self->a[i] = 0;
    }
    for (j = 0; j < 17; j++) {
        self->b[j] = 0;
    }
    if (is_split_screen() == 1) {
        p = ((void * (*)(s32))alloc__23TAdSinglePlyChrSelectGCFv)(0x88);
        if (p != NULL) {
            p = init__13TAdVIConfigGCFf(p, self->pos, lbl_805DBCA4);
        }
        self->vi = p;
    } else {
        self->vi = NULL;
    }
    self->x150 = self->mode;
    if (self->x150 < 0) {
        self->x150 = 0;
    }
    if (self->x150 > 2) {
        self->x150 = 2;
    }
    return self;
}

void unlock_main_warp_destination(s32 id) {
    if (TLobby::get_instance() == 0) {
        TObjCityMainWarp::set_active_bit(id);
        if (id == 8) {
            TBoss4DarkFalz::dispatch_by_main_phase(0x30);
        }
    } else {
        switch (id) {
        case 5: case 6: case 7: case 8: case 9:
        case 12: case 13: case 14: case 15:
            break;
        default:
            TObjCityMainWarp::set_active_bit(id);
            break;
        }
    }
}

void clear_enabled_main_warps(void) { TObjCityMainWarp__enabled_destinations = 0; }

void TObjCityMainWarp::clear_active_bit() {
    s32 temp_r3;

    temp_r3 = get_floor_warp_bit__16TObjCityMainWarpFl();
    if (temp_r3 >= 0) {
        TObjCityMainWarp__enabled_destinations &= ~(1 << temp_r3);
    }
}
void TObjCityMainWarp::update_warp_flags_from_story() {
    s32 var_r31;
    s32 var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    if ((is_main_phase_15__9TObjEneDDFv(this) != 0) || (is_split_screen() != 0)) {
        var_r3 = 0x4F;
        var_r31 = 0x52;
    } else {
        var_r3 = 0x50;
        var_r31 = 0x53;
    }
    if (get_story_flag(var_r3) != 0) {
        TObjCityMainWarp__visible_destination_mask |= 0x10;
    }
    if (get_story_flag(var_r31) != 0) {
        TObjCityMainWarp__visible_destination_mask |= 0x200;
    }
    for (var_r5 = 0; var_r5 < 4; var_r5++) {
        TObjCityMainWarp__visible_destination_mask &= ~(1 << var_r5);
    }
    for (var_r5 = 0xF; var_r5 < 0x11; var_r5++) {
        TObjCityMainWarp__visible_destination_mask &= ~(1 << var_r5);
    }
}
void TObjCityMainWarp::init_visible_mask() {
    s32 var_r3;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 var_ctr;
    s32 var_ctr_2;
    s32 var_r4;
    s32 var_r5;
    s32 var_r5_2;
    TObjCityMainWarp__visible_destination_mask |= 1;
    if ((is_main_phase_15__9TObjEneDDFv(this) != 0) || (is_split_screen() != 0)) {
        var_r3 = 0x4C;
    } else {
        var_r3 = 0x4D;
    }
    if (get_story_flag(var_r3) != 0) {
        TObjCityMainWarp__visible_destination_mask |= 4;
    }
    for (var_r5 = 4; var_r5 < 11; var_r5++) {
        TObjCityMainWarp__visible_destination_mask &= ~(1 << var_r5);
    }
    for (var_r5 = 0xF; var_r5 < 0x11; var_r5++) {
        TObjCityMainWarp__visible_destination_mask &= ~(1 << var_r5);
    }
}

}
