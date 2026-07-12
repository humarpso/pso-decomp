#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2);
void TWindowOptionCtrl__sub_8034C4C4(void* p);
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK);
int TLobby__sub_80338534(void);
int TLobby__sub_80338608(void*);
M2C_UNK open_confirm_dialog__17TWindowOptionCtrlFPvii(void *, s32, s32);

void set_option_and_confirm__17TWindowOptionCtrlFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 != (s32) M2C_FIELD(arg0, s32 *, 0x28)) {
        M2C_FIELD(arg0, s32 *, 0x28) = arg1;
        open_confirm_dialog__17TWindowOptionCtrlFPvii(arg0, TAdSinglePlyChrSelectGC__sub_80132F2C(0x24), arg2);
    }
}

void TWindowOptionCtrl__sub_8034C4C4(void* p) { if (*(int*)((char*)p + 0x1c) == 6) { TLobby__sub_80338608((void*)1); TLobby__sub_80338534(); } }

}
