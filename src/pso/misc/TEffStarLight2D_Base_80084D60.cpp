#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void fn_801A25B4(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_8048E640[];

void *__dt__20TEffStarLight2D_BaseFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048E640;
        if (M2C_FIELD(arg0, void **, 0x90) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x90)); M2C_FIELD(arg0, M2C_UNK *, 0x90) = 0; }
        fn_801A25B4(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
