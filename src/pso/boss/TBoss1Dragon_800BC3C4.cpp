#include "types.h"

extern "C" {

int TObjPlayer__sub_800BC3FC(void);
int fn_800BC3E8(void);
int get_position__12TBoss1DragonFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*);

int get_position__12TBoss1DragonFPv(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

int fn_800BC3E8(void) { return 0; }
int TObjPlayer__sub_800BC3FC(void) { return 0; }

}
