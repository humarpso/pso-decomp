#include "types.h"

extern "C" {

void TLobby__sub_80142920(void);
int TLobby__sub_80142944(void* p);
int TObjFish__sub_803E46BC(void);
int get_id__15TPlyPhotonChairFPv(void);

void TLobby__sub_80142920(void) { get_id__15TPlyPhotonChairFPv(); TObjFish__sub_803E46BC(); }
int TLobby__sub_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
