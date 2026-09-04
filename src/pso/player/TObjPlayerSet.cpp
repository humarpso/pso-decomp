#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjQuestCol2__create(void *arg0);
void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1);
void *create__13TObjPlayerSetFPv(void *arg0);
void render__13TObjPlayerSetFv(void);
void run_task__13TObjPlayerSetFv(void);
void *TObjPlayerSet__ct(void *, void *, void *);
void *TObjQuestCol2__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__13TObjPlayerSetFv(void) {  }
void run_task__13TObjPlayerSetFv(void) {  }

extern void *tl_06;

void *create__13TObjPlayerSetFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjPlayerSet__ct(o, tl_06, arg0);
    }
    return o;
}

extern M2C_UNK __vt__13TObjPlayerSet[];

void *__dt__13TObjPlayerSetFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjPlayerSet;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *lbl_805D5C50;

void *TObjQuestCol2__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjQuestCol2__ct(o, lbl_805D5C50, arg0);
    }
    return o;
}

}
