#ifndef PSO_CLASS_PACKAGE
#include "pso/TAdMultiSelGameModeGC.h"

TAdMultiSelGameModeGC::~TAdMultiSelGameModeGC() {}
#else
#if PSO_CLASS_PACKAGE == 0x802D5098
#include "types.h"

extern "C" {

void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(void* p);
void set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);
void set_field_100__22TAdMultiPlyChrSelectGCFPvi(void* p, s32 v);

void set_selection_state__21TAdMultiSelGameModeGCFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x700) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80300338
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void exit_keyboard_mode__21TAdMultiSelGameModeGCFv(void);
void update_transition_state__21TAdMultiSelGameModeGCFPv(void *arg0);
int TKeyBoardControl__sub_8000F9CC(int);
s32 begin_change_game_mode__21TAdMultiChgGameModeGCFv();
s32 begin_transition__21TAdMultiChgGameModeGCFv();
int reset_count__14TObjEneDolmOlmFv(void);

void exit_keyboard_mode__21TAdMultiSelGameModeGCFv(void) { reset_count__14TObjEneDolmOlmFv(); TKeyBoardControl__sub_8000F9CC(14); }
void update_transition_state__21TAdMultiSelGameModeGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        begin_transition__21TAdMultiChgGameModeGCFv();
        return;
    case 1:
        begin_change_game_mode__21TAdMultiChgGameModeGCFv();
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80300764
#include "types.h"

extern "C" {

void TAdMultiSelGameModeGC__sub_80300764(void* p);

void TAdMultiSelGameModeGC__sub_80300764(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
#endif
#endif
