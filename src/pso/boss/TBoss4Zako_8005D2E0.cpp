#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
M2C_UNK fn_80156720(void *);

extern M2C_UNK lbl_804876F8[];

void *__dt__10TBoss4ZakoFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804876F8;
        fn_80156720(arg0);
        M2C_FIELD(arg0, s32 *, 0x384) = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3B4) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x3B4));
            M2C_FIELD(arg0, u32 *, 0x3B4) = 0U;
        }
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
