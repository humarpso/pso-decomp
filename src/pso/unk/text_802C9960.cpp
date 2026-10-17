#include "types.h"
#include "pso/misc/TOTrapChainSawKey.h"

extern "C" {
u8 * get_bml_motion(void *, int);
extern u8 *lbl_805D6808;
u8 * get_bml_model(void *, int);
u8 *TOTrapChainSawKey::get_motion(s32 arg0) {
    if ((void *) lbl_805D6808 != NULL) {
        return get_bml_motion(lbl_805D6808, arg0);
    }
    return NULL;
}
u8 *TOTrapChainSawKey::get_model(s32 arg0) {
    if ((void *) lbl_805D6808 != NULL) {
        return get_bml_model(lbl_805D6808, arg0);
    }
    return NULL;
}

}
