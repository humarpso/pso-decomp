#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TBoss4Zako__vt4(void *arg0);
void TBoss4Zako__sub_8005C218(void *);
void TBoss4Zako__sub_8005C368(void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, void *);

struct VOff_8005C450_arg0 { char pad_0[0x38]; char f_38[1]; };

void TBoss4Zako__vt4(void *arg0) {
    struct VOff_8005C450_arg0 *self = (struct VOff_8005C450_arg0 *)arg0;
    TBoss4Zako__sub_8005C368(arg0);
    TBoss4Zako__sub_8005C218(arg0);
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 68), self->f_38);
    TBoss4Zako__sub_803D8910(self->f_38, (void *)((char *)arg0 + 908));
}

}
