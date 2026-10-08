#include "types.h"
#include "pso/TObjWarpString.h"
#include "pso/object/TObjMapWarpForest.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

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
    M2C_UNK value;
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

struct RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest { M2C_UNK value; u8 remaining[0x50]; };

typedef char RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest_size[sizeof(RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding { M2C_UNK value; u8 remaining[0x50]; };

typedef char RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding_size[sizeof(RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest { M2C_UNK value; u8 remaining[0x50]; };

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

struct RecoveredGlobal_8019D030___vt__17TObjMapWarpForest { M2C_UNK value; u8 remaining[0x50]; };

typedef char RecoveredGlobal_8019D030___vt__17TObjMapWarpForest_size[sizeof(RecoveredGlobal_8019D030___vt__17TObjMapWarpForest) == 0x54 ? 1 : -1];

struct RecoveredGlobal_8019CA24_lbl_80515BA0 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct VBase_18_26c409 { char pad[0x18]; };

struct VObj_18_26c409 : VBase_18_26c409 {
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
    virtual M2C_UNK m12();
};

struct RecoveredGlobal_8019CE40___vt__12TObjAreaWarp {
    M2C_UNK value;
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

s32 get_main_phase();
void mark_area_change_pending();
M2C_UNK TKeyBoardControl__sub_8000F9CC(M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState3_324(void *);
u16 obj_getField1c(void *);
s32 is_split_screen();
s32 get_current_floor();
void queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag_4__9TObjLukerFPv(u32);
void allow_rendering__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
s32 TCameraCtrl__sub_800688D0(void *);
s32 get_camera_id__11TCameraCtrlFv();
u32 TLobby__sub_80070AD8(s32 arg0);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(u32, s32, M2C_UNK *);
s32 get_floor_destination_name();
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK TObjMapWarp__sub_80141CB0(void *, void *, u32, u32);
M2C_UNK TObjMapWarp__sub_80141CB4(void *, f32);
s32 get_action_flags__10TNpcPlayerFPv(void *);
s32 test_player_body_overlap_at(void *, void *, Vec_8019D250 *);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);
s32 TObjCityMainWarp__sub_80186AF4();
void * TObjAreaWarpEndingJung__create(void *arg0);
void TObjAreaWarpEndingJung__vt18(Warp_8019B170 *arg0);
void render__22TObjAreaWarpEndingJungFv(u8 *arg0);
void run_task__22TObjAreaWarpEndingJungFv(void *arg0);
void * __dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1);
void * TObjAreaWarpEndingJung__ct(void *arg0);
void * create_TObjWarpString(void *arg0, void *arg1);
s64 fn_8019B480(void *arg0, void *arg1);
void TObjWarpString__sub_8019B6E4(u8 *arg0);
void TObjWarpString__sub_8019B728(void *arg0);
void TObjWarpString__sub_8019B744(u8 *arg0);
void TObjWarpString__sub_8019B77C(void *arg0);
void run_task__14TObjWarpStringFv(void *arg0);
u8 * __ct__14TObjWarpStringFv(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3);
void fn_8019B8D8(Obj_8019B8D8 *self, void *arg);
s32 TObjMapForceWarp__vt16(void *arg0, u16 arg1);
void TObjMapForceWarp__vt17(Obj_8019B978 *arg0);
void render__16TObjMapForceWarpFv(void);
int run_task__16TObjMapForceWarpFv(void* p);
void * __dt__16TObjMapForceWarpFv(void *arg0, s16 arg1);
void * TObjMapForceWarp__ct(void *arg0);
void dispatch_select_phase__16TKeyBoardControlFv(void);
void create_and_init__18TObjAreaWarpEndingFv(void);
void open_confirm_window__18TObjAreaWarpEndingFPvs(void *arg0, s16 arg1);
void TObjAreaWarpEnding__vt18(Obj_8019BCBC *self);
void render__18TObjAreaWarpEndingFv(Obj_8019BD84 *self);
void run_task__18TObjAreaWarpEndingFv(u8 *arg0);
void * __dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1);
u8 * TObjAreaWarpEnding__ct(u8 *arg0, s32 arg1, s32 arg2);
void TObjAreaWarpQuest__vt17(Warp_8019C05C *arg0, void *arg1);
void TObjAreaWarpQuest__vt18(Obj_8019C144 *self);
void render__17TObjAreaWarpQuestFv(Obj_8019C250 *self);
void run_task__17TObjAreaWarpQuestFv(u8 *arg0);
void * __dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1);
u8 * TObjAreaWarpQuest__ct(u8 *arg0, s32 arg1, s32 arg2);
void TObjAreaWarpForest__vt18(Obj_8019C53C *self);
void render__18TObjAreaWarpForestFv(Obj_8019C604 *self);
int TObjAreaWarpForest__vt17(void* p);
void run_task__18TObjAreaWarpForestFv(u8 *arg0);
void * __dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1);
u8 * TObjAreaWarpForest__ct(u8 *arg0, s32 arg1, s32 arg2);
void debug_print_area_num__12TObjAreaWarpFPv(Obj_8019C924 *self);
void handle_6x94_inter_level_warp(Pkt_8019C988 *arg0);
void confirm_area_transfer__12TObjAreaWarpFPvi(u8 *arg0, s32 arg1);
void handle_area_selection__12TObjAreaWarpFPv(VObj_8019CAB0 *self);
s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0);
void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1);
u8 * __dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1);
void * TObjAreaWarp__ct(void *arg0);
void render__17TObjMapWarpForestFv(u8 *arg0);
u8 * TObjMapWarpForest__ct(u8 *arg0);
void draw_debug_destinations__11TObjMapWarpFPv(u8 *arg0);
void process_player_warps__11TObjMapWarpFPv(VObj_8019D250 *self);
s32 can_warp__11TObjMapWarpFiUs(void *, u16);
void __dt__11TObjMapWarpFv(void *, int);
M2C_UNK TObjMapWarp__ct();
s32 TObjWarpBase__vt13(s32);
void * find_warp_player_in_range(void *, u16, f32);
u8 * TObjWarpBase__vt0(void *, s16);
M2C_UNK TObjWarpBase__ct();
s32 TAdStorySelectGC__sub_8019DC14();
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
void * get_dest_area__17TObjAreaWarpQuestFPv(void *);
void TObjAreaWarpQuest__sub_8019DCD8(void *, s32);
void bswap_6x94_inter_level_warp(void *);
M2C_UNK mask_action_buttons(s32, M2C_UNK);
f32 get_static_field4_as_float__12TObjWarpJungFv(f32);
M2C_UNK set_global_render_param__12TObjWarpJungFv();
M2C_UNK render_warp_effect__12TObjWarpJungFii(M2C_UNK, s32);
M2C_UNK render_warp__12TObjWarpJungFPv(M2C_UNK);
M2C_UNK TObjWarpJung__sub_801A0404(M2C_UNK);
s32 update_warp_display__12TObjWarpJungFv();
s32 get_map_id__13TRaderMapCoreFPv(void *);
s32 is_target_valid__10TObjPlayerFPv(void *);
s32 check_flag_100__10TObjPlayerFPv();
void * get_player_by_client_id(s32);
void send_6x21_inter_level_warp(void *, void *);
void send_6x55_intra_map_warp(u16, Vec_8019D250 *, s32);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(M2C_UNK);
M2C_UNK init__23TAdSinglePlyChrSelectGCFv();
M2C_UNK get_player_floor__6TLobbyFi(s32);
s32 get_floor_map_terrain(s32);
s32 fn_80219EE8();
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void set_area__6TLobbyFPvi(void *, int, int);
void __dl__7TObjectFPv(void *);
void * __nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *, void *);
void free_children__12TObjDoorJungFPvPv(void *, int);
void TWindow__close(void *);
void suppress_slot__11TWindowCtrlFi(s32);
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK calc_window_size__17TWindowSubComCardFPv(u32);
M2C_UNK add_text_entry__19TWindowSubTradeMainFPviiii(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
u32 create_window_menu(M2C_UNK, s32, s16);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 find_active_player__12TObjAreaWarpFPv(void *);
s32 get_field_14__13TAdVIConfigGCFPv(void *);
M2C_UNK update_visibility__13TAdVIConfigGCFPv(void *);
u8 * destroy__13TAdVIConfigGCFPvs(void *, s16);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 get_game_play_mode(int);
s32 is_not_split_screen__13TRaderMapCoreFv();
void send_inter_level_warp_all__10TNpcPlayerFi();
M2C_UNK PPCSync();
int sprintf(char *, const char *, ...);
void strncpy(s32, s32, s32);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
M2C_UNK matrix_mult_vec(int, void *, void *);
void rotate_matrix_zyx(int, s32, s32, s32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
void rotate_matrix_x(int, s32);
M2C_UNK push_matrix_from(void *);
void push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_object(s32);
void draw_ginja_model(void *);
void draw_ginja_model_with_motion(s32, s32, f32);

extern M2C_UNK __vt__12TObjAreaWarp[];
extern RecoveredGlobal_8019B854___vt__14TObjWarpString __vt__14TObjWarpString;
extern M2C_UNK __vt__16TObjMapForceWarp[];
extern M2C_UNK __vt__17TObjAreaWarpQuest[];
extern RecoveredGlobal_8019D030___vt__17TObjMapWarpForest __vt__17TObjMapWarpForest;
extern M2C_UNK __vt__18TObjAreaWarpEnding[];
extern M2C_UNK __vt__18TObjAreaWarpForest[];
extern M2C_UNK __vt__22TObjAreaWarpEndingJung[];
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
extern Vec_8019D0A8 lbl_804B910C[];
extern s64 lbl_804B913C[];
extern RecoveredGlobal_8019CA24_lbl_80515BA0 lbl_80515BA0;
extern u8 lbl_8058D490[];
extern s32 lbl_805D3464;
extern s32 lbl_805D3468;
extern s32 lbl_805D346C;
extern s32 lbl_805D3470;
extern s32 lbl_805D3474;
extern s32 lbl_805D3478;
extern s32 lbl_805D347C;
extern s32 lbl_805D3480;
extern s32 lbl_805D53A0;
extern s32 lbl_805D5C80;
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

void TObjAreaWarpEndingJung__vt18(Warp_8019B170 *arg0) {
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (arg0->f8C < 0) {
        arg0->f8C = 0;
    }
    arg0->f8C = arg0->f8C % 2;
    if (arg0->f8C == 0) {
        set_global_count__12TObjNpcEnemyFi(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463A4);
    } else {
        set_global_count__12TObjNpcEnemyFi(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463B4);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__22TObjAreaWarpEndingJungFv(u8 *arg0) {
    s32 temp_r0;

    if (((VObj_8019B124*)arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        if (update_warp_display__12TObjWarpJungFv() != 0) {
            PPCSync();
        }
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
        switch (temp_r0) {
        case 0:
            TObjWarpJung__sub_801A0404(0);
            break;
        case 1:
            TObjWarpJung__sub_801A0404(1);
            break;
        }
        set_global_render_param__12TObjWarpJungFv();
        ((M2C_UNK (*)(void))push_matrix)();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        render_warp__12TObjWarpJungFPv(0);
        ((M2C_UNK (*)(void))begin_effect_render__13TParticleCtrlFv)();
        render_warp_effect__12TObjWarpJungFii(1, (s32) M2C_FIELD(arg0, f32 *, 0xC4));
        ((M2C_UNK (*)(void))end_effect_render__13TParticleCtrlFv)();
        pop_matrix();
    }
}

void run_task__22TObjAreaWarpEndingJungFv(void *arg0) {
    f32 temp_f1;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0xC4);
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (temp_f1 + lbl_805DBFDC);
    if (M2C_FIELD(arg0, f32 *, 0xC4) > (get_static_field4_as_float__12TObjWarpJungFv(temp_f1) - lbl_805DBFE0)) {
        M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    }
    ((M2C_UNK (*)(void *))handle_area_selection__12TObjAreaWarpFPv)(arg0);
}

void *__dt__22TObjAreaWarpEndingJungFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjAreaWarpEndingJung;
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

    ((M2C_UNK (*)(void))TObjAreaWarpEnding__ct)();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjAreaWarpEndingJung;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3480;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) < 0) {
        M2C_FIELD(arg0, s32 *, 0x8C) = 0;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x8C);
    temp_r4 = (u32) temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, s32 *, 0x8C) = (s32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    return arg0;
}

void * create_TObjWarpString(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x50);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *, void *))__ct__14TObjWarpStringFv)(o, tl_clipout, arg0, arg1);
    }
    return o;
}

s64 fn_8019B480(void *arg0, void *arg1) {
    s64 *p = lbl_804B913C;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        switch (get_camera_id__11TCameraCtrlFv()) {
        case 2:
            p = lbl_804B913C + 1;
            break;
        case 3:
            p = lbl_804B913C + 3;
            break;
        case 4:
            p = lbl_804B913C + 6;
            break;
        }
        p += TCameraCtrl__sub_800688D0(arg1);
    }
    return *p;
}

void TObjWarpString__sub_8019B6E4(u8 *arg0) {
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

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x40) - 1;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 3;
    }
}

#pragma push
#pragma opt_common_subs off
void TObjWarpString__sub_8019B744(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) + lbl_805DBFEC);
    if (M2C_FIELD(arg0, f32 *, 0x44) > lbl_805DBFF0) {
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DBFF0;
        M2C_FIELD(arg0, s32 *, 0x4C) = 2;
        M2C_FIELD(arg0, s32 *, 0x40) = 0x5A;
    }
}
#pragma pop

void TObjWarpString__sub_8019B77C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x40) - 1;
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x4C) = 1;
    }
}

void run_task__14TObjWarpStringFv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    switch (temp_r0) {
    case 0:
        ((M2C_UNK (*)(void))TObjWarpString__sub_8019B77C)();
        return;
    case 1:
        ((M2C_UNK (*)(void))TObjWarpString__sub_8019B744)();
        return;
    case 2:
        ((M2C_UNK (*)(void))TObjWarpString__sub_8019B728)();
        return;
    case 3:
        ((M2C_UNK (*)(void))TObjWarpString__sub_8019B6E4)();
        return;
    }
}

TObjWarpString::~TObjWarpString() {}

u8 *__ct__14TObjWarpStringFv(u8 *arg0, u8 *arg1, s32 arg2, s16 arg3) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TObjWarpString.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D347C;
    strncpy((s32) (arg0 + 0x1C), arg2, 0x20);
    M2C_FIELD(arg0, s8 *, 0x3B) = 0;
    M2C_FIELD(arg0, s16 *, 0x48) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3C) = -1;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0x40) = 0x18;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}

void fn_8019B8D8(Obj_8019B8D8 *self, void *arg) {
    char buf[32];
    char *p;
    sprintf(buf, lbl_805DBFF4, self->id);
    for (p = buf; *p != 0; p++) {
        *p = TLobby__sub_80070AD8(*p);
    }
    create_TObjWarpString(buf, arg);
}

s32 TObjMapForceWarp__vt16(void *arg0, u16 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xFC) != 0) {
        ((M2C_UNK (*)(void *, int))fn_8019B8D8)(arg0, arg1);
    }
    return 1;
}

void TObjMapForceWarp__vt17(Obj_8019B978 *arg0) {
    ((M2C_UNK (*)(Obj_8019B978 *))draw_debug_destinations__11TObjMapWarpFPv)(arg0);
    if (arg0->f8c > 0) {
        arg0->ffc = 0;
    } else {
        arg0->ffc = 1;
    }
    ((M2C_UNK (*)(M2C_UNK))set_global_count__12TObjNpcEnemyFi)(0xFF00FF);
    debug_printf_at(0x130021, lbl_804463D0);
    if (arg0->ffc != 0) {
        debug_printf_at(0x130022, lbl_804463E0);
    } else {
        debug_printf_at(0x130022, lbl_804463F0);
    }
    ((M2C_UNK (*)(M2C_UNK))set_global_count__12TObjNpcEnemyFi)(0xF0F0F0FF);
}

void render__16TObjMapForceWarpFv(void) {  }

int run_task__16TObjMapForceWarpFv(void* p) { return ((int (*)(void*))process_player_warps__11TObjMapWarpFPv)(p); }

void *__dt__16TObjMapForceWarpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjMapForceWarp;
        __dt__11TObjMapWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void *TObjMapForceWarp__ct(void *arg0) {
    TObjMapWarp__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjMapForceWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3478;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8C) > 0) {
        M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xFC) = 1;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0U) {
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, void **, 0xB4));
        set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, u32 *, 0xB4));
    }
    return arg0;
}

void dispatch_select_phase__16TKeyBoardControlFv(void) {
    s32 temp_r3;

    temp_r3 = TAdStorySelectGC__sub_8019DC14();
    switch (temp_r3) {
    case 0:
        if (fn_80219EE8() != 0) {
            dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x3FE);
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

void create_and_init__18TObjAreaWarpEndingFv(void) {
    play_sound_effect(0x40003205, 0, 0, 0);
    u32 obj = ((u32 (*)(M2C_UNK))__nw__7TObjectFUl)(0x28);
    if (obj != 0U) {
        init__22THunterGuildSeqOfflineFPvPvPv(obj, tl_00, (M2C_UNK *)dispatch_select_phase__16TKeyBoardControlFv);
    }
}

void open_confirm_window__18TObjAreaWarpEndingFPvs(void *arg0, s16 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = create_window_menu(get_window_layout_position(0x33), 1, arg1);
        if (get_main_phase() == 0xE) {
            add_text_entry__19TWindowSubTradeMainFPviiii(M2C_FIELD(arg0, u32 *, 0xB0), get_localized_text_entry(9, 0x26), 3, 0, -1);
        } else {
            add_text_entry__19TWindowSubTradeMainFPviiii(M2C_FIELD(arg0, u32 *, 0xB0), get_localized_text_entry(9, 0x23), 2, 0, -1);
        }
        calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    }
}

void TObjAreaWarpEnding__vt18(Obj_8019BCBC *self) {
    debug_print_area_num__12TObjAreaWarpFPv((Obj_8019C924 *)self);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (self->f8C < 0) {
        self->f8C = 0;
    }
    self->f8C = self->f8C % 2;
    if (self->f8C == 0) {
        set_global_count__12TObjNpcEnemyFi(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463B4);
    } else {
        set_global_count__12TObjNpcEnemyFi(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463A4);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__18TObjAreaWarpEndingFv(Obj_8019BD84 *self) {
    Warp_8019BD84 *arg0 = (Warp_8019BD84 *)self;
    Node_8019BD84 *root;
    Node_8019BD84 *node;
    if (self->is_visible(lbl_805DBFD4, lbl_805DBFD8) == 0) {
        return;
    }
    Ids_8019BD84 ids = lbl_805DBFD0;
    for (node = arg0->fD0->child; node != 0; node = node->child) {
        if (node->model != 0) {
            free_children__12TObjDoorJungFPvPv(node->model, ids.id[arg0->f8C]);
        }
    }
    root = arg0->fCC;
    set_global_param__8TObjFishFi(arg0->fD8);
    push_matrix();
    ((void (*)(void *))post_translate_matrix)(arg0->pos);
    ((void (*)(int, int))rotate_matrix_y)(0, arg0->f60);
    push_matrix();
    ((void (*)(void *))post_translate_matrix)(root->pos);
    draw_ginja_model(root->model);
    begin_effect_render__13TParticleCtrlFv();
    for (root = root->child; root != 0; root = root->sibling) {
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(root->pos);
        rotate_matrix_zyx(0, root->ang[0], root->ang[1], root->ang[2]);
        rotate_matrix_x(0, arg0->fC8);
        draw_ginja_model(root->model);
        ((void (*)(void))pop_matrix)();
    }
    end_effect_render__13TParticleCtrlFv();
    ((void (*)(void))pop_matrix)();
    begin_effect_render__13TParticleCtrlFv();
    draw_ginja_model_with_motion((s32)arg0->fD0, arg0->fD4, arg0->fC4);
    end_effect_render__13TParticleCtrlFv();
    ((void (*)(void))pop_matrix)();
}

void run_task__18TObjAreaWarpEndingFv(u8 *arg0) {
  unsigned int new_var;
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DBFDC);
  new_var = *((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)))) + 4));
  if (((f32) (new_var - 1)) < (*((f32 *) (((s8 *) arg0) + 0xC4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xC8))) + 0x150);
  ((void (*)(void *))handle_area_selection__12TObjAreaWarpFPv)(arg0);
}

void *__dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpEnding;
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
    ((s32 (*)(void *, void *, void *))TObjAreaWarp__ct)((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019BF88___vt__18TObjAreaWarpEnding *)&__vt__18TObjAreaWarpEnding).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3474;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r4 = temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, u32 *, 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    M2C_FIELD(arg0, s32 *, 0xCC) = register_warp__16TObjMapForceWarpFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD0) = register_warp__16TObjMapForceWarpFPv((int) (1));
    M2C_FIELD(arg0, s32 *, 0xD4) = register_area_warp_object__16TAdStorySelectGCFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD8) = get_story_select__16TAdStorySelectGCFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x88));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFPvf((int) (temp_r3), (void *) (arg0 + 0x38), (f32) (lbl_805DBFD8));
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    return arg0;
}

void TObjAreaWarpQuest__vt17(Warp_8019C05C *arg0, void *arg1) {
    s32 i;
    void *p;
    set_area__6TLobbyFPvi(((u8 *)&lbl_80515BA0), arg0->fBC, get_floor_map_terrain(arg0->fBC));
    mark_area_change_pending();
    if (arg1 != 0 && arg0->fC4 > 1) {
        TObjAreaWarpQuest__sub_8019DCD8(arg1, arg0->fC4);
    }
    if (arg0->fC4 > 1) {
        for (i = 0; i < 4; i++) {
            p = get_player_by_client_id(i);
            if (p != 0 && obj_isState3_324(p) != 0 && (u16)get_action_flags__10TNpcPlayerFPv(p) != 0xFFFF) {
                TObjAreaWarpQuest__sub_8019DCD8(p, arg0->fC4);
            }
        }
    }
    get_dest_area__17TObjAreaWarpQuestFPv(((u8 *)&lbl_80515BA0));
    send_inter_level_warp_all__10TNpcPlayerFi();
    send_6x21_inter_level_warp(arg1, get_dest_area__17TObjAreaWarpQuestFPv(((u8 *)&lbl_80515BA0)));
}

void TObjAreaWarpQuest__vt18(Obj_8019C144 *self) {
    debug_print_area_num__12TObjAreaWarpFPv((Obj_8019C924 *)self);
    if (self->f68 < 0.0f) {
        self->f68 = 0.0f;
    }
    self->fC4 = (s32)self->f68;
    if (self->f8C < 0) {
        self->f8C = 0;
    }
    self->f8C = self->f8C % 2;
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x13001C, lbl_80446404, self->fC4);
    if (self->f8C == 0) {
        set_global_count__12TObjNpcEnemyFi(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463B4);
    } else {
        set_global_count__12TObjNpcEnemyFi(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463A4);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__17TObjAreaWarpQuestFv(Obj_8019C250 *self) {
    Node_8019C250 *m;
    Node_8019C250 *n;
    if (((VObj_8019C250 *)self)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        Colors_8019C250 cols = lbl_805DBFCC;
        n = self->fD4->next2C;
        while (n != NULL) {
            if (n->f4 != 0) {
                free_children__12TObjDoorJungFPvPv((void *)(n->f4), (int)(cols.c[self->f8C]));
            }
            n = n->next2C;
        }
        m = self->fD0;
        set_global_param__8TObjFishFi((int)(self->fDC));
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(self->f38);
        ((void (*)(int, int))rotate_matrix_y)((int)(0), (int)(self->f60));
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(m->f8);
        draw_ginja_model(m->f4);
        begin_effect_render__13TParticleCtrlFv();
        m = m->next2C;
        while (m != NULL) {
            push_matrix();
            ((void (*)(void *))post_translate_matrix)(m->f8);
            rotate_matrix_zyx((int)(0), (s32)(m->f14), (s32)(m->f18), (s32)(m->f1C));
            rotate_matrix_x((int)(0), (s32)(self->fCC));
            draw_ginja_model(m->f4);
            ((void (*)(void))pop_matrix)();
            m = m->next30;
        }
        end_effect_render__13TParticleCtrlFv();
        ((void (*)(void))pop_matrix)();
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion((s32)(self->fD4), (s32)(self->fD8), self->fC8);
        end_effect_render__13TParticleCtrlFv();
        ((void (*)(void))pop_matrix)();
    }
}

void run_task__17TObjAreaWarpQuestFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC8))) + lbl_805DBFDC);
  if (((f32) ((unsigned long) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD8)))) + 4))) - 1))) < (*((f32 *) (((s8 *) arg0) + 0xC8))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xCC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xCC))) + 0x150);
  ((void (*)(void *))handle_area_selection__12TObjAreaWarpFPv)(arg0);
}

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjAreaWarpQuest;
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
    ((s32 (*)(void *, void *, void *))TObjAreaWarp__ct)((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019C454___vt__17TObjAreaWarpQuest *)&__vt__17TObjAreaWarpQuest).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3470;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r4 = temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, u32 *, 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r4) - temp_r4);
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) M2C_FIELD(arg0, f32 *, 0x68);
    M2C_FIELD(arg0, s32 *, 0xD0) = register_warp__16TObjMapForceWarpFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD4) = register_warp__16TObjMapForceWarpFPv((int) (1));
    M2C_FIELD(arg0, s32 *, 0xD8) = register_area_warp_object__16TAdStorySelectGCFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xDC) = get_story_select__16TAdStorySelectGCFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x88));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFPvf((int) (temp_r3), (void *) (arg0 + 0x38), (f32) (lbl_805DBFD8));
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    return arg0;
}

void TObjAreaWarpForest__vt18(Obj_8019C53C *self) {
    debug_print_area_num__12TObjAreaWarpFPv((Obj_8019C924 *)self);
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (self->f8C < 0) {
        self->f8C = 0;
    }
    self->f8C = self->f8C % 2;
    if (self->f8C == 0) {
        set_global_count__12TObjNpcEnemyFi(0xFFFFFF);
        debug_printf_at(0x130022, lbl_804463B4);
    } else {
        set_global_count__12TObjNpcEnemyFi(0xFF0000FF);
        debug_printf_at(0x130022, lbl_804463A4);
    }
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void render__18TObjAreaWarpForestFv(Obj_8019C604 *self) {
    Node_8019C604 *m;
    Node_8019C604 *n;
    if (((VObj_8019C604 *)self)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        Colors_8019C604 cols = lbl_805DBFC8;
        n = self->fD4->next2C;
        while (n != NULL) {
            if (n->f4 != 0) {
                free_children__12TObjDoorJungFPvPv((void *)(n->f4), (int)(cols.c[self->f8C]));
            }
            n = n->next2C;
        }
        m = self->fD0;
        set_global_param__8TObjFishFi((int)(self->fDC));
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(self->f38);
        ((void (*)(int, int))rotate_matrix_y)((int)(0), (int)(self->f60));
        push_matrix();
        ((void (*)(void *))post_translate_matrix)(m->f8);
        draw_ginja_model(m->f4);
        begin_effect_render__13TParticleCtrlFv();
        m = m->next2C;
        while (m != NULL) {
            push_matrix();
            ((void (*)(void *))post_translate_matrix)(m->f8);
            rotate_matrix_zyx((int)(0), (s32)(m->f14), (s32)(m->f18), (s32)(m->f1C));
            rotate_matrix_x((int)(0), (s32)(self->fCC));
            draw_ginja_model(m->f4);
            ((void (*)(void))pop_matrix)();
            m = m->next30;
        }
        end_effect_render__13TParticleCtrlFv();
        ((void (*)(void))pop_matrix)();
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion((s32)(self->fD4), (s32)(self->fD8), self->fC8);
        end_effect_render__13TParticleCtrlFv();
        ((void (*)(void))pop_matrix)();
    }
}

int TObjAreaWarpForest__vt17(void* p) { return ((int (*)(void*))confirm_area_transfer__12TObjAreaWarpFPvi)(p); }

void run_task__18TObjAreaWarpForestFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DBFDC);
  if (((f32) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)))) + 4))) - (1 & 0xFFu))) < (*((f32 *) (((s8 *) arg0) + 0xC4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xC8))) + 0x150);
  ((void (*)(void *))handle_area_selection__12TObjAreaWarpFPv)(arg0);
}

void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpForest;
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
    ((s32 (*)(void *, void *, void *))TObjAreaWarp__ct)((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest *)&__vt__18TObjAreaWarpForest).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D346C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r3 = temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, u32 *, 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r3) - temp_r3);
    if ((get_game_play_mode((int) (temp_r3)) == 1) && ((s32) M2C_FIELD(arg0, u32 *, 0x8C) == 0)) {
        ((s32 (*)(void *))queue_destruction__7TObjectFv)((void *) (arg0));
        return arg0;
    }
    M2C_FIELD(arg0, s32 *, 0xCC) = register_warp__16TObjMapForceWarpFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD0) = register_warp__16TObjMapForceWarpFPv((int) (1));
    M2C_FIELD(arg0, s32 *, 0xD4) = register_area_warp_object__16TAdStorySelectGCFPv((int) (0));
    M2C_FIELD(arg0, s32 *, 0xD8) = get_story_select__16TAdStorySelectGCFv();
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        temp_r3_2 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x88));
        var_r0 = temp_r3_2;
        if (var_r0 != 0) {
            var_r0 = init__13TAdVIConfigGCFPvf((int) (temp_r3_2), (void *) (arg0 + 0x38), (f32) (lbl_805DBFD8));
        }
        M2C_FIELD(arg0, s32 *, 0xC0) = var_r0;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    }
    return arg0;
}

void debug_print_area_num__12TObjAreaWarpFPv(Obj_8019C924 *self) {
    self->saved_id = self->id;
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_8044641C, self->saved_id);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

void handle_6x94_inter_level_warp(Pkt_8019C988 *arg0) {
    bswap_6x94_inter_level_warp(arg0);
    if (arg0->f4 != get_current_floor()) {
        set_area__6TLobbyFPvi(((u8 *)&lbl_80515BA0), arg0->f4, get_floor_map_terrain(arg0->f4));
        mark_area_change_pending();
        suppress_slot__11TWindowCtrlFi(lbl_805D53A0);
        get_dest_area__17TObjAreaWarpQuestFPv(((u8 *)&lbl_80515BA0));
        send_inter_level_warp_all__10TNpcPlayerFi();
        void *p = get_player_by_client_id(lbl_805D53A0);
        if (p != 0) {
            send_6x21_inter_level_warp(p, get_dest_area__17TObjAreaWarpQuestFPv(((u8 *)&lbl_80515BA0)));
        }
    }
}

void confirm_area_transfer__12TObjAreaWarpFPvi(u8 *arg0, s32 arg1) {
    ((M2C_UNK (*)(void *, int, int))set_area__6TLobbyFPvi)((void *) (&lbl_80515BA0.value), (int) (M2C_FIELD(arg0, s32 *, 0xBC)), (int) (get_floor_map_terrain(M2C_FIELD(arg0, s32 *, 0xBC))));
    ((M2C_UNK (*)(void))mark_area_change_pending)();
    ((s32 (*)(void *))get_dest_area__17TObjAreaWarpQuestFPv)(&lbl_80515BA0.value);
    ((M2C_UNK (*)(void))send_inter_level_warp_all__10TNpcPlayerFi)();
    ((M2C_UNK (*)(void *, void *))send_6x21_inter_level_warp)((void *) (arg1), (void *) (((s32 (*)(void *))get_dest_area__17TObjAreaWarpQuestFPv)(&lbl_80515BA0.value)));
    ((s32 (*)(s32, u32, s16, s32))play_sound_effect)(0x40003205, 0U, 0, 0);
}

void handle_area_selection__12TObjAreaWarpFPv(VObj_8019CAB0 *self) {
    Data_8019CAB0 *d = (Data_8019CAB0 *)self;
    s32 found;
    s32 i;
    void *t;
    if (self->m14() == 0) {
        if (d->fB0 != NULL) {
            TWindow__close(d->fB0);
            d->fB0 = NULL;
        }
    } else {
        if (d->fB0 != NULL) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(d->fB0);
            allow_rendering__7TObjectFv(d->fB0);
        }
        if (is_split_screen() != 0) {
            found = 0;
            if (d->fC0 != NULL) {
                update_visibility__13TAdVIConfigGCFPv(d->fC0);
                if (get_field_14__13TAdVIConfigGCFPv(d->fC0) == 0) {
                    self->m12();
                    return;
                }
            }
            for (i = 0; i < 4; i++) {
                t = find_warp_player_in_range(self, i, d->fAC);
                if (t != NULL) {
                    found = 1;
                    if (d->fC0 != NULL) {
                        self->m13(find_active_player__12TObjAreaWarpFPv(d->fC0));
                    } else {
                        self->m13(obj_getField1c(t));
                    }
                    if (self->m16(i) != 0) {
                        self->m12();
                        self->m17(t);
                    }
                }
            }
            if (found == 0) {
                self->m12();
            }
        } else {
            void *t2 = find_warp_player_in_range(self, lbl_805D53A0, d->fAC);
            if (t2 != NULL) {
                self->m13(lbl_805D53A0);
                if (self->m16(get_map_id__13TRaderMapCoreFPv(t2)) != 0) {
                    self->m12();
                    self->m17(t2);
                }
            } else {
                self->m12();
            }
        }
    }
}

s32 is_warp_enabled__12TObjAreaWarpFi(s32 arg0) {
    s32 var_r31;

    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        var_r31 = 0;
loop_2:
        if ((((u32 (*)(s32))get_player_by_client_id)((s32)(var_r31)) != 0U) && (check_flag_100__10TObjPlayerFPv() != 0)) {
            return 0;
        }
        var_r31 += 1;
        if (var_r31 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return TObjWarpBase__vt13(arg0);
}

void open_confirm_window__12TObjAreaWarpFPvUs(void *arg0, u16 arg1) {
    u32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = ((u32 (*)(M2C_UNK, s32, u16))create_window_menu)(get_window_layout_position(0x33), 1, arg1);
        if (((s32 (*)(void))get_game_play_mode)() == 1) {
            add_text_entry__19TWindowSubTradeMainFPviiii(M2C_FIELD(arg0, u32 *, 0xB0), TObjCityMainWarp__sub_80186AF4(), 2, 0, -1);
        } else {
            get_player_floor__6TLobbyFi(M2C_FIELD(arg0, s32 *, 0xBC));
            add_text_entry__19TWindowSubTradeMainFPviiii(M2C_FIELD(arg0, u32 *, 0xB0), get_floor_destination_name(), 2, 0, -1);
        }
        calc_window_size__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, u16 *, 0xB8) = arg1;
        temp_r3 = ((u32 (*)(s32))get_player_by_client_id)((s32)(M2C_FIELD(arg0, u16 *, 0xB8)));
        if (temp_r3 != 0U) {
            mask_action_buttons(temp_r3 + 0x550, 4);
        }
    }
}

u8 *__dt__12TObjAreaWarpFv(u8 *arg0, s16 arg1) {
    u8 *temp_r3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019CE40___vt__12TObjAreaWarp *)&__vt__12TObjAreaWarp).value;
        temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xC0));
        if (temp_r3 != NULL) {
            destroy__13TAdVIConfigGCFPvs(temp_r3, 1);
            M2C_FIELD(arg0, u8 **, 0xC0) = NULL;
        }
        ((VObj_18_26c409 *)(arg0))->m12();
        TObjWarpBase__vt0(arg0, 0);
        if (arg1 > 0) {
            ((M2C_UNK (*)(void *))__dl__7TObjectFPv)((void *) (arg0));
        }
    }
    return arg0;
}

void *TObjAreaWarp__ct(void *arg0) {
    TObjWarpBase__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjAreaWarp;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3468;
    M2C_FIELD(arg0, s32 *, 0xBC) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) lbl_805D5C80 != 0) {
        M2C_FIELD(arg0, s32 *, 0xBC) = (s32) (get_current_floor() + 1);
    }
    M2C_FIELD(arg0, s32 *, 0xC0) = 0;
    return arg0;
}

void render__17TObjMapWarpForestFv(u8 *arg0) {
    if (((VObj8019CF38_8019CCF0 *) arg0)->m8(lbl_805DBFD4, lbl_805DBFD8) != 0) {
        ((M2C_UNK (*)(s32))set_global_param__8TObjFishFi)(M2C_FIELD(arg0, s32 *, 0x10C));
        ((M2C_UNK (*)(void))push_matrix)();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        draw_ginja_object(M2C_FIELD(arg0, s32 *, 0x100));
        ((M2C_UNK (*)(void))begin_effect_render__13TParticleCtrlFv)();
        ((M2C_UNK (*)(s32, s32, f32))draw_ginja_model_with_motion)(M2C_FIELD(arg0, s32 *, 0x104), M2C_FIELD(arg0, s32 *, 0x108), M2C_FIELD(arg0, f32 *, 0xFC));
        ((M2C_UNK (*)(void))end_effect_render__13TParticleCtrlFv)();
        pop_matrix();
    }
}

void run_task__17TObjMapWarpForestFv(TObjMapWarpForest* actor) {
    actor->frame+=lbl_805DBFDC;
    if((f32)(u32)(actor->motion->frameCount-1)<actor->frame)actor->frame=lbl_805DBFE4;
    process_player_warps__11TObjMapWarpFPv((VObj_8019D250 *)actor);
}

u8 *TObjMapWarpForest__ct(u8 *arg0) {
    ((s32 (*)(void *))TObjMapWarp__ct)((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TObjMapWarpForest.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3464;
    M2C_FIELD(arg0, s32 *, 0x100) = register_warp__16TObjMapForceWarpFPv((int) (4));
    M2C_FIELD(arg0, s32 *, 0x104) = register_warp__16TObjMapForceWarpFPv((int) (5));
    M2C_FIELD(arg0, s32 *, 0x108) = register_area_warp_object__16TAdStorySelectGCFPv((int) (2));
    M2C_FIELD(arg0, s32 *, 0x10C) = get_story_select__16TAdStorySelectGCFv();
    M2C_FIELD(arg0, f32 *, 0xFC) = (f32) lbl_805DBFE4;
    return arg0;
}

void draw_debug_destinations__11TObjMapWarpFPv(u8 *arg0) {
    Warp_8019D0A8 *self = (Warp_8019D0A8 *)arg0;
    Vec_8019D0A8 *end;
    s32 i;
    ((M2C_UNK (*)(u32))set_global_count__12TObjNpcEnemyFi)(0xFF00FF);
    ((M2C_UNK (*)(s32, const char *, ...))debug_printf_at)(0x13001C, lbl_80446430);
    ((M2C_UNK (*)(s32, const char *, ...))debug_printf_at)(0x13001D, lbl_80446440);
    ((M2C_UNK (*)(s32, const char *, ...))debug_printf_at)(0x13001E, lbl_80446450);
    ((M2C_UNK (*)(s32, const char *, ...))debug_printf_at)(0x130020, lbl_80446460);
    ((M2C_UNK (*)(u32))set_global_count__12TObjNpcEnemyFi)(0xF0F0F0FF);
    for (i = 0; i < 4; i++) {
        Vec_8019D0A8 b;
        Vec_8019D0A8 a = lbl_804462FC;
        push_matrix_from(lbl_8058D490);
        post_translate_matrix(&self->pos);
        rotate_matrix_y((M2C_UNK)(0), (s32)(self->yaw));
        end = &self->ends[i];
        matrix_mult_vec(0, &lbl_804B910C[i], end);
        pop_matrix();
        push_matrix_from(lbl_8058D490);
        post_translate_matrix(end);
        rotate_matrix_y((M2C_UNK)(0), (s32)(self->yaw2));
        matrix_mult_vec(0, &a, &a);
        pop_matrix();
        VecCopy__FP3VecPC3Vec(&b, end);
        b.y += lbl_805DBFF8;
        a.y += lbl_805DBFF8;
        TObjMapWarp__sub_80141CB0(&b, &a, 0xFFFF0000, 0xFFFF0000);
        TObjMapWarp__sub_80141CB4(end, lbl_805DBFFC);
    }
}

void process_player_warps__11TObjMapWarpFPv(VObj_8019D250 *self) {
    Data_8019D250 *d = (Data_8019D250 *)self;
    s32 i;
    void *t;
    s32 j;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        for (i = 0; i < 4; i++) {
            if (can_warp__11TObjMapWarpFiUs(self, i) == 0) {
                if (d->win[i] != NULL) {
                    TWindow__close(d->win[i]);
                    d->win[i] = NULL;
                }
            } else {
                if (d->win[i] != NULL) {
                    clear_flag4_bit4__22TQuestVmDownLoadServerFPv(d->win[i]);
                    allow_rendering__7TObjectFv(d->win[i]);
                }
                t = find_warp_player_in_range(self, i, d->fAC);
                if (t != NULL) {
                    self->m13(obj_getField1c(t));
                    if (is_target_valid__10TObjPlayerFPv(t) != 0 && self->m16(get_map_id__13TRaderMapCoreFPv(t)) != 0) {
                        for (j = 0; j < 4; j++) {
                            if (test_player_body_overlap_at(self, t, &d->ends[j]) == 0) {
                                send_6x55_intra_map_warp(obj_getField1c(t), &d->ends[j], d->f84);
                            }
                        }
                    }
                } else {
                    self->m18(i);
                }
            }
        }
        return;
    }
    if (self->m14() == 0) {
        if (d->fB0 != NULL) {
            TWindow__close(d->fB0);
            d->fB0 = NULL;
        }
    } else {
        void *t2;
        s32 j2;
        if (d->fB0 != NULL) {
            clear_flag4_bit4__22TQuestVmDownLoadServerFPv(d->fB0);
            allow_rendering__7TObjectFv(d->fB0);
        }
        t2 = find_warp_player_in_range(self, lbl_805D53A0, d->fAC);
        if (t2 != NULL) {
            self->m13(lbl_805D53A0);
            if (is_target_valid__10TObjPlayerFPv(t2) != 0 && self->m16(get_map_id__13TRaderMapCoreFPv(t2)) != 0) {
                for (j2 = 0; j2 < 4; j2++) {
                    if (test_player_body_overlap_at(self, t2, &d->ends[j2]) == 0) {
                        send_6x55_intra_map_warp(obj_getField1c(t2), &d->ends[j2], d->f84);
                    }
                }
            }
        } else {
            self->m12();
        }
    }
}

}
