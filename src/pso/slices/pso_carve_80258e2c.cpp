#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();

extern "C" {
s32 TObjPlayer__sub_8001972C(void *);
s32 TLobby__sub_8001DC24();
s32 TCameraCtrl__sub_8006B338();
s32 fn_800FFE1C(void *);
s32 fn_80100DA4(void *);
s32 TOSwitchItem__sub_80102C44(void *);
M2C_UNK fn_80228F5C(s32);
M2C_UNK TWindowSubStatusDisp__sub_802290E0();
M2C_UNK fn_802582C4(void *, void *);
M2C_UNK fn_802586FC(void *, s32, s32, s32, s32);
s32 fn_80259268(void *, s32, s32, M2C_UNK, M2C_UNK);
extern const f32 lbl_805DCF08;
}

struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual s32 m10();
};

extern "C" void fn_80258E2C(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;
    s32 temp_r30;
    s32 temp_r29;

    M2C_FIELD(arg0, f32 *, 8) = (f32) lbl_805DCF08;
    temp_r29 = fn_80100DA4(arg1);
    fn_802586FC(arg0, temp_r29, TOSwitchItem__sub_80102C44(arg1), TObjPlayer__sub_8001972C(arg1), fn_800FFE1C(arg1));
    M2C_FIELD(arg0, s32 *, 0x20) = fn_80259268(arg0, ((V_A *) arg1)->m10(), M2C_FIELD(arg0, s32 *, 0x20), 8, 1);
    if (TCameraCtrl__sub_8006B338() <= 2) {
        TWindowSubStatusDisp__sub_802290E0();
        fn_80228F5C(arg2);
        M2C_FIELD(arg0, s32 *, 0x24) = fn_80259268(arg0, TLobby__sub_8001DC24(), M2C_FIELD(arg0, s32 *, 0x24), 0x10, 1);
    }
    fn_802582C4(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x18) = arg3;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x45);
}
