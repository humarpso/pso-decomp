#include "types.h"

extern "C" {

int TItem__sub_80100B8C(void* p);
int TItem__sub_80100A40(void*);

int TItem__sub_80100B8C(void* p) { return TItem__sub_80100A40((char*)p + 0x38); }

}
