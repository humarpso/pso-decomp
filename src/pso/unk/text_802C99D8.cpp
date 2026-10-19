#include "types.h"

extern "C" {
void TLobby__sub_8001FE7C(void *, int);
extern void *lbl_805D6808;
extern s32 seabed_suiso_linked_switch_counts[5];
extern s32 seabed_suiso_switch_counts[5];

void fn_802C99D8(void) {
    s32 i;
    if (lbl_805D6808 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D6808, 1);
        lbl_805D6808 = NULL;
    }
    for (i = 0; i < 5; i++) {
        seabed_suiso_linked_switch_counts[i] = 0;
    }
    for (i = 0; i < 5; i++) {
        seabed_suiso_switch_counts[i] = 0;
    }
}

}
