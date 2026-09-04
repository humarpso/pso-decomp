#include "pso/TAdGameStartLineGC.h"

TAdGameStartLineGC::~TAdGameStartLineGC() {}

#include "types.h"

extern "C" {

void render__18TAdGameStartLineGCFv(void* p);
int fn_80320DE8(void*);
int get_state_flag__9TMainTaskFv(void*);
int init_xyz_limits__10TObjPlayerFv(void);
int reset_transform_state__10TObjPlayerFv(void);

void render__18TAdGameStartLineGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { init_xyz_limits__10TObjPlayerFv(); fn_80320DE8(p); reset_transform_state__10TObjPlayerFv(); } }

}
