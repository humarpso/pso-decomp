#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick {
    M2C_UNK value;
    u8 remaining[0x144];
};

struct VBase_18_f90cfc { char pad[0x18]; };

struct VObj_18_f90cfc : VBase_18_f90cfc {
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
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual M2C_UNK m77();
};

extern "C" {
void init_geometry__19TOHangceilingCave01FPv(void *);
u8 * TOHangceilingCave01KeyQuick__sub_80168C6C(void *, s32);
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void *, f32);
extern RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick __vt__27TOHangceilingCave01KeyQuick;
extern s32 lbl_805D2FF0;
extern const f32 lbl_805DB688;
u8 *TOHangceilingCave01KeyQuick__ct(u8 *arg0, s32 arg1);
M2C_UNK advance_wrap_offset__25TOHangceilingCave01NormalFPv(void *);
M2C_UNK fn_801682E4(void *, int);
M2C_UNK fn_80168488(void *);
u8 TODoorAncient08__sub_80229220(int);
M2C_UNK clear_current_floor_switch(int);
extern s32 lbl_805DB658;
extern const f32 lbl_805DB65C;
extern const f32 lbl_805DB660;
extern const f32 lbl_805DB664;
void TOHangceilingCave01Key__vt78(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick_size[sizeof(RecoveredGlobal_80167C78___vt__27TOHangceilingCave01KeyQuick) == 0x148 ? 1 : -1];
u8 *TOHangceilingCave01KeyQuick__ct(u8 *arg0, s32 arg1) {
    TOHangceilingCave01KeyQuick__sub_80168C6C(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__27TOHangceilingCave01KeyQuick.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FF0;
    init_geometry__19TOHangceilingCave01FPv(arg0);
    set_scale__27TOHangceilingCave01KeyQuickFPvf(arg0, lbl_805DB688 + M2C_FIELD(arg0, f32 *, 0x70));
    return arg0;
}
void TOHangceilingCave01Key__vt78(u8 *arg0) {
    switch (*(s16 *)(arg0 + 0x326)) {
    case 3:
        if (TODoorAncient08__sub_80229220((u16)*(s32 *)(arg0 + 0x35C)) == 1 && *(f32 *)(arg0 + 0xC0) <= *(f32 *)(arg0 + 0xC4)) {
            fn_801682E4(arg0, 2);
        }
        advance_wrap_offset__25TOHangceilingCave01NormalFPv(arg0);
        break;
    case 1:
        advance_wrap_offset__25TOHangceilingCave01NormalFPv(arg0);
        fn_80168488(arg0);
        if (lbl_805DB65C == *(f32 *)(arg0 + 0xC0)) {
            *(s32 *)(*(u8 **)(arg0 + 0xA4) + 0x18) &= ~8;
        } else if (lbl_805DB660 == *(f32 *)(arg0 + 0xC0)) {
            ((VObj_18_f90cfc *)(arg0))->m77();
            clear_current_floor_switch((u16)*(s32 *)(arg0 + 0x35C));
        }
        break;
    case 2:
        advance_wrap_offset__25TOHangceilingCave01NormalFPv(arg0);
        if (lbl_805DB664 == *(f32 *)(arg0 + 0xC0)) {
            *(s32 *)(*(u8 **)(arg0 + 0xA4) + 0x18) |= lbl_805DB658;
        } else if (*(f32 *)(arg0 + 0xC0) == *(f32 *)(arg0 + 0xC4)) {
            fn_801682E4(arg0, 1);
        }
        break;
    }
}

}
