#include "types.h"

extern "C" {

int TObjCityAreaWarp__vt18(void* p);
void render__16TObjCityAreaWarpFv(void* p);

int is_main_phase_15__9TObjEneDDFv(void*);
int do_warp__16TObjCityAreaWarpFPv(void*);

int TObjCityAreaWarp__vt18(void* p) { return do_warp__16TObjCityAreaWarpFPv(p); }
void render__16TObjCityAreaWarpFv(void* p) { if (is_main_phase_15__9TObjEneDDFv(p) != 0) { do_warp__16TObjCityAreaWarpFPv(p); } }

}
