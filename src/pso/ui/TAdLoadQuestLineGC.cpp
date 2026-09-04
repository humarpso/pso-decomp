#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TAdLoadQuestLineGC__ct(void *arg0, void *arg1, void *arg2);
int render__18TAdLoadQuestLineGCFv(void);
void render_by_state__18TAdLoadQuestLineGCFPv(void *arg0);
void run_task__18TAdLoadQuestLineGCFv(void);
void __ct__7TObjectFP7TObject(void *);
s32 fn_80349DC8();
s32 fn_80349E5C();

void render_by_state__18TAdLoadQuestLineGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        fn_80349E5C();
        return;
    case 1:
        fn_80349DC8();
        return;
    }
}

int render__18TAdLoadQuestLineGCFv(void) { return 0; }

void run_task__18TAdLoadQuestLineGCFv(void) {  }

extern M2C_UNK __vt__18TAdLoadQuestLineGC[];
extern void *lbl_805D4300;

void *TAdLoadQuestLineGC__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TAdLoadQuestLineGC;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4300;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = -1;
    return arg0;
}

}
