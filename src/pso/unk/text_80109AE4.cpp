#include "types.h"

extern "C" {

s32 TItemEffNeedle__vt4(u8 *arg0);
u8 *find_entity_by_id(u16);
s32 VecCopy__FP3VecPC3Vec(void *, s32, s32);
s32 queue_destruction__7TObjectFv(void *);

s32 TItemEffNeedle__vt4(u8 *arg0) {
    s32 temp_r5;
    u8 *temp_r3;

    temp_r3 = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x50));
    if (temp_r3 == NULL) {
        queue_destruction__7TObjectFv(arg0);
        return 0;
    }
    temp_r5 = *(s32 *)((s8 *)temp_r3 + 0xA4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x30, temp_r5 + (s32)(*(s32 *)((s8 *)arg0 + 0x54) * 0x2C) + 0x1C, temp_r5);
    *(s32 *)((s8 *)arg0 + 0x48) = (s32) (*(s32 *)((s8 *)arg0 + 0x5C) + *(s32 *)((s8 *)temp_r3 + 0x60));
    return 1;
}

}
