#include "types.h"

extern "C" {

void TObjPlayer__sub_8024ABDC(s32 arg0);
int get_flag_bit4__11TWindowCtrlFv(void*);
void close_window_if_active(void* p);

void close_window_if_active(void* p) { if (get_flag_bit4__11TWindowCtrlFv(p) == 0) { TObjPlayer__sub_8024ABDC((s32)p); } }

}
