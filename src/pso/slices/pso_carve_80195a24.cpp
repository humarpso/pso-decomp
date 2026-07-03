#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__nw__7TObjectFUl(int);
void *__ct__12TQuestThreadFv(void *, void *, void *);

void *TObjQuestColALock2__vt14(void *arg0) {
    void *o = __nw__7TObjectFUl(0x194);
    if (o != NULL) {
        __ct__12TQuestThreadFv(o, M2C_FIELD(arg0, void **, 0xBC), M2C_FIELD(arg0, void **, 0xB0));
    }
    return o;
}

}
