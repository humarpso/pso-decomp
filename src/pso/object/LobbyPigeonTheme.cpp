#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

s32 filter_lobby_pigeon_theme(void);

s32 filter_lobby_pigeon_theme(void) {
    s32 var_r3;

    var_r3 = TLobby::get_filtered_event_theme();
    switch (var_r3) {
    case 3:
    case 9:
        var_r3 = 3;
        break;
    }
    return var_r3;
}

}
