#include "types.h"

extern "C" {

void init_select_txt__10TObjPlayerFPv(void* p);
int TAdSelectTxtGC__sub_802A16A8(void*);
int TObjPlayer__sub_8001BF40(void*);
int fn_802A14E4(void*);

void init_select_txt__10TObjPlayerFPv(void* p) { *(int*)(p) = 0; TAdSelectTxtGC__sub_802A16A8((char*)p + 0x4); TObjPlayer__sub_8001BF40((char*)p + 0x428); fn_802A14E4((char*)p + 0xc); }

}
