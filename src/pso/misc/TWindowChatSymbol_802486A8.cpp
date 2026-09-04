#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowChatSymbol__sub_80248774(void);
void *__dt__17TWindowChatSymbolFv(void *arg0, s16 arg1);
void apply_symbol_from_card__17TWindowChatSymbolFPv(void *arg0);
void *destroy__17TWindowChatSymbolFPvs(void *arg0, s16 arg1);
s32 TWindowSubComCard__sub_80265BF8(s32);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 set_from_key__20TWindowSubSymbolChatFii(s32, s32);

extern M2C_UNK __vt__17TWindowChatSymbol[];

void *__dt__17TWindowChatSymbolFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TWindowChatSymbol;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TWindowChatSymbol__sub_80248774(void) {  }
void apply_symbol_from_card__17TWindowChatSymbolFPv(void *arg0) {
    set_from_key__20TWindowSubSymbolChatFii(M2C_FIELD(arg0, s32 *, 0x20), TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x1C)));
}

extern M2C_UNK lbl_804CE7D0[];

void *destroy__17TWindowChatSymbolFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE7D0;
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
