#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TBoss1Dragon__sub_80143504();

void fn_8009BE64(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x470) = 0;
        return;
    case 0:
        TBoss1Dragon__sub_80143504();
        M2C_FIELD(arg0, s32 *, 0x470) = (s32) (M2C_FIELD(arg0, s32 *, 0x470) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x470) > 0x5A) {
            M2C_FIELD(arg0, s32 *, 0x470) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = (s16) (M2C_FIELD(arg0, s16 *, 0xB8) + 1);
            if ((s16) M2C_FIELD(arg0, s16 *, 0xB8) >= 7) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            }
        }
    case 3:
    case 5:
    case 1:
        return;
    }
}

}
