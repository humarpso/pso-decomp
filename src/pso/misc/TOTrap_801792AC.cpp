#include "types.h"
#include "pso/misc/TOTrap.h"

struct Base_80179314_801792AC { char pad[0x18]; };
struct VObj_80179314_801792AC : Base_80179314_801792AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20(int, f32);
};
struct Base_80179358_801792AC { char pad[0x18]; };
struct VObj_80179358_801792AC : Base_80179358_801792AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20(int, f32);
};

extern "C" {
u8 TOTrap__sub_801792CC(u8 *arg0, s32 arg1);
u8 TOTrap__sub_801792E4(u8 *arg0, s32 arg1);
u8 TOTrap__sub_801792FC(u8 *arg0, s32 arg1);
}

extern "C" {

void TOTrap::vfunc_86() {  }
void TOTrap::vfunc_88() {  }

s32 TOTrap::try_start_action(s32 arg1, s32) {
    u8 *arg0 = (u8 *)this;
    return (u8) (arg1 != *(s32 *)((s8 *)arg0 + 0x2A8));
}

u8 TOTrap__sub_801792CC(u8 *arg0, s32 arg1) {
    return (u8) (arg1 != *(s32 *)((s8 *)arg0 + 0x2A8));
}

u8 TOTrap__sub_801792E4(u8 *arg0, s32 arg1) {
    return (u8) (arg1 != *(s32 *)((s8 *)arg0 + 0x2A8));
}

extern f32 TOTrap__data_805DBA38;
extern f32 TOTrap__data_805DBA3C;

u8 TOTrap__sub_801792FC(u8 *arg0, s32 arg1) {
    return (u8) (arg1 != *(s32 *)((s8 *)arg0 + 0x2A8));
}

f32 TOTrap::check_trigger_range(u32 arg1) {
    struct VObj_80179314_801792AC *arg0 = (struct VObj_80179314_801792AC *)this;
    if (arg1 != *(u32 *)((s8 *)arg0 + 0x2A8)) {
        arg0->m20(0, TOTrap__data_805DBA38);
    }
    return TOTrap__data_805DBA3C;
}

extern f32 TOTrap__data_805DBA38;
extern f32 TOTrap__data_805DBA3C;

f32 TOTrap::get_scale(u32 arg1) {
    struct VObj_80179358_801792AC *arg0 = (struct VObj_80179358_801792AC *)this;
    if (arg1 != *(u32 *)((s8 *)arg0 + 0x2A8)) {
        arg0->m20(0, TOTrap__data_805DBA38);
    }
    return TOTrap__data_805DBA3C;
}

}
