#include "types.h"
typedef s32 M2C_UNK;

extern "C" {
M2C_UNK OSFreeToHeap(int, void *);
s32 get_network_config_mode();
M2C_UNK get_or_set_network_config_mode(int);
M2C_UNK get_or_set_network_config_backup_mode(int);
M2C_UNK set_network_config_card_channel(int);
extern s32 __OSCurrHeap;
extern s32 lbl_805D79B0;
extern u32 lobby_net_config_buffer;

s32 TLobby__sub_803F3D60(void) {
    if (get_network_config_mode() == 0) {
        return -1;
    }
    if (((s32) lbl_805D79B0 == 1) && ((u32) lobby_net_config_buffer != 0U)) {
        OSFreeToHeap((int) (__OSCurrHeap), (void *) (lobby_net_config_buffer));
        lobby_net_config_buffer = 0U;
    }
    get_or_set_network_config_mode((int) (0));
    get_or_set_network_config_backup_mode((int) (0));
    set_network_config_card_channel((int) (2));
    return 0;
}

}
