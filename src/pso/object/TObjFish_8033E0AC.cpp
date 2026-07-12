#include "types.h"

extern "C" {

void update__8TObjFishFPv(void* p);
int render_effect__8TObjFishFPv(void*);
int TObjFish__sub_8033DD4C(void*);
int TObjFish__sub_8033DE60(void*);
int TObjFish__sub_8033DFB4(void*);

void update__8TObjFishFPv(void* p) { TObjFish__sub_8033DFB4(p); TObjFish__sub_8033DE60(p); TObjFish__sub_8033DD4C(p); render_effect__8TObjFishFPv(p); }

}
