#include "types.h"

extern "C" {

void TObjPlayer__sub_801433E8(void* p, void* a1, void* a2, void* a3);
int TObjPlayer__sub_8002AE7C(void*, void*);
int TObjPlayer__sub_8002AE84(void*);
int set_animation__10TObjPlayerFPvs(void*, void*);

void TObjPlayer__sub_801433E8(void* p, void* a1, void* a2, void* a3) { TObjPlayer__sub_8002AE84(p); TObjPlayer__sub_8002AE7C(p, a2); set_animation__10TObjPlayerFPvs(p, a3); }

}
