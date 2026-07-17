#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_8011d87c { char pad[0x18]; };
struct VObj18_8011d87c : VBase18_8011d87c {
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
    virtual s32 vf84();
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
    virtual void vfC0(int);
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
    virtual void vf128(int);
};

extern "C" {

void TItemTimer__sub_8011D7DC(void *arg0);
void update__10TItemTimerFPv(void *arg0);
M2C_UNK get_field_3e0__12TBoss3VoloptFPv(void *);
s32 rand__11TOBoss4RockFv();
s32 TOSwitchAttack__sub_80087278(s32, s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_80087638(s32, s32);
s32 is_flag_20000_set__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_802034B0();
s32 obj_getField1c(s32);
s32 obj_isState2_324(void *);
s32 obj_testFlags30(s32, M2C_UNK);
s32 test_flag_2000000__10TObjPlayerFPv(s32);

void TItemTimer__sub_8011D7DC(void *arg0) {
    s32 temp_r3;

    if ((test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 0) && (is_flag_20000_set__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x28)) == 0)) {
        get_field_3e0__12TBoss3VoloptFPv((void *)(M2C_FIELD(arg0, s32 *, 0x28)));
        if ((TObjPlayer__sub_802034B0() == 1) && (obj_testFlags30(M2C_FIELD(arg0, s32 *, 0x28), 0x800) == 0)) {
            temp_r3 = TOSwitchAttack__sub_80087278(M2C_FIELD(arg0, s32 *, 0x28) + 0x2FC, M2C_FIELD(arg0, s32 *, 0x2C), 0x10);
            if (temp_r3 != 0) {
                TObjPlayer__sub_80087638(temp_r3, obj_getField1c(M2C_FIELD(arg0, s32 *, 0x28)));
            }
        }
    }
}

extern const f64 lbl_8043E820;
extern const f32 lbl_805DAC78;

void update__10TItemTimerFPv(void *arg0) {

    if (obj_isState2_324(M2C_FIELD(arg0, void **, 0x28)) == 0) {
        if (((VObj18_8011d87c *) M2C_FIELD(arg0, void **, 0x28))->vf84() == 0) {
            get_field_3e0__12TBoss3VoloptFPv((void *)(M2C_FIELD(arg0, void **, 0x28)));
            if ((TObjPlayer__sub_802034B0() == 1) && ((lbl_805DAC78 * (f32) rand__11TOBoss4RockFv()) < M2C_FIELD(arg0, f32 *, 0x2C))) {
                ((VObj18_8011d87c *) M2C_FIELD(arg0, void **, 0x28))->vfC0(0);
                ((VObj18_8011d87c *) M2C_FIELD(arg0, void **, 0x28))->vf128(0);
            }
        }
    }
}

}
