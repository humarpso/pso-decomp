#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_802DCCA4 { u8 pad[0x2C]; s32 f2C; };

extern "C" {
void TKeyBoardControl__sub_8000F9CC(s32);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
void begin_transition__21TAdMultiChgGameModeGCFv();
void set_opening_movie_purpose(s32);
void TAdMultiPlyChrSelectGC__sub_802DC024(void *);
extern s32 lbl_805D68CC;
void TAdMultiPlyChrSelectGC__sub_802DCCA4(Obj_802DCCA4 *arg0);
}

extern "C" {

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TWindowShortListCtrl__check_controller_button(char *, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5594(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E00CC(s32);

extern char lbl_8050E3B8[];
extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x80));
        M2C_FIELD(arg0, u32 *, 0x80) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
        M2C_FIELD(arg0, u32 *, 0x94) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802C5594(M2C_FIELD(arg0, s32 *, 0x5C));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) != 0U) {
        disallow_rendering__7TObjectFv(M2C_FIELD(arg0, void **, 0x70));
    }
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    M2C_FIELD(arg0, s32 *, 0x30) = -1;
    if ((TAdMultiPlyChrSelectGC__sub_802E00CC(M2C_FIELD(arg0, s32 *, 0x6C)) == 0) && (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1B;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
        return;
    }
    if ((get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0xE) && (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x14)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1E;
    }
}
void TAdMultiPlyChrSelectGC__sub_802DCCA4(Obj_802DCCA4 *arg0) {
    lbl_805D68CC = get_field_118__22TAdEnterSerialAccessGCFv();
    switch (arg0->f2C) {
    case 2:
        break;
    case 0:
        set_opening_movie_purpose(1);
        TKeyBoardControl__sub_8000F9CC(3);
        break;
    case 1:
        TAdMultiPlyChrSelectGC__sub_802DC024(arg0);
        begin_transition__21TAdMultiChgGameModeGCFv();
        break;
    }
}

}
