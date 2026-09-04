#include "types.h"

extern "C" {

int fn_8033E8C0(void);
void update__8TObjFishFPv(void* p);
int TObjFish__sub_8033DD4C(void*);
int TObjFish__sub_8033DE60(void*);
int TObjFish__sub_8033DFB4(void*);
int TObjPlayer__sub_803078B0(void);
int TObjPlayer__sub_803E1D90(int, int, int, int);
void init_particle_effect__10TObjPlayerFv(void);
int render_effect__8TObjFishFPv(void*);
int set_global_param__8TObjFishFi(void);

void update__8TObjFishFPv(void* p) { TObjFish__sub_8033DFB4(p); TObjFish__sub_8033DE60(p); TObjFish__sub_8033DD4C(p); render_effect__8TObjFishFPv(p); }

int fn_8033E8C0(void) { return 0; }

}
