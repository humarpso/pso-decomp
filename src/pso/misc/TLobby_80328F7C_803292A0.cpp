#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TLobby__sub_80329310(void *arg0, s16 arg1);
void update_photon_chair__6TLobbyFv(void);
void update_photon_chairs__6TLobbyFv(void);
M2C_UNK TLobby__sub_802A7AF8(void *, M2C_UNK);
s32 TPlyPhotonChair__sub_8035B2DC();
u32 alloc_work_buffer__6TLobbyFv();
int clear_flag_at_6c84__6TLobbyFv(void);
M2C_UNK free__10TObjPlayerFPv(void *);
int free_singleton_805D6C80__6TLobbyFv(void);
int free_static_model__15TPlyPhotonChairFv(void);
int set_photon_chair_flag__6TLobbyFi(int);

void update_photon_chairs__6TLobbyFv(void) { free_static_model__15TPlyPhotonChairFv(); free_singleton_805D6C80__6TLobbyFv(); set_photon_chair_flag__6TLobbyFi(0); clear_flag_at_6c84__6TLobbyFv(); }
void update_photon_chair__6TLobbyFv(void) {
    set_photon_chair_flag__6TLobbyFi(0);
    if (alloc_work_buffer__6TLobbyFv() == 0U) {
        set_photon_chair_flag__6TLobbyFi(1);
        return;
    }
    TPlyPhotonChair__sub_8035B2DC();
}

extern M2C_UNK lbl_804ED7D0[];

void *TLobby__sub_80329310(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 8) = lbl_804ED7D0;
        TLobby__sub_802A7AF8(arg0, 0);
        if (arg1 > 0) {
            free__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
