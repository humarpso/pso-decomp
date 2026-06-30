#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80208898(M2C_UNK);
s32 fn_80209104();
M2C_UNK TSetEvtDestroy__ct(void *, s32, void *);
void *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_8034E5A8(s16);
extern s32 tl_01;

void fn_802088A0(void *arg0) {
    void *obj;

    if (fn_80209104() != -1) {
        fn_8034E5A8(M2C_FIELD(arg0, s16 *, 8));
    }
    obj = __nw__7TObjectFUl(0x34);
    if (obj != NULL) {
        TSetEvtDestroy__ct(obj, tl_01, arg0);
    }
    fn_80208898(-1);
}

}
