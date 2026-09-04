#include "pso/TObjDFRecBall.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TObjDFRecBall::run_task() {}

TObjDFRecBall::~TObjDFRecBall() {
    if (m_44 != nullptr) request_destroy__11TBoss4Type2FUi(m_44);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__13TObjDFRecBallFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TObjDFRecBall__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create__13TObjDFRecBallFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x4C);
    if (o != NULL) {
        o = TObjDFRecBall__ct(o, arg0, arg1, arg2);
    }
    return o;
}

}
