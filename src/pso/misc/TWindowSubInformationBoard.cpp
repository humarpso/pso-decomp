#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__26TWindowSubInformationBoardFv(void);

void render__26TWindowSubInformationBoardFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8034C224
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_if_current__26TWindowSubInformationBoardFUi(u32 arg0);

extern u32 lbl_805D6E9C;

void clear_if_current__26TWindowSubInformationBoardFUi(u32 arg0) {
    if ((u32) lbl_805D6E9C == arg0) {
        lbl_805D6E9C = 0U;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034CC00
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_page__26TWindowSubInformationBoardFPvi(void *arg0, s32 arg1);
M2C_UNK send_and_handle__6TLobbyFPvii(s32, s32, M2C_UNK);
s32 TLobby__sub_8034C1FC();

void set_page__26TWindowSubInformationBoardFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (((s32) M2C_FIELD(arg0, s32 *, 0x24) != arg1) && (arg1 != -1)) {
        temp_r3 = TLobby__sub_8034C1FC();
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x24) = arg1;
            send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, s32 *, 0x34), temp_r3 + (arg1 * 0xBC) + 0x14, 0x80);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034CCC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_keyboard__26TWindowSubInformationBoardFi(s32 arg0);
s32 TKeyBoardControl__ct(s32, s32, M2C_UNK, M2C_UNK, M2C_UNK, s32);
M2C_UNK set_sub_position__15TWindowMakeTeamFPvPv(s32, s32);
M2C_UNK get_keyboard_field_6c__15TWindowMakeTeamFPv(s32, s32);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK destroy_keyboard__17TWindowSubComCardFPv(s32);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(s32);
s32 get_card_window_field__6TLobbyFv();

extern s32 lbl_805D53A0;

s32 open_keyboard__26TWindowSubInformationBoardFi(s32 arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x2C);
    if (var_r31 != 0) {
        var_r31 = TKeyBoardControl__ct(var_r31, arg0, 0xC6, 5, 4, lbl_805D53A0);
    }
    get_keyboard_field_6c__15TWindowMakeTeamFPv(var_r31, get_card_window_field__6TLobbyFv());
    set_sub_position__15TWindowMakeTeamFPvPv(var_r31, TWindowSubComCard__sub_8026CBB8(0xBB));
    set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(var_r31);
    destroy_keyboard__17TWindowSubComCardFPv(var_r31);
    return var_r31;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034CD50
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void show_card_a7__26TWindowSubInformationBoardFPv(void *arg0);
M2C_UNK set_window_mode_4__6TLobbyFPvii(M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

extern M2C_UNK lbl_80478C34[];

void show_card_a7__26TWindowSubInformationBoardFPv(void *arg0) {
    M2C_UNK temp_r3;
    temp_r3 = TWindowSubComCard__sub_8026CBB8(0xA7);
    set_window_mode_4__6TLobbyFPvii(temp_r3, lbl_80478C34, 1);
    M2C_FIELD(arg0, s32 *, 0x24) = -1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034D27C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__26TWindowSubInformationBoardFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void close__17TWindowSubComCardFPv(void *);
void clear_if_current__26TWindowSubInformationBoardFUi(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__26TWindowSubInformationBoard[];

void *__dt__26TWindowSubInformationBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TWindowSubInformationBoard;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        clear_if_current__26TWindowSubInformationBoardFUi((s8 *)arg0 + 0x40);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8034D358
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubInformationBoard__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__26TWindowSubInformationBoard[];
extern void *lbl_805D4348;

void *TWindowSubInformationBoard__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TWindowSubInformationBoard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4348;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    M2C_FIELD(arg0, void **, 0x28) = arg1;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#endif
