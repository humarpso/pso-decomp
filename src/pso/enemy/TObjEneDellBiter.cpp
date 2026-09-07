#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80303204 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_80303204_lbl_804E6B54 { M2C_UNK value; u8 remaining[0x18]; };
typedef char RecoveredGlobal_80303204_lbl_804E6B54_size[sizeof(RecoveredGlobal_80303204_lbl_804E6B54) == 0x1C ? 1 : -1];

extern "C" {
s32 obj_isState2_324(void *);
M2C_UNK obj_getField1c(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_alive__9TObjEneDDFPv(void *);
s32 TObjEneDD__sub_800BA828();
extern const f32 lbl_805DEFB0;
extern const f32 lbl_805DEFB4;
void TObjEneDellBiter__sub_803030D8(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjBoss2Tunnel__sub_8007E7D8(void *, void *, int);
s32 TObjBoss2Tunnel__sub_8007E84C(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern M2C_UNK lbl_804E6B54[];
extern s32 lbl_805D4070;
extern const f32 lbl_805DEFAC;
u8 *TObjEneDellBiter__sub_80303204(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0);
}

extern "C" {

struct VObjBase_803042b0_803030D4 { char pad_[0x18]; };
struct VObj_803042b0_803030D4 : VObjBase_803042b0_803030D4 {
#define VS8(n) virtual M2C_UNK m##n##0(); virtual M2C_UNK m##n##1(); virtual M2C_UNK m##n##2(); virtual M2C_UNK m##n##3(); virtual M2C_UNK m##n##4(); virtual M2C_UNK m##n##5(); virtual M2C_UNK m##n##6(); virtual M2C_UNK m##n##7(); virtual M2C_UNK m##n##8(); virtual M2C_UNK m##n##9();
    VS8(0) VS8(1) VS8(2) VS8(3) VS8(4) VS8(5) VS8(6) VS8(7) VS8(8) VS8(9)
    virtual M2C_UNK m100();
};

void TObjEneDellBiter__sub_803030D4(void);
void *TObjEneDellBiter__sub_803031AC(void *arg0, s16 arg1);
void TObjEneDellBiter__vt103(void* p);
void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1);
s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504();
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(int, f32, f32, f32);
s32 TObjBoss2Tunnel__sub_8007E5A0(int, int, int, int, int);
M2C_UNK TObjEneDD__sub_800BBA18(void *, int);
s32 TObjEneDellBiter__sub_803054FC(void *);
M2C_UNK TObjEneDellBiter__sub_80305B60(void *);
M2C_UNK TObjEneDellBiter__sub_80305E1C(void *);
int TObjEneDellBiter__sub_80305F58(void*);
s32 TObjEneRecon__sub_8029E960(void *);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK fn_8002B094(int);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
s32 get_mode__11TCameraCtrlFPv(void *);
int get_target_info__9TObjEneDDFPv(void*);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK reset_timer__11TBoss4Type3FPv(int);
M2C_UNK restore_render_scissor(int);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK set_global_param__8TObjFishFi(int);

void TObjEneDellBiter__sub_803030D4(void) {  }

extern M2C_UNK lbl_804E6B54[];

void TObjEneDellBiter__sub_803030D8(u8 *arg0) {
    f32 temp_f1;
    obj_getField1c((void *) (M2C_FIELD(arg0, u8 **, 0x1C)));
    if (TObjEneDD__sub_800BA828() != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (is_alive__9TObjEneDDFPv((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if (obj_isState2_324((void *) (M2C_FIELD(arg0, u8 **, 0x1C))) != 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x2C);
    if (temp_f1 <= lbl_805DEFB0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) * temp_f1);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x1C), f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) * M2C_FIELD(arg0, f32 *, 0x2C));
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) * lbl_805DEFB4);
}

void *TObjEneDellBiter__sub_803031AC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E6B54;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK main_task[];
extern const f32 TObjEneDellBiter__data_805DEFB8;

u8 *TObjEneDellBiter__sub_80303204(u8 *arg0, s32 arg1, u8 *arg2, s32 arg3, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_80303204, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80303204, spC) == 0x4) ? 1 : -1];
    Stack_80303204 stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80303204_lbl_804E6B54 *)&lbl_804E6B54).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4070;
    M2C_FIELD(arg0, s32 *, 0x1C) = arg3;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg3 + 0x38));
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (arg2 + 0x38));
    stack.spC = lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0x20) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0x28) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg2, s32 *, 0x60)));
    if (TObjBoss2Tunnel__sub_8007E84C((void *) (arg0 + 0x20), (void *) (&stack.sp8)) != 0) {
        TObjBoss2Tunnel__sub_8007E7D8((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (-0x1800));
    } else {
        TObjBoss2Tunnel__sub_8007E7D8((void *) (arg0 + 0x20), (void *) (arg0 + 0x28), (int) (0x1800));
    }
    return arg0;
}

s32 render_model_if_visible__16TObjEneDellBiterFPv(u8 *arg0) {
    if (get_mode__11TCameraCtrlFPv(main_task) & 0x20) {
        if (TObjEneRecon__sub_8029E960((void *) (arg0 + 0x3C8)) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            TOMonitorMachine01__sub_803D8B5C((int) (0), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8), (f32) (TObjEneDellBiter__data_805DEFB8));
            draw__16TObjEneRe7BeruraFPv((void *) (arg0));
            TObjPlayer__sub_803D9B78();
            restore_render_scissor((int) (1));
        }
        return 1;
    }
    return 0;
}

void TObjEneDellBiter__vt103(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { TObjEneDellBiter__sub_80305F58(p); } }

extern u8 *TObjEneDellBiter__data_805D6A2C;
extern const f32 TObjEneDellBiter__data_805DEFE4;
extern const f32 lbl_805DEFF0;

void handle_attack_event__16TObjEneDellBiterFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r3;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (5));
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFFC);
        M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) | 4);
        fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0x4A0)));
        reset_timer__11TBoss4Type3FPv((int) (M2C_FIELD(arg0, s32 *, 0x4A4)));
        M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x4D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x48C) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x4D0) == 2) {
            M2C_FIELD(arg0, s32 *, 0x488) = (s32) (M2C_FIELD(arg0, s32 *, 0x488) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x488) >= 2) {
                M2C_FIELD(arg0, s32 *, 0x488) = 0;
                M2C_FIELD(arg0, s32 *, 0x3C0) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C0) & 0xFFFFFFF7);
            }
            if (TObjEneDellBiter__sub_803054FC((void *) (arg0)) == 0) {
                TObjEneDD__sub_800BBA18((void *) (arg0), (int) (5));
            }
        }
        break;
    case 0:
        TBoss1Dragon__sub_80143504();
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x60);
        M2C_FIELD(arg0, s32 *, 0x484) = TObjBoss2Tunnel__sub_8007E5A0((int) (temp_r3), (int) (M2C_FIELD(arg0, s32 *, 0x484)), (int) (temp_r3), (int) (0x200), (int) (0x2000));
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x4D0);
        switch (temp_r0) {
        case 0:
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (TObjEneDellBiter__data_805DEFE4)) != 0) {
                TObjEneDellBiter__sub_80305B60((void *) (arg0));
            }
            TObjEneDellBiter__sub_80305E1C((void *) (arg0));
            if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805DEFF0)) != 0) {
                TBoss3Volopt__sub_8022675C((int) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (void *) (0x40039E16))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv((void *) (arg0)) != 0) {
                M2C_FIELD(arg0, s16 *, 0xB8) = 0;
                M2C_FIELD(arg0, s32 *, 0x4D0) = 1;
                M2C_FIELD(arg0, s32 *, 0x4CC) = 0;
            }
            break;
        case 1:
            M2C_FIELD(arg0, s32 *, 0x4CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x4CC) + 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x4CC) >= (s32) M2C_FIELD(TObjEneDellBiter__data_805D6A2C, s32 *, 0x18)) {
                M2C_FIELD(arg0, s32 *, 0x4D0) = 2;
            }
            break;
        }
        ((VObj_803042b0_803030D4 *) arg0)->m100();
        ((VObj_803042b0_803030D4 *) arg0)->m87();
        break;
    case 5:
        break;
    }
}

}
