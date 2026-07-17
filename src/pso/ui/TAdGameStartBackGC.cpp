#include "types.h"

extern "C" {

void render__18TAdGameStartBackGCFv(void* p);

int get_state_flag__9TMainTaskFv(void*);
int reset_transform_state__10TObjPlayerFv(void);
int init_xyz_limits__10TObjPlayerFv(void);
int render_background_status__18TAdGameStartBackGCFPv(void*);

void render__18TAdGameStartBackGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { init_xyz_limits__10TObjPlayerFv(); render_background_status__18TAdGameStartBackGCFPv(p); reset_transform_state__10TObjPlayerFv(); } }

}
