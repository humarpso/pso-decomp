#include "types.h"

extern "C" {

void TNpcPlayer__sub_8014DC30(void);
int TNpcPlayer__sub_8014DC3C(void* p);
int TNpcPlayer__sub_80150A34(void*);

    extern int TNpcPlayer__data_805D5864;
void TNpcPlayer__sub_8014DC30(void) { TNpcPlayer__data_805D5864 = 1; }

int TNpcPlayer__sub_8014DC3C(void* p) { return TNpcPlayer__sub_80150A34(p); }

}
