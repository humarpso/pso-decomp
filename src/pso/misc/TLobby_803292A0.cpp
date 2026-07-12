#include "types.h"

extern "C" {

void update_photon_chairs__6TLobbyFv(void);
void update_photon_chair__6TLobbyFv(void);
int TLobby__sub_802A7888(int);
int TPlyPhotonChair__sub_8035B2A4(void);
s32 TPlyPhotonChair__sub_8035B2DC();
int free_singleton_805D6C80__6TLobbyFv(void);
u32 TLobby__sub_80329278();
int clear_flag_at_6c84__6TLobbyFv(void);

void update_photon_chairs__6TLobbyFv(void) { TPlyPhotonChair__sub_8035B2A4(); free_singleton_805D6C80__6TLobbyFv(); TLobby__sub_802A7888(0); clear_flag_at_6c84__6TLobbyFv(); }
void update_photon_chair__6TLobbyFv(void) {
    TLobby__sub_802A7888(0);
    if (TLobby__sub_80329278() == 0U) {
        TLobby__sub_802A7888(1);
        return;
    }
    TPlyPhotonChair__sub_8035B2DC();
}

}
