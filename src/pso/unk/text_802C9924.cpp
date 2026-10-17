#include "types.h"
#include "pso/unk/text_802C9924.h"

extern "C" {
u8 * TObjFish__sub_8001EDB0(void *, int);
extern u8 *lbl_805D6808;
u8 *fn_802C9924(s32 arg0) {
    if ((void *) lbl_805D6808 != NULL) {
        return TObjFish__sub_8001EDB0(lbl_805D6808, arg0);
    }
    return NULL;
}

}
