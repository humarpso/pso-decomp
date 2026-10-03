#include "pso/TAdMultiSelGameModeGC.h"

TAdMultiSelGameModeGC::~TAdMultiSelGameModeGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_80300770 {
    u8 pad0[0x1C];
    s32 state;
    void m0();
    void m1();
    void m2();
    void m3();
    void m4();
};
typedef void (Self_80300770::*Action_80300770)();

struct Ent_80300850 { u8 pad[0x364]; s32 f364; };

extern "C" {
extern s32 TAdMultiSelGameModeGC__data_805D69F0;
s32 TObjEneDolmOlm__sub_80300CF0(void);
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(u32);
Ent_80300850 *get_char_table_entry__23TAdSinglePlyChrSelectGCFi(int);
s32 get_max_difficulty_for_party_level(void);
}

extern "C" {
s32 TAdMultiChgGameModeGC__sub_8023E834(void *);
}

typedef struct Pos_803001B4 { s32 x, y; } Pos_803001B4;

typedef struct Pos3_803001B4 { Pos_803001B4 p[3]; } Pos3_803001B4;

typedef struct Arr3_803001B4 { s32 v[3]; } Arr3_803001B4;

extern "C" {
extern s32 TAdMultiSelGameModeGC__data_805D69F0;
s32 TAdMultiSelGameModeGC__sub_80300124(void *self, s32 mode, u32 idx);
s32 get_localized_text_entry(s32, s32);
void set_selected_index__17TWindowSubComCardFPvs(s32, s16);
void align_menu_entry_positions(s32);
void TWindowSubComCard__sub_80265E60(s32, f32);
void draw_text_gray__17TWindowSubComCardFiiii(s32, s32, s32, s32);
void forward_trade_action_default__16TObjCityMainWarpFPviii(s32, s32, s32, s32);
s32 check_room_seq_4__16TAdChrSelASlotGCFii(void *, u32);
s32 TAdMultiSelGameModeGC__sub_80300124(void *self, s32 mode, u32 idx);
extern Pos3_803001B4 lbl_80474ED4;
extern Arr3_803001B4 lbl_80474EEC;
extern Arr3_803001B4 lbl_80474EF8;
extern const f32 lbl_805DEF40;
s32 TAdMultiSelGameModeGC__sub_803001B4(void *arg0, s32 arg1);
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
        return idx < (u32)(get_max_difficulty_for_party_level() + 1) ? 1 : 0;
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

s32 TAdMultiSelGameModeGC__sub_803001B4(void *arg0, s32 arg1) {
    Pos3_803001B4 pos = lbl_80474ED4;
    u32 counts[3];
    u32 n;
    s32 r;
    u32 i;
    counts[0] = 4;
    counts[1] = 3;
    counts[2] = 2;
    {
    Arr3_803001B4 a = lbl_80474EEC;
    Arr3_803001B4 b = lbl_80474EF8;
    n = counts[arg1];
    r = check_room_seq_4__16TAdChrSelASlotGCFii(&pos.p[arg1], n);
    for (i = 0; i < n; i++) {
        if (TAdMultiSelGameModeGC__sub_80300124(arg0, arg1, i) != 0) {
            forward_trade_action_default__16TObjCityMainWarpFPviii(r, get_localized_text_entry(0x18, i + b.v[arg1]), 6, i + a.v[arg1]);
        } else {
            draw_text_gray__17TWindowSubComCardFiiii(r, get_localized_text_entry(0x18, i + b.v[arg1]), 6, i + a.v[arg1]);
        }
        TWindowSubComCard__sub_80265E60(r, lbl_805DEF40);
        set_selected_index__17TWindowSubComCardFPvs(r, a.v[arg1]);
        align_menu_entry_positions(r);
    }
    return r;
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

void run_task__21TAdMultiSelGameModeGCFv(Self_80300770 *self) {
    TAdMultiChgGameModeGC__sub_8023E834(self);
    static Action_80300770 tbl[5] = {
        &Self_80300770::m0, &Self_80300770::m1, &Self_80300770::m2,
        &Self_80300770::m3, &Self_80300770::m4,
    };
    (self->*tbl[self->state])();
}
s32 get_max_difficulty_for_party_level(void) {
    s32 m;
    s32 i;
    if (TAdMultiSelGameModeGC__data_805D69F0 == 2) {
        return 0;
    }
    m = TObjEneDolmOlm__sub_80300CF0();
    for (i = 0; i < 4; i++) {
        if (TAdMultiPlyChrSelectGC__sub_802C64D0(i) != 0) {
            s32 t = get_char_table_entry__23TAdSinglePlyChrSelectGCFi(i)->f364 + 1;
            if ((u32)t < (u32)m) {
                m = t;
            }
        }
    }
    if (m < 20) {
        return 0;
    }
    if (m < 40) {
        return 1;
    }
    return (m < 80 ? -1 : 0) + 3;
}

}
