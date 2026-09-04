#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1);
void *create__17TOSensorAncient01FPv(void *arg0);
void destroy__17TOSensorAncient01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOSensorAncient01__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__8TOSensorFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern void *tl_05;

void *create__17TOSensorAncient01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOSensorAncient01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5A88;
extern void *lbl_805D5A8C;

void destroy__17TOSensorAncient01Fv(void) {
    if ((void *) lbl_805D5A8C != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 0));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 0xC));
        free_if_valid__10TObjPlayerFi(M2C_FIELD(lbl_805D5A8C, s32 *, 8));
        if ((void *) lbl_805D5A8C != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5A8C);
            lbl_805D5A8C = NULL;
        }
    }
    if ((u32) lbl_805D5A88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A88, 1);
        lbl_805D5A88 = 0U;
    }
}

extern M2C_UNK __vt__17TOSensorAncient01[];

void *__dt__17TOSensorAncient01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSensorAncient01;
        __dt__8TOSensorFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
