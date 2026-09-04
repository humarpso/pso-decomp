#include "pso/TObjDFTenchuFuru.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TObjDFTenchuFuru::run_task() {}

TObjDFTenchuFuru::~TObjDFTenchuFuru() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

int TObjDFTenchuFuru__sub_80051A7C(void);
void * create__16TObjDFTenchuFuruFPvPv(void *arg0, void *arg1);
void register_callback__16TObjDFTenchuFuruFv(void);
void *TObjDFTenchuFuru__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int set_global_state__16TObjEneRe7BeruraFi(void*);

void * create__16TObjDFTenchuFuruFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TObjDFTenchuFuru__ct(o, arg0, arg1);
    }
    return o;
}

int TObjDFTenchuFuru__sub_80051A7C(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

    extern unsigned char TObjDFTenchuFuru__sub_80051A18[];
    extern int lbl_805D4D78;
void register_callback__16TObjDFTenchuFuruFv(void) { lbl_805D4D78 = 0; set_global_state__16TObjEneRe7BeruraFi(TObjDFTenchuFuru__sub_80051A18); }

}
