#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TObjCollisionFv(void *arg0, s16 arg1);
void *create__13TObjCollisionFPv(void *arg0);
void render__13TObjCollisionFv(void);
void run_task__13TObjCollisionFv(void);
void *TObjCollision__ct(void *, void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_80154A00(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

void render__13TObjCollisionFv(void) {  }
void run_task__13TObjCollisionFv(void) {  }

extern void *tl_06;

void *create__13TObjCollisionFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD8);
    if (o != NULL) {
        o = TObjCollision__ct(o, tl_06, arg0);
    }
    return o;
}

extern M2C_UNK __vt__13TObjCollision[];

void *__dt__13TObjCollisionFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjCollision;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_80154A00(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
