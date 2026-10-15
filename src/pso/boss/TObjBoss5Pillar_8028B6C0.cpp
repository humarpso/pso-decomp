#include "types.h"
#include "pso/boss/TObjBoss5Pillar.h"

extern "C" {

void TObjBoss5Pillar__sub_8028B70C(void);
void TObjBoss5Pillar__sub_8028B710(void);
void *TObjBoss5Pillar__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *TObjBoss5Pillar::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TObjBoss5Pillar__ct(o, tl_02, arg0);
    }
    return o;
}

void TObjBoss5Pillar__sub_8028B70C(void) {  }
void TObjBoss5Pillar__sub_8028B710(void) {  }

}
