#include "types.h"
#include "pso/enemy/TObjEneRe2Flower.h"

extern "C" {

void TObjEneRe2Flower__sub_800C3BA8(void);

int TObjEneRe2Flower::get_flag_11() { return (*(u32*)((char*)this + 0x3c4) >> 11) & 0x1; }

}
