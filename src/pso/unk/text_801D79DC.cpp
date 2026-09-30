#include "types.h"
typedef struct Tbl_801D79DC {
    s32 v[3];
} Tbl_801D79DC;

extern "C" {
void TWindowActionPalette__sub_801C1CA8(void *, s32, s32, s32, u16);
u16 TWindowActionPalette__sub_801C1DE0(void *, s32, s32);
extern Tbl_801D79DC lbl_80447178;
void fn_801D79DC(u8 *arg0, s32 arg1);
}

extern "C" {

void fn_801D79DC(u8 *arg0, s32 arg1) {
    Tbl_801D79DC t = lbl_80447178;
    s32 id;
    s32 i;
    for (i = 0; i < 3; i++) {
        id = t.v[i];
        if (TWindowActionPalette__sub_801C1DE0(arg0 + 0x24, 1, id) == 0) {
            TWindowActionPalette__sub_801C1CA8(arg0 + 0x24, 1, id, 5, arg1);
            return;
        }
    }
}

}
