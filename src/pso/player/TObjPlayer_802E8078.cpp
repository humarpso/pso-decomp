#include "types.h"

extern "C" {

void queue_boss_effect__10TObjPlayerFPv(void* a0);
void TObjPlayer__sub_802E80A0(void);
void draw_effect__10TObjPlayerFv(void);
int TObjFish__sub_8001EDB0(void*, void*);
int TObjFish__sub_8001EDC4(void*, void*);
int TObjFish__sub_803DA798(void);

    extern int lbl_805D6918;
void queue_boss_effect__10TObjPlayerFPv(void* a0) { TObjFish__sub_8001EDC4((void*)(lbl_805D6918), a0); }

    extern int lbl_805D6918;
void TObjPlayer__sub_802E80A0(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); }

    extern int lbl_805D6918;
void draw_effect__10TObjPlayerFv(void) { TObjFish__sub_8001EDB0((void*)(lbl_805D6918), (void*)0); TObjFish__sub_803DA798(); }

}
