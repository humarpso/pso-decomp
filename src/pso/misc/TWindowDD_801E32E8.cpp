#include "types.h"

extern "C" {

int TObjPlayer__sub_803DAD28(void*);
int TObjPlayer__sub_803E2810(void*, void*, void*);
void camera_renderer_setup_nop(void);

void draw_transformed_primitive__9TWindowDDFPvPvPvPv(void* p, void* a1, void* a2, void* a3) { TObjPlayer__sub_803DAD28(a2); TObjPlayer__sub_803E2810(p, a1, a3); }

}
