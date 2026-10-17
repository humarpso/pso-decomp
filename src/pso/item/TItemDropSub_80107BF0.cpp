#include "types.h"
#include "pso/TItemDropSub.h"

extern "C" {

void *TItemDropSub__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern s32 __vt__12TItemDropSub[];
extern void *TItemDropSub__class_name;
extern void * TItemDropSub__instance;

void *TItemDropSub__ct(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TItemDropSub;
    *(void * *)&((TItemDropSub *)arg0)->m_name = TItemDropSub__class_name;
    TItemDropSub__instance = arg0;
    *(u32 *)((s8 *)arg0 + 0x1C) = 10;
    return arg0;
}

}
