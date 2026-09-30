#include "types.h"

struct Ctrl_801E352C {
    u8 pad[4];
    u32 *data;
};

extern "C" {
void TObjCMHairMenu__sub_801E35C4(void *, s32);
void TWindowCtrlMain__sub_801E352C(Ctrl_801E352C *c, s32 n, s32 flags);
}

extern "C" {

int fn_801E3330(void);
void fn_801E3518(void);
void fn_801E3524(int a0);
void TCameraCtrl__sub_801E32E4(void);
int TObjPlayer__sub_803DAD28(void*);
int TObjPlayer__sub_803E2810(void*, void*, void*);

int fn_801E3330(void) { return 0; }

    extern int lbl_805D3580;
void fn_801E3518(void) { lbl_805D3580 = 12; }

    extern int lbl_805D3580;
void fn_801E3524(int a0) { lbl_805D3580 = a0; }
void TWindowCtrlMain__sub_801E352C(Ctrl_801E352C *c, s32 n, s32 flags) {
    s32 i;
    u32 x;
    u32 *p;
    if (!(flags & 2)) {
        TObjCMHairMenu__sub_801E35C4(c, n);
        return;
    }
    p = c->data;
    for (i = 0; i < n; i++) {
        x = *p;
        *p = (x << 8) | (x >> 24);
        p++;
    }
    TObjCMHairMenu__sub_801E35C4(c, n);
    {
    u32 *q = c->data;
    u32 y;
    for (i = 0; i < n; i++) {
        y = *q;
        *q = (y >> 8) | (y << 24);
        q++;
    }
    }
}

}
