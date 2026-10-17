#include "types.h"
struct G_80048118 { u8 pad[0x18]; s32 arr[1]; };

extern "C" {
extern G_80048118 *lbl_805D4CDC;
s32 TObjVoloptPillar__sub_80048118(s32 i);
s32 TObjVoloptPillar__sub_80048118(s32 i) {
    return lbl_805D4CDC->arr[i];
}

}
