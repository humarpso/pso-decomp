#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_selection__12TAdDialingGCFPv(u8 *arg0);
M2C_UNK TLobby__sub_803FB184(void *);

extern s32 lbl_805D5704;

void update_selection__12TAdDialingGCFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x68) = (s16) M2C_FIELD(arg0, s16 *, 0x30);
    if ((s32) lbl_805D5704 != 0) {
        M2C_FIELD(arg0, s16 *, 0x30) = 0;
        return;
    }
    TLobby__sub_803FB184(arg0 + 0x2C);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x68) != (s16) M2C_FIELD(arg0, s16 *, 0x30)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
}

}
