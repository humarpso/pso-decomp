#include "pso/TBoss6CrushPtcl.h"

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
void *TBoss6CrushPtcl__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void *create__15TBoss6CrushPtclFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        o = TBoss6CrushPtcl__ct(o, tl_02, arg0);
    }
    return o;
}

}
