#include "types.h"

extern "C" {

void init__13TBoss6MagMineFPv(void* p);
int update_linked_state__13TBoss6MagMineFPv(void*);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);

void init__13TBoss6MagMineFPv(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x3ac)); update_linked_state__13TBoss6MagMineFPv(p); TObjPlayer__sub_803D9B78(); }

}
