#include "pso/TAdMultiSelGameModeGC.h"

TAdMultiSelGameModeGC::~TAdMultiSelGameModeGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 TAdMultiSelGameModeGC__data_805D69F0;
s32 TAdMultiSelGameModeGC__sub_80300850(void);
s32 TAdMultiSelGameModeGC__sub_80300124(void *self, s32 mode, u32 idx);
}

extern "C" {

void TAdMultiSelGameModeGC__sub_80300764(void* p);
void exit_keyboard_mode__21TAdMultiSelGameModeGCFv(void);
void render__21TAdMultiSelGameModeGCFv(void);
void update_transition_state__21TAdMultiSelGameModeGCFPv(void *arg0);
int TKeyBoardControl__sub_8000F9CC(int);
s32 begin_change_game_mode__21TAdMultiChgGameModeGCFv();
s32 begin_transition__21TAdMultiChgGameModeGCFv();
int reset_count__14TObjEneDolmOlmFv(void);

void render__21TAdMultiSelGameModeGCFv(void) {  }

s32 TAdMultiSelGameModeGC__sub_80300124(void *self, s32 mode, u32 idx) {
    switch (mode) {
    case 0:
        return idx < (u32)(TAdMultiSelGameModeGC__sub_80300850() + 1) ? 1 : 0;
    case 1:
        return 1;
    case 2:
        if (TAdMultiSelGameModeGC__data_805D69F0 == 1) {
            return idx == 0 ? 1 : 0;
        }
        return 1;
    default:
        return 0;
    }
}

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

void TAdMultiSelGameModeGC__sub_80300764(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
