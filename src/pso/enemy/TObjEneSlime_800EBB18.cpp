#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__12TObjEneSlimeFv(void *arg0);
M2C_UNK fn_8002AFD4(void *, s32 *, M2C_UNK);
s32 fn_80080750();
s32 fn_800EB8DC(void *);
M2C_UNK fn_800F6510(void *, s32 *);
M2C_UNK TLobby__sub_8020C5A4(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

}

struct Base_800EBB18 { char pad[0x18]; };
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define VA virtual void CAT(f,__LINE__)();
struct VObj_800EBB18 : Base_800EBB18 {
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
VA
    virtual void m77(s32 *);
};

extern "C" {

void run_task__12TObjEneSlimeFv(void *arg0) {
    s32 sp8;

    if ((fn_80080750() == 0) && (fn_800EB8DC(arg0) != 0)) {
        sp8 = 0x800;
        fn_800F6510(arg0, &sp8);
        fn_8002AFD4(arg0, &sp8, 0);
        ((VObj_800EBB18 *)arg0)->m77(&sp8);
        TLobby__sub_8020C5A4(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

}
