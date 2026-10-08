#include "types.h"

extern "C" {

void reset_state__11TCameraCtrlFPv(void* a0);
int reset_behind_player__11TCameraCtrlFPv(void*);
int target_player0__11TCameraCtrlFi(void);

    extern const float lbl_805D8F7C;
void reset_state__11TCameraCtrlFPv(void* a0) { *(float*)((char*)a0 + 0x70) = lbl_805D8F7C; *(int*)((char*)a0 + 0x2c) = 0; *(int*)((char*)a0 + 0x34) = 0; target_player0__11TCameraCtrlFi(); reset_behind_player__11TCameraCtrlFPv(a0); }

}
