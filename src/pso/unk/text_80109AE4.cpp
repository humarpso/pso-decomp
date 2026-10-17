#include "types.h"
#include "pso/TItemEffNeedle.h"

extern "C" {

u8 *find_entity_by_id(u16);
s32 VecCopy__FP3VecPC3Vec(void *, s32, s32);
void queue_destruction__7TObjectFv(void *arg0);

int TItemEffNeedle::vfunc_6() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r5;
    u8 *entity;

    entity = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x50));
    if (entity == NULL) {
        queue_destruction__7TObjectFv(arg0);
        return 0;
    }
    temp_r5 = *(s32 *)((s8 *)entity + 0xA4);
    VecCopy__FP3VecPC3Vec(arg0 + 0x30, temp_r5 + (s32)(*(s32 *)((s8 *)arg0 + 0x54) * 0x2C) + 0x1C, temp_r5);
    *(s32 *)((s8 *)arg0 + 0x48) = (s32) (*(s32 *)((s8 *)arg0 + 0x5C) + *(s32 *)((s8 *)entity + 0x60));
    return 1;
}

}
