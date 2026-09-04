#include "types.h"

extern "C" {

void set_attack_distance_flag__10TObjPlayerFPv(void* p);
int get_flag_0x388_b24__10TObjPlayerFPv(void* p);

void set_attack_distance_flag__10TObjPlayerFPv(void* p) { *(u32*)((char*)p + 0x388) |= 0x10000; }
int get_flag_0x388_b24__10TObjPlayerFPv(void* p) { return (*(u32*)((char*)p + 0x388) >> 24) & 0x1; }

}
