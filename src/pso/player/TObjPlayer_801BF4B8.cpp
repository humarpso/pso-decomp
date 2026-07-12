#include "types.h"

extern "C" {

void TObjPlayer__sub_801BF47C(void* p);
int update_action_palette__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801BF4DC(void* p);
int clear_flag0_bit1__10TObjPlayerFPv(void* p);
int set_flag_2__10TObjPlayerFPv(void* p);
int TAdRicoRing__sub_8001BEE8(void*, int);
int TObjPlayer__sub_8001BED8(void*, int);
int TWindowActionPalette__sub_8013DF4C(void*);
int TWindowActionPalette__sub_8013DF54(void*);

int update_action_palette__10TObjPlayerFPv(void* p) { return TWindowActionPalette__sub_8013DF4C((char*)p + 0x4); }
int TObjPlayer__sub_801BF4DC(void* p) { return TWindowActionPalette__sub_8013DF54((char*)p + 0x4); }
int clear_flag0_bit1__10TObjPlayerFPv(void* p) { return TAdRicoRing__sub_8001BEE8(p, 2); }
int set_flag_2__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_8001BED8(p, 2); }

}
