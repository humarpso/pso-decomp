#include "types.h"

extern "C" {

s32 mix_seed_checked__6TLobbyFi(s32 arg0);
s32 is_id_out_of_range__6TLobbyFi();
s32 mix_seed__6TLobbyFUs(s32);

s32 mix_seed_checked__6TLobbyFi(s32 arg0) {
    if ((arg0 == 0) || (is_id_out_of_range__6TLobbyFi() != 0)) {
        return 0;
    }
    return mix_seed__6TLobbyFUs(arg0);
}

}
