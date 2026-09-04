#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__22TWindowSubTradeMessageFv(void);

void render__22TWindowSubTradeMessageFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80339A80
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TWindowSubTradeMessageFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void TLobby__sub_802D29B8(void *);

extern M2C_UNK __vt__22TWindowSubTradeMessage[];

void *__dt__22TWindowSubTradeMessageFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubTradeMessage;
        TLobby__sub_802D29B8(arg0);
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80339AF8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubTradeMessage__ct(void *arg0, void *arg1, void *arg2);
void __ct__7TObjectFP7TObject(void *);
void TLobby__sub_802D29DC(void *);

extern M2C_UNK __vt__22TWindowSubTradeMessage[];
extern void *lbl_805D4278;

void *TWindowSubTradeMessage__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TWindowSubTradeMessage;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4278;
    M2C_FIELD(arg0, void **, 0x24) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    TLobby__sub_802D29DC(arg0);
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
#endif
#endif
