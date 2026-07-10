#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80073DC4(void *, M2C_UNK);

struct Base_8021277C { char pad[0x18]; };
struct VObj_8021277C : Base_8021277C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_8021277C *lbl_805D6188;

void set_state_close2__22THunterGuildSeqOfflineFv(void) {
    if (lbl_805D6188 != NULL) {
        lbl_805D6188->m7(0xC, 1);
        M2C_FIELD(lbl_805D6188, s32 *, 0x38) = 0;
        fn_80073DC4(lbl_805D6188, 5);
    }
}

}
