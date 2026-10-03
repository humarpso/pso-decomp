#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_8_684c72 { char pad[0x8]; };

struct VObj_8_684c72 : VBase_8_684c72 {
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
    virtual s32 m65();
    virtual s32 m66();
};

extern "C" {
s32 calc_scaled_value__10TObjPlayerFii(void *, int);
s32 handle_palette_button_input__10TObjPlayerFPv(void *);
s32 check_flag_48__10TObjPlayerFPv(void *);
s32 TObjPlayer__sub_801C00E4(int);
s16 TObjPlayer__sub_801C7AE8(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, int, int);
s32 get_target_field_1c__10TObjPlayerFPv(void *);
f32 get_attached_float_24__10TObjPlayerFPv(void *);
extern const f32 TObjPlayer__data_805DC368;
void check_idle_movement_request__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void check_idle_movement_request__10TObjPlayerFPv(u8 *arg0) {
    f32 temp_f31;
    s32 temp_r31;
    temp_f31 = get_attached_float_24__10TObjPlayerFPv((void *) (arg0 + 0x550));
    temp_r31 = get_target_field_1c__10TObjPlayerFPv((void *) (arg0 + 0x550));
    if ((handle_palette_button_input__10TObjPlayerFPv((void *) (arg0)) == 0) || (check_flag_48__10TObjPlayerFPv((void *) (arg0)) == 0)) {
        M2C_FIELD(arg0, s16 *, 0x3C0) = TObjPlayer__sub_801C7AE8((void *) (arg0));
        if (TObjPlayer__sub_801C00E4((int) (M2C_FIELD(arg0, s16 *, 0x3C0))) == 0) {
            if (M2C_FIELD(arg0, s16 *, 0x3C0) == (*(VObj_8_684c72 **)(arg0 + 0x380))->m65() ||
                M2C_FIELD(arg0, s16 *, 0x3C0) == (*(VObj_8_684c72 **)(arg0 + 0x380))->m66()) {
                run_action_state_phase__10TObjPlayerFisi((void *) (arg0), (int) (0x18), (int) (5));
            } else {
                run_action_state_phase__10TObjPlayerFisi((void *) (arg0), (int) (0x17), (int) (5));
            }
            return;
        }
        if (temp_f31 >= TObjPlayer__data_805DC368) {
            M2C_FIELD(arg0, s32 *, 0x3F0) = calc_scaled_value__10TObjPlayerFii((void *) (arg0), (int) (temp_r31));
            run_action_state_phase__10TObjPlayerFisi((void *) (arg0), (int) (2), (int) (5));
        }
    }
}

}
