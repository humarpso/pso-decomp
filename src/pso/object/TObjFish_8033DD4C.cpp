#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
extern "C" {
void *__nw__7TObjectFUl(int);
void *TObjFish__sub_8033E688(void *, void *, void *);
void * fn_8033E8C0(void *arg0, void *arg1);
}

extern "C" {

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

void * fn_8033E8C0(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB4);
    if (o != NULL) {
        o = TObjFish__sub_8033E688(o, arg0, arg1);
    }
    return o;
}

}
