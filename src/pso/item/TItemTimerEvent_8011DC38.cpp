#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemTimerEvent__vt0(void *arg0, s16 arg1);
void destroy__11TItemMagSubFPvs(void *, int);
void free_to_heap__11TItemMagSubFPv(void *);

extern M2C_UNK __vt__15TItemTimerEvent[];

void *TItemTimerEvent__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TItemTimerEvent;
        destroy__11TItemMagSubFPvs(arg0, 0);
        if (arg1 > 0) {
            free_to_heap__11TItemMagSubFPv(arg0);
        }
    }
    return arg0;
}

}
