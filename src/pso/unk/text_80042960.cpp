#include "types.h"
struct G_80042960 { u8 pad[0x18]; s32 arr[1]; };

extern "C" {
extern G_80042960 *lbl_805D4C9C;
s32 fn_80042960(s32 i);
}

extern "C" {

s32 fn_80042960(s32 i) {
    return lbl_805D4C9C->arr[i];
}

}
