#include "types.h"

extern "C" {

void render__18TAdGameStartBackGCFv(void* p);

int TMainTask__sub_8001A430(void*);
int TObjPlayer__sub_80141F1C(void);
int init_xyz_limits__10TObjPlayerFv(void);
int render_background_status__18TAdGameStartBackGCFPv(void*);

void render__18TAdGameStartBackGCFv(void* p) { if (TMainTask__sub_8001A430(p) != 1) { init_xyz_limits__10TObjPlayerFv(); render_background_status__18TAdGameStartBackGCFPv(p); TObjPlayer__sub_80141F1C(); } }

}
