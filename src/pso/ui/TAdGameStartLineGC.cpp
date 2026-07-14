#include "types.h"

extern "C" {

void render__18TAdGameStartLineGCFv(void* p);

int TMainTask__sub_8001A430(void*);
int reset_transform_state__10TObjPlayerFv(void);
int init_xyz_limits__10TObjPlayerFv(void);
int fn_80320DE8(void*);

void render__18TAdGameStartLineGCFv(void* p) { if (TMainTask__sub_8001A430(p) != 1) { init_xyz_limits__10TObjPlayerFv(); fn_80320DE8(p); reset_transform_state__10TObjPlayerFv(); } }

}
