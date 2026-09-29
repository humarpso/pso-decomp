#include "types.h"
extern "C" {
s32 TLobby__sub_80020004(s32, int, void *, int, int, int);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_80466074[];
extern u8 lbl_80466090[];
extern u8 lbl_804DC834[];
extern s32 lbl_805D6618;
extern s32 lbl_805D661C;
extern s32 lbl_805D6620;
void fn_8029FC88(void);
}

extern "C" {

void fn_8029FC88(void) {
    s32 r = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (r != 0) {
        r = TLobby__sub_80020004(r, 5, lbl_804DC834, 0, 0, 0);
    }
    lbl_805D6618 = r;
    lbl_805D661C = TLanguage__sub_801E4874(lbl_80466074);
    lbl_805D6620 = TLanguage__sub_801E4874(lbl_80466090);
}

}
