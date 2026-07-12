#include "types.h"

extern "C" {

void* init_vtable_1f8__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804ED390[];
    extern const float lbl_805DF680;
void* init_vtable_1f8__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED390; *(float*)((char*)a0 + 0x1f8) = lbl_805DF680; return a0; }

}
