#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8015A108_lbl_804AFDF8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8015A108_lbl_804AFDF8_size[sizeof(RecoveredGlobal_8015A108_lbl_804AFDF8) == 0x10 ? 1 : -1];

struct TOCakeshopCave01_80159E24 {
    u8 pad0[0xCC];
    f32 val[8];
    u8 state[8];
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8015A108_lbl_804AFDF8 lbl_804AFDF8;
extern u32 TOCakeshopCave01__data_805D58B0;
void TOCakeshopCave01__sub_8015A108(void);
s32 rand__11TOBoss4RockFv(void);
extern const f32 lbl_805DB358;
extern const f32 lbl_805DB35C;
extern const f32 TOCakeshopCave01__data_805DB360;
extern const f32 lbl_805DB364;
void TOCakeshopCave01__sub_80159E24(void *arg0, void *arg1);
}

extern "C" {

void *__dt__16TOCakeshopCave01Fv(void *arg0, s16 arg1);
void close_dialog_window__16TOCakeshopCave01Fv(void);
void *create__16TOCakeshopCave01FPv(void *arg0);
void run_task__16TOCakeshopCave01Fv(void* p);
void TLobby__sub_8001FE7C(void*, int);
void *TOCakeshopCave01__ct(void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);

void TOCakeshopCave01__sub_80159E24(void *arg0, void *arg1) {
    TOCakeshopCave01_80159E24 *o = (TOCakeshopCave01_80159E24 *)arg0;
    s32 i = (s32)arg1;
    switch (o->state[i]) {
    default:
        o->val[i] += lbl_805DB358;
        if (lbl_805DB35C * (f32)rand__11TOBoss4RockFv() < o->val[i]) {
            o->state[i] = 1;
            o->val[i] = TOCakeshopCave01__data_805DB360;
        }
        break;
    case 1:
        o->val[i] -= lbl_805DB358;
        if (o->val[i] <= lbl_805DB364) {
            o->state[i] = 2;
            o->val[i] = lbl_805DB364;
        }
        break;
    case 2:
        o->val[i] += lbl_805DB358;
        if (TOCakeshopCave01__data_805DB360 < o->val[i]) {
            o->state[i] = 0;
        }
        break;
    }
}

void run_task__16TOCakeshopCave01Fv(void* p) { { int i; for (i = 0; i < 8; i++) { TOCakeshopCave01__sub_80159E24((void *)(p), (void *)((void*)i)); } } }

void *create__16TOCakeshopCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xF4);
    if (o != NULL) {
        o = TOCakeshopCave01__ct(o, arg0);
    }
    return o;
}

extern u32 TOCakeshopCave01__data_805D58B0;

void close_dialog_window__16TOCakeshopCave01Fv(void) {
    if ((u32) TOCakeshopCave01__data_805D58B0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCakeshopCave01__data_805D58B0, 1);
        TOCakeshopCave01__data_805D58B0 = 0U;
    }
}

extern M2C_UNK __vt__16TOCakeshopCave01[];

void TOCakeshopCave01__sub_8015A108(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804AFDF8.value, 0, 0, 0));
    }
    (*(s32 *)&TOCakeshopCave01__data_805D58B0) = var_r0;
}

void *__dt__16TOCakeshopCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TOCakeshopCave01;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_80154A00(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
