#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D553C;
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32 arg0, s32 arg1);
}

extern "C" {

void update_menu_cursor__6TLobbyFv(void);
void *get_global_state__23TAdSinglePlyChrSelectGCFv();
s8 TLobby__sub_80132EC8();

extern s32 lbl_805D5544;

void update_menu_cursor__6TLobbyFv(void) {
    void *temp_r3;

    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 == NULL) {
        lbl_805D5544 = (s32) TLobby__sub_80132EC8();
        return;
    }
    if ((s8) M2C_FIELD(temp_r3, u8 *, 7) >= 5) {
        M2C_FIELD(temp_r3, u8 *, 7) = 1U;
    }
    lbl_805D5544 = (s32) (s8) M2C_FIELD(temp_r3, u8 *, 7);
}
s32 TAdSinglePlyChrSelectGC__sub_80132F2C(s32 arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD((lbl_805D553C + (arg0 * 4)), s32 *, 0) + (arg1 * 4)), s32 *, 0);
}

}
