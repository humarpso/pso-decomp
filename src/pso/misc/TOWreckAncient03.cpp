#include "types.h"
#include "pso/misc/TOWreckAncient03.h"
#include "pso/misc/TOWreckAncient03.h"
#include "pso/unk/text_8017E0D0.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void *__dt__14TOWreckAncientFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);

void *TOWreckAncient03__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TOWreckAncient03__ct((u8 *)o, (s32)arg0);
    }
    return o;
}

extern s32 __vt__16TOWreckAncient03[];

}
TOWreckAncient03::~TOWreckAncient03() {

}
