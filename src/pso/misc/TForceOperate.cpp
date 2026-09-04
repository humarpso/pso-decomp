#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801C57D0 { char pad[0x18]; };
struct VObj_801C57D0 : Base_801C57D0 {
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
    virtual void m11(s32);
};

extern "C" {

struct VOff_801C5870_arg0_801C57D0 { char pad_0[0x1C]; char f_1C[1]; };

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2);
void TObjPlayer__sub_801C5954(void *arg0);
void run_task__13TForceOperateFv(s32 arg0);
s32 TObjPlayer__sub_801B58DC(void *);
s32 TObjPlayer__sub_801C6DAC(s32);
void *TPhotonMylla__sub_80154CB4();
void __ct__7TObjectFP7TObject(void *);
void fn_8013E020(void *);
M2C_UNK get_id__11TMainCursorFPv(s32);
void *get_state__11TMainCursorFPv(s32);
s32 is_target_valid__10TObjPlayerFPv();
s32 obj_getField1c(void *);
M2C_UNK queue_destruction__7TObjectFv(s32);
void set_field_0__13TForceOperateFPvs(void *, void *);

void run_task__13TForceOperateFv(s32 arg0) {
    void *temp_r31;
    void *temp_r3;

    if (TObjPlayer__sub_801C6DAC(arg0 + 0x1C) != 0) {
        temp_r31 = get_state__11TMainCursorFPv(arg0 + 0x1C);
        if ((is_target_valid__10TObjPlayerFPv() != 0) && (TObjPlayer__sub_801B58DC(temp_r31) != 0)) {
            get_id__11TMainCursorFPv(M2C_FIELD(temp_r31, s32 *, 0x424) + 0x4F8);
            temp_r3 = TPhotonMylla__sub_80154CB4();
            if (temp_r3 != NULL) {
                ((VObj_801C57D0 *)temp_r3)->m11(obj_getField1c(temp_r31));
                queue_destruction__7TObjectFv(arg0);
            }
        }
    }
}

extern M2C_UNK __vt__13TForceOperate[];
extern void *lbl_805D3560;

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_801C5870_arg0_801C57D0 *self = (struct VOff_801C5870_arg0_801C57D0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
    fn_8013E020(self->f_1C);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3560;
    set_field_0__13TForceOperateFPvs(self->f_1C, arg2);
    return arg0;
}

void TObjPlayer__sub_801C5954(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 4) * M2C_FIELD(arg0, f32 *, 8));
}

}
