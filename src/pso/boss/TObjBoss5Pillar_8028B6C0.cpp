#include "types.h"
#include "pso/boss/TObjBoss5Pillar.h"

extern "C" {

void TObjBoss5Pillar__sub_8028B70C(void);
void TObjBoss5Pillar__sub_8028B710(void);
u8 *TObjBoss5Pillar__ct(u8 *arg0, u8 *arg1, u8 *arg2);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *TObjBoss5Pillar::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TObjBoss5Pillar__ct((u8 *)o, (u8 *)tl_02, (u8 *)arg0);
    }
    return o;
}

void TObjBoss5Pillar__sub_8028B70C(void) {  }
void TObjBoss5Pillar__sub_8028B710(void) {  }

}
