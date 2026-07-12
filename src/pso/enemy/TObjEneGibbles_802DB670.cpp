#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__14TObjEneGibblesFPv(void *arg0);
void * create__14TObjEneGibblesFPv(void *arg0);
void free_static__14TObjEneGibblesFv(void);
void *TObjControl__ct(void *, void *);
void *TObjEneGibbles__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);
void TLobby__sub_8001FE7C(void*, int);
void free__11TOBoss4RockFUi(void*);

extern f32 lbl_805DE878;

void init_params__14TObjEneGibblesFPv(void *arg0) {
    s16 temp_r0;
    s32 temp_r0_2;

    temp_r0 = (s16) (lbl_805DE878 + M2C_FIELD(arg0, f32 *, 0x354));
    M2C_FIELD(arg0, s16 *, 0x388) = temp_r0;
    M2C_FIELD(arg0, s16 *, 0x38A) = temp_r0;
    M2C_FIELD(arg0, s32 *, 0x39C) = (s32) M2C_FIELD(arg0, f32 *, 0x358);
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x39C);
    if (temp_r0_2 < 0) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 0;
    } else if (temp_r0_2 > 8) {
        M2C_FIELD(arg0, s32 *, 0x39C) = 8;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 0;
    M2C_FIELD(arg0, s32 *, 0x378) = (s32) (M2C_FIELD(arg0, s32 *, 0x378) | (1 << M2C_FIELD(arg0, s32 *, 0x39C)));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg0, f32 *, 0x35C);
    M2C_FIELD(arg0, f32 *, 0x398) = (f32) M2C_FIELD(arg0, f32 *, 0x360);
}

extern void *tl_04;

void * create__14TObjEneGibblesFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x44C);
    if (o2 != NULL) {
        o2 = TObjEneGibbles__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjEneGibbles__data_805D68AC;
extern u32 TObjEneGibbles__data_805D68B8;

void free_static__14TObjEneGibblesFv(void) {
    if ((u32) TObjEneGibbles__data_805D68AC != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneGibbles__data_805D68AC);
        TObjEneGibbles__data_805D68AC = 0U;
    }
    if ((u32) TObjEneGibbles__data_805D68B8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneGibbles__data_805D68B8, 1);
        TObjEneGibbles__data_805D68B8 = 0U;
    }
}

}
