#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TLobby__sub_802796FC(void);
void TLobby__sub_80279708(void);
void *__dt__17TWindowSubGameEndFv(void *arg0, s16 arg1);
void init_char_select__16TKeyBoardControlFv(void);
void render__17TWindowSubGameEndFv(void);
s32 TAdSinglePlyChrSelectGC__sub_801FF4F0();
s32 TKeyBoardControl__sub_8000F91C(s32);
s32 TKeyBoardControl__sub_8000F9CC(s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void close__17TWindowSubComCardFPv(void *);
s32 init__23TAdSinglePlyChrSelectGCFv();
s32 is_split_screen();

void init_char_select__16TKeyBoardControlFv(void) {
    if (is_split_screen() != 0) {
        TAdSinglePlyChrSelectGC__sub_801FF4F0();
        TKeyBoardControl__sub_8000F9CC(7);
        return;
    }
    init__23TAdSinglePlyChrSelectGCFv();
    TKeyBoardControl__sub_8000F91C(9);
    TKeyBoardControl__sub_8000F9CC(0x12);
}
void render__17TWindowSubGameEndFv(void) {  }

extern M2C_UNK __vt__17TWindowSubGameEnd[];

void *__dt__17TWindowSubGameEndFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowSubGameEnd;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

    extern int lbl_805D6480;
void TLobby__sub_802796FC(void) { lbl_805D6480 = 0; }

    extern int lbl_805D6480;
void TLobby__sub_80279708(void) { lbl_805D6480 = 0; }

}
