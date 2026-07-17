#include "types.h"

extern "C" {

void TObjPlayer__sub_801BF47C(void* p);
int update_action_palette__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BF4DC(void* p);
int clear_flag0_bit1__10TObjPlayerFPv(void* p);
int set_flag_2__10TObjPlayerFPv(void* p);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int set_flags__10TObjPlayerFPvUi(void*, int);
int set_slot__20TWindowActionPaletteFPvUc(void*);
int set_mode__20TWindowActionPaletteFPvUc(void*);

int update_action_palette__10TObjPlayerFPv(void* p) { return set_slot__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int TObjPlayer__sub_801BF4DC(void* p) { return set_mode__20TWindowActionPaletteFPvUc((char*)p + 0x4); }
int clear_flag0_bit1__10TObjPlayerFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi(p, 2); }
int set_flag_2__10TObjPlayerFPv(void* p) { return set_flags__10TObjPlayerFPvUi(p, 2); }

}
