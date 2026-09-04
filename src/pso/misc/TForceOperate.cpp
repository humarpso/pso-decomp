#ifndef PSO_CLASS_PACKAGE
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

void run_task__13TForceOperateFv(s32 arg0);
s32 is_target_valid__10TObjPlayerFPv();
s32 TObjPlayer__sub_801B58DC(void *);
void *TPhotonMylla__sub_80154CB4();
void *get_state__11TMainCursorFPv(s32);
M2C_UNK get_id__11TMainCursorFPv(s32);
s32 TObjPlayer__sub_801C6DAC(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

s32 obj_getField1c(void *);

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

}
#else
#if PSO_CLASS_PACKAGE == 0x8013DFDC
#include "types.h"

extern "C" {

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1);
int __dl__FPv();
int check_visible__11TMainCursorFPv(void* p);
u8 get_enabled__11TMainCursorFPv(void* p);
u8 get_type__11TMainCursorFPv(void* p);
void set_slot__20TWindowActionPaletteFPvUc(void* p, u8 v);
void set_mode__20TWindowActionPaletteFPvUc(void* p, u8 v);
s32 get_state__11TMainCursorFPv(void* p);
void set_field_0__13TForceOperateFPvs(void* p, s16 v);
u16 TMainCursor__sub_8013E03C(void* p);
int find_action_slot_for_target__11TMainCursorFiiii(void*);

s32 destroy__13TForceOperateFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void set_field_0__13TForceOperateFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C5870
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2);
void set_field_0__13TForceOperateFPvs(void *, void *);
void __ct__7TObjectFP7TObject(void *);
void fn_8013E020(void *);

extern M2C_UNK __vt__13TForceOperate[];
extern void *lbl_805D3560;
struct VOff_801C5870_arg0 { char pad_0[0x1C]; char f_1C[1]; };

void *TForceOperate__ct(void *arg0, void *arg1, void *arg2) {
    struct VOff_801C5870_arg0 *self = (struct VOff_801C5870_arg0 *)arg0;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
    fn_8013E020(self->f_1C);
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3560;
    set_field_0__13TForceOperateFPvs(self->f_1C, arg2);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801C6EC4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__13TForceOperateFv(void *arg0, s16 arg1);
void destroy__13TForceOperateFis(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK __vt__13TForceOperate[];

void *__dt__13TForceOperateFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TForceOperate;
        destroy__13TForceOperateFis((s8 *)arg0 + 0x1C, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#endif
