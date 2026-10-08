#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033670C_lbl_804EE58C {
    M2C_UNK value;
    u8 remaining[0x4C];
};

typedef struct { s32 a, b, c; } V3_80336520;
typedef struct {
    s32 pad0[2];
    f32 f8, fC;
    s32 pad10[6];
    f32 f28, f2C, f30, f34, f38, f3C, f40, f44;
} Cam_80336520;

struct O_8033612C { u8 pad[0x1C]; void *f1c; void *f20; void *f24; u8 pad2[0x3C - 0x28]; u32 flags; void *h[3]; };

struct RecoveredGlobal_80336340_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct Obj_80336340 { u8 pad[0x40]; void *objs[3]; };

typedef s32 M2C_UNK;
struct Tbl_80336750 { const char *s[5]; };

class C_803362A4 {
public:
    void f();
};
typedef void (C_803362A4::*PMF_803362A4)();

extern "C" {
int TKeyBoardControl__sub_8000F9CC(void*);
    extern int lbl_805D6D44;
void open_keyboard__6TLobbyFv(void);
int set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
extern int lbl_805D6D44;
void request_change_game_mode__6TLobbyFv(void);
int set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
extern int lbl_805D6D44;
void enter_game_mode_change__6TLobbyFv(void);
int set_mode_0x15__21TAdMultiChgGameModeGCFv(void);
extern int lbl_805D6D44;
void enter_chg_game_mode__6TLobbyFv(void);
void TLobby__sub_8033633C(void);
M2C_UNK queue_destruction__7TObjectFv(void*);
void TLobby__sub_8033645C(void* p);
void TLobby__sub_8033645C(void* p);
M2C_UNK TCameraCtrl__sub_800694A8();
M2C_UNK stop_audio_streams__6TLobbyFv();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void*);
extern M2C_UNK lbl_804EEF64[];
extern u32 lbl_805D6D40;
void *destroy__6TLobbyFPvs(void *arg0, s16 arg1);
    extern int lbl_805D68C8;
void TAdMultiPlyChrSelectGC__sub_803367E8(void);
s32 TLobby__sub_803DA16C(void *, M2C_UNK);
u64 call_funcs_reverse__6TLobbyFPvUi(void *, int);
extern RecoveredGlobal_8033670C_lbl_804EE58C lbl_804EE58C;
extern u8 *lbl_805D6D48;
void TLobby__sub_8033670C(void);
M2C_UNK queue_destruction__7TObjectFv(void*);
s32 disallow_rendering__7TObjectFv(void *);
void hide_title_layers_and_release(O_8033612C *arg0);
s32 TKeyBoardControl__sub_8000F828(void);
void TKeyBoardControl__sub_8000F90C(int);
void set_flag_4__9TObjLukerFPv(void *);
void TCameraCtrl__sub_800695A0(void *);
s32 create_particle__20TAdLoadQuestPrtTxtGCFPvii(void *, int, int);
void init_fade__6TLobbyFPvPvPv(void *, s32, void *);
void create__20TItemReverseTechCtrlFPv(void *);
void *__nw__7TObjectFUl(u32);
void __ct__7TObjectFP7TObject(void *);
void apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(void *);
void reset_slot_selections__22TAdMultiPlyChrSelectGCFv(void);
void reset_count__14TObjEneDolmOlmFv(void);
void *init_camera_state__6TLobbyFPvi(void *, void *);
void *ct_with_parent__6TLobbyFPvPv(void *, s32);
void *construct__6TLobbyFPvPv(void *, void *);
extern V3_80336520 lbl_80477818;
extern u8 lbl_80477824[];
extern s32 tl_clipout;
extern s32 tl_fade;
extern const f32 lbl_805DF8E8;
extern const f32 lbl_805DF8EC;
extern const f32 lbl_805DF8F0;
extern const f32 lbl_805DF8F4;
extern const f32 lbl_805DF8F8;
extern const f32 lbl_805DF8FC;
extern const f32 lbl_805DF900;
extern const f32 lbl_805DF904;
extern const f32 lbl_805DF908;

void TKeyBoardControl__sub_8000F90C(int);
int TKeyBoardControl__sub_8000F9CC(void*);
M2C_UNK queue_destruction__7TObjectFv(void*);
void set_flag_4__9TObjLukerFPv(void *);
s32 TKeyBoardControl__sub_80132368(void *);
s32 TKeyBoardControl__sub_801A57D0();
s32 probe_card_slot__15TAdPlayerLoadGCFi(int);
M2C_UNK TWindowOptionCtrl__sub_802273B4(int);
M2C_UNK set_default_camera__21TAdMultiChgGameModeGCFv();
M2C_UNK request_scene_change__21TAdMultiChgGameModeGCFv();
M2C_UNK set_opening_movie_purpose(int);
s32 start_offline_seq__23TAdSinglePlyChrSelectGCFPv(void *);
void TLobby__sub_803362A4(void *);
extern RecoveredGlobal_80336340_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
void update_title_idle_transition(Obj_80336340 *arg0);
s32 run_load_callback_table(void *, int);
s32 update_menu_cursor__6TLobbyFv();
s32 reset_counter__6TLobbyFv();
s32 set_current_floor_area(int);
s32 TLobby__sub_8023E4B4(void *, void *);
extern const Tbl_80336750 lbl_80477804;
extern u8 lbl_804EE584[];
extern RecoveredGlobal_8033670C_lbl_804EE58C lbl_804EE58C;
extern const s32 lbl_805D5544;
extern u32 lbl_805D6D40;
extern u8 *lbl_805D6D48;
void TLobby__sub_80336750(void);
s32 TAdTrialAgreementGC__sub_80335958(int);
s32 TLobby__sub_80336030(void *);
extern PMF_803362A4 lbl_804EE5DC[];
}

extern "C" {

void TLobby__sub_803361FC(void);
void destroy_download_server__6TLobbyFv(void* _w0);
void queue_destruction_and_cleanup__6TLobbyFv(void* _w0);
void set_flag_and_clear_download__6TLobbyFPv(void *arg0);
s32 clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void *);

extern u32 lbl_805D6D40;

void queue_destruction_and_cleanup__6TLobbyFv(void* _w0) {
    queue_destruction__7TObjectFv((void*)(_w0));
    if ((u32) lbl_805D6D40 != 0U) {
        hide_title_layers_and_release((O_8033612C *)((void*)((void*)lbl_805D6D40)));
    }
}

extern u32 lbl_805D6D40;

void destroy_download_server__6TLobbyFv(void* _w0) {
    queue_destruction__7TObjectFv((void*)(_w0));
    if ((u32) lbl_805D6D40 != 0U) {
        set_flag_and_clear_download__6TLobbyFPv((void *)((void*)lbl_805D6D40));
    }
}

void hide_title_layers_and_release(O_8033612C *arg0) {
    s32 i;
    arg0->flags |= 4;
    if (arg0->f1c != 0) {
        disallow_rendering__7TObjectFv(arg0->f1c);
    }
    if (arg0->f24 != 0) {
        disallow_rendering__7TObjectFv(arg0->f24);
    }
    if (arg0->f20 != 0) {
        disallow_rendering__7TObjectFv(arg0->f20);
    }
    for (i = 0; i != 3; i++) {
        if (arg0->h[i] != 0) {
            queue_destruction__7TObjectFv((void*)(arg0->h[i]));
            arg0->h[i] = 0;
        }
    }
}

void set_flag_and_clear_download__6TLobbyFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 1);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        clear_flag4_bit4__22TQuestVmDownLoadServerFPv(M2C_FIELD(arg0, void **, 0x24));
    }
}

void TLobby__sub_803361FC(void) {  }
void open_keyboard__6TLobbyFv(void) { lbl_805D6D44 = 3; TKeyBoardControl__sub_8000F9CC((void*)19); }
void request_change_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 2; set_mode_change_state__21TAdMultiChgGameModeGCFv(); }
void enter_game_mode_change__6TLobbyFv(void) { lbl_805D6D44 = 1; set_game_mode_state__21TAdMultiChgGameModeGCFv(); }
void enter_chg_game_mode__6TLobbyFv(void) { lbl_805D6D44 = 0; set_mode_0x15__21TAdMultiChgGameModeGCFv(); }
void TLobby__sub_803362A4(void *arg0_) {
    u8 *arg0 = (u8 *)arg0_;
    if (TAdTrialAgreementGC__sub_80335958(*(s32 *)(arg0 + 0x24)) != 0) {
        TKeyBoardControl__sub_8000F90C(2);
        if (start_offline_seq__23TAdSinglePlyChrSelectGCFPv(arg0) != 0) {
            ((void (*)(void *))TLobby__sub_803361FC)(arg0);
            PMF_803362A4 m = lbl_804EE5DC[TLobby__sub_80336030(arg0)];
            (((C_803362A4 *)arg0)->*m)();
        }
    }
}
void TLobby__sub_8033633C(void) {  }

typedef char RecoveredGlobal_80336340_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_80336340_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
void update_title_idle_transition(Obj_80336340 *arg0) {
    s32 var_r28;
    set_default_camera__21TAdMultiChgGameModeGCFv();
    if (probe_card_slot__15TAdPlayerLoadGCFi((int) (0)) == 0) {
        for (var_r28 = 0; var_r28 != 3; var_r28++) {
            if (arg0->objs[var_r28] != NULL) {
                queue_destruction__7TObjectFv(arg0->objs[var_r28]);
                arg0->objs[var_r28] = NULL;
            }
        }
        request_scene_change__21TAdMultiChgGameModeGCFv();
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x34) < (s32) M2C_FIELD(arg0, s32 *, 0x38)) {
        if ((TKeyBoardControl__sub_80132368((void *) (&TKeyBoardControl__data_80506270.value)) != 0) || (TKeyBoardControl__sub_801A57D0() != 0)) {
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
        }
        TLobby__sub_803362A4((void *) (arg0));
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38) == (s32) M2C_FIELD(arg0, s32 *, 0x34)) {
        set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x24));
        TWindowOptionCtrl__sub_802273B4((int) (0x1E));
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x38) < (s32) M2C_FIELD(arg0, s32 *, 0x34)) && (start_offline_seq__23TAdSinglePlyChrSelectGCFPv((void *) (arg0)) != 0)) {
        TKeyBoardControl__sub_8000F90C((int) (2));
        set_opening_movie_purpose((int) (0));
        TKeyBoardControl__sub_8000F9CC((void *) (3));
    }
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) (M2C_FIELD(arg0, s32 *, 0x34) + 1);
}

void TLobby__sub_8033645C(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { queue_destruction__7TObjectFv((void*)((void*)(*(void**)((char*)p + 0x2c)))); *(int*)((char*)p + 0x2c) = 0; } }
void *destroy__6TLobbyFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF64;
        (*(s32 *)&lbl_805D6D40) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            queue_destruction__7TObjectFv((void*)(M2C_FIELD(arg0, void **, 0x20)));
        }
        TLobby__sub_8033645C((void*)(arg0));
        TCameraCtrl__sub_800694A8();
        stop_audio_streams__6TLobbyFv();
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *construct_title_scene__6TLobbyFPv(u8 *arg0) {
    void *p;

    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EEF64;
    lbl_805D6D40 = (u32)arg0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    TKeyBoardControl__sub_8000F90C(1);
    reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
    reset_count__14TObjEneDolmOlmFv();
    TAdMultiPlyChrSelectGC__sub_803367E8();
    lbl_805D6D44 = 0;
    if (TKeyBoardControl__sub_8000F828() == 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = 0x4B0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = 0x320;
    }
    p = __nw__7TObjectFUl(0x24);
    if (p != 0) {
        p = construct__6TLobbyFPvPv(p, arg0);
    }
    M2C_FIELD(arg0, void **, 0x1C) = p;
    p = __nw__7TObjectFUl(0x3C);
    if (p != 0) {
        p = init_camera_state__6TLobbyFPvi(p, arg0);
    }
    M2C_FIELD(arg0, void **, 0x24) = p;
    p = __nw__7TObjectFUl(0x20);
    if (p != 0) {
        p = ct_with_parent__6TLobbyFPvPv(p, tl_clipout);
    }
    M2C_FIELD(arg0, void **, 0x20) = p;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    if (M2C_FIELD(arg0, void **, 0x24) != 0) {
        set_flag_4__9TObjLukerFPv(M2C_FIELD(arg0, void **, 0x24));
    }
    apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(lbl_80477824);
    {
        Cam_80336520 cam;
        cam.f8 = lbl_805DF8E8;
        cam.fC = lbl_805DF8EC;
        cam.f28 = lbl_805DF8F0;
        cam.f2C = lbl_805DF8F4;
        cam.f34 = cam.f30 = lbl_805DF8F8;
        cam.f38 = lbl_805DF8FC;
        cam.f3C = lbl_805DF900;
        cam.f40 = lbl_805DF904;
        cam.f44 = lbl_805DF908;
        TCameraCtrl__sub_800695A0(&cam);
    }
    {
        V3_80336520 v = lbl_80477818;
        M2C_FIELD(arg0, s32 *, 0x40) = create_particle__20TAdLoadQuestPrtTxtGCFPvii(&v, 0x1E3, 1);
        M2C_FIELD(arg0, s32 *, 0x44) = create_particle__20TAdLoadQuestPrtTxtGCFPvii(&v, 0x1E4, 1);
        M2C_FIELD(arg0, s32 *, 0x48) = create_particle__20TAdLoadQuestPrtTxtGCFPvii(&v, 0x1E5, 1);
    }
    p = __nw__7TObjectFUl(0x28);
    if (p != 0) {
        init_fade__6TLobbyFPvPvPv(p, tl_fade, (void *)destroy_download_server__6TLobbyFv);
    }
    create__20TItemReverseTechCtrlFPv(arg0);
    return arg0;
}

typedef char RecoveredGlobal_8033670C_lbl_804EE58C_size[sizeof(RecoveredGlobal_8033670C_lbl_804EE58C) == 0x50 ? 1 : -1];
void TLobby__sub_8033670C(void) {
    u32 temp_r4;
    temp_r4 = (u32) call_funcs_reverse__6TLobbyFPvUi((void *) (&lbl_804EE58C.value), (int) (0x20));
    if ((void *) lbl_805D6D48 != NULL) {
        TLobby__sub_803DA16C(lbl_805D6D48, (s32) temp_r4);
        lbl_805D6D48 = NULL;
    }
}

void TLobby__sub_80336750(void) {
    lbl_805D6D40 = 0;
    update_menu_cursor__6TLobbyFv();
    Tbl_80336750 t = lbl_80477804;
    lbl_805D6D48 = lbl_804EE584;
    TLobby__sub_8023E4B4((void *)t.s[lbl_805D5544], lbl_804EE584);
    run_load_callback_table(&lbl_804EE58C, 0x20);
    reset_counter__6TLobbyFv();
    set_current_floor_area(0);
}

void TAdMultiPlyChrSelectGC__sub_803367E8(void) { lbl_805D68C8 = 0; }

}
