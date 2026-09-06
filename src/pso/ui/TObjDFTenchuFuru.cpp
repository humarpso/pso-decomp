#include "pso/TObjDFTenchuFuru.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TObjDFTenchuFuru::run_task() {}

TObjDFTenchuFuru::~TObjDFTenchuFuru() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_state_ready__14TBoss4DarkFalzFv();
s32 is_active__14TBoss4DarkFalzFv();
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
extern const f32 lbl_805D8AC0;
void run_task__16TObjDFTenchuFuruFv(u8 *arg0);
}

extern "C" {

int TObjDFTenchuFuru__sub_80051A7C(void);
void * create__16TObjDFTenchuFuruFPvPv(void *arg0, void *arg1);
void register_callback__16TObjDFTenchuFuruFv(void);
void *TObjDFTenchuFuru__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
int set_global_state__16TObjEneRe7BeruraFi(void*);

#pragma push
#pragma fp_contract on
void run_task__16TObjDFTenchuFuruFv(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + lbl_805D8AC0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x2C), (void *) (arg0 + 0x1C));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if ((temp_r0 < 0) || ((is_active__14TBoss4DarkFalzFv() == 0) && (is_state_ready__14TBoss4DarkFalzFv() == 0))) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

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
