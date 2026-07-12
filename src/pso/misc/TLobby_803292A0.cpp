#include "types.h"

extern "C" {

void TLobby__sub_803292A0(void);
void TLobby__sub_803292D0(void);
int TLobby__sub_802A7888(int);
int TPlyPhotonChair__sub_8035B2A4(void);
s32 TPlyPhotonChair__sub_8035B2DC();
int TLobby__sub_80329244(void);
u32 TLobby__sub_80329278();
int TLobby__sub_803296A0(void);

void TLobby__sub_803292A0(void) { TPlyPhotonChair__sub_8035B2A4(); TLobby__sub_80329244(); TLobby__sub_802A7888(0); TLobby__sub_803296A0(); }
void TLobby__sub_803292D0(void) {
    TLobby__sub_802A7888(0);
    if (TLobby__sub_80329278() == 0U) {
        TLobby__sub_802A7888(1);
        return;
    }
    TPlyPhotonChair__sub_8035B2DC();
}

}
