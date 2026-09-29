#include "types.h"

struct PhotonBlastChain_801AA424 {
    s32 kinds[4];
    u32 participants[4];
    s32 state;
};

extern "C" {
void TLobby__sub_8001FE7C(u32, int);
void TLobby__sub_800FD6A0(void *, int);
extern u8 lbl_804C344C[];
extern u32 lbl_8050E880[];
extern u32 lbl_805D5D28;
void TObjPlayer__sub_801AA3B4(void);
extern struct PhotonBlastChain_801AA424 lbl_8050E890[];
void TObjPlayer__sub_801AA424(void);
}

extern "C" {

void TObjPlayer__sub_801AA3B4(void) {
    s32 i;
    TLobby__sub_800FD6A0(lbl_804C344C, 0x50);
    if (lbl_805D5D28 != 0U) {
        TLobby__sub_8001FE7C(lbl_805D5D28, 1);
        lbl_805D5D28 = 0U;
    }
    for (i = 0; i < 4; i++) {
        lbl_8050E880[i] = 0;
    }
    TObjPlayer__sub_801AA424();
}
void TObjPlayer__sub_801AA424(void) {
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

}
