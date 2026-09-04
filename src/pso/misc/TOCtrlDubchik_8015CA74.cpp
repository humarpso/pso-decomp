#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOCtrlDubchik__vt18(void *arg0);
void TOCtrlDubchik__vt23(void);
int TOCtrlDubchik__vt24(void);
int TOCtrlDubchik__vt25(void);
void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1);
void *create__13TOCtrlDubchikFPv(void *arg0);
void destroy_instance__13TOCtrlDubchikFv(void);
void update_spin__13TOCtrlDubchikFPv(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32, s32, f32);
void TLobby__sub_8001FE7C(void*, int);
void *TOCtrlDubchik__ct(void *, void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80011734(void *, void *, f32);
s32 TObjPlayer__sub_80016454();
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__9TObjEnemyFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern const f64 TOCtrlDubchik__data_80440990;
extern const f32 TOCtrlDubchik__data_805DB3B4;
extern const f32 TOCtrlDubchik__data_805DB3B8;

void update_spin__13TOCtrlDubchikFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x380);
    temp_f1 = (f32) temp_r4;
    M2C_FIELD(arg0, s32 *, 0x380) = (s32) (temp_f1 + TOCtrlDubchik__data_805DB3B4);
    M2C_FIELD(arg0, f32 *, 0x37C) = (f32) (TOCtrlDubchik__data_805DB3B8 + TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x380), temp_r4, temp_f1));
    TObjPlayer__sub_80011734(arg0, arg0 + 0x390, M2C_FIELD(arg0, f32 *, 0x37C));
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) + 0x147);
}

extern void *tl_05;

void *create__13TOCtrlDubchikFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x3A0);
    if (o != NULL) {
        o = TOCtrlDubchik__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TOCtrlDubchik__data_805D58F0;

void destroy_instance__13TOCtrlDubchikFv(void) {
    if ((u32) TOCtrlDubchik__data_805D58F0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOCtrlDubchik__data_805D58F0, 1);
        TOCtrlDubchik__data_805D58F0 = 0U;
    }
}

extern M2C_UNK __vt__13TOCtrlDubchik[];

void *__dt__13TOCtrlDubchikFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TOCtrlDubchik;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 TOCtrlDubchik__vt18(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x326) != 0) {
        return TObjPlayer__sub_80016454();
    }
    return 0;
}

int TOCtrlDubchik__vt24(void) { return 0; }
int TOCtrlDubchik__vt25(void) { return 0; }

void TOCtrlDubchik__vt23(void) {  }

}
