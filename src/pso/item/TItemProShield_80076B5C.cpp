#include "types.h"

extern "C" {

void *TItemProShield__sub_80076B64(void *arg0, s16 arg1);
s16 get_field_2b8__14TItemProShieldFPv(void* p);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

s16 get_field_2b8__14TItemProShieldFPv(void* p) { return *(s16*)((char*)p + 0x2b8); }

extern s32 lbl_804CC048[];

void *TItemProShield__sub_80076B64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804CC048;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
