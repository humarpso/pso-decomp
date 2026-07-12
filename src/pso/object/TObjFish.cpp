#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__8TObjFishFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void *);
void TParticleCtrl__sub_801A25B4(void *, int);

extern M2C_UNK __vt__8TObjFish[];

void *__dt__8TObjFishFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__8TObjFish;
        if (M2C_FIELD(arg0, void **, 0xA0) != NULL) { safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, void **, 0xA0)); M2C_FIELD(arg0, M2C_UNK *, 0xA0) = 0; }
        TParticleCtrl__sub_801A25B4(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
