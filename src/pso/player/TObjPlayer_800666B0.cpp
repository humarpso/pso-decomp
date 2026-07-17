#include "types.h"

extern "C" {

void set_active_player__10TObjPlayerFi(int a0);

    extern unsigned char lbl_805D2910;
    extern unsigned char lbl_805D4EE4;
void set_active_player__10TObjPlayerFi(int a0) { lbl_805D2910 = a0; lbl_805D4EE4 = (lbl_805D4EE4 | 0x2); }

}
