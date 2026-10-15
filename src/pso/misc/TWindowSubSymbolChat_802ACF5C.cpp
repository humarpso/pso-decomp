#include "types.h"
#include "pso/misc/TWindowSubSymbolChat.h"

extern "C" {

s32 get_zero_vec2();
s32 create_callback__22TAdEnterSerialAccessGCFPvPvPv(s32, s32, s32);

void TWindowSubSymbolChat::update_display(s32 arg0) {
    s32 temp_r31;

    temp_r31 = get_zero_vec2();
    create_callback__22TAdEnterSerialAccessGCFPvPvPv(get_zero_vec2(), temp_r31, arg0);
}

}
