#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__15TObjBoss1CraterFPvPv(void *arg0, void *arg1);
void *TObjBoss1Crater__ct(void *, void *, void *, void *);
int is_count_below_limit__15TObjBoss1CraterFv(void *, void *);
void *__nw__7TObjectFUl(int);
void *get_instance__12TBoss1DragonFv(void);

void * create__15TObjBoss1CraterFPvPv(void *arg0, void *arg1) {
    void *x1;
    void *o;
    if (is_count_below_limit__15TObjBoss1CraterFv(arg0, arg1) == 0) {
        return NULL;
    }
    x1 = get_instance__12TBoss1DragonFv();
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
