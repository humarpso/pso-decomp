#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80146740(void);
s32 TLobby__sub_80146748(void);
int TLobby__sub_8014677C(void);
int TLobby__sub_801467A0(void);
int TLobby__sub_80145DB4(void*);
s32 fn_804245DC();

int TLobby__sub_80146740(void) { return 0; }

extern s32 lbl_805D5710;

s32 TLobby__sub_80146748(void) {
    if ((s32) lbl_805D5710 != 0) {
        return fn_804245DC();
    }
    return 0;
}

int TLobby__sub_8014677C(void) { return TLobby__sub_80145DB4((void*)(1)); }
int TLobby__sub_801467A0(void) { return TLobby__sub_80145DB4((void*)(4)); }

}
