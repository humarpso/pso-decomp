#include "types.h"

extern "C" {

int forward_render__20TWindowSubStatusDispFPv(void* p);
int TWindowSubStatusDisp__sub_80288050(void* p);
s32 TWindowSubStatusDisp__sub_80288070(s32 arg0, s16 arg1);
s32 __dl__FPv(s32 a0 = 0);
int update__20TWindowSubStatusDispFPvPv(void*);
int TWindowSubStatusDisp__sub_802879B0(void*);
s32 TWindowSubStatusDisp__sub_802879C4(s32 a0 = 0, s32 a1 = 0);

int forward_render__20TWindowSubStatusDispFPv(void* p) { return update__20TWindowSubStatusDispFPvPv(p); }
int TWindowSubStatusDisp__sub_80288050(void* p) { return TWindowSubStatusDisp__sub_802879B0(p); }
s32 TWindowSubStatusDisp__sub_80288070(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TWindowSubStatusDisp__sub_802879C4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
