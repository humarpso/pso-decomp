#include "pso/TBoss6CrushPtcl.h"

#include "types.h"
typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Vec_80359EF0 { s32 x, y, z; };

extern "C" {
s32 create_particle_emitter(void *, int);
void *__ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__15TBoss6CrushPtcl[];
extern s32 lbl_805D440C;
u8 *TBoss6CrushPtcl__ct(u8 *arg0, void *arg1, Vec_80359EF0 *arg2);
}

extern "C" {
void request_destroy__11TBoss4Type2FUi(u32);
void queue_destruction__7TObjectFv(void*);
}

void TBoss6CrushPtcl::run_task() {
    m_1C++;
    if (m_1C >= 6) {
        if (m_20 != 0) {
            request_destroy__11TBoss4Type2FUi(m_20);
            m_20 = 0;
        }
        if (m_24 != 0) {
            request_destroy__11TBoss4Type2FUi(m_24);
            m_24 = 0;
        }
        queue_destruction__7TObjectFv(this);
    }
}

TBoss6CrushPtcl::~TBoss6CrushPtcl() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *create__15TBoss6CrushPtclFPv(void *arg0);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

u8 *TBoss6CrushPtcl__ct(u8 *arg0, void *arg1, Vec_80359EF0 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TBoss6CrushPtcl;
    M2C_FIELD(arg0, s32 *, 0) = lbl_805D440C;
    Vec_80359EF0 v = *arg2;
    M2C_FIELD(arg0, s32 *, 0x20) = create_particle_emitter(&v, 0x203);
    M2C_FIELD(arg0, s32 *, 0x24) = create_particle_emitter(&v, 0x204);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    return arg0;
}

void *create__15TBoss6CrushPtclFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = TBoss6CrushPtcl__ct((u8 *)(o), (void *)(tl_02), (Vec_80359EF0 *)(arg0));
    }
    return o;
}

}
