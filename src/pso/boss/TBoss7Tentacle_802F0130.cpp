#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss7Tentacle__sub_802F0130(void *arg0);
M2C_UNK TBoss7Tentacle__sub_802F0918(void *);
M2C_UNK TBoss7Tentacle__sub_802F09B4(void *);
M2C_UNK TBoss7Tentacle__sub_802F09EC(void *);
M2C_UNK fn_802F092C(void *);
M2C_UNK fn_802F0988(void *);
M2C_UNK fn_802F09C8(void *);

void TBoss7Tentacle__sub_802F0130(void *arg0) {
    s32 state = M2C_FIELD(arg0, s32 *, 0x34);
    if (state != (s32) M2C_FIELD(arg0, s32 *, 0x30)) {
        switch (state) {
        case 0:
            TBoss7Tentacle__sub_802F09EC(arg0);
            break;
        case 1:
            fn_802F09C8(arg0);
            break;
        case 4:
            TBoss7Tentacle__sub_802F09B4(arg0);
            break;
        case 2:
            fn_802F0988(arg0);
            break;
        case 3:
            fn_802F092C(arg0);
            break;
        case 5:
            TBoss7Tentacle__sub_802F0918(arg0);
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 0x34);
    }
}

}
