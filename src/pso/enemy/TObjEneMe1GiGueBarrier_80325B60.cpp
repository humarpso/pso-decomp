#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1);
void clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(void *);
void __dl__7TObjectFPv(void *);
void __dt__10TObjMotionFv(void *, int);

extern M2C_UNK __vt__22TObjEneMe1GiGueBarrier[];

void *__dt__22TObjEneMe1GiGueBarrierFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEneMe1GiGueBarrier;
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { clear_flag388_bit80000__22TObjEneMe1GiGueBarrierFPv(M2C_FIELD(arg0, void **, 0xFC)); }
        __dt__10TObjMotionFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
