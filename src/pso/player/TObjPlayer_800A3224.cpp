#include "types.h"

extern "C" {

int is_flag_set_388_bit26__10TObjPlayerFPv(void* p);

int is_flag_set_388_bit26__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 26) & 0x1; }

}
