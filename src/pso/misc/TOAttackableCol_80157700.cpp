#include "types.h"

extern "C" {

int TOAttackableCol__sub_80157700(void* p);
int TObjPlayer__sub_80154764(void*, int, int);

int TOAttackableCol__sub_80157700(void* p) { return TObjPlayer__sub_80154764(p, 0, 1); }

}
