#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *arg0);
s32 is_ready__18TWindowMessagePageFPv(void *);

s32 poll_field_20c__22TQuestVmDownLoadServerFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x20C);
    if (temp_r3 != NULL) {
        return is_ready__18TWindowMessagePageFPv(temp_r3);
    }
    return 1;
}

}
