#include "types.h"

extern "C" {

void register_texture_logo_e(void);
void request_exit__5TLogoFv(void);
int TLobby__sub_8023E4B4(void*, void*);
int queue_destruction__7TObjectFv(void);

    extern unsigned char lbl_804349A0[];
    extern unsigned char lbl_80480B90[];
    extern int lbl_805D4A38;
void register_texture_logo_e(void) { lbl_805D4A38 = (int)lbl_80480B90; TLobby__sub_8023E4B4(lbl_804349A0, lbl_80480B90); }

    extern int lbl_805D4A50;
void request_exit__5TLogoFv(void) { queue_destruction__7TObjectFv(); lbl_805D4A50 = 1; }

}
