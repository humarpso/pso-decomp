#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__17TObjItemNameEntryFPv(void *arg0);
void *TObjItemNameEntry__ct(void *, void *);
void *__nw__7TObjectFUl(int);

void *create__17TObjItemNameEntryFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = TObjItemNameEntry__ct(o, arg0);
    }
    return o;
}

}
