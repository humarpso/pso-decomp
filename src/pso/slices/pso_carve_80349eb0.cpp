#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80349DC8();
s32 fn_80349E5C();
void run_task__18TAdLoadQuestLineGCFv(void);

void fn_80349EB0(void *arg0) {
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

}
