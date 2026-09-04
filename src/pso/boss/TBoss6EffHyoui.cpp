#include "pso/TBoss6EffHyoui.h"

extern "C" void request_destroy__11TBoss4Type2FUi(void*);

void TBoss6EffHyoui::run_task() {}

TBoss6EffHyoui::~TBoss6EffHyoui() {
    if (m_1c != nullptr) request_destroy__11TBoss4Type2FUi(m_1c);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK copy_pos__11TNowLoadingFPvPv(int, void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(int);
s32 is_active__14TBoss6PlotFalzFPv();
}

extern "C" {

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2);
void *TBoss6EffHyoui__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_02;

void run_task__14TBoss6EffHyouiFv(u8 *arg0) {
    s32 temp_r3;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) != 0U) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((int) (M2C_FIELD(arg0, u16 *, 0x20)));
        if ((temp_r3 != 0) && (is_active__14TBoss6PlotFalzFPv() != 0)) {
            copy_pos__11TNowLoadingFPvPv((int) (M2C_FIELD(arg0, u32 *, 0x1C)), (void *) (temp_r3 + 0x38));
        }
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void * create__14TBoss6EffHyouiFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x2C);
    if (o != NULL) {
        o = TBoss6EffHyoui__ct(o, tl_02, arg0, arg1, arg2);
    }
    return o;
}

}
