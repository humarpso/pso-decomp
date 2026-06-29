#include "types.h"

extern "C" {

s32 fn_80292EE4(s32 arg0);
s32 fn_80292E90();
s32 fn_80292F34(s32 arg0);
int fn_80292F5C(void* p);
int TCameraCtrl__sub_8006B330(void*);

s32 fn_80292EE4(s32 arg0) {
    if ((arg0 < fn_80292E90()) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
s32 fn_80292F34(s32 arg0) {
    if ((arg0 < 0x3C) || (arg0 > 0x8C9F)) {
        return 1;
    }
    return 0;
}
int fn_80292F5C(void* p) { return TCameraCtrl__sub_8006B330(p); }

}
