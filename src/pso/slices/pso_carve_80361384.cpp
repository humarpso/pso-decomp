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
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m87();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void CAT(pv, __LINE__)();
    virtual void m94();
};

extern "C" {

M2C_UNK TObjEneDD__sub_800BBA04(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK fn_80143504();
M2C_UNK fn_8035FB44(void *);
s32 fn_8035FCEC(void *);
M2C_UNK fn_8035FFA8(void *);
M2C_UNK fn_803600C0(void *);
M2C_UNK fn_80360110(void *, s32);
extern void *lbl_805D6F8C;

void fn_80361384(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;
    s32 temp_r4;

    switch (arg1) {
    case 4:
        TObjEneDD__sub_800BBA04(arg0, 4);
        ((F_V *) arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) | 0x400);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r4 & ~0x247);
        fn_80360110(arg0, temp_r4);
        M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4E4) == 2) {
            TObjEneDD__sub_800BBA18(arg0, 5);
        }
        break;
    case 5:
        break;
    case 0:
        fn_80143504();
        fn_803600C0(arg0);
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4E4);
        switch (temp_r0) {
        case 0:
            temp_r3 = M2C_FIELD(arg0, s32 *, 0x438);
            if (((temp_r3 & 4) || (temp_r3 & 0x80)) && (fn_8035FCEC(arg0) != 0)) {
                M2C_FIELD(arg0, s32 *, 0x4E4) = 2;
                M2C_FIELD(arg0, s32 *, 0x444) = (s32) M2C_FIELD(arg0, s32 *, 0x454);
            } else {
                fn_8035FB44(arg0);
                fn_8035FFA8(arg0);
                if (M2C_FIELD(arg0, s32 *, 0x438) & 0x10) {
                    M2C_FIELD(arg0, s32 *, 0x4E4) = 1;
                    M2C_FIELD(arg0, s32 *, 0x4E8) = (s32) M2C_FIELD(lbl_805D6F8C, s32 *, 0x24);
                }
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4E8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4E8) <= 0) {
                M2C_FIELD(arg0, s32 *, 0x438) = (s32) (M2C_FIELD(arg0, s32 *, 0x438) & 0xFFFFFFEF);
                M2C_FIELD(arg0, s32 *, 0x4E4) = 0;
            }
            break;
        }
        ((F_V *) arg0)->m87();
        break;
    }
}

}
