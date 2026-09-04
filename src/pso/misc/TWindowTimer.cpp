#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1);
s32 create__12TWindowTimerFv(void);
s32 create_alt__12TWindowTimerFv(void);
void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2);
void update_chat_parts__12TWindowTimerFPv(u8 *arg0);
s32 TLobby__sub_8001DC24();
M2C_UNK TWindowChallengeResult__sub_80228DB4(s32, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_80229080(M2C_UNK *);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK TWindowSubStatusDisp__sub_8025AC50(s32, s32, M2C_UNK);
s32 TWindowTimer__ct();
void __dl__7TObjectFPv(void *);
s32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, s32);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 fn_80246CD0();
s32 fn_80246CDC();
M2C_UNK fn_80287AD8(s32);
M2C_UNK fn_80287B60(s32);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);
s32 is_active__19TWindowSubShortMailFv();
M2C_UNK reset_float_field__15TWindowHelpItemFPv(s32);

void update_chat_parts__12TWindowTimerFPv(u8 *arg0) {
    s32 var_r3;

    if (M2C_FIELD(arg0, s32 *, 0x60) & 1) {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0xA9);
    } else if ((is_active__19TWindowSubShortMailFv() != 0) || (fn_80246CD0() != 0) || (fn_80246CDC() != 0)) {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0xA8);
    } else {
        var_r3 = TWindowSubComCard__sub_8026CBB8(0x22);
    }
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(arg0 + 0x30, var_r3);
}

extern M2C_UNK lbl_8044FCE0[];
extern M2C_UNK lbl_805DD884;

void draw__12TWindowTimerFPvii(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    TWindowSubStatusDisp__sub_802290E0();
    TWindowSubStatusDisp__sub_80229080(&lbl_805DD884);
    TWindowChallengeResult__sub_80228DB4(arg1, 3);
    TWindowSubStatusDisp__sub_80229080(lbl_8044FCE0);
    TWindowChallengeResult__sub_80228DB4(arg2, 3);
    TWindowSubStatusDisp__sub_8025AC50(temp_r31, TLobby__sub_8001DC24(), 0x20);
    reset_float_field__15TWindowHelpItemFPv(temp_r31);
}

s32 create__12TWindowTimerFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowTimer__ct();
    }
    fn_80287AD8(var_r31);
    return var_r31;
}

s32 create_alt__12TWindowTimerFv(void) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x64);
    if (var_r31 != 0) {
        var_r31 = TWindowTimer__ct();
    }
    fn_80287B60(var_r31);
    return var_r31;
}

extern M2C_UNK __vt__12TWindowTimer[];

void *__dt__12TWindowTimerFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TWindowTimer;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
