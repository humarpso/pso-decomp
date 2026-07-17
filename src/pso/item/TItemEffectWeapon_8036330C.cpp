#include "types.h"

extern "C" {

void* init__17TItemEffectWeaponFPv(void* a0);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);
int TObjPlayer__sub_8012A884(void);

    extern unsigned char lbl_804F28E0[];
    extern const float lbl_805E0268;
void* init__17TItemEffectWeaponFPv(void* a0) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804F28E0; set_status_flags__10TObjPlayerFPvUi(a0, (void*)2); *(float*)((char*)a0 + 0x1fc) = lbl_805E0268; return a0; }

}
