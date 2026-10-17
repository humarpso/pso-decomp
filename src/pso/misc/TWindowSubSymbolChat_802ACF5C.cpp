#include "types.h"
#include "pso/misc/TWindowSubSymbolChat.h"
#include "pso/ui/TAdEnterSerialAccessGC.h"

extern "C" {

s32 get_zero_vec2();

void TWindowSubSymbolChat::update_display(s32 arg0) {
    s32 zero_vec2;

    zero_vec2 = get_zero_vec2();
    TAdEnterSerialAccessGC::create_callback((void *)(get_zero_vec2()), (void *)zero_vec2, (void *)arg0);
}

}
