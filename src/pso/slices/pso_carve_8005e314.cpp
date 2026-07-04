#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern M2C_UNK lbl_804882BC[];
void TNowLoading__sub_80087660(void *, void *);
void TParticleCtrl__sub_80088010(void *);

void fn_8005E314(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x724) != NULL) {
        TNowLoading__sub_80087660(M2C_FIELD(arg0, void **, 0x724), lbl_804882BC);
        TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0x724));
    }
    if (M2C_FIELD(arg0, void **, 0x728) != NULL) {
        TNowLoading__sub_80087660(M2C_FIELD(arg0, void **, 0x728), lbl_804882BC);
        TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0x728));
    }
    if (M2C_FIELD(arg0, void **, 0x72C) != NULL) {
        TNowLoading__sub_80087660(M2C_FIELD(arg0, void **, 0x72C), lbl_804882BC);
        TParticleCtrl__sub_80088010(M2C_FIELD(arg0, void **, 0x72C));
    }
}

}
