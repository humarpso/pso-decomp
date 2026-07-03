#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

extern void *tl_04;
void *__nw__7TObjectFUl(int);
void *TObjControl__ct(void *, void *);
void *TObjNpcCloakroomBase__ct(void *, void *, void *);

void * TObjNpcCloakroomBase__sub_80149698(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcCloakroomBase__ct(o2, o, arg0);
    }
    return o2;
}

}
