#include "types.h"

extern "C" {

void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1);
void clear_counter__10TObjPlayerFPv(void* p);
void set_cancel_flag__10TObjPlayerFPv(void* p);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*);

    extern int lbl_805D500C;
void set_fields_24_34_from_global__10TObjPlayerFPvPv(void* a0, void* a1) { *(int*)((char*)a0 + 0x34) = TObjFish__sub_8001EDC4((void*)(lbl_805D500C)); *(int*)((char*)a0 + 0x24) = TObjFish__sub_8001EDB0((void*)(lbl_805D500C), a1); }

void clear_counter__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 0; }
void set_cancel_flag__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x340) = 1; }

}
