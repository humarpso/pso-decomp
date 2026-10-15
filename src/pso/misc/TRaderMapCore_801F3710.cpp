#include "types.h"
#include "pso/misc/TRaderMapCore.h"

extern "C" {

    extern int TRaderMapCore__render_mode;
void TRaderMapCore::set_mode(int a0) { TRaderMapCore__render_mode = a0; }

}
