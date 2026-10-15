#include "types.h"

extern "C" {

s32 check_all_ready__9TWindowDDFi(s32 arg0);
u8 *resolve_matching_object__6TLobbyFPv();
s32 get_object_type__6TLobbyFi(s32);

s32 check_all_ready__9TWindowDDFi(s32 arg0) {
    s16 temp_r3_2;
    s32 temp_r3;
    s32 i;
    u8 *var_r31;

    var_r31 = resolve_matching_object__6TLobbyFPv();
    temp_r3 = get_object_type__6TLobbyFi(arg0);
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
