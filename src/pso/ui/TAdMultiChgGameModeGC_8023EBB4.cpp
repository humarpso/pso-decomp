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
M2C_UNK TAdMultiChgGameModeGC__sub_8023F654();

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void begin_transition__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 0xA;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_state_0x9__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 9;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void request_scene_change__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 8;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_change_game_mode__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 7;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_game_mode__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 6;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_game_mode_state__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 5;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void set_game_mode_changed__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 4;
    lbl_805D63C8 = 1;
}

extern s32 lbl_805D3848;
extern s32 lbl_805D63C8;

void init_change_mode__21TAdMultiChgGameModeGCFv(void) {
    TAdMultiChgGameModeGC__sub_8023F654();
    lbl_805D3848 = 0;
    lbl_805D63C8 = 1;
}

}
