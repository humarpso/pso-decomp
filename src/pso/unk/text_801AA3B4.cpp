#include "types.h"

struct PhotonBlastChain_801AA424 {
    s32 kinds[4];
    u32 participants[4];
    s32 state;
};

typedef s32 M2C_UNK;
extern "C" {
void TLobby__sub_8001FE7C(u32, int);
void call_funcs_reverse__6TLobbyFPvUi(void *, int);
extern u8 photon_blast_load_callback_table[];
extern u32 lbl_8050E880[];
extern u32 photon_blast_shared_resource;
void TObjPlayer__sub_801AA3B4(void);
extern struct PhotonBlastChain_801AA424 lbl_8050E890[];
void clear_photon_blast_slots__10TObjPlayerFv(void);
u8 *load_resource_from_descriptor(u8 *, int, void *, int, int, int);
u8 *alloc__23TAdSinglePlyChrSelectGCFPv(int);
M2C_UNK run_load_callback_table(void *, int);
void clear_photon_blast_slots__10TObjPlayerFv(void);
extern u8 photon_blast_resource_descriptor[];
extern u8 photon_blast_load_callback_table[];
extern u32 lbl_8050E880[];
extern u32 photon_blast_shared_resource;
void load_photon_blast_resources(void);
}

extern "C" {

void TObjPlayer__sub_801AA3B4(void) {
    s32 i;
    call_funcs_reverse__6TLobbyFPvUi(photon_blast_load_callback_table, 0x50);
    if (photon_blast_shared_resource != 0U) {
        TLobby__sub_8001FE7C(photon_blast_shared_resource, 1);
        photon_blast_shared_resource = 0U;
    }
    for (i = 0; i < 4; i++) {
        lbl_8050E880[i] = 0;
    }
    clear_photon_blast_slots__10TObjPlayerFv();
}
void clear_photon_blast_slots__10TObjPlayerFv(void) {
    s32 i;
    s32 j;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            lbl_8050E890[i].kinds[j] = -1;
            lbl_8050E890[i].participants[j] = 0xFFFF;
        }
        lbl_8050E890[i].state = 0;
    }
}
void load_photon_blast_resources(void) {
    u8 *p;
    s32 i;
    p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (p != NULL) {
        p = load_resource_from_descriptor(p, 1, photon_blast_resource_descriptor, 0, 0, 0);
    }
    photon_blast_shared_resource = (u32) p;
    run_load_callback_table(photon_blast_load_callback_table, 0x50);
    for (i = 0; i < 4; i++) {
        lbl_8050E880[i] = 0;
    }
    clear_photon_blast_slots__10TObjPlayerFv();
}

}
