#include "pso/TDPBShower.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TDPBShower::run_task() {}

TDPBShower::~TDPBShower() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create_TDPBShower(void *arg0, void *arg1);
void *TDPBShower__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create_TDPBShower(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TDPBShower__ct(o, arg0, arg1);
    }
    return o;
}

}
