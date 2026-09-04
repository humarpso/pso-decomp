#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_801B6414_801B3FD8 { char pad[0x18]; };
struct VObj_801B6414_801B3FD8 : Base_801B6414_801B3FD8 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(s32);
    virtual void m13();
    virtual s32 m14();
};

void TObjPlayer__sub_801B67C4(void* p);
void TObjPlayer__vt71(s32 arg0);
void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1);
void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1);
s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2);
void copy_stats__10TObjPlayerFPvPv(void *arg0, void *arg1);
void notify_volopt_if_ready__10TObjPlayerFPv(void* p);
void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1);
int TBoss3Volopt__sub_8022675C(void*, void*, void*, void*);
M2C_UNK TObjPlayer__sub_80018990(s32, M2C_UNK, M2C_UNK, M2C_UNK, f32, f32);
int TObjPlayer__sub_80019248(void*);
s32 TObjPlayer__sub_801D921C(void *, s32);
s16 *TObjPlayer__sub_801D93C4();
f32 TObjPlayer__sub_801D93F8();
f32 TObjPlayer__sub_801D9440(s32);
M2C_UNK clamp_field_32E__10TObjPlayerFPv(s32);
s32 clamp_index_to_max__10TObjPlayerFi(s32);
M2C_UNK clamp_value__10TObjPlayerFPv(s32);
s32 obj_getPtr2B0_1C(void *);

s16 add_stat_clamped__10TObjPlayerFiPvs(s32 arg0, s16 *arg1, s16 arg2) {
    s16 temp_r3;
    s16 var_r6;

    var_r6 = 0;
    *arg1 += arg0;
    temp_r3 = *arg1;
    if (temp_r3 < 0) {
        *arg1 = 0;
    } else {
        var_r6 = temp_r3 - arg2;
        if (var_r6 > 0) {
            *arg1 = arg2;
        }
    }
    return var_r6;
}

void add_lck__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xC)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 0xC)));
}

void add_evp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 4)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 4)));
}

void add_ata__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 0xA)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 0xA)));
}

void add_mst__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 2)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 2)));
}

void add_hp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 6)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 6)));
}

void add_dfp__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0) + 8)), (s16)(M2C_FIELD(TObjPlayer__sub_801D93C4(), s16 *, 8)));
}

void add_stat__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    add_stat_clamped__10TObjPlayerFiPvs((s32)(arg1), (s16 *)((s16 *)(M2C_FIELD(arg0, s32 *, 0x2B0))), (s16)(*TObjPlayer__sub_801D93C4()));
}

void TObjPlayer__vt71(s32 arg0) {
    f32 temp_f31;
    f32 temp_f1;

    temp_f31 = TObjPlayer__sub_801D93F8();
    temp_f1 = TObjPlayer__sub_801D9440(arg0);
    TObjPlayer__sub_80018990(arg0, 0, 0, 0, temp_f1, temp_f31);
    clamp_value__10TObjPlayerFPv(arg0);
    clamp_field_32E__10TObjPlayerFPv(arg0);
}

void update_aim_angle__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    struct VObj_801B6414_801B3FD8 *obj = (struct VObj_801B6414_801B3FD8 *) arg0;
    s32 temp_r31;

    temp_r31 = TObjPlayer__sub_801D921C(arg0, clamp_index_to_max__10TObjPlayerFi(arg1 + obj->m14()));
    obj->m12(temp_r31 - obj_getPtr2B0_1C(arg0));
}

void TObjPlayer__sub_801B67C4(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }

void copy_stats__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) M2C_FIELD(arg1, s16 *, 0);
    M2C_FIELD(arg0, s16 *, 2) = (s16) M2C_FIELD(arg1, s16 *, 2);
    M2C_FIELD(arg0, s16 *, 4) = (s16) M2C_FIELD(arg1, s16 *, 4);
    M2C_FIELD(arg0, s16 *, 6) = (s16) M2C_FIELD(arg1, s16 *, 6);
    M2C_FIELD(arg0, s16 *, 8) = (s16) M2C_FIELD(arg1, s16 *, 8);
    M2C_FIELD(arg0, s16 *, 0xA) = (s16) M2C_FIELD(arg1, s16 *, 0xA);
    M2C_FIELD(arg0, s16 *, 0xC) = (s16) M2C_FIELD(arg1, s16 *, 0xC);
}

void notify_volopt_if_ready__10TObjPlayerFPv(void* p) { if (TObjPlayer__sub_80019248(p) != 0) { TBoss3Volopt__sub_8022675C((void*)335646, (void*)0, (void*)0, (void*)0); } }

}
