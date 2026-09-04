#include "pso/TItemTimer.h"

extern "C" {
s32 all_parents_unqueued_for_destruction__7TObjectFv(void*);
void queue_destruction__7TObjectFv(void*);
void invoke_callback__10TItemTimerFPv(void*);
}

void TItemTimer::run_task() {
    m_1C--;
    if (all_parents_unqueued_for_destruction__7TObjectFv(m_20) == 0) {
        queue_destruction__7TObjectFv(this);
    } else if (m_1C == 0) {
        invoke_callback__10TItemTimerFPv(&m_20);
        queue_destruction__7TObjectFv(this);
    }
}

TItemTimer::~TItemTimer() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase18_8011d87c_8011D414 { char pad[0x18]; };
struct VObj18_8011d87c_8011D414 : VBase18_8011d87c_8011D414 {
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
struct Base_8011D94C_8011D414 { char pad[0x18]; };
struct VObj_8011D94C_8011D414 : Base_8011D94C_8011D414 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual void m73(f32);
};

extern "C" {

u8 *TItemTimer__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
int TItemTimer__sub_8011D598(void *, void *, void *);
void TItemTimer__sub_8011D7DC(void *arg0);
void TItemTimer__sub_8011D94C(void *arg0);
void apply_to_player__10TItemTimerFPv(void *arg0);
void invoke_callback__10TItemTimerFPv(void *arg0);
void reset_fields__10TItemTimerFPv(void* p);
void set_owner_flag_800__10TItemTimerFPv(void *arg0);
void update__10TItemTimerFPv(void *arg0);
void update_owner_state__10TItemTimerFPv(void *arg0);
M2C_UNK TItemProShield__sub_8001140C(s32, M2C_UNK);
s32 TOSwitchAttack__sub_80087278(s32, s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_800112A4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_800112D4(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_80087638(s32, s32);
s32 TObjPlayer__sub_802034B0();
M2C_UNK __ct__7TObjectFP7TObject();
M2C_UNK disallow_rendering__7TObjectFv(void *);
M2C_UNK get_field_3e0__12TBoss3VoloptFPv(void *);
s32 is_flag_20000_set__10TObjPlayerFv(s32);
s32 obj_getField1c(s32);
s32 obj_isState2_324(void *);
s32 obj_isState3_324(s32);
s32 obj_testFlags30(void *, M2C_UNK);
s32 rand__11TOBoss4RockFv();
s32 test_flag_2000000__10TObjPlayerFPv(s32);

extern M2C_UNK __vt__10TItemTimer[];
extern s32 lbl_805D2C88;

u8 *TItemTimer__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    __ct__7TObjectFP7TObject();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TItemTimer;
    reset_fields__10TItemTimerFPv((void*)((void *) (arg0 + 0x20)));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2C88;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (arg3 - 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) < 1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    }
    TItemTimer__sub_8011D598((void *)((void *) (arg0 + 0x20)), (void *)((void *) (arg1)), (void *)((void *) (arg2)));
    disallow_rendering__7TObjectFv((void *) (arg0));
    return arg0;
}

void invoke_callback__10TItemTimerFPv(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 4);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0));
    }
}

int TItemTimer__sub_8011D598(void *, void *, void *) { return 0; }

void reset_fields__10TItemTimerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

void TItemTimer__sub_8011D7DC(void *arg0) {
    s32 temp_r3;

    if ((test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x28)) == 0) && (is_flag_20000_set__10TObjPlayerFv(M2C_FIELD(arg0, s32 *, 0x28)) == 0)) {
        get_field_3e0__12TBoss3VoloptFPv((void *)((void *)(M2C_FIELD(arg0, s32 *, 0x28))));
        if ((TObjPlayer__sub_802034B0() == 1) && (obj_testFlags30((void *)(M2C_FIELD(arg0, s32 *, 0x28)), (M2C_UNK)(0x800)) == 0)) {
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
        if (((VObj18_8011d87c_8011D414 *) M2C_FIELD(arg0, void **, 0x28))->vf84() == 0) {
            get_field_3e0__12TBoss3VoloptFPv((void *)((void *)(M2C_FIELD(arg0, void **, 0x28))));
            if ((TObjPlayer__sub_802034B0() == 1) && ((lbl_805DAC78 * (f32) rand__11TOBoss4RockFv()) < M2C_FIELD(arg0, f32 *, 0x2C))) {
                ((VObj18_8011d87c_8011D414 *) M2C_FIELD(arg0, void **, 0x28))->vfC0(0);
                ((VObj18_8011d87c_8011D414 *) M2C_FIELD(arg0, void **, 0x28))->vf128(0);
            }
        }
    }
}

extern f32 lbl_805DAC80;

void TItemTimer__sub_8011D94C(void *arg0) {
    struct VObj_8011D94C_8011D414 *o;

    if (obj_testFlags30((void *)((void *)(M2C_FIELD(arg0, void **, 0x28))), (M2C_UNK)((M2C_UNK)(0x800))) == 0) {
        o = (struct VObj_8011D94C_8011D414 *)M2C_FIELD(arg0, void **, 0x28);
        o->m73(lbl_805DAC80);
    }
}

void apply_to_player__10TItemTimerFPv(void *arg0) {
    if (obj_testFlags30((void *)((void *)(M2C_FIELD(arg0, s32 *, 0x28))), (M2C_UNK)((M2C_UNK)(0x800))) == 0) {
        TObjPlayer__sub_800112A4(M2C_FIELD(arg0, s32 *, 0x28), 1);
    }
}

void set_owner_flag_800__10TItemTimerFPv(void *arg0) {
    if (obj_testFlags30((void *)((void *)(M2C_FIELD(arg0, s32 *, 0x28))), (M2C_UNK)((M2C_UNK)(0x800))) == 0) {
        TItemProShield__sub_8001140C(M2C_FIELD(arg0, s32 *, 0x28), 1);
    }
}

void update_owner_state__10TItemTimerFPv(void *arg0) {
    get_field_3e0__12TBoss3VoloptFPv((void *)(M2C_FIELD(arg0, s32 *, 0x28)));
    if ((TObjPlayer__sub_802034B0() == 1) && (obj_isState3_324(M2C_FIELD(arg0, s32 *, 0x28)) == 0) && (obj_testFlags30((void *)(M2C_FIELD(arg0, s32 *, 0x28)), (M2C_UNK)(0x800)) == 0)) {
        TObjPlayer__sub_800112D4(M2C_FIELD(arg0, s32 *, 0x28), 1);
    }
}

}
