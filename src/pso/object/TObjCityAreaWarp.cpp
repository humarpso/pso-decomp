#include "types.h"

extern "C" {

int TObjCityAreaWarp__vt18(void* p);
void render__16TObjCityAreaWarpFv(void* p);

int TObjEneDD__sub_800B9CF4(void*);
int do_warp__16TObjCityAreaWarpFPv(void*);

int TObjCityAreaWarp__vt18(void* p) { return do_warp__16TObjCityAreaWarpFPv(p); }
void render__16TObjCityAreaWarpFv(void* p) { if (TObjEneDD__sub_800B9CF4(p) != 0) { do_warp__16TObjCityAreaWarpFPv(p); } }

}
