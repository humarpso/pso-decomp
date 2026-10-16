#include "types.h"
#include "pso/misc/TWindowSubSymbolChat.h"
#include "pso/ui/TAdEnterSerialAccessGC.h"

extern "C" {

s32 get_zero_vec2();

void TWindowSubSymbolChat::update_display(s32 arg0) {
    s32 temp_r31;

    temp_r31 = get_zero_vec2();
    TAdEnterSerialAccessGC::create_callback((void *)(get_zero_vec2()), (void *)temp_r31, (void *)arg0);
}

}
