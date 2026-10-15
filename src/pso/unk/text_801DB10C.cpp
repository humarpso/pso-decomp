#include "types.h"

extern "C" {

void handle_cmd_88__9TProtocolFR6packet(void *arg0);
void handle_cmd_C4__9TProtocolFR6packet(void *arg0);
s32 bswap_cmd_88_body(s32 *);
s32 copy_entry_table(s32 *);
s32 fn_801DF42C(s32 *);
s32 fn_801DF4FC(s32 *);

void handle_cmd_88__9TProtocolFR6packet(void *arg0) {
    char sp8[0xC4];
    s32 (*temp_r12)(s32 *);

    copy_entry_table((s32 *) sp8);
    bswap_cmd_88_body((s32 *) sp8);
    temp_r12 = *(s32 (**)(s32 *))((s8 *)arg0 + 0xBC84);
    if (temp_r12 != NULL) {
        temp_r12((s32 *) sp8);
    }
}

void handle_cmd_C4__9TProtocolFR6packet(void *arg0) {
    char sp8[0x1A84];
    s32 (*temp_r12)(s32 *);

    fn_801DF4FC((s32 *) sp8);
    fn_801DF42C((s32 *) sp8);
    temp_r12 = *(s32 (**)(s32 *))((s8 *)arg0 + 0xBC50);
    if (temp_r12 != NULL) {
        temp_r12((s32 *) sp8);
    }
}

}
