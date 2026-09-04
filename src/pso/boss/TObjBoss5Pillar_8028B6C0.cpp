#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TObjBoss5PillarFPv(void *arg0);
void TObjBoss5Pillar__sub_8028B70C(void);
void TObjBoss5Pillar__sub_8028B710(void);
void *TObjBoss5Pillar__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__15TObjBoss5PillarFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TObjBoss5Pillar__ct(o, tl_02, arg0);
    }
    return o;
}

void TObjBoss5Pillar__sub_8028B70C(void) {  }
void TObjBoss5Pillar__sub_8028B710(void) {  }

}
