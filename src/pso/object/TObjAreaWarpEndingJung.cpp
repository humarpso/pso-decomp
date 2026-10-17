#include "types.h"
#include "pso/system/vector.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/object/TObjDoorJung.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdVIConfigGC.h"
#include "pso/TObject.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/TObjWarpString.h"
#include "pso/object/TObjMapWarpForest.h"
#include "pso/misc/TKeyBoardControl.h"
#include "pso/object/TObjAreaWarp.h"
#include "pso/object/TObjAreaWarpEnding.h"
#include "pso/object/TObjAreaWarpEndingJung.h"
#include "pso/object/TObjAreaWarpForest.h"
#include "pso/object/TObjAreaWarpQuest.h"
#include "pso/object/TObjMapForceWarp.h"
#include "pso/object/TObjMapWarp.h"
#include "pso/TAdStorySelectGC.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4DarkFalz.h"
#include "pso/misc/THunterGuildSeqOffline.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TNpcPlayer.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/misc/TWindowCtrl.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/npc/TObjNpcEnemy.h"
#include "pso/object/TObjCityMainWarp.h"
#include "pso/object/TObjFish.h"
#include "pso/object/TObjLuker.h"
#include "pso/object/TObjWarpJung.h"
#include "pso/ui/TAdChrSelASlotGC.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct VObjBase_8019B124 { char pad[0x18]; };

struct VObj_8019B124 : VObjBase_8019B124 {
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

struct Warp_8019B170 { u8 pad0[0x8C]; s32 f8C; };

struct RecoveredGlobal_8019B854___vt__14TObjWarpString {
    s32 value;
    u8 remaining[0x14];
};

typedef char RecoveredGlobal_8019B854___vt__14TObjWarpString_size[sizeof(RecoveredGlobal_8019B854___vt__14TObjWarpString) == 0x18 ? 1 : -1];

struct Obj_8019B8D8 { u8 pad[0x88]; s32 id; };

struct Obj_8019B978 {
    u8 pad0[0x8C];
    s32 f8c;
    u8 pad90[0xFC - 0x90];
    s32 ffc;
};

struct RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest { s32 value; u8 remaining[0x50]; };

typedef char RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest_size[sizeof(RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding { s32 value; u8 remaining[0x50]; };

typedef char RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding_size[sizeof(RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest { s32 value; u8 remaining[0x50]; };

typedef char RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest_size[sizeof(RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest) == 0x54 ? 1 : -1];

struct Obj_8019C924 { u8 pad0[0x84]; s32 id; u8 pad1[0xbc - 0x88]; s32 saved_id; };

struct Pkt_8019C988 { u8 pad0[4]; s16 f4; };

struct ObjBase_8019BD84 { char pad[0x18]; };

struct Obj_8019BD84 : ObjBase_8019BD84 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 is_visible(f32, f32);
};

struct Node_8019BD84 { u32 flags; void *model; f32 pos[3]; s32 ang[3]; f32 scl[3]; Node_8019BD84 *child; Node_8019BD84 *sibling; };

struct Ids_8019BD84 { u16 id[2]; };

struct Warp_8019BD84 { u8 pad0[0x38]; f32 pos[3]; u8 pad44[0x1C]; s32 f60; u8 pad64[0x28]; s32 f8C; u8 pad90[0x34]; f32 fC4; s32 fC8; Node_8019BD84 *fCC; Node_8019BD84 *fD0; s32 fD4; s32 fD8; };

struct Warp_8019C05C { u8 pad0[0xBC]; s32 fBC; u8 padC0[4]; s32 fC4; };

struct VBase_8019C250 { char pad[0x18]; };

struct VObj_8019C250 : VBase_8019C250 {
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

struct Node_8019C250 {
    u8 pad0[4];
    void *f4;
    u8 f8[0xC];
    s32 f14;
    s32 f18;
    s32 f1C;
    u8 pad20[0x2C - 0x20];
    Node_8019C250 *next2C;
    Node_8019C250 *next30;
};

struct Obj_8019C250 {
    u8 pad0[0x38];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x8C - 0x64];
    s32 f8C;
    u8 pad90[0xC8 - 0x90];
    f32 fC8;
    s32 fCC;
    Node_8019C250 *fD0;
    Node_8019C250 *fD4;
    s32 fD8;
    s32 fDC;
};

struct Colors_8019C250 { u16 c[2]; };

struct VBase_8019C604 { char pad[0x18]; };

struct VObj_8019C604 : VBase_8019C604 {
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

struct Node_8019C604 {
    u8 pad0[4];
    void *f4;
    u8 f8[0xC];
    s32 f14;
    s32 f18;
    s32 f1C;
    u8 pad20[0x2C - 0x20];
    Node_8019C604 *next2C;
    Node_8019C604 *next30;
};

struct Obj_8019C604 {
    u8 pad0[0x38];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x8C - 0x64];
    s32 f8C;
    u8 pad90[0xC4 - 0x90];
    f32 fC8;
    s32 fCC;
    Node_8019C604 *fD0;
    Node_8019C604 *fD4;
    s32 fD8;
    s32 fDC;
};

struct Colors_8019C604 { u16 c[2]; };

struct Obj_8019BCBC {
    u8 pad0[0x8C];
    s32 f8C;
};

struct Obj_8019C53C {
    u8 pad0[0x8C];
    s32 f8C;
};

struct Obj_8019C144 {
    u8 pad0[0x68];
    f32 f68;
    u8 pad1[0x8C - 0x6C];
    s32 f8C;
    u8 pad2[0xC4 - 0x90];
    s32 fC4;
};

struct VBase8019CF38_8019CCF0 { char pad[0x18]; };

struct VObj8019CF38_8019CCF0 : VBase8019CF38_8019CCF0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8019D030___vt__17TObjMapWarpForest { s32 value; u8 remaining[0x50]; };

typedef char RecoveredGlobal_8019D030___vt__17TObjMapWarpForest_size[sizeof(RecoveredGlobal_8019D030___vt__17TObjMapWarpForest) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019CA24_lbl_80515BA0 {
    s32 value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8019CE40___vt__12TObjAreaWarp {
    s32 value;
    u8 remaining[0x50];
};

struct Vec_8019D0A8 { f32 x, y, z; };

struct Warp_8019D0A8 {
    u8 pad0[0x60];
    s32 yaw;
    u8 pad64[0x68 - 0x64];
    Vec_8019D0A8 pos;
    u8 pad74[0x84 - 0x74];
    s32 yaw2;
    u8 pad88[0xBC - 0x88];
    Vec_8019D0A8 ends[4];
};

struct VBase_8019D250 { char pad[0x18]; };

struct VObj_8019D250 : VBase_8019D250 {
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
    virtual void m13(s32);
    virtual s32 m14();
    virtual void m15();
    virtual s32 m16(s32);
    virtual void m17();
    virtual void m18(u16);
};

struct Vec_8019D250 { f32 x, y, z; };

struct Data_8019D250 {
    u8 pad0[0x84];
    s32 f84;
    u8 pad88[0xAC - 0x88];
    f32 fAC;
    void *fB0;
    u8 padB4[0xBC - 0xB4];
    Vec_8019D250 ends[4];
    void *win[4];
};

struct VBase_8019CAB0 { char pad[0x18]; };

struct VObj_8019CAB0 : VBase_8019CAB0 {
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
    virtual void m13(s32);
    virtual s32 m14();
    virtual void m15();
    virtual s32 m16(s32);
    virtual void m17(void *);
};

struct Data_8019CAB0 {
    u8 pad0[0xAC];
    f32 fAC;
    void *fB0;
    u8 padB4[0xC0 - 0xB4];
    void *fC0;
};

typedef char RecoveredGlobal_8019CA24_lbl_80515BA0_size[sizeof(RecoveredGlobal_8019CA24_lbl_80515BA0) == 0x28 ? 1 : -1];

typedef char RecoveredGlobal_8019CE40___vt__12TObjAreaWarp_size[sizeof(RecoveredGlobal_8019CE40___vt__12TObjAreaWarp) == 0x54 ? 1 : -1];

struct VObj_8019D250;
extern "C" {

s32 get_main_phase();
void mark_area_change_pending();
void TKeyBoardControl__sub_8000F9CC(s32 arg0);
s32 obj_isState3_324__13TUnk_804806E8Fv(void *);
u16 obj_getField1c(void *);
s32 is_split_screen();
s32 get_current_floor();
void queue_destruction__7TObjectFv(void *);
void allow_rendering__7TObjectFv(TObject *);
void disallow_rendering__7TObjectFv(TObject *arg0);
s32 get_split_screen_view_index__11TCameraCtrlFUs(void *);
u32 TLobby__sub_80070AD8(s32 arg0);
s32 get_floor_destination_name();
s32 get_localized_text_entry(s32, s32);
s32 TObjMapWarp__sub_80141CB0(void *, void *, u32, u32);
s32 TObjMapWarp__sub_80141CB4(void *, f32);
s32 test_player_body_overlap_at(void *, void *, Vec_8019D250 *);
s32 TObjCityMainWarp__sub_80186AF4();
void * TObjAreaWarpEndingJung__create(void *arg0);
void * __dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1);
void * TObjAreaWarpEndingJung__ct(void *arg0);
}
void * create_TObjWarpString(void *arg0, void *arg1);
extern "C" {
s64 fn_8019B480(void *arg0, void *arg1);
void fade_and_destroy__14TObjWarpStringFPv(u8 *arg0);
void TObjWarpString__sub_8019B728(void *arg0);
void update_fade_in__14TObjWarpStringFPv(u8 *arg0);
void sub_8019B77C__14TObjWarpStringFv(void *arg0);
u8 * __ct__14TObjWarpStringFv(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3);
s32 TObjMapForceWarp__vt16(TObjMapForceWarp *arg0, u16 arg1);
void TObjMapForceWarp__vt17(Obj_8019B978 *arg0);
void * __dt__16TObjMapForceWarpFv(void *arg0, s16 arg1);
void * TObjMapForceWarp__ct(void *arg0);
void * __dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1);
u8 * TObjAreaWarpEnding__ct(u8 *arg0, s32 arg1, s32 arg2);
void TObjAreaWarpQuest__vt17(Warp_8019C05C *arg0, void *arg1);
void * __dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1);
u8 * TObjAreaWarpQuest__ct(u8 *arg0, s32 arg1, s32 arg2);
void * __dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1);
u8 * TObjAreaWarpForest__ct(u8 *arg0, s32 arg1, s32 arg2);
void handle_6x94_inter_level_warp(Pkt_8019C988 *arg0);
void confirm_area_transfer__12TObjAreaWarpFPvi(u8 *arg0, s32 arg1);
u8 * __dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1);
void * TObjAreaWarp__ct(void *arg0);
u8 * TObjMapWarpForest__ct(u8 *arg0);
s32 can_warp__11TObjMapWarpFlUs(void *, u16);
void *__dt__11TObjMapWarpFv(void *arg0, s16 arg1);
s32 TObjMapWarp__ct();
s32 vfunc_16__12TObjWarpBaseFv(s32);
void * find_warp_player_in_range(void *, u16, f32);
void *__dt__12TObjWarpBaseFv(void *arg0, s16 arg1);
s32 TObjWarpBase__ct();
int TAdStorySelectGC__sub_8019DC14(void);
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
void * get_dest_area__17TObjAreaWarpQuestFv(void *);
void TObjAreaWarpQuest__sub_8019DCD8(void *, s32);
}
void bswap_6x94_inter_level_warp(void *);
void mask_action_buttons(void *p, u32 v);
extern "C" {
f32 get_static_field4_as_float__12TObjWarpJungFv(f32);
s32 TObjWarpJung__sub_801A0404(s32);
s32 check_flag_100__10TObjPlayerFPv();
void * get_player_by_client_id(s32);
void send_6x21_inter_level_warp(void *obj, s32 value);
void send_6x55_intra_map_warp(u16 id, void *pos, s32 c);
s32 init__23TAdSinglePlyChrSelectGCFv();
s32 get_floor_map_terrain(s32);
}
s32 should_record_episode1_quest_completion();
extern "C" {
s32 play_sound_effect(s32, s32, s32, s32);
void set_area__6TLobbyFl(void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *, void *);
void TWindow__close(void *);
s32 align_menu_entry_positions(u32);
u32 create_window_menu(s32, s32, s16);
s32 get_window_layout_position(s32);
s32 find_active_player__12TObjAreaWarpFv(void *);
void *destroy__13TAdVIConfigGCFPvs(void *arg0, s16 arg1);
s32 init__13TAdVIConfigGCFf(int, void *, f32);
s32 get_game_play_mode(int);
void send_inter_level_warp_all__10TNpcPlayerFl();
s32 PPCSync();
int sprintf(char *, const char *, ...);
void strncpy(s32, s32, s32);
void debug_printf_at(s32 id, const char *fmt, ...);
s32 matrix_mult_vec(int, void *, void *);
void rotate_matrix_zyx(void *m, s32 x, s32 y, s32 z);
s32 rotate_matrix_y(s32, s32);
void rotate_matrix_x(int, s32);
s32 push_matrix_from(void *);
void push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
void draw_ginja_object(void *child);
void draw_ginja_model(s32 model);
void draw_ginja_model_with_motion(s32, s32, f32);

extern s32 __vt__12TObjAreaWarp[];
extern RecoveredGlobal_8019B854___vt__14TObjWarpString __vt__14TObjWarpString;
extern s32 __vt__16TObjMapForceWarp[];
extern s32 __vt__17TObjAreaWarpQuest[];
extern RecoveredGlobal_8019D030___vt__17TObjMapWarpForest __vt__17TObjMapWarpForest;
extern s32 __vt__18TObjAreaWarpEnding[];
extern s32 __vt__18TObjAreaWarpForest[];
extern s32 __vt__22TObjAreaWarpEndingJung[];
extern Vec_8019D0A8 lbl_804462FC;
extern char lbl_804463A4[];
extern char lbl_804463B4[];
extern char lbl_804463D0[];
extern char lbl_804463E0[];
extern char lbl_804463F0[];
extern char lbl_80446404[];
extern char lbl_8044641C[];
extern char lbl_80446430[];
extern char lbl_80446440[];
extern char lbl_80446450[];
extern char lbl_80446460[];
extern Vec_8019D0A8 map_warp_destination_offsets[];
extern s64 warp_string_screen_position_table[];
extern RecoveredGlobal_8019CA24_lbl_80515BA0 lbl_80515BA0;
extern u8 identity_matrix[];
extern s32 TObjMapWarpForest__name;
extern s32 TObjAreaWarp__name;
extern s32 TObjAreaWarpForest__name;
extern s32 TObjAreaWarpQuest__name;
extern s32 TObjAreaWarpEnding__name;
extern s32 TObjMapForceWarp__name;
extern s32 TObjWarpString__name;
extern s32 TObjAreaWarpEndingJung__name;
extern s32 local_client_id;
extern s32 lobby_quest_progress_flag;
extern Colors_8019C604 lbl_805DBFC8;
extern Colors_8019C250 lbl_805DBFCC;
extern Ids_8019BD84 lbl_805DBFD0;
extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE0;
extern const f32 lbl_805DBFE4;
extern const f32 lbl_805DBFEC;
extern const f32 lbl_805DBFF0;
extern char lbl_805DBFF4[4];
extern const f32 lbl_805DBFF8;
extern const f32 lbl_805DBFFC;
extern s32 tl_00;
extern void *tl_05;
extern void *tl_clipout;

void *TObjAreaWarpEndingJung__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjAreaWarpEndingJung__ct)(o, tl_05, arg0);
    }
    return o;
}

void TObjAreaWarpEndingJung::debug_print_area_num() {
    TObjNpcEnemy::set_global_count(0xFF00FF);
    if (((Warp_8019B170 *)this)->f8C < 0) {
        ((Warp_8019B170 *)this)->f8C = 0;
    }
    ((Warp_8019B170 *)this)->f8C = ((Warp_8019B170 *)this)->f8C % 2;
    if (((Warp_8019B170 *)this)->f8C == 0) {
        TObjNpcEnemy::set_global_count(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463A4);
    } else {
        TObjNpcEnemy::set_global_count(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463B4);
    }
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjAreaWarpEndingJung::render() {
    u8 *arg0 = (u8 *)this;

    if (((VObj_8019B124*)arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        if (TObjWarpJung::update_warp_display() != 0) {
            PPCSync();
        }
        switch (this->m_8c) {
        case 0:
            TObjWarpJung__sub_801A0404(0);
            break;
        case 1:
            TObjWarpJung__sub_801A0404(1);
            break;
        }
        TObjWarpJung::set_global_render_param();
        ((s32 (*)(void))push_matrix)();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        TObjWarpJung::render_warp(0);
        TParticleCtrl::begin_effect_render();
        TObjWarpJung::render_warp_effect(1, (s32) this->m_c4);
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

void TObjAreaWarpEndingJung::run_task() {
    f32 temp_f1;

    temp_f1 = this->m_c4;
    this->m_c4 = (f32) (temp_f1 + lbl_805DBFDC);
    if (this->m_c4 > (get_static_field4_as_float__12TObjWarpJungFv(temp_f1) - lbl_805DBFE0)) {
        this->m_c4 = (f32) lbl_805DBFE4;
    }
    handle_area_selection();
}

void *__dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjAreaWarpEndingJung;
        ((void (*)(void *, int))__dt__18TObjAreaWarpEndingFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjAreaWarpEndingJung__ct(void *arg0) {
    s32 temp_r0;
    u32 temp_r4;

    ((s32 (*)(void))TObjAreaWarpEnding__ct)();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TObjAreaWarpEndingJung;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjAreaWarpEndingJung__name;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x8C) < 0) {
        *(s32 *)((s8 *)arg0 + 0x8C) = 0;
    }
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x8C);
    temp_r4 = (u32) temp_r0 >> 0x1FU;
    *(s32 *)((s8 *)arg0 + 0x8C) = (s32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    return arg0;
}
}

void * create_TObjWarpString(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *, void *))__ct__14TObjWarpStringFv)(o, tl_clipout, arg0, arg1);
    }
    return o;
}
extern "C" {

s64 fn_8019B480(void *arg0, void *arg1) {
    s64 *p = warp_string_screen_position_table;
    if (TRaderMapCore::is_not_split_screen() == 1) {
        switch (TCameraCtrl::get_camera_id()) {
        case 2:
            p = warp_string_screen_position_table + 1;
            break;
        case 3:
            p = warp_string_screen_position_table + 3;
            break;
        case 4:
            p = warp_string_screen_position_table + 6;
            break;
        }
        p += get_split_screen_view_index__11TCameraCtrlFUs(arg1);
    }
    return *p;
}

void fade_and_destroy__14TObjWarpStringFPv(u8 *arg0) {
  const f32 *new_var;
  *((f32 *) (((s8 *) arg0) + 0x44)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x44))) - lbl_805DBFEC);
  if ((*((f32 *) (((s8 *) arg0) + 0x44))) < (*(new_var = &lbl_805DBFE4)))
  {
    *((f32 *) (((s8 *) arg0) + 0x44)) = (f32) (*new_var);
    queue_destruction__7TObjectFv(arg0);
  }
}

void TObjWarpString__sub_8019B728(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x40) - 1;
    *(s32 *)((s8 *)arg0 + 0x40) = temp_r0;
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)arg0 + 0x4C) = 3;
    }
}

#pragma push
#pragma opt_common_subs off
void update_fade_in__14TObjWarpStringFPv(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) (*(f32 *)((s8 *)arg0 + 0x44) + lbl_805DBFEC);
    if (*(f32 *)((s8 *)arg0 + 0x44) > lbl_805DBFF0) {
        *(f32 *)((s8 *)arg0 + 0x44) = (f32) lbl_805DBFF0;
        *(s32 *)((s8 *)arg0 + 0x4C) = 2;
        *(s32 *)((s8 *)arg0 + 0x40) = 0x5A;
    }
}
#pragma pop

void TObjWarpString::sub_8019B77C() {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)this + 0x40) - 1;
    *(s32 *)((s8 *)this + 0x40) = temp_r0;
    if (temp_r0 < 0) {
        *(s32 *)((s8 *)this + 0x4C) = 1;
    }
}

void TObjWarpString::run_task() {

    switch (*(s32 *)((s8 *)this + 0x4C)) {
    case 0:
        ((s32 (*)(void))sub_8019B77C__14TObjWarpStringFv)();
        return;
    case 1:
        ((s32 (*)(void))update_fade_in__14TObjWarpStringFPv)();
        return;
    case 2:
        ((s32 (*)(void))TObjWarpString__sub_8019B728)();
        return;
    case 3:
        ((s32 (*)(void))fade_and_destroy__14TObjWarpStringFPv)();
        return;
    }
}

TObjWarpString::~TObjWarpString() {}

u8 *__ct__14TObjWarpStringFv(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__14TObjWarpString.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjWarpString__name;
    strncpy((s32)(arg0 + 0x1C), arg2, 0x20);
    *(s8 *)((s8 *)arg0 + 0x3B) = 0;
    *(s16 *)((s8 *)arg0 + 0x48) = arg3;
    *(s32 *)((s8 *)arg0 + 0x3C) = -1;
    *(f32 *)((s8 *)arg0 + 0x44) = (f32) lbl_805DBFE4;
    *(s32 *)((s8 *)arg0 + 0x40) = 0x18;
    *(s32 *)((s8 *)arg0 + 0x4C) = 0;
    return arg0;
}

void TObjMapForceWarp::create_warp_id_string(void *arg) {
    char buf[32];
    char *p;
    sprintf(buf, lbl_805DBFF4, ((Obj_8019B8D8 *)this)->id);
    for (p = buf; *p != 0; p++) {
        *p = TLobby__sub_80070AD8(*p);
    }
    create_TObjWarpString(buf, arg);
}

s32 TObjMapForceWarp__vt16(TObjMapForceWarp *arg0, u16 arg1) {
    if ((s32) *(s32 *)((s8 *)arg0 + 0xFC) != 0) {
        arg0->create_warp_id_string((void *)arg1);
    }
    return 1;
}

void TObjMapForceWarp__vt17(Obj_8019B978 *arg0) {
    ((TObjMapWarp *)arg0)->draw_debug_destinations();
    if (arg0->f8c > 0) {
        arg0->ffc = 0;
    } else {
        arg0->ffc = 1;
    }
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x130021, lbl_804463D0);
    if (arg0->ffc != 0) {
        debug_printf_at(0x130022, lbl_804463E0);
    } else {
        debug_printf_at(0x130022, lbl_804463F0);
    }
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjMapForceWarp::render() {  }

void TObjMapForceWarp::run_task() { process_player_warps(); }

void *__dt__16TObjMapForceWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjMapForceWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjMapForceWarp__ct(void *arg0) {
    TObjMapWarp__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjMapForceWarp;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjMapForceWarp__name;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x8C) > 0) {
        *(s32 *)((s8 *)arg0 + 0xFC) = 0;
    } else {
        *(s32 *)((s8 *)arg0 + 0xFC) = 1;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 0U) {
        disallow_rendering__7TObjectFv((TObject *)(*(void **)((s8 *)arg0 + 0xB4)));
        ((TObject *)(*(u32 *)((s8 *)arg0 + 0xB4)))->set_flag_4();
    }
    return arg0;
}

void TKeyBoardControl::dispatch_select_phase() {

    switch (TAdStorySelectGC__sub_8019DC14()) {
    case 0:
        if (should_record_episode1_quest_completion() != 0) {
            TBoss4DarkFalz::dispatch_by_main_phase(0x3FE);
            TKeyBoardControl__sub_8000F9CC(0xC);
        } else {
            TKeyBoardControl__sub_8000F9CC(0x10);
        }
        break;
    case 1:
        TKeyBoardControl__sub_8000F9CC(8);
        break;
    }
    init__23TAdSinglePlyChrSelectGCFv();
}

void TObjAreaWarpEnding::confirm_area_transfer(s32) {
    play_sound_effect(0x40003205, 0, 0, 0);
    u32 obj = ((u32 (*)(s32))__nw__7TObjectFUl)(0x28);
    if (obj != 0U) {
        ((THunterGuildSeqOffline *)obj)->init((void *)tl_00, (void *)((s32 *)TKeyBoardControl::dispatch_select_phase));
    }
}

void TObjAreaWarpEnding::open_confirm_window(s16 arg1) {
    if ((u32) this->m_cc == 0U) {
        this->m_cc = create_window_menu(get_window_layout_position(0x33), 1, arg1);
        if (get_main_phase() == 0xE) {
            ((TWindowSubTradeMain *)(this->m_cc))->add_text_entry(get_localized_text_entry(9, 0x26), 3, 0, -1);
        } else {
            ((TWindowSubTradeMain *)(this->m_cc))->add_text_entry(get_localized_text_entry(9, 0x23), 2, 0, -1);
        }
        ((TWindowSubComCard *)(this->m_cc))->calc_window_size();
        align_menu_entry_positions(this->m_cc);
        ((TWindowSubComCardList *)(this->m_cc))->set_flag70_bit10();
        ((TAdChrSelASlotGC *)(this->m_cc))->set_flag_40();
        *(s16 *)((s8 *)this + 0xB8) = arg1;
    }
}

void TObjAreaWarpEnding::debug_print_area_num() {
    this->TObjAreaWarp::debug_print_area_num();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    if (((Obj_8019BCBC *)this)->f8C < 0) {
        ((Obj_8019BCBC *)this)->f8C = 0;
    }
    ((Obj_8019BCBC *)this)->f8C = ((Obj_8019BCBC *)this)->f8C % 2;
    if (((Obj_8019BCBC *)this)->f8C == 0) {
        TObjNpcEnemy::set_global_count(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463B4);
    } else {
        TObjNpcEnemy::set_global_count(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463A4);
    }
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjAreaWarpEnding::render() {
    Obj_8019BD84 *self = (Obj_8019BD84 *)this;
    Warp_8019BD84 *arg0 = (Warp_8019BD84 *)self;
    Node_8019BD84 *root;
    Node_8019BD84 *node;
    if (self->is_visible(lbl_805DBFD4, lbl_805DBFD8) == 0) {
        return;
    }
    Ids_8019BD84 ids = lbl_805DBFD0;
    for (node = arg0->fD0->child; node != 0; node = node->child) {
        if (node->model != 0) {
            ((TObjDoorJung *)(node->model))->free_children((void *)ids.id[arg0->f8C]);
        }
    }
    root = arg0->fCC;
    TObjFish::set_global_param(arg0->fD8);
    push_matrix();
    ((void (*)(void *))post_translate_matrix)(arg0->pos);
    ((void (*)(int, int))rotate_matrix_y)(0, arg0->f60);
    push_matrix();
    ((void (*)(void *))post_translate_matrix)(root->pos);
    draw_ginja_model((s32)root->model);
    TParticleCtrl::begin_effect_render();
    for (root = root->child; root != 0; root = root->sibling) {
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(root->pos);
        rotate_matrix_zyx(0, root->ang[0], root->ang[1], root->ang[2]);
        rotate_matrix_x(0, arg0->fC8);
        draw_ginja_model((s32)root->model);
        ((void (*)(void))pop_matrix)();
    }
    TParticleCtrl::end_effect_render();
    ((void (*)(void))pop_matrix)();
    TParticleCtrl::begin_effect_render();
    draw_ginja_model_with_motion((s32)arg0->fD0, arg0->fD4, arg0->fC4);
    TParticleCtrl::end_effect_render();
    ((void (*)(void))pop_matrix)();
}

void TObjAreaWarpEnding::run_task() {
    u8 *arg0 = (u8 *)this;
  unsigned int new_var;
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DBFDC);
  new_var = *((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)))) + 4));
  if ((new_var - 1) < (*((f32 *) (((s8 *) arg0) + 0xC4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xC8))) + 0x150);
  ((TObjAreaWarp *)arg0)->handle_area_selection();
}

void *__dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjAreaWarpEnding;
        ((void (*)(void *, int))__dt__12TObjAreaWarpFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjAreaWarpEnding__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r4;
    ((s32 (*)(void *, void *, void *))TObjAreaWarp__ct)((void *)arg0, (void *)arg1, (void *)arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding *)&__vt__18TObjAreaWarpEnding).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjAreaWarpEnding__name;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DBFE4;
    *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x8C);
    temp_r4 = temp_r0 >> 0x1FU;
    *(u32 *)((s8 *)arg0 + 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    *(s32 *)((s8 *)arg0 + 0xCC) = register_warp__16TObjMapForceWarpFPv(0);
    *(s32 *)((s8 *)arg0 + 0xD0) = register_warp__16TObjMapForceWarpFPv(1);
    *(s32 *)((s8 *)arg0 + 0xD4) = register_area_warp_object__16TAdStorySelectGCFPv(0);
    *(s32 *)((s8 *)arg0 + 0xD8) = TAdStorySelectGC::get_story_select();
    if (TRaderMapCore::is_not_split_screen() == 1) {
        temp_r3 = ((TAdSinglePlyChrSelectGC *)0x88)->alloc();
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFf(temp_r3, arg0 + 0x38, lbl_805DBFD8);
        }
        *(s32 *)((s8 *)arg0 + 0xC0) = var_r0;
    } else {
        *(s32 *)((s8 *)arg0 + 0xC0) = 0;
    }
    return arg0;
}

void TObjAreaWarpQuest__vt17(Warp_8019C05C *arg0, void *arg1) {
    s32 i;
    void *p;
    set_area__6TLobbyFl(((u8 *)&lbl_80515BA0), arg0->fBC, get_floor_map_terrain(arg0->fBC));
    mark_area_change_pending();
    if (arg1 != 0 && arg0->fC4 > 1) {
        TObjAreaWarpQuest__sub_8019DCD8(arg1, arg0->fC4);
    }
    if (arg0->fC4 > 1) {
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0 && obj_isState3_324__13TUnk_804806E8Fv(p) != 0 && (u16)((TNpcPlayer *)p)->get_action_flags() != 0xFFFF) {
                TObjAreaWarpQuest__sub_8019DCD8(p, arg0->fC4);
            }
        }
    }
    get_dest_area__17TObjAreaWarpQuestFv(((u8 *)&lbl_80515BA0));
    send_inter_level_warp_all__10TNpcPlayerFl();
    send_6x21_inter_level_warp(arg1, (s32)(get_dest_area__17TObjAreaWarpQuestFv(((u8 *)&lbl_80515BA0))));
}

void TObjAreaWarpQuest::debug_print_area_num() {
    this->TObjAreaWarp::debug_print_area_num();
    if (((Obj_8019C144 *)this)->f68 < 0.0f) {
        ((Obj_8019C144 *)this)->f68 = 0.0f;
    }
    ((Obj_8019C144 *)this)->fC4 = (s32)((Obj_8019C144 *)this)->f68;
    if (((Obj_8019C144 *)this)->f8C < 0) {
        ((Obj_8019C144 *)this)->f8C = 0;
    }
    ((Obj_8019C144 *)this)->f8C = ((Obj_8019C144 *)this)->f8C % 2;
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x13001C, lbl_80446404, ((Obj_8019C144 *)this)->fC4);
    if (((Obj_8019C144 *)this)->f8C == 0) {
        TObjNpcEnemy::set_global_count(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463B4);
    } else {
        TObjNpcEnemy::set_global_count(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463A4);
    }
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjAreaWarpQuest::render() {
    Obj_8019C250 *self = (Obj_8019C250 *)this;
    Node_8019C250 *m;
    Node_8019C250 *n;
    if (((VObj_8019C250 *)self)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        Colors_8019C250 cols = lbl_805DBFCC;
        n = self->fD4->next2C;
        while (n != NULL) {
            if (n->f4 != 0) {
                ((TObjDoorJung *)(n->f4))->free_children((void *)cols.c[self->f8C]);
            }
            n = n->next2C;
        }
        m = self->fD0;
        TObjFish::set_global_param(self->fDC);
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(self->f38);
        ((void (*)(int, int))rotate_matrix_y)(0, self->f60);
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(m->f8);
        draw_ginja_model((s32)m->f4);
        TParticleCtrl::begin_effect_render();
        m = m->next2C;
        while (m != NULL) {
            push_matrix();
            ((void (*)(void *))post_translate_matrix)(m->f8);
            rotate_matrix_zyx(0, (m->f14), (m->f18), (m->f1C));
            rotate_matrix_x(0, self->fCC);
            draw_ginja_model((s32)m->f4);
            ((void (*)(void))pop_matrix)();
            m = m->next30;
        }
        TParticleCtrl::end_effect_render();
        ((void (*)(void))pop_matrix)();
        TParticleCtrl::begin_effect_render();
        draw_ginja_model_with_motion((s32)self->fD4, (s32)self->fD8, self->fC8);
        TParticleCtrl::end_effect_render();
        ((void (*)(void))pop_matrix)();
    }
}

void TObjAreaWarpQuest::run_task() {
    u8 *arg0 = (u8 *)this;
  *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC8))) + lbl_805DBFDC);
  if (((f32) ((unsigned long) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD8)))) + 4))) - 1))) < (*((f32 *) (((s8 *) arg0) + 0xC8))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xCC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xCC))) + 0x150);
  ((TObjAreaWarp *)arg0)->handle_area_selection();
}

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjAreaWarpQuest;
        ((void (*)(void *, int))__dt__12TObjAreaWarpFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjAreaWarpQuest__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r4;
    ((s32 (*)(void *, void *, void *))TObjAreaWarp__ct)((void *)arg0, (void *)arg1, (void *)arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest *)&__vt__17TObjAreaWarpQuest).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjAreaWarpQuest__name;
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) lbl_805DBFE4;
    *(s32 *)((s8 *)arg0 + 0xCC) = 0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x8C);
    temp_r4 = temp_r0 >> 0x1FU;
    *(u32 *)((s8 *)arg0 + 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    *(s32 *)((s8 *)arg0 + 0xC4) = (s32) *(f32 *)((s8 *)arg0 + 0x68);
    *(s32 *)((s8 *)arg0 + 0xD0) = register_warp__16TObjMapForceWarpFPv(0);
    *(s32 *)((s8 *)arg0 + 0xD4) = register_warp__16TObjMapForceWarpFPv(1);
    *(s32 *)((s8 *)arg0 + 0xD8) = register_area_warp_object__16TAdStorySelectGCFPv(0);
    *(s32 *)((s8 *)arg0 + 0xDC) = TAdStorySelectGC::get_story_select();
    if (TRaderMapCore::is_not_split_screen() == 1) {
        temp_r3 = ((TAdSinglePlyChrSelectGC *)0x88)->alloc();
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFf(temp_r3, arg0 + 0x38, lbl_805DBFD8);
        }
        *(s32 *)((s8 *)arg0 + 0xC0) = var_r0;
    } else {
        *(s32 *)((s8 *)arg0 + 0xC0) = 0;
    }
    return arg0;
}

void TObjAreaWarpForest::debug_print_area_num() {
    this->TObjAreaWarp::debug_print_area_num();
    TObjNpcEnemy::set_global_count(0xFF00FF);
    if (((Obj_8019C53C *)this)->f8C < 0) {
        ((Obj_8019C53C *)this)->f8C = 0;
    }
    ((Obj_8019C53C *)this)->f8C = ((Obj_8019C53C *)this)->f8C % 2;
    if (((Obj_8019C53C *)this)->f8C == 0) {
        TObjNpcEnemy::set_global_count(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463B4);
    } else {
        TObjNpcEnemy::set_global_count(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463A4);
    }
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void TObjAreaWarpForest::render() {
    Obj_8019C604 *self = (Obj_8019C604 *)this;
    Node_8019C604 *m;
    Node_8019C604 *n;
    if (((VObj_8019C604 *)self)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        Colors_8019C604 cols = lbl_805DBFC8;
        n = self->fD4->next2C;
        while (n != NULL) {
            if (n->f4 != 0) {
                ((TObjDoorJung *)(n->f4))->free_children((void *)cols.c[self->f8C]);
            }
            n = n->next2C;
        }
        m = self->fD0;
        TObjFish::set_global_param(self->fDC);
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(self->f38);
        ((void (*)(int, int))rotate_matrix_y)(0, self->f60);
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(m->f8);
        draw_ginja_model((s32)m->f4);
        TParticleCtrl::begin_effect_render();
        m = m->next2C;
        while (m != NULL) {
            push_matrix();
            ((void (*)(void *))post_translate_matrix)(m->f8);
            rotate_matrix_zyx(0, (m->f14), (m->f18), (m->f1C));
            rotate_matrix_x(0, self->fCC);
            draw_ginja_model((s32)m->f4);
            ((void (*)(void))pop_matrix)();
            m = m->next30;
        }
        TParticleCtrl::end_effect_render();
        ((void (*)(void))pop_matrix)();
        TParticleCtrl::begin_effect_render();
        draw_ginja_model_with_motion((s32)self->fD4, (s32)self->fD8, self->fC8);
        TParticleCtrl::end_effect_render();
        ((void (*)(void))pop_matrix)();
    }
}

void TObjAreaWarpForest::confirm_area_transfer(s32) { ((int (*)(void*))confirm_area_transfer__12TObjAreaWarpFPvi)(this); }

void TObjAreaWarpForest::run_task() {
    u8 *arg0 = (u8 *)this;
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DBFDC);
  if (((f32) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)))) + 4))) - (1 & 0xFFu))) < (*((f32 *) (((s8 *) arg0) + 0xC4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xC8))) + 0x150);
  ((TObjAreaWarp *)arg0)->handle_area_selection();
}

void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjAreaWarpForest;
        ((void (*)(void *, int))__dt__12TObjAreaWarpFv)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TObjAreaWarpForest__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3_2;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r3;
    ((s32 (*)(void *, void *, void *))TObjAreaWarp__ct)((void *)arg0, (void *)arg1, (void *)arg2);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest *)&__vt__18TObjAreaWarpForest).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjAreaWarpForest__name;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DBFE4;
    *(s32 *)((s8 *)arg0 + 0xC8) = 0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x8C);
    temp_r3 = temp_r0 >> 0x1FU;
    *(u32 *)((s8 *)arg0 + 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r3) - temp_r3);
    if ((get_game_play_mode(temp_r3) == 1) && ((s32) *(u32 *)((s8 *)arg0 + 0x8C) == 0)) {
        ((s32 (*)(void *))queue_destruction__7TObjectFv)(arg0);
        return arg0;
    }
    *(s32 *)((s8 *)arg0 + 0xCC) = register_warp__16TObjMapForceWarpFPv(0);
    *(s32 *)((s8 *)arg0 + 0xD0) = register_warp__16TObjMapForceWarpFPv(1);
    *(s32 *)((s8 *)arg0 + 0xD4) = register_area_warp_object__16TAdStorySelectGCFPv(0);
    *(s32 *)((s8 *)arg0 + 0xD8) = TAdStorySelectGC::get_story_select();
    if (TRaderMapCore::is_not_split_screen() == 1) {
        temp_r3_2 = ((TAdSinglePlyChrSelectGC *)0x88)->alloc();
        var_r0 = temp_r3_2;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFf(temp_r3_2, arg0 + 0x38, lbl_805DBFD8);
        }
        *(s32 *)((s8 *)arg0 + 0xC0) = var_r0;
    } else {
        *(s32 *)((s8 *)arg0 + 0xC0) = 0;
    }
    return arg0;
}

void TObjAreaWarp::debug_print_area_num() {
    Obj_8019C924 *self = (Obj_8019C924 *)this;
    self->saved_id = self->id;
    TObjNpcEnemy::set_global_count(0xFF00FF);
    debug_printf_at(0x130020, lbl_8044641C, self->saved_id);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
}

void handle_6x94_inter_level_warp(Pkt_8019C988 *arg0) {
    bswap_6x94_inter_level_warp(arg0);
    if (arg0->f4 != get_current_floor()) {
        set_area__6TLobbyFl(((u8 *)&lbl_80515BA0), arg0->f4, get_floor_map_terrain(arg0->f4));
        mark_area_change_pending();
        ((TWindowCtrl *)local_client_id)->suppress_slot();
        get_dest_area__17TObjAreaWarpQuestFv(((u8 *)&lbl_80515BA0));
        send_inter_level_warp_all__10TNpcPlayerFl();
        void *p = get_player_by_client_id(local_client_id);
        if (p != 0) {
            send_6x21_inter_level_warp(p, (s32)(get_dest_area__17TObjAreaWarpQuestFv(((u8 *)&lbl_80515BA0))));
        }
    }
}

void confirm_area_transfer__12TObjAreaWarpFPvi(u8 *arg0, s32 arg1) {
    ((s32 (*)(void *, int, int))set_area__6TLobbyFl)(&lbl_80515BA0.value, (int) (*(s32 *)((s8 *)arg0 + 0xBC)), (int) (get_floor_map_terrain(*(s32 *)((s8 *)arg0 + 0xBC))));
    ((s32 (*)(void))mark_area_change_pending)();
    ((s32 (*)(void *))get_dest_area__17TObjAreaWarpQuestFv)(&lbl_80515BA0.value);
    ((s32 (*)(void))send_inter_level_warp_all__10TNpcPlayerFl)();
    send_6x21_inter_level_warp((void *)arg1, (((s32 (*)(void *))get_dest_area__17TObjAreaWarpQuestFv)(&lbl_80515BA0.value)));
    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x40003205, 0U, 0, 0);
}

void TObjAreaWarp::handle_area_selection() {
    Data_8019CAB0 *d = (Data_8019CAB0 *)this;
    s32 found;
    s32 i;
    void *t;
    if (((VObj_8019CAB0 *)this)->m14() == 0) {
        if (d->fB0 != NULL) {
            TWindow__close(d->fB0);
            d->fB0 = NULL;
        }
    } else {
        if (d->fB0 != NULL) {
            ((TQuestVmDownLoadServer *)(d->fB0))->clear_flag4_bit4();
            allow_rendering__7TObjectFv((TObject *)d->fB0);
        }
        if (is_split_screen() != 0) {
            found = 0;
            if (d->fC0 != NULL) {
                ((TAdVIConfigGC *)(d->fC0))->update_visibility();
                if (((TAdVIConfigGC *)(d->fC0))->get_field_14() == 0) {
                    this->vfunc_14();
                    return;
                }
            }
            for (i = 0; i < 4; i++) {
                t = find_warp_player_in_range(((VObj_8019CAB0 *)this), i, d->fAC);
                if (t != NULL) {
                    found = 1;
                    if (d->fC0 != NULL) {
                        ((VObj_8019CAB0 *)this)->m13(find_active_player__12TObjAreaWarpFv(d->fC0));
                    } else {
                        ((VObj_8019CAB0 *)this)->m13(obj_getField1c(t));
                    }
                    if (((VObj_8019CAB0 *)this)->m16(i) != 0) {
                        this->vfunc_14();
                        this->confirm_area_transfer((s32)t);
                    }
                }
            }
            if (found == 0) {
                this->vfunc_14();
            }
        } else {
            void *t2 = find_warp_player_in_range(((VObj_8019CAB0 *)this), local_client_id, d->fAC);
            if (t2 != NULL) {
                ((VObj_8019CAB0 *)this)->m13(local_client_id);
                if (((VObj_8019CAB0 *)this)->m16(((TRaderMapCore *)t2)->get_map_id()) != 0) {
                    this->vfunc_14();
                    this->confirm_area_transfer((s32)t2);
                }
            } else {
                this->vfunc_14();
            }
        }
    }
}

s32 TObjAreaWarp::is_warp_enabled(s32 arg0) {
    s32 var_r31;

    if (TRaderMapCore::is_not_split_screen() == 1) {
        var_r31 = 0;
loop_2:
        if ((((u32 (*)(s32))get_player_by_client_id)(var_r31) != 0U) && (check_flag_100__10TObjPlayerFPv() != 0)) {
            return 0;
        }
        var_r31 += 1;
        if (var_r31 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return vfunc_16__12TObjWarpBaseFv(arg0);
}

void TObjAreaWarp::open_confirm_window(u16 arg1) {
    u32 temp_r3;

    if ((u32) *(u32 *)((s8 *)this + 0xB0) == 0U) {
        *(u32 *)((s8 *)this + 0xB0) = ((u32 (*)(s32, s32, u16))create_window_menu)(get_window_layout_position(0x33), 1, arg1);
        if (((s32 (*)(void))get_game_play_mode)() == 1) {
            ((TWindowSubTradeMain *)(*(u32 *)((s8 *)this + 0xB0)))->add_text_entry(TObjCityMainWarp__sub_80186AF4(), 2, 0, -1);
        } else {
            TLobby::get_player_floor(*(s32 *)((s8 *)this + 0xBC));
            ((TWindowSubTradeMain *)(*(u32 *)((s8 *)this + 0xB0)))->add_text_entry(get_floor_destination_name(), 2, 0, -1);
        }
        ((TWindowSubComCard *)(*(u32 *)((s8 *)this + 0xB0)))->calc_window_size();
        align_menu_entry_positions(*(u32 *)((s8 *)this + 0xB0));
        ((TWindowSubComCardList *)(*(u32 *)((s8 *)this + 0xB0)))->set_flag70_bit10();
        ((TAdChrSelASlotGC *)(*(u32 *)((s8 *)this + 0xB0)))->set_flag_40();
        *(u16 *)((s8 *)this + 0xB8) = arg1;
        temp_r3 = ((u32 (*)(s32))get_player_by_client_id)((s32)(*(u16 *)((s8 *)this + 0xB8)));
        if (temp_r3 != 0U) {
            mask_action_buttons((void *)(temp_r3 + 0x550), 4);
        }
    }
}

u8 *__dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8019CE40___vt__12TObjAreaWarp *)&__vt__12TObjAreaWarp).value;
        temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0xC0));
        if (temp_r3 != NULL) {
            destroy__13TAdVIConfigGCFPvs(temp_r3, 1);
            *(u8 **)((s8 *)arg0 + 0xC0) = NULL;
        }
        ((TObjAreaWarp *)(arg0))->vfunc_14();
        __dt__12TObjWarpBaseFv(arg0, 0);
        if (arg1 > 0) {
            ((s32 (*)(void *))__dl__7TObjectFPv)(arg0);
        }
    }
    return arg0;
}

void *TObjAreaWarp__ct(void *arg0) {
    TObjWarpBase__ct();
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjAreaWarp;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjAreaWarp__name;
    *(s32 *)((s8 *)arg0 + 0xBC) = (s32) *(s32 *)((s8 *)arg0 + 0x84);
    if ((s32) lobby_quest_progress_flag != 0) {
        *(s32 *)((s8 *)arg0 + 0xBC) = (s32) (get_current_floor() + 1);
    }
    *(s32 *)((s8 *)arg0 + 0xC0) = 0;
    return arg0;
}

void TObjMapWarpForest::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj8019CF38_8019CCF0 *) arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        TObjFish::set_global_param(*(s32 *)&this->textures);
        ((s32 (*)(void))push_matrix)();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, this->rotation_y);
        draw_ginja_object(this->baseModel);
        TParticleCtrl::begin_effect_render();
        ((s32 (*)(s32, s32, f32))draw_ginja_model_with_motion)(*(s32 *)&this->beamModel, *(s32 *)&this->motion, this->frame);
        TParticleCtrl::end_effect_render();
        pop_matrix();
    }
}

void TObjMapWarpForest::run_task() {
    this->frame+=lbl_805DBFDC;
    if((f32)(u32)(this->motion->frameCount-1)<this->frame)this->frame=lbl_805DBFE4;
    process_player_warps();
}

u8 *TObjMapWarpForest__ct(u8 *arg0) {
    ((s32 (*)(void *))TObjMapWarp__ct)(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__17TObjMapWarpForest.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjMapWarpForest__name;
    *(s32 *)((s8 *)arg0 + 0x100) = register_warp__16TObjMapForceWarpFPv(4);
    *(s32 *)((s8 *)arg0 + 0x104) = register_warp__16TObjMapForceWarpFPv(5);
    *(s32 *)((s8 *)arg0 + 0x108) = register_area_warp_object__16TAdStorySelectGCFPv(2);
    *(s32 *)((s8 *)arg0 + 0x10C) = TAdStorySelectGC::get_story_select();
    *(f32 *)((s8 *)arg0 + 0xFC) = (f32) lbl_805DBFE4;
    return arg0;
}

void TObjMapWarp::draw_debug_destinations() {
    u8 *arg0 = (u8 *)this;
    Warp_8019D0A8 *self = (Warp_8019D0A8 *)arg0;
    Vec_8019D0A8 *end;
    s32 i;
    TObjNpcEnemy::set_global_count(0xFF00FF);
    ((s32 (*)(s32, const char *, ...))debug_printf_at)(0x13001C, lbl_80446430);
    ((s32 (*)(s32, const char *, ...))debug_printf_at)(0x13001D, lbl_80446440);
    ((s32 (*)(s32, const char *, ...))debug_printf_at)(0x13001E, lbl_80446450);
    ((s32 (*)(s32, const char *, ...))debug_printf_at)(0x130020, lbl_80446460);
    TObjNpcEnemy::set_global_count(0xF0F0F0FF);
    for (i = 0; i < 4; i++) {
        Vec_8019D0A8 b;
        Vec_8019D0A8 a = lbl_804462FC;
        push_matrix_from(identity_matrix);
        post_translate_matrix(&self->pos);
        rotate_matrix_y(0, self->yaw);
        end = &self->ends[i];
        matrix_mult_vec(0, &map_warp_destination_offsets[i], end);
        pop_matrix();
        push_matrix_from(identity_matrix);
        post_translate_matrix(end);
        rotate_matrix_y(0, self->yaw2);
        matrix_mult_vec(0, &a, &a);
        pop_matrix();
        VecCopy((Vec *)&b, (const Vec *)end);
        b.y += lbl_805DBFF8;
        a.y += lbl_805DBFF8;
        TObjMapWarp__sub_80141CB0(&b, &a, 0xFFFF0000, 0xFFFF0000);
        TObjMapWarp__sub_80141CB4(end, lbl_805DBFFC);
    }
}

void TObjMapWarp::process_player_warps() {
    Data_8019D250 *d = (Data_8019D250 *)((VObj_8019D250 *)this);
    s32 i;
    void *t;
    s32 j;
    if (TRaderMapCore::is_not_split_screen() == 1) {
        for (i = 0; i < 4; i++) {
            if (can_warp__11TObjMapWarpFlUs(((VObj_8019D250 *)this), i) == 0) {
                if (d->win[i] != NULL) {
                    TWindow__close(d->win[i]);
                    d->win[i] = NULL;
                }
            } else {
                if (d->win[i] != NULL) {
                    ((TQuestVmDownLoadServer *)(d->win[i]))->clear_flag4_bit4();
                    allow_rendering__7TObjectFv((TObject *)d->win[i]);
                }
                t = find_warp_player_in_range(((VObj_8019D250 *)this), i, d->fAC);
                if (t != NULL) {
                    ((VObj_8019D250 *)this)->m13(obj_getField1c(t));
                    if (((TObjPlayer *)t)->is_target_valid() != 0 && ((VObj_8019D250 *)this)->m16(((TRaderMapCore *)t)->get_map_id()) != 0) {
                        for (j = 0; j < 4; j++) {
                            if (test_player_body_overlap_at(((VObj_8019D250 *)this), t, &d->ends[j]) == 0) {
                                send_6x55_intra_map_warp(obj_getField1c(t), &d->ends[j], d->f84);
                            }
                        }
                    }
                } else {
                    this->closePlayerWindow(i);
                }
            }
        }
        return;
    }
    if (((VObj_8019D250 *)this)->m14() == 0) {
        if (d->fB0 != NULL) {
            TWindow__close(d->fB0);
            d->fB0 = NULL;
        }
    } else {
        void *t2;
        s32 j2;
        if (d->fB0 != NULL) {
            ((TQuestVmDownLoadServer *)(d->fB0))->clear_flag4_bit4();
            allow_rendering__7TObjectFv((TObject *)d->fB0);
        }
        t2 = find_warp_player_in_range(((VObj_8019D250 *)this), local_client_id, d->fAC);
        if (t2 != NULL) {
            ((VObj_8019D250 *)this)->m13(local_client_id);
            if (((TObjPlayer *)t2)->is_target_valid() != 0 && ((VObj_8019D250 *)this)->m16(((TRaderMapCore *)t2)->get_map_id()) != 0) {
                for (j2 = 0; j2 < 4; j2++) {
                    if (test_player_body_overlap_at(((VObj_8019D250 *)this), t2, &d->ends[j2]) == 0) {
                        send_6x55_intra_map_warp(obj_getField1c(t2), &d->ends[j2], d->f84);
                    }
                }
            }
        } else {
            this->vfunc_14();
        }
    }
}
}
