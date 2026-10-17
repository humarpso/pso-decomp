#include "types.h"
#include "pso/object/TObjCHTimeWin.h"

extern "C" {

    extern int TObjCHTimeWin__timer_value;
void set_challenge_time_window_timer(int a0) { TObjCHTimeWin__timer_value = a0; }

}
