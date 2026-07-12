#include "types.h"

extern "C" {

int TObjEneDD__sub_800B9BAC(void* p);
int TObjEneDD__sub_800B9BCC(void* p);
int TObjPlayer__sub_801BA42C(void*);
int TObjPlayer__sub_801BA494(void*);

int TObjEneDD__sub_800B9BAC(void* p) { return TObjPlayer__sub_801BA42C(p); }
int TObjEneDD__sub_800B9BCC(void* p) { return TObjPlayer__sub_801BA494(p); }

}
