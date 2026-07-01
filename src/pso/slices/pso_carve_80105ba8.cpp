#include "types.h"

extern "C" {

void build_6x06_send_guild_card(void);

void *fn_80105BA8(void *arg0) {
    build_6x06_send_guild_card();
    *((u8 *)arg0 + 0) = 0xA2;
    *((u8 *)arg0 + 1) = 0x0A;
    return arg0;
}

}
