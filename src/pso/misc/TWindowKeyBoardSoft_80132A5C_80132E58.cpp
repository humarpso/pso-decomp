#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80132EC8(void);
s32 set_language__19TWindowKeyBoardSoftFc(s8 arg0);
M2C_UNK TLanguage__ct(s32);
M2C_UNK TWindowKeyBoardSoft__sub_80132DA0(s8);
M2C_UNK free_instance__19TWindowKeyBoardSoftFv();
M2C_UNK free_resources__19TWindowKeyBoardSoftFv();
void *get_global_state__23TAdSinglePlyChrSelectGCFv();

extern s32 lbl_805D5544;

s32 set_language__19TWindowKeyBoardSoftFc(s8 arg0) {
    void *temp_r3;

    if ((s32) lbl_805D5544 == arg0) {
        return 0;
    }
    free_instance__19TWindowKeyBoardSoftFv();
    free_resources__19TWindowKeyBoardSoftFv();
    temp_r3 = get_global_state__23TAdSinglePlyChrSelectGCFv();
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s8 *, 7) = arg0;
    }
    lbl_805D5544 = (s32)(s8) arg0;
    TWindowKeyBoardSoft__sub_80132DA0((s8) lbl_805D5544);
    TLanguage__ct(lbl_805D5544);
    return 1;
}

int TLobby__sub_80132EC8(void) { return 1; }

}
