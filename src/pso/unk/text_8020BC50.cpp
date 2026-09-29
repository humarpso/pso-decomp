#include "types.h"
struct Rec_8020BCE4 { u8 pad[0xA]; u16 fA; u8 pad2[0x3C]; };

extern "C" {
void obj_setFlags30(u32, int);
s32 TObjPlayer__sub_800196EC();
u32 TPhotonMylla__sub_80154CB4(int);
Rec_8020BCE4 *resolve_matching_object__6TLobbyFPv();
s32 get_object_type__6TLobbyFi();
void TLobby__sub_8020BCE4(void);
}

extern "C" {

void TLobby__sub_8020BCE4(void) {
    Rec_8020BCE4 *p;
    s32 n;
    s32 i;
    TObjPlayer__sub_800196EC();
    p = resolve_matching_object__6TLobbyFPv();
    TObjPlayer__sub_800196EC();
    n = get_object_type__6TLobbyFi();
    for (i = 0; i < n; i++, p++) {
        u32 r = TPhotonMylla__sub_80154CB4(p->fA);
        if (r != 0) {
            obj_setFlags30(r, 0x800);
        }
    }
}

}
