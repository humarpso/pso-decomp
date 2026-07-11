#include "types.h"

extern "C" {

void update_state3__10TBoss4ZakoFPv(void* p);
int set_state3__10TBoss4ZakoFPv(void*);

void update_state3__10TBoss4ZakoFPv(void* p) { if (*(int*)((char*)p + 0x374) != 3) { set_state3__10TBoss4ZakoFPv(p); } }

}
