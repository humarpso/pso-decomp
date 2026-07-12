#include "types.h"

extern "C" {

void* TObjPlayer__sub_80129CA0(void* a0);
int TObjPlayer__sub_8012A884(void);

    extern unsigned char fn_80108D2C[];
    extern unsigned char fn_8010A710[];
    extern unsigned char fn_8011BE50[];
    extern unsigned char lbl_804A4548[];
    extern const float lbl_805DAE48;
    extern const float lbl_805DAE5C;
void* TObjPlayer__sub_80129CA0(void* a0) { TObjPlayer__sub_8012A884(); *(int*)((char*)a0 + 0x18) = (int)lbl_804A4548; *(float*)((char*)a0 + 0x1fc) = lbl_805DAE48; *(int*)((char*)a0 + 0x1ec) = (int)fn_80108D2C; *(int*)((char*)a0 + 0x200) = 0; *(int*)((char*)a0 + 0x1f4) = (int)fn_8010A710; *(int*)((char*)a0 + 0x1f0) = (int)fn_8011BE50; *(float*)((char*)a0 + 0x1e4) = lbl_805DAE5C; return a0; }

}
