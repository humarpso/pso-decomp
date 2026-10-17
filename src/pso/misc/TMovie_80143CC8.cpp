#include "types.h"
#include "pso/misc/TMovie_80143CC8.h"

extern "C" {

int VIWaitForRetrace(void*);

int TMovie__sub_80143CC8(void* p) { return VIWaitForRetrace(p); }

}
