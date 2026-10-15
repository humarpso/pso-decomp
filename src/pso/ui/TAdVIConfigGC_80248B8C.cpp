#include "types.h"

extern "C" {

s32 draw_with_layer__13TAdVIConfigGCFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TAdVIConfigGC__sub_80267704(s32);
s32 TWindowSubStatusDisp__sub_80248BE8(s32, s32, s32);

s32 draw_with_layer__13TAdVIConfigGCFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r31;

    TAdVIConfigGC__sub_80267704(0x23);
    temp_r31 = TWindowSubStatusDisp__sub_80248BE8(arg0, arg1, arg2);
    TAdVIConfigGC__sub_80267704(3);
    return temp_r31;
}

}
