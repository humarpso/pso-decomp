#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

extern "C" {
void handle_area_selection__12TObjAreaWarpFPv(void *);
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE4;
void run_task__18TObjAreaWarpEndingFv(u8 *arg0);
void handle_area_selection__12TObjAreaWarpFPv(void *);
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE4;
void run_task__18TObjAreaWarpForestFv(u8 *arg0);
void handle_area_selection__12TObjAreaWarpFPv(void *);
extern const f32 lbl_805DBFDC;
extern const f32 lbl_805DBFE4;
void run_task__17TObjAreaWarpQuestFv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 get_game_play_mode(int);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern M2C_UNK __vt__18TObjAreaWarpForest[];
extern s32 lbl_805D346C;
extern const f32 lbl_805DBFD8;
extern const f32 lbl_805DBFE4;
u8 *TObjAreaWarpForest__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern M2C_UNK __vt__18TObjAreaWarpEnding[];
extern s32 lbl_805D3474;
extern const f32 lbl_805DBFD8;
extern const f32 lbl_805DBFE4;
u8 *TObjAreaWarpEnding__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TObjAreaWarp__ct(void *, void *, void *);
s32 get_story_select__16TAdStorySelectGCFv();
s32 register_area_warp_object__16TAdStorySelectGCFPv(int);
s32 register_warp__16TObjMapForceWarpFPv(int);
s32 init__13TAdVIConfigGCFPvf(int, void *, f32);
s32 is_not_split_screen__13TRaderMapCoreFv();
extern M2C_UNK __vt__17TObjAreaWarpQuest[];
extern s32 lbl_805D3470;
extern const f32 lbl_805DBFD8;
extern const f32 lbl_805DBFE4;
u8 *TObjAreaWarpQuest__ct(u8 *arg0, s32 arg1, s32 arg2);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
extern char lbl_8044641C[];
void TObjAreaWarp__sub_8019C924(Obj_8019C924 *self);
void mark_area_change_pending();
s32 get_current_floor();
void *get_dest_area__17TObjAreaWarpQuestFPv(void *);
void bswap_6x94_inter_level_warp(void *);
void *get_player_by_client_id(s32);
void send_6x21_inter_level_warp(void *, void *);
s32 get_floor_map_terrain(s32);
void set_area__6TLobbyFPvi(void *, int, int);
void suppress_slot__11TWindowCtrlFi(s32);
void TNpcPlayer__sub_8034E7A0();
extern u8 lbl_80515BA0[];
extern s32 lbl_805D53A0;
void handle_6x94_inter_level_warp(Pkt_8019C988 *arg0);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_zyx(int, s32, s32, s32);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_model(void *);
void draw_ginja_model_with_motion(s32, s32, f32);
extern Ids_8019BD84 lbl_805DBFD0;
extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;
void render__18TObjAreaWarpEndingFv(Obj_8019BD84 *self);
void mark_area_change_pending();
s32 obj_isState3_324(void *);
s32 get_action_flags__10TNpcPlayerFPv(void *);
void *get_dest_area__17TObjAreaWarpQuestFPv(void *);
void TObjAreaWarpQuest__sub_8019DCD8(void *, s32);
void *get_player_by_client_id(s32);
void send_6x21_inter_level_warp(void *, void *);
s32 get_floor_map_terrain(s32);
void set_area__6TLobbyFPvi(void *, int, int);
void TNpcPlayer__sub_8034E7A0();
extern u8 lbl_80515BA0[];
void TObjAreaWarpQuest__vt17(Warp_8019C05C *arg0, void *arg1);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_zyx(int, s32, s32, s32);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_model(void *);
void draw_ginja_model_with_motion(s32, s32, f32);
extern Colors_8019C250 lbl_805DBFCC;
extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;
void render__17TObjAreaWarpQuestFv(Obj_8019C250 *self);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(void *, int);
void rotate_matrix_zyx(int, s32, s32, s32);
void rotate_matrix_y(int, int);
void rotate_matrix_x(int, s32);
void push_matrix();
void pop_matrix();
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(int);
void draw_ginja_model(void *);
void draw_ginja_model_with_motion(s32, s32, f32);
extern Colors_8019C604 lbl_805DBFC8;
extern const f32 lbl_805DBFD4;
extern const f32 lbl_805DBFD8;
void render__18TObjAreaWarpForestFv(Obj_8019C604 *self);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
void TObjAreaWarp__sub_8019C924(Obj_8019C924 *self);
extern char lbl_804463A4[];
extern char lbl_804463B4[];
void TObjAreaWarpEnding__vt18(Obj_8019BCBC *self);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
void TObjAreaWarp__sub_8019C924(Obj_8019C924 *self);
extern char lbl_804463A4[];
extern char lbl_804463B4[];
void TObjAreaWarpForest__vt18(Obj_8019C53C *self);
void set_global_count__12TObjNpcEnemyFi(s32 arg0);
void debug_printf_at(s32 id, const char *fmt, ...);
void TObjAreaWarp__sub_8019C924(Obj_8019C924 *self);
extern char lbl_804463A4[];
extern char lbl_804463B4[];
extern char lbl_80446404[];
void TObjAreaWarpQuest__vt18(Obj_8019C144 *self);
}

extern "C" {

void *__dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1);
void create_and_init__18TObjAreaWarpEndingFv(void);
void open_confirm_window__18TObjAreaWarpEndingFPvs(void *arg0, s16 arg1);
s32 get_localized_text_entry(M2C_UNK, M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 create_window_menu(M2C_UNK, s32, s16);
M2C_UNK align_menu_entry_positions(u32);
M2C_UNK TWindowSubComCard__sub_80265F60(u32);
M2C_UNK get_window_layout_position(M2C_UNK);
M2C_UNK TWindowSubTradeMain__sub_80266200(u32, s32, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);
s32 get_main_phase();
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(u32, s32, M2C_UNK *);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(u32);
M2C_UNK set_flag_40__16TAdChrSelASlotGCFPv(u32);

extern M2C_UNK dispatch_select_phase__16TKeyBoardControlFv[];
extern s32 tl_00;

void create_and_init__18TObjAreaWarpEndingFv(void) {
    play_sound_effect(0x40003205, 0, 0, 0);
    u32 obj = __nw__7TObjectFUl(0x28);
    if (obj != 0U) {
        init__22THunterGuildSeqOfflineFPvPvPv(obj, tl_00, dispatch_select_phase__16TKeyBoardControlFv);
    }
}

void open_confirm_window__18TObjAreaWarpEndingFPvs(void *arg0, s16 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB0) == 0U) {
        M2C_FIELD(arg0, u32 *, 0xB0) = create_window_menu(get_window_layout_position(0x33), 1, arg1);
        if (get_main_phase() == 0xE) {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), get_localized_text_entry(9, 0x26), 3, 0, -1);
        } else {
            TWindowSubTradeMain__sub_80266200(M2C_FIELD(arg0, u32 *, 0xB0), get_localized_text_entry(9, 0x23), 2, 0, -1);
        }
        TWindowSubComCard__sub_80265F60(M2C_FIELD(arg0, u32 *, 0xB0));
        align_menu_entry_positions(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag70_bit10__16TObjCityMainWarpFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        set_flag_40__16TAdChrSelASlotGCFPv(M2C_FIELD(arg0, u32 *, 0xB0));
        M2C_FIELD(arg0, s16 *, 0xB8) = arg1;
    }
}

extern M2C_UNK __vt__18TObjAreaWarpEnding[];

void TObjAreaWarpEnding__vt18(Obj_8019BCBC *self) {
    TObjAreaWarp__sub_8019C924((Obj_8019C924 *)self);
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
    post_translate_matrix(arg0->pos);
    rotate_matrix_y(0, arg0->f60);
    push_matrix();
    post_translate_matrix(root->pos);
    draw_ginja_model(root->model);
    begin_effect_render__13TParticleCtrlFv();
    for (root = root->child; root != 0; root = root->sibling) {
        push_matrix();
        post_translate_matrix(root->pos);
        rotate_matrix_zyx(0, root->ang[0], root->ang[1], root->ang[2]);
        rotate_matrix_x(0, arg0->fC8);
        draw_ginja_model(root->model);
        pop_matrix();
    }
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    begin_effect_render__13TParticleCtrlFv();
    draw_ginja_model_with_motion((s32)arg0->fD0, arg0->fD4, arg0->fC4);
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
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
  handle_area_selection__12TObjAreaWarpFPv(arg0);
}

void *__dt__18TObjAreaWarpEndingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpEnding;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

extern M2C_UNK __vt__17TObjAreaWarpQuest[];

u8 *TObjAreaWarpEnding__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r4;
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
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
    set_area__6TLobbyFPvi(lbl_80515BA0, arg0->fBC, get_floor_map_terrain(arg0->fBC));
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
    get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0);
    TNpcPlayer__sub_8034E7A0();
    send_6x21_inter_level_warp(arg1, get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0));
}

void TObjAreaWarpQuest__vt18(Obj_8019C144 *self) {
    TObjAreaWarp__sub_8019C924((Obj_8019C924 *)self);
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
        post_translate_matrix(self->f38);
        rotate_matrix_y((int)(0), (int)(self->f60));
        push_matrix();
        post_translate_matrix(m->f8);
        draw_ginja_model(m->f4);
        begin_effect_render__13TParticleCtrlFv();
        m = m->next2C;
        while (m != NULL) {
            push_matrix();
            post_translate_matrix(m->f8);
            rotate_matrix_zyx((int)(0), (s32)(m->f14), (s32)(m->f18), (s32)(m->f1C));
            rotate_matrix_x((int)(0), (s32)(self->fCC));
            draw_ginja_model(m->f4);
            pop_matrix();
            m = m->next30;
        }
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion((s32)(self->fD4), (s32)(self->fD8), self->fC8);
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

void run_task__17TObjAreaWarpQuestFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC8))) + lbl_805DBFDC);
  if (((f32) ((unsigned long) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD8)))) + 4))) - 1))) < (*((f32 *) (((s8 *) arg0) + 0xC8))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC8)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xCC)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xCC))) + 0x150);
  handle_area_selection__12TObjAreaWarpFPv(arg0);
}

void *__dt__17TObjAreaWarpQuestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjAreaWarpQuest;
        __dt__12TObjAreaWarpFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#pragma push

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjAreaWarpForest__vt17(void* p);
void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1);
int confirm_area_transfer__12TObjAreaWarpFPvi(void*);
void __dl__7TObjectFPv(void *);
void __dt__12TObjAreaWarpFv(void *, int);

u8 *TObjAreaWarpQuest__ct(u8 *arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    u32 temp_r0;
    u32 temp_r4;
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
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
    TObjAreaWarp__sub_8019C924((Obj_8019C924 *)self);
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
        post_translate_matrix(self->f38);
        rotate_matrix_y((int)(0), (int)(self->f60));
        push_matrix();
        post_translate_matrix(m->f8);
        draw_ginja_model(m->f4);
        begin_effect_render__13TParticleCtrlFv();
        m = m->next2C;
        while (m != NULL) {
            push_matrix();
            post_translate_matrix(m->f8);
            rotate_matrix_zyx((int)(0), (s32)(m->f14), (s32)(m->f18), (s32)(m->f1C));
            rotate_matrix_x((int)(0), (s32)(self->fCC));
            draw_ginja_model(m->f4);
            pop_matrix();
            m = m->next30;
        }
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        begin_effect_render__13TParticleCtrlFv();
        draw_ginja_model_with_motion((s32)(self->fD4), (s32)(self->fD8), self->fC8);
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
}

int TObjAreaWarpForest__vt17(void* p) { return confirm_area_transfer__12TObjAreaWarpFPvi(p); }

extern M2C_UNK __vt__18TObjAreaWarpForest[];

void run_task__18TObjAreaWarpForestFv(u8 *arg0) {
  *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0xC4))) + lbl_805DBFDC);
  if (((f32) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0xD4)))) + 4))) - (1 & 0xFFu))) < (*((f32 *) (((s8 *) arg0) + 0xC4))))
  {
    *((f32 *) (((s8 *) arg0) + 0xC4)) = (f32) lbl_805DBFE4;
  }
  *((s32 *) (((s8 *) arg0) + 0xC8)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0xC8))) + 0x150);
  handle_area_selection__12TObjAreaWarpFPv(arg0);
}

void *__dt__18TObjAreaWarpForestFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjAreaWarpForest;
        __dt__12TObjAreaWarpFv(arg0, 0);
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
    TObjAreaWarp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8019C828___vt__18TObjAreaWarpForest *)&__vt__18TObjAreaWarpForest).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D346C;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DBFE4;
    M2C_FIELD(arg0, s32 *, 0xC8) = 0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x8C);
    temp_r3 = temp_r0 >> 0x1FU;
    M2C_FIELD(arg0, u32 *, 0x8C) = (u32) (((temp_r0 & 1) ^ temp_r3) - temp_r3);
    if ((get_game_play_mode((int) (temp_r3)) == 1) && ((s32) M2C_FIELD(arg0, u32 *, 0x8C) == 0)) {
        queue_destruction__7TObjectFv((void *) (arg0));
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
void TObjAreaWarp__sub_8019C924(Obj_8019C924 *self) {
    self->saved_id = self->id;
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    debug_printf_at(0x130020, lbl_8044641C, self->saved_id);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}
void handle_6x94_inter_level_warp(Pkt_8019C988 *arg0) {
    bswap_6x94_inter_level_warp(arg0);
    if (arg0->f4 != get_current_floor()) {
        set_area__6TLobbyFPvi(lbl_80515BA0, arg0->f4, get_floor_map_terrain(arg0->f4));
        mark_area_change_pending();
        suppress_slot__11TWindowCtrlFi(lbl_805D53A0);
        get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0);
        TNpcPlayer__sub_8034E7A0();
        void *p = get_player_by_client_id(lbl_805D53A0);
        if (p != 0) {
            send_6x21_inter_level_warp(p, get_dest_area__17TObjAreaWarpQuestFPv(lbl_80515BA0));
        }
    }
}

}

#pragma pop
