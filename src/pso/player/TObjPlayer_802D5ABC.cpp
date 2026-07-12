#include "types.h"

extern "C" {

void* init_vtable_and_field200__10TObjPlayerFPv(void* a0);
int init_state_445__10TObjPlayerFPv(void);

    extern unsigned char lbl_804E1E08[];
    extern const float lbl_805DE790;
void* init_vtable_and_field200__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1E08; *(float*)((char*)a0 + 0x200) = lbl_805DE790; return a0; }

}
