#include "types.h"

extern "C" {

void* setup_state__10TObjPlayerFPv(void* a0);
int set_status_flags__10TObjPlayerFPvUi(void*, void*);
int init_state_445__10TObjPlayerFPv(void);

    extern unsigned char fn_80109974[];
    extern unsigned char TObjPlayer__sub_802D52E8[];
    extern unsigned char lbl_804E1CA8[];
    extern const float lbl_805DE790;
void* setup_state__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E1CA8; *(float*)((char*)a0 + 0x200) = lbl_805DE790; set_status_flags__10TObjPlayerFPvUi(a0, (void*)32); *(int*)((char*)a0 + 0x208) = (int)TObjPlayer__sub_802D52E8; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; return a0; }

}
