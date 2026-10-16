#include "types.h"
#include "pso/misc/TCameraCtrl.h"

extern "C" {

int target_player0__11TCameraCtrlFi(void);

    extern const float lbl_805D8F7C;
void TCameraCtrl::reset_state() { *(float*)((char*)this + 0x70) = lbl_805D8F7C; *(int*)((char*)this + 0x2c) = 0; *(int*)((char*)this + 0x34) = 0; target_player0__11TCameraCtrlFi(); reset_behind_player(); }

}
