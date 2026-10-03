#include "types.h"

struct Ent_801D2640 { u8 pad[8]; f32 f; u8 pad2[4]; };
struct Obj_801D2640 {
    u8 pad[0xB8];
    s16 idx;
    u8 pad2[0xD8 - 0xBA];
    Ent_801D2640 *arr;
};
extern "C" {
void set_flags_B0__10TObjPlayerFPvUi(void *, u32);

f32 TObjPlayer__sub_801D2640(Obj_801D2640 *p) {
    return p->arr[p->idx].f;
}

void TObjPlayer__sub_801D2658(u8 *p, f32 value) {
    *(f32 *)(p + 0xD4) = value;
    set_flags_B0__10TObjPlayerFPvUi(p, 0x200U);
}

int TObjPlayer__sub_801D2680(void *p) {
    return (*(u32 *)((char *)p + 0xB0) >> 6) & 1;
}

void set_action_flag__10TObjPlayerFPv(void *p) {
    *(u32 *)((char *)p + 0xB0) |= 0x80;
}
}
