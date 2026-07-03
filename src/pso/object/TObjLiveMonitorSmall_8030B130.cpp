#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2);
void __ct__15TObjLiveMonitorFv(void *);

extern M2C_UNK __vt__20TObjLiveMonitorSmall[];
extern void *lbl_805D40F0;

void *__ct__20TObjLiveMonitorSmallFv(void *arg0, void *arg1, void *arg2) {
    __ct__15TObjLiveMonitorFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjLiveMonitorSmall;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D40F0;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    return arg0;
}

}
