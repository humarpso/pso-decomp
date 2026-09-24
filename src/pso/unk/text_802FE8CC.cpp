#include "types.h"
extern "C" {
extern char lbl_804E6208[];
extern char lbl_80474C64[];
extern s32 lbl_805D69C8;
extern s32 lbl_805D69CC;
s32 TObjEneDD__sub_800BB9AC(void *p);
s32 TLanguage__sub_801E4874(void *p);
void fn_802FE8CC(void);
}

extern "C" {

void fn_802FE8CC(void) {
    lbl_805D69C8 = TObjEneDD__sub_800BB9AC(lbl_804E6208);
    lbl_805D69CC = TLanguage__sub_801E4874(lbl_80474C64);
}

}
