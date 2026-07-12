#include "types.h"

extern "C" {

void* set_mode_floats__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_80120D50(void);

    extern unsigned char lbl_804ED298[];
    extern const float lbl_805DF660;
    extern const float lbl_805DF678;
void* set_mode_floats__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_80120D50(); *(int*)((char*)a0 + 0x18) = (int)lbl_804ED298; *(float*)((char*)a0 + 0x1f8) = lbl_805DF660; *(float*)((char*)a0 + 0x1fc) = lbl_805DF678; return a0; }

}
