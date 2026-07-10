#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__16TObjEneBm5GibonUFPv(void *arg0);
void *TObjEneBm5GibonU__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_04;

void *create__16TObjEneBm5GibonUFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x568);
    if (o != NULL) {
        o = TObjEneBm5GibonU__ct(o, tl_04, arg0);
    }
    return o;
}

}
