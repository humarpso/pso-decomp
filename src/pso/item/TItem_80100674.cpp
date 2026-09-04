#include "types.h"

extern "C" {

void TItem__sub_80100674(void);
void TItem__sub_80100678(void);
void TItem__sub_8010067C(void);
int TItem__sub_80100680(void);
void TItem__sub_80100688(void);
void TItem__sub_8010068C(void);
void TItem__sub_80100690(void);
void TItem__sub_80100694(void);
void TItem__sub_80100698(void);
void TItem__sub_80100758(void);
void TItem__sub_8010075C(void);
void TItem__sub_801007A8(void);
void TItem__sub_801007AC(void);
void TItem__sub_801007B0(void);
int TItem__sub_80100B8C(void* p);
void update_pickup_flag__5TItemFi(s32 arg0);
s32 TItem__sub_800FFE70(s32);
int TItem__sub_80100A40(void*);
s32 check_flag_400__20TWindowSubStatusDispFv();
s32 set_flag_1024__11TItemObjectFPv(s32);

void TItem__sub_80100674(void) {  }
void TItem__sub_80100678(void) {  }
void TItem__sub_8010067C(void) {  }
int TItem__sub_80100680(void) { return 0; }
void TItem__sub_80100688(void) {  }
void TItem__sub_8010068C(void) {  }
void TItem__sub_80100690(void) {  }
void TItem__sub_80100694(void) {  }
void TItem__sub_80100698(void) {  }

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

int TItem__sub_80100B8C(void* p) { return TItem__sub_80100A40((char*)p + 0x38); }

}
