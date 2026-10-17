#include "types.h"
#include "pso/enemy/TObjEneRe2Flower.h"

int TObjEneRe2Flower::get_flag_11() { return (*(u32*)((char*)this + 0x3c4) >> 11) & 0x1; }
