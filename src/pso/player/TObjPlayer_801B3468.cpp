#include "types.h"

extern "C" {

int stop_battle__10TObjPlayerFPv(void* p);
int set_battle_flag__10TObjPlayerFPvi(void*, int);

int stop_battle__10TObjPlayerFPv(void* p) { return set_battle_flag__10TObjPlayerFPvi(p, 0); }

}
