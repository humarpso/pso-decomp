#include "types.h"

extern "C" {
u8 * get_bml_motion(void *, int);
extern u8 *lbl_805D6808;
u8 *get_motion__17TOTrapChainSawKeyFi(s32 arg0);
u8 * get_bml_model(void *, int);
extern u8 *lbl_805D6808;
u8 *get_model__17TOTrapChainSawKeyFi(s32 arg0);
}

extern "C" {

u8 *get_motion__17TOTrapChainSawKeyFi(s32 arg0) {
    if ((void *) lbl_805D6808 != NULL) {
        return get_bml_motion(lbl_805D6808, arg0);
    }
    return NULL;
}
u8 *get_model__17TOTrapChainSawKeyFi(s32 arg0) {
    if ((void *) lbl_805D6808 != NULL) {
        return get_bml_model(lbl_805D6808, arg0);
    }
    return NULL;
}

}
