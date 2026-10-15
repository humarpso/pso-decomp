#include "types.h"
#include "pso/TAdSelectGameModeGC.h"

extern "C" {

    extern int TAdSelectGameModeGC__cached_mode_value;
int TAdSelectGameModeGC::get_mode_data() {  return TAdSelectGameModeGC__cached_mode_value; }

}
