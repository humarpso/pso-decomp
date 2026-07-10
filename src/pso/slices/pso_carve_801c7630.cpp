#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase8 { char pad[8]; };
struct VObj8 : VBase8 {
    virtual void vpad0();
    virtual void vpad1();
    virtual void vpad2();
    virtual void vpad3();
    virtual void vpad4();
    virtual void vpad5();
    virtual void vpad6();
    virtual void vpad7();
    virtual void vpad8();
    virtual void vpad9();
    virtual void vpad10();
    virtual void vpad11();
    virtual void vpad12();
    virtual void vpad13();
    virtual void vpad14();
    virtual void vpad15();
    virtual void vpad16();
    virtual void vpad17();
    virtual void vpad18();
    virtual void vpad19();
    virtual void vpad20();
    virtual void vpad21();
    virtual void vpad22();
    virtual void vpad23();
    virtual void vpad24();
    virtual void vpad25();
    virtual void vpad26();
    virtual void vpad27();
    virtual void vpad28();
    virtual void vpad29();
    virtual void vpad30();
    virtual void vpad31();
    virtual void vpad32();
    virtual void vpad33();
    virtual void vpad34();
    virtual void vpad35();
    virtual void vpad36();
    virtual void vpad37();
    virtual void vpad38();
    virtual void vpad39();
    virtual void vpad40();
    virtual void vpad41();
    virtual void vpad42();
    virtual void vpad43();
    virtual void vpad44();
    virtual void vpad45();
    virtual void vpad46();
    virtual void vpad47();
    virtual void vpad48();
    virtual void vpad49();
    virtual void vpad50();
    virtual void vpad51();
    virtual void vpad52();
    virtual void vpad53();
    virtual void vpad54();
    virtual void vpad55();
    virtual void vpad56();
    virtual void vpad57();
    virtual void vpad58();
    virtual void vpad59();
    virtual void vpad60();
    virtual void vpad61();
    virtual void vpad62();
    virtual void vpad63();
    virtual void vpad64();
    virtual int vf10C();
    virtual int vf110();
};

extern "C" {

M2C_UNK update_facing_from_lock__10TObjPlayerFPv(void *);
M2C_UNK fn_801BA650(void *, M2C_UNK, s32);
M2C_UNK fn_801D0BC0(void *, s16, M2C_UNK);
M2C_UNK fn_801D0D34(void *, s32);
s32 fn_801D0DD0(void *);
M2C_UNK fn_801D0DF4(void *);
M2C_UNK fn_801D0E18(void *);
s32 fn_801D0E28(void *);
M2C_UNK fn_801D0E34(void *, s16);
s32 fn_801D0E58(void *);

void fn_801C7630(void *arg0) {
    s16 var_r4;

    M2C_FIELD(arg0, s32 *, 0x33C) = 0x18;
    fn_801D0BC0(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    if (fn_801D0E58(arg0) != 0) {
        var_r4 = ((VObj8 *) M2C_FIELD(arg0, void **, 0x380))->vf110();
    } else {
        var_r4 = ((VObj8 *) M2C_FIELD(arg0, void **, 0x380))->vf10C();
    }
    fn_801D0E34(arg0, var_r4);
    if (fn_801D0E28(arg0) != 0) {
        update_facing_from_lock__10TObjPlayerFPv(arg0);
    }
    fn_801D0E18(arg0);
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    fn_801D0D34(arg0, M2C_FIELD(arg0, s32 *, 0x60));
    fn_801D0DF4(arg0);
    fn_801BA650(arg0, 0x18, fn_801D0DD0(arg0));
}

}
