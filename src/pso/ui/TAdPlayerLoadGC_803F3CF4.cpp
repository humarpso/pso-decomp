#include "types.h"

extern "C" {
s32 OSFreeToHeap(int, void *);
s32 get_network_config_mode();
s32 get_or_set_network_config_mode(s32 arg0);
s32 get_or_set_network_config_backup_mode(s32 arg0);
void set_network_config_card_channel(s32 arg0);
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
    get_or_set_network_config_mode((0));
    get_or_set_network_config_backup_mode((0));
    set_network_config_card_channel((2));
    return 0;
}

}
