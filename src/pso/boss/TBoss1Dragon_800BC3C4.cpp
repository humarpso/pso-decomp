#include "types.h"

extern "C" {
void fn_800BC3E8(u8 *arg0, u8 *arg1);
u8 is_area_attack_target_eligible(void *arg0, u32 arg1);
}

extern "C" {

int get_position__12TBoss1DragonFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int get_position__12TBoss1DragonFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

void fn_800BC3E8(u8 *arg0, u8 *arg1) {
    *(void **)((s8 *)arg0 + 0xAC) = arg1;
    *(s16 *)((s8 *)arg0 + 0x28) = (s16) *(s16 *)((s8 *)(*(void **)((s8 *)arg0 + 0xAC)) + 0x28);
}
u8 is_area_attack_target_eligible(void *arg0, u32 arg1) {
    return !(arg1 & 0x04000000);
}

}
