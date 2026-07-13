#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TObjLiveMonitorFPv(void *arg0);
void *__ct__15TObjLiveMonitorFv(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__15TObjLiveMonitorFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = __ct__15TObjLiveMonitorFv(o, arg0);
    }
    return o;
}

}
