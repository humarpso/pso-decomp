#include "types.h"
struct E_80074E48 { f32 a; f32 b; f32 c; };

extern "C" {
extern E_80074E48 lbl_804FF938[];
extern const f32 lbl_805D9170;
void TLobby__sub_80074E48(void);
}

extern "C" {

void TLobby__sub_80074E48(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        lbl_804FF938[i].b = lbl_805D9170;
    }
}

}
