#include "types.h"

extern "C" {

void TLobby__sub_80142920(void);
int TLobby__sub_80142944(void* p);
void TPlyPhotonChair__sub_80142770(void);
void TPlyPhotonChair__sub_80142774(void);
int TPlyPhotonChair__sub_80142778(void);
void save_state__15TPlyPhotonChairFv(void);
int TObjFish__sub_803E46BC(void);
int get_id__15TPlyPhotonChairFPv(void);

    extern int lbl_805D566C;
    extern int some_id_805c6f74;
void save_state__15TPlyPhotonChairFv(void) { lbl_805D566C = some_id_805c6f74; }

void TPlyPhotonChair__sub_80142770(void) {  }
void TPlyPhotonChair__sub_80142774(void) {  }

int TPlyPhotonChair__sub_80142778(void) { return 0; }

void TLobby__sub_80142920(void) { get_id__15TPlyPhotonChairFPv(); TObjFish__sub_803E46BC(); }
int TLobby__sub_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
