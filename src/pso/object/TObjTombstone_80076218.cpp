#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__13TObjTombstoneFv(void *arg0, s16 arg1);
void run_task__13TObjTombstoneFv(void *arg0);
f32 TObjTombstone__sub_8007598C(void *);
M2C_UNK TObjTombstone__sub_80075DFC(void *);
s32 TObjTombstone__sub_80076098(void *);
M2C_UNK TObjTombstone__sub_80076190(void *);
void __dl__7TObjectFPv(void *);
s32 check_owner__13TObjTombstoneFPv();
void TObjPlayer__sub_80156990(void *, int);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_805D4E4C;

void run_task__13TObjTombstoneFv(void *arg0) {
    if (check_owner__13TObjTombstoneFPv() != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = TObjTombstone__sub_8007598C(arg0);
    TObjTombstone__sub_80076190(arg0);
    if (TObjTombstone__sub_80076098(arg0) != 0) {
        TObjTombstone__sub_80075DFC(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x230) = (s32) (M2C_FIELD(arg0, s32 *, 0x230) + 1);
    lbl_805D4E4C = 0;
}

extern M2C_UNK __vt__13TObjTombstone[];

void *__dt__13TObjTombstoneFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjTombstone;
        TObjPlayer__sub_80156990(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
