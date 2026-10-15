#include "types.h"

extern "C" {

s32 close__6TMovieFis(s32 arg0, s16 arg1);

s32 __dl__FPv(s32);
s32 release__6TMovieFPv();
s32 free_buffer__6TMovieFPv(s32);
s32 stop_audio_streams__6TLobbyFv();

s32 close__6TMovieFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        release__6TMovieFPv();
        free_buffer__6TMovieFPv(arg0);
        stop_audio_streams__6TLobbyFv();
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
