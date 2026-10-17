#include "types.h"
#include "pso/item/TItemData_801146A4.h"

s16 TItemData__sub_801146A4(void *arg0) {
    return (s16) (*(s16 *)((s8 *)arg0 + 0xA) % 100);
}

s16 TItemData__sub_801146C0(void *arg0) {
    return (s16) (*(s16 *)((s8 *)arg0 + 8) % 100);
}

s16 TItemData__sub_801146DC(void *arg0) {
    return (s16) (*(s16 *)((s8 *)arg0 + 6) % 100);
}

s16 TItemData__sub_801146F8(void *arg0) {
    return (s16) (*(s16 *)((s8 *)arg0 + 4) % 100);
}
