#include "pso/TObjDFTenchuFuru.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80051A18_lbl_804FF240 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

#include <stddef.h>
struct RecoveredGlobal_80051AD0_lbl_804858B4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80051AD0_lbl_804FF228 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80051AD0_lbl_804FF234 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredFields_80051AD0_var_r31 {
    s32 field_0;
    u8 unknown_4[0x28];
    u8 * field_2C;
    u8 * field_30;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 TBoss4Type2__sub_800874F4(s32, s32);
void set_flags__11TBoss4Type2FPvUi(void *, s32);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru __vt__16TObjDFTenchuFuru;
extern s32 lbl_805D27B4;
extern const f32 lbl_805D8AA0;
u8 *TObjDFTenchuFuru__ct(u8 *arg0, u8 *arg1, u8 *arg2);
M2C_UNK TObjPlayer__sub_803D898C(void *);
extern RecoveredGlobal_80051A18_lbl_804FF240 lbl_804FF240;
extern int lbl_805D4D78;
void TObjDFTenchuFuru__sub_80051A18(void);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
f32 TObjPlayer__sub_803D99F8(void *, int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
f32 TOHangerMachine01__sub_803D9C00(void *);
extern RecoveredGlobal_80051AD0_lbl_804858B4 lbl_804858B4;
extern RecoveredGlobal_80051AD0_lbl_804FF228 lbl_804FF228;
extern RecoveredGlobal_80051AD0_lbl_804FF234 lbl_804FF234;
extern int lbl_805D4D78;
void TObjDFTenchuFuru__sub_80051AD0(u8 *arg0);
}

extern "C" {
void request_destroy__11TBoss4Type2FUi(void*);
}

TObjDFTenchuFuru::~TObjDFTenchuFuru() {
    if (m_2c != nullptr) request_destroy__11TBoss4Type2FUi(m_2c);
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 is_state_ready__14TBoss4DarkFalzFv();
s32 is_active__14TBoss4DarkFalzFv();
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
extern const f32 lbl_805D8AC0;
void run_task__16TObjDFTenchuFuruFv(u8 *arg0);
}

extern "C" {

int TObjDFTenchuFuru__sub_80051A7C(void);
void * create__16TObjDFTenchuFuruFPvPv(void *arg0, void *arg1);
void register_callback__16TObjDFTenchuFuruFv(void);
void *__nw__7TObjectFUl(int);
int set_global_state__16TObjEneRe7BeruraFi(void*);

#pragma push
#pragma fp_contract on
void run_task__16TObjDFTenchuFuruFv(u8 *arg0) {
    s32 temp_r0;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + lbl_805D8AC0);
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0x2C), (void *) (arg0 + 0x1C));
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28) - 1;
    M2C_FIELD(arg0, s32 *, 0x28) = temp_r0;
    if ((temp_r0 < 0) || ((is_active__14TBoss4DarkFalzFv() == 0) && (is_state_ready__14TBoss4DarkFalzFv() == 0))) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

typedef char RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru_size[sizeof(RecoveredGlobal_80051938___vt__16TObjDFTenchuFuru) == 0x18 ? 1 : -1];
u8 *TObjDFTenchuFuru__ct(u8 *arg0, u8 *arg1, u8 *arg2) {
    u8 *temp_r3;
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__16TObjDFTenchuFuru.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D27B4;
    M2C_FIELD(arg0, s32 *, 0x28) = 5;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + lbl_805D8AA0);
    temp_r3 = (u8 *)(TBoss4Type2__sub_800874F4((s32) (arg0 + 0x1C), 0x134));
    M2C_FIELD(arg0, u8 **, 0x2C) = temp_r3;
    if (temp_r3 != NULL) {
        set_flags__11TBoss4Type2FPvUi(M2C_FIELD(arg0, u8 **, 0x2C), 0x40);
    }
    return arg0;
}

void * create__16TObjDFTenchuFuruFPvPv(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0x30);
    if (o != NULL) {
        o = TObjDFTenchuFuru__ct((u8 *)(o), (u8 *)(arg0), (u8 *)(arg1));
    }
    return o;
}

typedef char RecoveredGlobal_80051A18_lbl_804FF240_size[sizeof(RecoveredGlobal_80051A18_lbl_804FF240) == 0x60 ? 1 : -1];
void TObjDFTenchuFuru__sub_80051A18(void) {
    switch ((s32) (*(s32 *)&lbl_805D4D78)) {
    case 0x3B:
        TObjPlayer__sub_803D898C((void *) (&lbl_804FF240.value));
        break;
    case 0x3A:
        TObjPlayer__sub_803D898C((void *) ((u8 *)&lbl_804FF240.value + 0x30));
        break;
    }
    (*(s32 *)&lbl_805D4D78) += 1;
}

int TObjDFTenchuFuru__sub_80051A7C(void) { return set_global_state__16TObjEneRe7BeruraFi((void*)(0)); }

    extern int lbl_805D4D78;
void register_callback__16TObjDFTenchuFuruFv(void) { lbl_805D4D78 = 0; set_global_state__16TObjEneRe7BeruraFi(((unsigned char *)TObjDFTenchuFuru__sub_80051A18)); }
typedef char RecoveredGlobal_80051AD0_lbl_804858B4_size[sizeof(RecoveredGlobal_80051AD0_lbl_804858B4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80051AD0_lbl_804FF228_size[sizeof(RecoveredGlobal_80051AD0_lbl_804FF228) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80051AD0_lbl_804FF234_size[sizeof(RecoveredGlobal_80051AD0_lbl_804FF234) == 0xC ? 1 : -1];
typedef char RecoveredFields_80051AD0_var_r31_0_offset[offsetof(RecoveredFields_80051AD0_var_r31, field_0) == 0x0 ? 1 : -1];
typedef char RecoveredFields_80051AD0_var_r31_2C_offset[offsetof(RecoveredFields_80051AD0_var_r31, field_2C) == 0x2C ? 1 : -1];
typedef char RecoveredFields_80051AD0_var_r31_30_offset[offsetof(RecoveredFields_80051AD0_var_r31, field_30) == 0x30 ? 1 : -1];
void TObjDFTenchuFuru__sub_80051AD0(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    do {
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((void *) (var_r31 + 8));
        TObjPlayer__sub_803D99F8((void *) (var_r31 + 0x14), (int) (((RecoveredFields_80051AD0_var_r31 *)var_r31)->field_0 & 0x20));
        TBoss7Tentacle__sub_803D9BA0((void *) (var_r31 + 0x20));
        switch ((s32) (*(s32 *)&lbl_805D4D78)) {
        case 0x3B:
            TCameraCtrl__sub_803D8934((int) (0), (void *) (&lbl_804858B4.value), (void *) (&lbl_804FF228.value));
            break;
        case 0x3A:
            TCameraCtrl__sub_803D8934((int) (0), (void *) (&lbl_804858B4.value), (void *) (&lbl_804FF234.value));
            break;
        }
        (*(s32 *)&lbl_805D4D78) += 1;
        temp_r3 = (u8 *)(((RecoveredFields_80051AD0_var_r31 *)var_r31)->field_2C);
        if (temp_r3 != NULL) {
            TObjDFTenchuFuru__sub_80051AD0(temp_r3);
        }
        TObjPlayer__sub_803D9B78();
        var_r31 = (u8 *)(((RecoveredFields_80051AD0_var_r31 *)var_r31)->field_30);
    } while (var_r31 != NULL);
}

}
