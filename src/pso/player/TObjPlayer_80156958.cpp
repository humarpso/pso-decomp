#include "types.h"

extern "C" {

void reset__10TObjPlayerFv(void);
int TObjPlayer__sub_801549D0(void);
int init_all_slots__10TObjPlayerFv(void);

    extern int lbl_805D5868;
    extern int lbl_805D586C;
    extern int lbl_805D5870;
    extern int TObjPlayer__data_805D5874;
void reset__10TObjPlayerFv(void) { lbl_805D5868 = 0; lbl_805D586C = 0; lbl_805D5870 = 0; TObjPlayer__data_805D5874 = 0; TObjPlayer__sub_801549D0(); init_all_slots__10TObjPlayerFv(); }

}
