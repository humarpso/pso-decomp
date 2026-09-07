#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8023B17C___vt__9TTecSifta {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 TTecPlayerInfluence__ct(void *, void *, void *, void *);
int TTecSifta__sub_8023AC88(void* p);
int TTecSifta__sub_8023ACA8(void *);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
extern M2C_UNK __vt__9TTecSifta[];
extern s32 lbl_805D3820;
extern const f32 lbl_805DC940;
u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

int TTecSifta__sub_8023AC88(void* p);
void *__dt__9TTecSiftaFv(void *arg0, s16 arg1);
void create__9TTecSiftaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create_instance__9TTecSiftaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__9TTecSiftaFv(void);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
void TObjPlayer__sub_8023AC84(void);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);
void *TTecSifta__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);

int TTecSifta__sub_8023AC88(void* p) { return fn_80236EE8(p); }

int TTecSifta__sub_8023ACA8(void * _w0) { return 0; }

extern const f64 lbl_8044DC18;

void update_effect_params__9TTecSiftaFPv(u8 *arg0) {
    s32 res;
    res = TTecCtrl__sub_8022DBC4(0xD, M2C_FIELD(arg0, s16 *, 0xA4), 0xFFFF);
    TTecAnti__sub_8022B35C(arg0 + 0x74, res);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, s16 *, 0x98) * M2C_FIELD(arg0, s16 *, 0xA4));
}

void create_instance__9TTecSiftaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create__9TTecSiftaFPvPvPv(void *arg0, void *arg1, void *arg2) {
    void *o;
    o = __nw__7TObjectFUl(0x140);
    if (o != NULL) {
        TTecSifta__sub_8023B17C((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2));
    }
}

extern M2C_UNK __vt__9TTecSifta[];

void *__dt__9TTecSiftaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TTecSifta;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8023B17C___vt__9TTecSifta_size[sizeof(RecoveredGlobal_8023B17C___vt__9TTecSifta) == 0x20 ? 1 : -1];
u8 *TTecSifta__sub_8023B17C(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_r3_2;
    u8 *temp_r3;
    TTecPlayerInfluence__ct((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8023B17C___vt__9TTecSifta *)&__vt__9TTecSifta).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xE0));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3820;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    update_effect_params__9TTecSiftaFPv((u8 *)((void *) (arg0)));
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0xDC));
    if (temp_r3 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0xA4), f32 *, 0xC) = (f32) (lbl_805DC940 + M2C_FIELD(arg0, f32 *, 0x7C));
    }
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3_2 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xA8) = obj_getField1c((int) (temp_r3_2));
    }
    TTecSifta__sub_8023AC88((void*)((void *) (arg0)));
    TTecSifta__sub_8023ACA8((void *)((void *) (arg0)));
    return arg0;
}

void render__9TTecSiftaFv(void) {  }

}
