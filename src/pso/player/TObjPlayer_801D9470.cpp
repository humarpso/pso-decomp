#include "types.h"

extern "C" {

int TObjPlayer__sub_801D9470(void* p);
int get_falz_phase__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801C6E40(void*);
int TBoss4DarkFalz__sub_801D94C0(void*);

int TObjPlayer__sub_801D9470(void* p) { return TObjPlayer__sub_801C6E40((char*)p + 0x360); }
int get_falz_phase__10TObjPlayerFPv(void* p) { return TBoss4DarkFalz__sub_801D94C0((char*)p + 0x7cc); }

}
