#include "types.h"
typedef struct Trip_8011CEDC { s32 a; s32 b; s32 c; } Trip_8011CEDC;

typedef struct Tex_8011CEDC { u8 pad[0x1C]; s32 f1c; s32 state; u8 pad2[8]; u8 f2c; } Tex_8011CEDC;

extern "C" {
void TLobby__sub_8001EE48(void *);
s32 TLobby__sub_8001EEFC(void *);
void fn_800F7D30(int, int, int);
void unload_texture__12TItemTexLoadFPv(void *);
void load_gvm_texture_archive(int, void *);
extern Trip_8011CEDC lbl_8043E7F4[];
void TItemTexLoad__sub_8011CEDC(Tex_8011CEDC *arg0);
}

extern "C" {

void TItemTexLoad__sub_8011CEDC(Tex_8011CEDC *arg0) {
    Trip_8011CEDC t = lbl_8043E7F4[0];
    s32 r = TLobby__sub_8001EEFC(&t);
    if (r != 0) {
        fn_800F7D30(arg0->f1c, r, 0x40000);
        load_gvm_texture_archive(r, &arg0->f2c);
        TLobby__sub_8001EE48(&t);
        arg0->state = 2;
    } else {
        unload_texture__12TItemTexLoadFPv(arg0);
    }
}

}
