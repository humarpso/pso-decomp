#include "types.h"

extern "C" {

int TMovie__sub_80143CC8(void* p);
int VIWaitForRetrace(void*);

int TMovie__sub_80143CC8(void* p) { return VIWaitForRetrace(p); }

}
