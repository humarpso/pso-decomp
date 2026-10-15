#include "types.h"
#include "pso/boss/TBoss4Uro.h"

extern "C" {

s32 TBoss4Uro::get_phase() { return *(s32*)((char*)this + 0x37c); }

    extern int darkfalz_dat_resource;
int TBoss4Uro::get_instance_count() {  return darkfalz_dat_resource; }

}
