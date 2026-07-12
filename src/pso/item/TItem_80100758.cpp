#include "types.h"

extern "C" {

void TItem__sub_80100758(void);
void TItem__sub_8010075C(void);
void update_pickup_flag__5TItemFi(s32 arg0);
void TItem__sub_801007A8(void);
void TItem__sub_801007AC(void);
void TItem__sub_801007B0(void);
s32 set_flag_1024__11TItemObjectFPv(s32);
s32 check_flag_400__20TWindowSubStatusDispFv();
s32 TItem__sub_800FFE70(s32);

void TItem__sub_80100758(void) {  }
void TItem__sub_8010075C(void) {  }
void update_pickup_flag__5TItemFi(s32 arg0) {
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        set_flag_1024__11TItemObjectFPv(arg0);
        return;
    }
    TItem__sub_800FFE70(arg0);
}
void TItem__sub_801007A8(void) {  }
void TItem__sub_801007AC(void) {  }
void TItem__sub_801007B0(void) {  }

}
