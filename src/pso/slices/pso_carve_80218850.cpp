#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase18 { char pad[0x18]; };
struct VObj18 : VBase18 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vf24(int, int);
};

extern "C" {

M2C_UNK fn_80073DC4(void *, M2C_UNK);
s32 fn_8013AD38(void *);
s32 fn_8013AD44(void *);
M2C_UNK fn_801F8FD4(void *);
M2C_UNK TQuestListVM__sub_802185F4(void *);
M2C_UNK fn_80219EC4(void *);
M2C_UNK TWindowSubComCard__sub_80244A14(void *);

void fn_80218850(void *arg0) {
    void *p;

    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (fn_8013AD44(p) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2380) != 0U) {
            TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x2380));
            M2C_FIELD(arg0, u32 *, 0x2380) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2374) != 0U) {
            fn_801F8FD4(M2C_FIELD(arg0, void **, 0x2374));
            fn_80219EC4(M2C_FIELD(arg0, void **, 0x2374));
        }
        ((VObj18 *) arg0)->vf24(0x19, 1);
        TQuestListVM__sub_802185F4(arg0);
        fn_80073DC4(arg0, 5);
        return;
    }
    p = M2C_FIELD(arg0, void **, 0x2374);
    if ((p != NULL) && (fn_8013AD38(p) != 0)) {
        fn_80073DC4(arg0, 0x11);
    }
}

}
