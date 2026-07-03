#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * TObjBoss1Crater__sub_8002C6B4(void *arg0, void *arg1);
void *TObjBoss1Crater__ct(void *, void *, void *, void *);
int TObjBoss1Crater__sub_8002C694(void *, void *);
void *__nw__7TObjectFUl(int);
void *fn_8002AA74(void);

void * TObjBoss1Crater__sub_8002C6B4(void *arg0, void *arg1) {
    void *x1;
    void *o;
    if (TObjBoss1Crater__sub_8002C694(arg0, arg1) == 0) {
        return NULL;
    }
    x1 = fn_8002AA74();
    if (x1 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TObjBoss1Crater__ct(o, arg0, x1, arg1);
    }
    return o;
}

}
