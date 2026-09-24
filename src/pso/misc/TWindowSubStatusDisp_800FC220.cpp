#include "types.h"

struct E_800FC220 { f32 w; f32 x; };

extern "C" {
extern E_800FC220 *lbl_805D5398;
s32 TWindowSubStatusDisp__sub_800FC220(u8 c);
}

extern "C" {

void TWindowSubStatusDisp__sub_800FC248(void);

s32 TWindowSubStatusDisp__sub_800FC220(u8 c) {
    return (s32)lbl_805D5398[c - 0x20].w;
}

void TWindowSubStatusDisp__sub_800FC248(void) {  }

}
