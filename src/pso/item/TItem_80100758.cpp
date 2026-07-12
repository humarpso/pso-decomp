#include "types.h"

extern "C" {

void TItem__sub_80100758(void);
void TItem__sub_8010075C(void);
void TItem__sub_80100760(s32 arg0);
void TItem__sub_801007A8(void);
void TItem__sub_801007AC(void);
void TItem__sub_801007B0(void);
s32 TItemObject__sub_800FFE4C(s32);
s32 TWindowSubStatusDisp__sub_800FFE1C();
s32 fn_800FFE70(s32);

void TItem__sub_80100758(void) {  }
void TItem__sub_8010075C(void) {  }
void TItem__sub_80100760(s32 arg0) {
    if (TWindowSubStatusDisp__sub_800FFE1C() != 0) {
        TItemObject__sub_800FFE4C(arg0);
        return;
    }
    fn_800FFE70(arg0);
}
void TItem__sub_801007A8(void) {  }
void TItem__sub_801007AC(void) {  }
void TItem__sub_801007B0(void) {  }

}
