#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *destroy_object_804EE458(void *arg0, s16 arg1);
int TAdTrialAgreementGC__sub_80335958(void);
s32 TAdTrialAgreementGC__sub_8033596C(void* p);
void run_state__19TAdTrialAgreementGCFPv(void *arg0);
M2C_UNK TAdTrialAgreementGC__sub_80335974();
M2C_UNK TAdTrialAgreementGC__sub_80335A58();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

int TAdTrialAgreementGC__sub_80335958(void) { return 0; }

s32 TAdTrialAgreementGC__sub_8033596C(void* p) { return *(s32*)((char*)p + 0x20); }

void run_state__19TAdTrialAgreementGCFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24);
    switch (temp_r0) {
    case 0:
        TAdTrialAgreementGC__sub_80335974();
        break;
    case 1:
        TAdTrialAgreementGC__sub_80335A58();
        break;
    case 2:
        break;
    }
    M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 1);
}

extern M2C_UNK lbl_804EE458[];

void *destroy_object_804EE458(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EE458;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
