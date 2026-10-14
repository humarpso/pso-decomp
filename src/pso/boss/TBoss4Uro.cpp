#include "types.h"

extern "C" {

int get_instance_count__9TBoss4UroFv(void);
s32 get_phase__9TBoss4UroFPv(void* p);

s32 get_phase__9TBoss4UroFPv(void* p) { return *(s32*)((char*)p + 0x37c); }

    extern int darkfalz_dat_resource;
int get_instance_count__9TBoss4UroFv(void) {  return darkfalz_dat_resource; }

}
