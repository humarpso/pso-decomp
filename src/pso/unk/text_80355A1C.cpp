#include "types.h"

extern "C" {
s32 TBoss8Dragon__sub_8005D700(void *self);
extern u8 lbl_804792D8[];
extern void *lbl_805D6F10;
void TBoss8Dragon__sub_80355A20(void *self);
}

extern "C" {

void TBoss8Dragon__sub_80355A1C(void);

void TBoss8Dragon__sub_80355A1C(void) {  }
void TBoss8Dragon__sub_80355A20(void *self) {
    switch (TBoss8Dragon__sub_8005D700(self)) {
    case 0:
        lbl_805D6F10 = lbl_804792D8;
        break;
    }
}

}
