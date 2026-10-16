#include "types.h"
#include "pso/misc/TWindowDD.h"
#include "pso/misc/TLobby.h"

extern "C" {

u8 *resolve_matching_object__6TLobbyFv();

s32 TWindowDD::check_all_ready(s32 arg0) {
    s16 temp_r3_2;
    s32 temp_r3;
    s32 i;
    u8 *var_r31;

    var_r31 = resolve_matching_object__6TLobbyFv();
    temp_r3 = TLobby::get_object_type(arg0);
    if (var_r31 != NULL) {
        for (i = 0; i < temp_r3; i++) {
            temp_r3_2 = *(s16 *)((s8 *)var_r31 + 2);
            if (!(temp_r3_2 & 8) && (temp_r3_2 & 2)) {
                return 0;
            }
            var_r31 += 0x48;
        }
    }
    return 1;
}

}
