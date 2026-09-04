#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__10TTecDebandFv(void *arg0, s16 arg1);
void create__10TTecDebandFiii(s32 arg0, s32 arg1, s32 arg2);
void create__10TTecDebandFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int init_params__10TTecDebandFPv(void* p);
void render__10TTecDebandFv(void);
void update_effect_params__10TTecDebandFPv(u8 *arg0);
M2C_UNK TTecAnti__sub_8022B35C(void *, s32);
s32 TTecCtrl__sub_8022DBC4(M2C_UNK, s16, M2C_UNK);
s32 TTecDeband__ct(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
s32 TTecDeband__sub_8022F948(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
void __dl__7TObjectFPv(void *);
void __dt__19TTecPlayerInfluenceFv(void *, int);
u32 __nw__7TObjectFUl(s32 a0 = 0);
int fn_80236EE8(void*);

int init_params__10TTecDebandFPv(void* p) { return fn_80236EE8(p); }

extern const f64 lbl_8044D0B0;

void update_effect_params__10TTecDebandFPv(u8 *arg0) {
    s32 res;
    res = TTecCtrl__sub_8022DBC4(0xA, M2C_FIELD(arg0, s16 *, 0xA4), 0xFFFF);
    TTecAnti__sub_8022B35C(arg0 + 0x74, res);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) (M2C_FIELD(arg0, s16 *, 0x98) * M2C_FIELD(arg0, s16 *, 0xA4));
}

void create__10TTecDebandFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x140);
    if (obj != 0U) {
        TTecDeband__ct(obj, arg0, arg1, arg2, arg3);
    }
}
void create__10TTecDebandFiii(s32 arg0, s32 arg1, s32 arg2) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x140);
    if (obj != 0U) {
        TTecDeband__sub_8022F948(obj, arg0, arg1, arg2);
    }
}
void render__10TTecDebandFv(void) {  }

extern M2C_UNK __vt__10TTecDeband[];

void *__dt__10TTecDebandFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecDeband;
        __dt__19TTecPlayerInfluenceFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
