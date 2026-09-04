#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__10TBoss6RockFPv(void *arg0);
void render__10TBoss6RockFv(void* p);
void *TBoss6Rock__ct(void *, void *, void *);
int TBoss6Rock__sub_803546B0(void*);
void *__nw__7TObjectFUl(int);
int is_active__10TBoss6RockFv(void*);

void render__10TBoss6RockFv(void* p) { if (is_active__10TBoss6RockFv(p) != 0) { TBoss6Rock__sub_803546B0(p); } }

extern void *tl_02;

void *create__10TBoss6RockFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE8);
    if (o != NULL) {
        o = TBoss6Rock__ct(o, tl_02, arg0);
    }
    return o;
}

}
