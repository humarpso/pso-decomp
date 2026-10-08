#include "pso/ui/TAdLoadQuestCellGC.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_state_flag__9TMainTaskFv();
void render_state__18TAdLoadQuestCellGCFPv(void *arg0);
s32 __nw__7TObjectFUl(int);
void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2);
__declspec(section ".data") TAdLoadQuestCellGC *lbl_804EFF38[3] = { 0, 0, 0 };
s32 get_or_create_cell__14TAdLoadQuestGCFii(s32 arg0, s32 arg1);
}

extern "C" {

void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2);
void render_state__18TAdLoadQuestCellGCFPv(void *arg0);

void __ct__7TObjectFP7TObject(void *);
s32 fn_8034960C();
s32 fn_80349728();
s32 fn_80349844();

void render_state__18TAdLoadQuestCellGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        fn_80349844();
        return;
    case 1:
        fn_80349728();
        return;
    case 2:
        fn_8034960C();
        return;
    }
}

}

void TAdLoadQuestCellGC::render() {
    if (get_state_flag__9TMainTaskFv() != 1) {
        ++m_frameCount;
        if (m_frameCount >= 2) {
            render_state__18TAdLoadQuestCellGCFPv(this);
        }
    }
}

void TAdLoadQuestCellGC::run_task() {}

TAdLoadQuestCellGC::~TAdLoadQuestCellGC() {
    if (lbl_804EFF38[m_state] != NULL) {
        lbl_804EFF38[m_state] = NULL;
    }
}

extern "C" {

extern M2C_UNK __vt__18TAdLoadQuestCellGC[];
extern void *lbl_805D42F8;

void *TAdLoadQuestCellGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdLoadQuestCellGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D42F8;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = -1;
    return arg0;
}
s32 get_or_create_cell__14TAdLoadQuestGCFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg1 * 4;
    if ((u32) M2C_FIELD((s32 *)lbl_804EFF38, M2C_UNK *, temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x24));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = ((s32)TAdLoadQuestCellGC__ct((void *)((int) (temp_r3)), (void *)((void *) (arg0)), (void *)((void *) (arg1))));
        }
        M2C_FIELD((s32 *)lbl_804EFF38, M2C_UNK *, temp_r30) = var_r0;
    }
    return M2C_FIELD((s32 *)lbl_804EFF38, M2C_UNK *, temp_r30);
}

}
