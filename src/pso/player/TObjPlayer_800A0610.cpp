#include "types.h"

extern "C" {

void* init_vtable_and_field18__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_800D9718(void);

    extern unsigned char lbl_80490470[];
    extern const float lbl_805D9958;
void* init_vtable_and_field18__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_800D9718(); *(int*)((char*)a0 + 0x14) = (int)lbl_80490470; *(float*)((char*)a0 + 0x18) = lbl_805D9958; return a0; }

}
