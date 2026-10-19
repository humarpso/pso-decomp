#include "types.h"
#include "pso/item/TItemEffArmor.h"
#include "pso/item/TItemEffArmor.h"
#include "pso/boss/TBoss4Type2.h"

extern "C" {

void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern s32 __vt__13TItemEffArmor[];

}
TItemEffArmor::~TItemEffArmor() {
    TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)this + 0x1C)));
}
extern "C" {

}
