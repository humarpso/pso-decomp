#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)

struct F_A { char pad[0x18]; };
struct F_V : F_A {
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m17(s32);
};

extern "C" {

s32 fn_80186B00();
s32 fn_80186BBC(void *, f32);
M2C_UNK fn_80186D10(void *, s32);
extern s32 lbl_805D53A0;
extern void *lbl_805D5B28;
extern s32 lbl_805D5B60;

void fn_80186F84(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xE0);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x17C) = 0x96;
        M2C_FIELD(arg0, s16 *, 0xE0) = 1;
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) | 1);
        M2C_FIELD(arg0, s32 *, 0xD0) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x42C), s32 *, 8);
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5B28, void **, 0x430), s32 *, 0x2C);
        return;
    case 1:
        if (fn_80186B00() == 0) {
            temp_r3 = fn_80186BBC(arg0, M2C_FIELD(arg0, f32 *, 0xAC));
            if (temp_r3 != 0) {
                fn_80186D10(arg0, lbl_805D53A0);
                M2C_FIELD(arg0, s32 *, 0xBC) = (s32) lbl_805D5B60;
                ((F_V *) arg0)->m17(temp_r3);
                M2C_FIELD(arg0, s16 *, 0xE0) = 2;
            }
        }
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x17C) - 1;
        M2C_FIELD(arg0, s32 *, 0x17C) = temp_r0_2;
        if (temp_r0_2 <= 0) {
            M2C_FIELD(arg0, s16 *, 0xE0) = 2;
        }
    case -1:
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0xE2) = (s16) (M2C_FIELD(arg0, s16 *, 0xE2) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s16 *, 0xDC) = 3;
        break;
    }
}

}
