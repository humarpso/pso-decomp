#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80080750();
M2C_UNK fn_80158298(void *);
M2C_UNK fn_8016492C(void *);
M2C_UNK fn_80164990(void *);
M2C_UNK fn_80164A90(void *);
M2C_UNK fn_80164B34(void *);
f32 fn_803D64C0(s32);

}

struct DfBase { char pad[0x18]; };
struct DfV : DfBase {
    virtual void vf00(); virtual void vf01(); virtual void vf02(); virtual void vf03();
    virtual void vf04(); virtual void vf05(); virtual void vf06(); virtual void vf07();
    virtual void vf08(); virtual void vf09(); virtual void vf10(); virtual void vf11();
    virtual void vf12();
};

extern "C" {

void fn_80164CC4(void *arg0) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0xFC) = (s32) (M2C_FIELD(arg0, s32 *, 0xFC) + M2C_FIELD(arg0, s32 *, 0xF8));
    M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0xFC)));
    if (fn_80080750() == 1) {
        ((DfV *)arg0)->vf12();
        return;
    }
    fn_80158298(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
    switch (temp_r0) {
    case 0:
        fn_80164B34(arg0);
        return;
    case 1:
        fn_80164A90(arg0);
        return;
    case 2:
        fn_80164990(arg0);
        return;
    case 3:
        fn_8016492C(arg0);
        return;
    }
}

}
