#include "types.h"

extern "C" {

void* init_needle_effect__10TObjPlayerFPv(void* a0);
int init_state_445__10TObjPlayerFPv(void);

    extern unsigned char fn_80109974[];
    extern unsigned char create_needle_effect[];
    extern unsigned char lbl_804E20FC[];
    extern const float lbl_805DE78C;
void* init_needle_effect__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E20FC; *(float*)((char*)a0 + 0x200) = lbl_805DE78C; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; *(int*)((char*)a0 + 0x208) = (int)create_needle_effect; return a0; }

}
