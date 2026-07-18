#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80215BF8 { char pad[0x18]; };
struct VObj_80215BF8 : Base_80215BF8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(int a, int b);
};

extern "C" {

void TJudgmentSequence__sub_80215BF8(void *arg0);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

void TJudgmentSequence__sub_80215BF8(void *arg0) {
    struct VObj_80215BF8 *o = (struct VObj_80215BF8 *)arg0;
    if (o != NULL) {
        o->m6(0xD, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 4);
    }
}

}
