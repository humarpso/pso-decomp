#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TTecSifta__sub_8023AC88(void* p);
int TTecSifta__sub_8023ACA8(void);
void *__dt__9TTecSiftaFv(void *arg0, s16 arg1);
void create__9TTecSiftaFPvPvPv(void *arg0, void *arg1, void *arg2);
void create_instance__9TTecSiftaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__9TTecSiftaFv(void);
void update_effect_params__9TTecSiftaFPv(u8 *arg0);
void TObjPlayer__sub_8023AC84(void);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);
void *TTecSifta__ct(void *, void *, void *, void *, void *);
void *TTecSifta__sub_8023B17C(void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
void *__nw__7TObjectFUl(int);
int fn_80236EE8(void*);

int TTecSifta__sub_8023AC88(void* p) { return fn_80236EE8(p); }

int TTecSifta__sub_8023ACA8(void) { return 0; }

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
        TTecSifta__sub_8023B17C(o, arg0, arg1, arg2);
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

void render__9TTecSiftaFv(void) {  }

}
