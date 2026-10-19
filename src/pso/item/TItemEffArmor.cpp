#include "types.h"
#include "pso/item/TItemEffArmor.h"

#include "pso/boss/TBoss4Type2.h"

TItemEffArmor::~TItemEffArmor() {
    TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)this + 0x1C)));
}
