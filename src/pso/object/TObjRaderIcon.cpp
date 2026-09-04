#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjRaderIcon__create(void *arg0);
void *__dt__13TObjRaderIconFv(void *arg0, s16 arg1);
void render__13TObjRaderIconFv(void);
int run_task__13TObjRaderIconFv(void);
void *TObjRaderIcon__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern void *tl_05;

void *TObjRaderIcon__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = TObjRaderIcon__ct(o, tl_05, arg0);
    }
    return o;
}

void render__13TObjRaderIconFv(void) {  }

int run_task__13TObjRaderIconFv(void) { return 0; }

extern M2C_UNK __vt__13TObjRaderIcon[];

void *__dt__13TObjRaderIconFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjRaderIcon;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
