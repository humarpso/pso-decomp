#include "types.h"

extern "C" {
u32 subtractive_rng_next(void *self);
u16 TAdSinglePlyChrSelectGC__sub_8007C584(void *self, u16 x);
}

extern "C" {

s32 init_single_player_chr_select__6TLobbyFPv(void* arg0);
s32 subtractive_rng_seed(void*, int);

s32 init_single_player_chr_select__6TLobbyFPv(void* arg0) {
    subtractive_rng_seed(arg0, 0);
    return (s32)arg0;
}
u16 TAdSinglePlyChrSelectGC__sub_8007C584(void *self, u16 x) {
    return (x * (subtractive_rng_next(self) >> 16)) >> 16;
}

}
