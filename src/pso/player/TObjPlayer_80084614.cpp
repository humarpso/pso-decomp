#include "types.h"

extern "C" {

void TObjPlayer__sub_80084614(void);
void TObjPlayer__sub_8008463C(void);
void reset_movie_state__10TObjPlayerFv(void);
int TObjPlayer__sub_80084694(void);
int TObjPlayer__sub_800846C8(void*);

    extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_80084614(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_80084694(); }

    extern unsigned char lbl_805D4EE4;
void TObjPlayer__sub_8008463C(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_800846C8((void*)0); }

    extern unsigned char lbl_805D4EE4;
void reset_movie_state__10TObjPlayerFv(void) { lbl_805D4EE4 = 0; TObjPlayer__sub_800846C8((void*)1); }

}
