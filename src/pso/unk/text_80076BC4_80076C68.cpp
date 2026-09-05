#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void fn_80076C68(s32 *arg0);
M2C_UNK set_field22__11TWindowCtrlFv();
s32 TWindowCtrl__sub_8024A26C();
s32 fn_80076CD0(s32 arg0);
}

extern "C" {

s32 TLobby__sub_80076BC8(void *);
s32 TWindowSubSymbolChat__sub_80076F88(void *);
s32 TWindowDD__sub_80348C78(void *);
void TWindowShortListCtrl__sub_80076D1C(void);
int TWindowKeyBoardSoft__sub_80076E2C(void);
void TAdSinglePlyChrSelectGC__sub_80076DF4(void* p, void* q);

void fn_80076C68(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    switch (temp_r0) {
    case 1:
        TLobby__sub_80076BC8((s8 *)arg0 + 4);
        return;
    case 2:
        TWindowDD__sub_80348C78((s8 *)arg0 + 4);
        return;
    case 3:
        TWindowSubSymbolChat__sub_80076F88((s8 *)arg0 + 4);
    case 0:
        return;
    }
}
s32 fn_80076CD0(s32 arg0) {
    if (TWindowCtrl__sub_8024A26C() == 0) {
        return 0;
    }
    set_field22__11TWindowCtrlFv();
    fn_80076C68((s32 *)((void *) (arg0)));
    return 1;
}

}
