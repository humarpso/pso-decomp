#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_800b2fd0 { char pad[0x18]; };
struct VObj18_800b2fd0 : VBase18_800b2fd0 {
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
    virtual void vpad65();
    virtual void vpad66();
    virtual void vpad67();
    virtual void vpad68();
    virtual void vpad69();
    virtual void vpad70();
    virtual void vpad71();
    virtual void vpad72();
    virtual void vpad73();
    virtual void vpad74();
    virtual void vpad75();
    virtual void vpad76();
    virtual void vpad77();
    virtual void vpad78();
    virtual void vpad79();
    virtual void vpad80();
    virtual void vpad81();
    virtual void vpad82();
    virtual void vpad83();
    virtual void vpad84();
    virtual void vpad85();
    virtual void vpad86();
    virtual void vpad87();
    virtual void vpad88();
    virtual void vpad89();
    virtual void vpad90();
    virtual void vpad91();
    virtual void vpad92();
    virtual void vpad93();
    virtual void vf180();
    virtual void vpad95();
    virtual void vpad96();
    virtual void vpad97();
    virtual void vpad98();
    virtual void vpad99();
    virtual void vf198();
};

extern "C" {

void state_spawn__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1);
M2C_UNK advance_animation_playback(void *);
M2C_UNK spawn_child__17TObjEneBm3FlyNestFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
s32 objInBand__FP7GameObjf(f32);

extern const f32 lbl_805D9CF8;
extern const f32 lbl_805D9D30;

void state_spawn__17TObjEneBm3FlyNestFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 5;
        ((VObj18_800b2fd0 *) arg0)->vf180();
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        M2C_FIELD(arg0, f32 *, 0x4B0) = (f32) lbl_805D9CF8;
        return;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            transition_enemy_state(arg0, 5);
        }
        break;
    case 5:
    case 1:
        break;
    case 0:
        if (objInBand__FP7GameObjf(lbl_805D9D30) != 0) {
            spawn_child__17TObjEneBm3FlyNestFPv(arg0);
            M2C_FIELD(arg0, s32 *, 0x4B8) = (s32) (M2C_FIELD(arg0, s32 *, 0x4B8) - 1);
        }
        advance_animation_playback(arg0);
        ((VObj18_800b2fd0 *) arg0)->vf198();
        break;
    }
}

}
