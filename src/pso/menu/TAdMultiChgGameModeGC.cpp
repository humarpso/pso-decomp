#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdMultiChgGameModeGC.h"

TAdMultiChgGameModeGC::~TAdMultiChgGameModeGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x8023E8A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_change_state__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 3;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023E8D4
#include "types.h"

extern "C" {

void set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
int sync_mode_state__21TAdMultiChgGameModeGCFv(void);

    extern int lbl_805D3848;
    extern int lbl_805D63C8;
void set_change_mode_flags__21TAdMultiChgGameModeGCFv(void) { sync_mode_state__21TAdMultiChgGameModeGCFv(); lbl_805D3848 = 1; lbl_805D63C8 = 1; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023E900
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(s32 arg0);
M2C_UNK TLobby__sub_80226C3C();
s32 TLobby__sub_8039DAFC(M2C_UNK, s32);
M2C_UNK TObjBgmColCtrl__sub_802274B8(s32);

void apply_bgm_col_ctrl__21TAdMultiChgGameModeGCFi(s32 arg0) {
    if (TLobby__sub_8039DAFC(TLobby__sub_80226C3C(), arg0) != 0) {
        TObjBgmColCtrl__sub_802274B8(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023E944
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_0x1a__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_state_0x1a__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x1A;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023E974
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_and_set_mode__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void reset_and_set_mode__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x19;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023E9A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_mode_18__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_18__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x18;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023E9D4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_mode_17__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_17__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x17;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023EA04
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_mode_0x15__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_0x15__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x15;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023EA34
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_mode_0x14__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_0x14__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x14;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023EA64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_transition__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void request_transition__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x11;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023EAC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_mode_state__21TAdMultiChgGameModeGCFv(void);
void set_mode_state_0e__21TAdMultiChgGameModeGCFv(void);
void set_mode_state_0d__21TAdMultiChgGameModeGCFv(void);
void set_state_0xc__21TAdMultiChgGameModeGCFv(void);
void begin_change_game_mode__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void reset_mode_state__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0xF;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_state_0e__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0xE;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_state_0d__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0xD;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_state_0xc__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0xC;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void begin_change_game_mode__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0xB;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023EBB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void begin_transition__21TAdMultiChgGameModeGCFv(void);
void set_state_0x9__21TAdMultiChgGameModeGCFv(void);
void request_scene_change__21TAdMultiChgGameModeGCFv(void);
void set_change_game_mode__21TAdMultiChgGameModeGCFv(void);
void set_game_mode__21TAdMultiChgGameModeGCFv(void);
void set_game_mode_state__21TAdMultiChgGameModeGCFv(void);
void set_game_mode_changed__21TAdMultiChgGameModeGCFv(void);
void init_change_mode__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void begin_transition__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0xA;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_state_0x9__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 9;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void request_scene_change__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 8;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_change_game_mode__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 7;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_game_mode__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 6;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_game_mode_state__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 5;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_game_mode_changed__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 4;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void init_change_mode__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023F4E4
#include "types.h"

extern "C" {

void TAdMultiChgGameModeGC__sub_8023F4E4(void);
void TAdMultiChgGameModeGC__sub_8023F50C(void);
int set_mode_change_state__21TAdMultiChgGameModeGCFv(void);
int set_change_mode_flags__21TAdMultiChgGameModeGCFv(void);
int TObjLight__sub_8023F22C(void);
int render_tick__Fv(void);

void TAdMultiChgGameModeGC__sub_8023F4E4(void) { TObjLight__sub_8023F22C(); set_mode_change_state__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F50C(void) { TObjLight__sub_8023F22C(); set_change_mode_flags__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023F534
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_mode_1c__21TAdMultiChgGameModeGCFv(void);
M2C_UNK sync_mode_state__21TAdMultiChgGameModeGCFv();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_mode_1c__21TAdMultiChgGameModeGCFv(void) {
    sync_mode_state__21TAdMultiChgGameModeGCFv();
    lbl_805D3848 = 0x1C;
    lbl_805D63C8 = 1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023F564
#include "types.h"

extern "C" {

void TAdMultiChgGameModeGC__sub_8023F564(void);
void TAdMultiChgGameModeGC__sub_8023F58C(void);
void TAdMultiChgGameModeGC__sub_8023F5B4(void);
void render_scene__21TAdMultiChgGameModeGCFv(void);
void render_game_mode_change__21TAdMultiChgGameModeGCFv(void);
void TAdMultiChgGameModeGC__sub_8023F62C(void);
int set_mode_17__21TAdMultiChgGameModeGCFv(void);
int set_state_0x9__21TAdMultiChgGameModeGCFv(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void);
int set_game_mode_changed__21TAdMultiChgGameModeGCFv(void);
int init_change_mode__21TAdMultiChgGameModeGCFv(void);
int TObjLight__sub_8023F22C(void);
int init_state__22TAdEnterSerialAccessGCFv(void);
int render_tick__Fv(void);

void TAdMultiChgGameModeGC__sub_8023F564(void) { TObjLight__sub_8023F22C(); set_mode_17__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F58C(void) { TObjLight__sub_8023F22C(); init_state__22TAdEnterSerialAccessGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F5B4(void) { TObjLight__sub_8023F22C(); set_state_0x9__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void render_scene__21TAdMultiChgGameModeGCFv(void) { TObjLight__sub_8023F22C(); request_scene_change__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void render_game_mode_change__21TAdMultiChgGameModeGCFv(void) { TObjLight__sub_8023F22C(); set_game_mode_changed__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }
void TAdMultiChgGameModeGC__sub_8023F62C(void) { TObjLight__sub_8023F22C(); init_change_mode__21TAdMultiChgGameModeGCFv(); render_tick__Fv(); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8023F654
#include "types.h"

extern "C" {

void sync_mode_state__21TAdMultiChgGameModeGCFv(void);

    extern int lbl_805D3848;
    extern int lbl_805D384C;
void sync_mode_state__21TAdMultiChgGameModeGCFv(void) { lbl_805D384C = lbl_805D3848; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036DE6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_windows_on_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3;
    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
        temp_r3 = M2C_FIELD(arg0, void **, 0x30);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        temp_r3 = M2C_FIELD(arg0, void **, 0x34);
        if ((u32) temp_r3 != 0U) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036DF00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK close_window_30__21TAdMultiChgGameModeGCFPv(void *);
M2C_UNK close_window__21TAdMultiChgGameModeGCFPv(void *);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 TWindowSubComCard__sub_80265BF8(u32);

void update_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;
    u32 temp_r3_2;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_2 != 0U) {
            if (is_visible__17TWindowSubComCardFPv(temp_r3_2) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x34));
                switch (temp_r3) {
                case 0:
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 6);
                    close_window_30__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 8);
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E050
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_windows_and_reopen__21TAdMultiChgGameModeGCFPv(void *arg0);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E19C(void *, M2C_UNK);
M2C_UNK close_window_30__21TAdMultiChgGameModeGCFPv(void *);
M2C_UNK close_window__21TAdMultiChgGameModeGCFPv(void *);
M2C_UNK TAdMultiChgGameModeGC__sub_8036E2AC(void *, M2C_UNK);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv();
M2C_UNK TAdMultiChgGameModeGC__sub_8036E858(void *, M2C_UNK);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, s32, M2C_UNK);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
M2C_UNK TWindow__close(void *);
s32 TAdMultiChgGameModeGC__sub_8036DE10(void *, M2C_UNK, s32);

void update_card_confirm_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r3;

    if (handle_mode_selection__21TAdMultiChgGameModeGCFPv() == 0) {
        if (M2C_FIELD(arg0, void **, 0x34) != 0) {
            if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x34)) != 0) {
                temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, void **, 0x34));
                switch (temp_r3) {
                case 0:
                    close_window_30__21TAdMultiChgGameModeGCFPv(arg0);
                    close_window__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 5);
                    return;
                case 1:
                    close_window__21TAdMultiChgGameModeGCFPv(arg0);
                    TAdMultiChgGameModeGC__sub_8036E858(arg0, 3);
                    return;
                }
            }
        } else {
            TAdMultiChgGameModeGC__sub_8036E858(arg0, 8);
        }
    }
}

void close_windows_and_reopen__21TAdMultiChgGameModeGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    TAdMultiChgGameModeGC__sub_8036E2AC(arg0, 0);
    TAdMultiChgGameModeGC__sub_8036E19C(arg0, 4);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x30), TAdMultiChgGameModeGC__sub_8036DE10(arg0, 1, M2C_FIELD(arg0, s32 *, 0x24)), 3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E224
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0);
void close_window__21TAdMultiChgGameModeGCFPv(void* p);
int TWindow__close(void*);

void close_window_30__21TAdMultiChgGameModeGCFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x30);
    if ((u32) temp_r3 != 0U) {
        TWindow__close((void*)(temp_r3));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    close_window__21TAdMultiChgGameModeGCFPv((void*)(arg0));
}

void close_window__21TAdMultiChgGameModeGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x34) != 0) { TWindow__close((void*)(*(void**)((char*)p + 0x34))); *(int*)((char*)p + 0x34) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E5F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
int load_system_file(void* a0 = 0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E854(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);

void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(p) == 0) { load_system_file((void*)0); } }
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x20);
    if (temp_r4 & 1) {
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 9);
        return 1;
    }
    if (temp_r4 & 2) {
        return 0;
    }
    if (temp_r4 & 4) {
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 9);
        return 1;
    }
    if (temp_r4 & 8) {
        TAdMultiChgGameModeGC__sub_8036E858(arg0, 9);
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E6EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
int load_system_file(void* a0 = 0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E854(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);

void TAdMultiChgGameModeGC__sub_8036E6EC(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E750
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
int load_system_file(void* a0 = 0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E854(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);

void TAdMultiChgGameModeGC__sub_8036E750(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E810
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
int load_system_file(void* a0 = 0);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E854(void);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);

int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p) { return request_scene_change__21TAdMultiChgGameModeGCFv(p); }
void TAdMultiChgGameModeGC__sub_8036E830(void) {  }
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p) { return init_change_mode__21TAdMultiChgGameModeGCFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E854
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdMultiChgGameModeGC__sub_8036E854(void);
void load_system_on_mode_default__21TAdMultiChgGameModeGCFPv(void* p);
s32 handle_mode_selection__21TAdMultiChgGameModeGCFPv(void *arg0);
void TAdMultiChgGameModeGC__sub_8036E6EC(void);
void TAdMultiChgGameModeGC__sub_8036E750(void);
int request_scene_change_vt__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E830(void);
int init_change_mode__21TAdMultiChgGameModeGCFPv(void* p);
s32 TAdMultiChgGameModeGC__sub_8036E858(void *, s32);
int init_change_mode__21TAdMultiChgGameModeGCFv(void*);
int load_system_file(void* a0 = 0);
int request_scene_change__21TAdMultiChgGameModeGCFv(void*);

void TAdMultiChgGameModeGC__sub_8036E854(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036E9AC
#include "types.h"

extern "C" {

void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p);
void TAdMultiChgGameModeGC__sub_8036E9EC(void* p);
int TAdMultiChgGameModeGC__sub_8036E19C(void*, void*);
int close_window_30__21TAdMultiChgGameModeGCFPv(void*);
int handle_mode_selection__21TAdMultiChgGameModeGCFPv(void*);
int TAdMultiChgGameModeGC__sub_8036E858(void*, void*);

void confirm_mode_selection__21TAdMultiChgGameModeGCFPv(void* p) { if (handle_mode_selection__21TAdMultiChgGameModeGCFPv(p) == 0) { TAdMultiChgGameModeGC__sub_8036E858(p, (void*)1); } }

void TAdMultiChgGameModeGC__sub_8036E9EC(void* p) { close_window_30__21TAdMultiChgGameModeGCFPv(p); TAdMultiChgGameModeGC__sub_8036E19C(p, (void*)4); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8036EAB8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804F3A20[];

void *__dt__21TAdMultiChgGameModeGCFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F3A20;
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
