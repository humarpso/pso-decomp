#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemLoad__sub_8010F8A4(void *arg0, s32 arg1, s32 arg2);
void TItemLoad__sub_8010F8E8(void *arg0);
s32 TItemLoad__sub_8010FAB4(void *, s32);
M2C_UNK TItemLoad__sub_8010FB0C(void *);
M2C_UNK TItemLoad__sub_8010FD80();
M2C_UNK TLobby__sub_8001EE48(s32);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(s32);
M2C_UNK TLobby__sub_803DE084(s32, s32);

void TItemLoad__sub_8010F8A4(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && (TItemLoad__sub_8010FAB4(arg0, arg2) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    }
}

extern s32 lbl_805D2BF0;

void TItemLoad__sub_8010F8E8(void *arg0) {
    s32 temp_r31;

    if (TLobby__sub_8001EEF4() == 1) {
        temp_r31 = TLobby__sub_8001EEFC(lbl_805D2BF0);
        TItemLoad__sub_8010FD80();
        TLobby__sub_803DE084(temp_r31, M2C_FIELD(arg0, s32 *, 0x24));
        TLobby__sub_8001EE48(lbl_805D2BF0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        TItemLoad__sub_8010FB0C(arg0);
    }
}

}
