#include "types.h"

extern "C" {

int set_state_8__9TObjEneDDFPv(void* p);
int TObjEneDD__sub_800BA2AC(void* p);
int TObjEneDD__sub_800BA2D0(void* p);
int TObjEneDD__sub_800BA2F4(void* p);
int TObjPlayer__sub_80019528(void*, int);

int set_state_8__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_80019528(p, 8); }
int TObjEneDD__sub_800BA2AC(void* p) { return TObjPlayer__sub_80019528(p, 4); }
int TObjEneDD__sub_800BA2D0(void* p) { return TObjPlayer__sub_80019528(p, 2); }
int TObjEneDD__sub_800BA2F4(void* p) { return TObjPlayer__sub_80019528(p, 1); }

}
