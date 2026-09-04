#include "types.h"

extern "C" {

void* init_shot_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804A2E80[];
    extern const float lbl_805DAD9C;
void* init_shot_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A2E80; *(float*)((char*)a0 + 0x200) = lbl_805DAD9C; *(float*)((char*)a0 + 0x1fc) = lbl_805DAD9C; *(float*)((char*)a0 + 0x1f8) = lbl_805DAD9C; return a0; }

}
