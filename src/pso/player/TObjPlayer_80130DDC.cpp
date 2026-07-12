#include "types.h"

extern "C" {

void* init_object_effect__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char fn_80109440[];
    extern unsigned char lbl_804A6BD0[];
    extern const float lbl_805DB024;
    extern const float lbl_805DB030;
void* init_object_effect__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A6BD0; *(int*)((char*)a0 + 0x1f0) = 0; *(int*)((char*)a0 + 0x1ec) = (int)fn_80109440; *(float*)((char*)a0 + 0x1e4) = lbl_805DB030; *(float*)((char*)a0 + 0x200) = lbl_805DB024; *(float*)((char*)a0 + 0x1fc) = lbl_805DB024; *(float*)((char*)a0 + 0x1f8) = lbl_805DB024; *(int*)((char*)a0 + 0x204) = 0; return a0; }

}
