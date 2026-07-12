#include "types.h"

extern "C" {

int TObjPlayer__sub_8011E87C(void*, void*);
int TObjPlayer__sub_80120BBC(void*, void*);
int TObjPlayer__sub_8034F0AC(void* p);
int TObjPlayer__sub_8034F0D8(void* p);
int TObjPlayer__sub_80115BC0(void*, int, int);

void TObjPlayer__sub_8034F064(void* p) { TObjPlayer__sub_80120BBC(p, (void*)49); TObjPlayer__sub_8011E87C(p, (void*)0); TObjPlayer__sub_8011E87C(p, (void*)1); }
int TObjPlayer__sub_8034F0AC(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, 1820, 13653); }
int TObjPlayer__sub_8034F0D8(void* p) { return TObjPlayer__sub_80115BC0((char*)p + 0x1f8, -4551, 0); }

}
