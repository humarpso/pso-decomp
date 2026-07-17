#include "types.h"

extern "C" {

void update_photon_chairs__6TLobbyFv(void);
void update_photon_chair__6TLobbyFv(void);
int set_photon_chair_flag__6TLobbyFi(int);
int free_static_model__15TPlyPhotonChairFv(void);
s32 TPlyPhotonChair__sub_8035B2DC();
int free_singleton_805D6C80__6TLobbyFv(void);
u32 alloc_work_buffer__6TLobbyFv();
int clear_flag_at_6c84__6TLobbyFv(void);

void update_photon_chairs__6TLobbyFv(void) { free_static_model__15TPlyPhotonChairFv(); free_singleton_805D6C80__6TLobbyFv(); set_photon_chair_flag__6TLobbyFi(0); clear_flag_at_6c84__6TLobbyFv(); }
void update_photon_chair__6TLobbyFv(void) {
    set_photon_chair_flag__6TLobbyFi(0);
    if (alloc_work_buffer__6TLobbyFv() == 0U) {
        set_photon_chair_flag__6TLobbyFi(1);
        return;
    }
    TPlyPhotonChair__sub_8035B2DC();
}

}
