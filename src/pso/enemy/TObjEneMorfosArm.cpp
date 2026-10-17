#include "types.h"
#include "pso/enemy/TObjEneMorfosArm.h"
#include "pso/enemy/TObjEneMorfos.h"

extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjEneMorfosArm__ct(void *, void *, void *);
void TObjEneMorfosArm__sub_8033542C(void);

void TObjEneMorfosArm__sub_8033542C(void) {  }

extern s32 TObjEneMorfosArm__parent_morfos_instance;

void *TObjEneMorfosArm::create(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x104);
    if (o != NULL) {
        o = TObjEneMorfosArm__ct(o, arg0, arg1);
    }
    return o;
}

void TObjEneMorfosArm::init_global() {
    TObjEneMorfosArm__parent_morfos_instance = TObjEneMorfos::get_instance();
}

}
