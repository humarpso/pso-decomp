#include "types.h"

extern "C" {

int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
int apply_recoil_forward__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_8034F0D8(void* p);
int TObjPlayer__sub_80115BC0(void*, int, int);

void reset_shoot_models__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }
int apply_recoil_forward__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, 1820, 13653); }
int TObjPlayer__sub_8034F0D8(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, -4551, 0); }

}
