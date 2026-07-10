#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss3VoloptMonitor__sub_800420D8(void);
void update_state__19TBoss3VoloptMonitorFPv(void *arg0);
s32 fn_80041C78();
s32 fn_80041D0C();
s32 fn_80041D3C();
s32 fn_80041E88();

void TBoss3VoloptMonitor__sub_800420D8(void) {  }
void update_state__19TBoss3VoloptMonitorFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 0:
        fn_80041C78();
        return;
    case 1:
        fn_80041D0C();
        return;
    case 4:
        fn_80041E88();
        return;
    case 5:
        fn_80041D3C();
        return;
    }
}

}
