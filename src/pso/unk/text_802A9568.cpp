#include "types.h"
struct E_802A9568 { s32 a; s32 b; };

extern "C" {
extern E_802A9568 *lbl_805D66A8;
E_802A9568 *fn_802A9568(s32 i);
}

extern "C" {

E_802A9568 *fn_802A9568(s32 i) {
    if (i >= 0x40) return 0;
    return &lbl_805D66A8[i];
}

}
