#include "types.h"

extern "C" {

s32 fn_800FFE1C();
s32 TItemObject__sub_800FFE4C(s32);
s32 fn_800FFE70(s32);
void fn_80100758(void);
void fn_8010075C(void);
void fn_801007A8(void);
void fn_801007AC(void);
void fn_801007B0(void);

void fn_80100758(void) {  }
void fn_8010075C(void) {  }
void fn_80100760(s32 arg0) {
    if (fn_800FFE1C() != 0) {
        TItemObject__sub_800FFE4C(arg0);
        return;
    }
    fn_800FFE70(arg0);
}
void fn_801007A8(void) {  }
void fn_801007AC(void) {  }
void fn_801007B0(void) {  }

}
