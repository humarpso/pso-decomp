#include "types.h"
struct E_803DD3C8 { u8 pad[0x10]; };

extern "C" {
extern E_803DD3C8 lbl_8058CE40[];
E_803DD3C8 *fn_803DD3C8(s32 i);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
E_803DD3C8 *fn_803DD3C8(s32 i) {
    return &lbl_8058CE40[i];
}
#pragma pop

}
