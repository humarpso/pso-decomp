#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TCameraCtrl__sub_8006B368();
s32 fn_80070078(void *);
s32 fn_800739BC(void *);
s32 fn_80076B14(void *);
s32 fn_801FF464();
s32 fn_8026A328();
int fn_8006FF98(void*);
int fn_80070170(void*);
int fn_800704CC(void* a0 = 0);
void fn_80070554(void* p);
void fn_80070550(void);

int fn_800703D0(void) { return 0; }
int fn_800704CC(void*) { return 0; }
void fn_80070550(void) {  }
void fn_80070554(void* p) { if (fn_800704CC(p) == 0) { fn_80070170(p); fn_8006FF98(p); } }
void fn_80070598(void *arg0) {
    if (fn_800704CC() == 0) {
        fn_80070078(arg0);
        if (TCameraCtrl__sub_8006B368() != 0) {
            fn_801FF464();
            fn_800739BC(arg0);
            fn_8026A328();
            fn_80076B14(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
    }
}

}
