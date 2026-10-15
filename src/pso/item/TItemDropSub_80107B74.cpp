#include "types.h"

extern "C" {

s32 TItemDropSub__sub_80107B74(void);

extern void *TItemDropSub__instance;

s32 TItemDropSub__sub_80107B74(void) {
    if ((void *) TItemDropSub__instance != NULL) {
        return *(s32 *)((s8 *)TItemDropSub__instance + 0x1C);
    }
    return 0xA;
}

}
