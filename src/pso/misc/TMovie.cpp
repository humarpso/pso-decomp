#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TMovie.h"

extern "C" {

s32 close__6TMovieFis(s32 arg0, s16 arg1);

s32 __dl__FPv(s32);
s32 release__6TMovieFv();

s32 close__6TMovieFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        release__6TMovieFv();
        ((TMovie *)arg0)->free_buffer();
        TLobby::stop_audio_streams();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
