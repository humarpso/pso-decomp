#include "types.h"
extern "C" {
s32 isV2Mode__12TBoss1DragonFv(void);
s32 TObjEneDD__sub_800BB940(void *, void *);
s32 TObjEneDD__sub_800BB9AC(void *);
s32 TLanguage__sub_801E4874(void *);
extern u8 lbl_80435514[];
extern u8 lbl_8043552C[];
extern u8 lbl_80435548[];
extern u8 lbl_80481FBC[];
extern s32 lbl_805D4B50;
extern s32 lbl_805D4B54;
void fn_8002C190(void);
}

extern "C" {

void fn_8002C190(void) {
    switch (isV2Mode__12TBoss1DragonFv()) {
    case 0:
        lbl_805D4B50 = TObjEneDD__sub_800BB9AC(lbl_80481FBC);
        lbl_805D4B54 = TLanguage__sub_801E4874(lbl_80435514);
        break;
    case 1:
        lbl_805D4B50 = TObjEneDD__sub_800BB940(lbl_80481FBC, lbl_8043552C);
        lbl_805D4B54 = TLanguage__sub_801E4874(lbl_80435548);
        break;
    }
}

}
