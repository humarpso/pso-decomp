#include "types.h"

extern "C" {

int TObjPlayer__sub_801D0888(void*);
void check_state_dead__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801C90F8(void);
void TObjPlayer__sub_801C9128(void);
void TObjPlayer__sub_801C912C(void);

void TObjPlayer__sub_801C90F8(void) {  }
void check_state_dead__10TObjPlayerFPv(void* p) { if (*(short*)((char*)p + 0x328) == 4) { TObjPlayer__sub_801D0888(p); } }
void TObjPlayer__sub_801C9128(void) {  }
void TObjPlayer__sub_801C912C(void) {  }

}
