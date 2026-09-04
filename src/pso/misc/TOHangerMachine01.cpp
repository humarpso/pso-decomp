#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOHangerMachine01__sub_80169168(void);
void *__dt__17TOHangerMachine01Fv(void *arg0, s16 arg1);
void *create__17TOHangerMachine01FPv(void *arg0);
void free_static_model__17TOHangerMachine01Fv(void);
s32 is_valid_slot__17TOHangerMachine01FiUs(int arg0, u16 arg1);
int run_task__17TOHangerMachine01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void TOHangceilingCave01KeyQuick__sub_80168D30(void);
void *TOHangerMachine01__ct(void *, void *);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_key_base__5TOKeyFPvs(void *, M2C_UNK);
s32 is_not_split_screen__13TRaderMapCoreFv();
void set_scale__27TOHangceilingCave01KeyQuickFPvf(void* p, f32 v);

int run_task__17TOHangerMachine01Fv(void) { return 0; }

void *create__17TOHangerMachine01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xCC);
    if (o != NULL) {
        o = TOHangerMachine01__ct(o, arg0);
    }
    return o;
}

extern u32 TOHangerMachine01__data_805D59E8;

void free_static_model__17TOHangerMachine01Fv(void) {
    if ((u32) TOHangerMachine01__data_805D59E8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOHangerMachine01__data_805D59E8, 1);
        TOHangerMachine01__data_805D59E8 = 0U;
    }
}

extern M2C_UNK __vt__17TOHangerMachine01[];

void *__dt__17TOHangerMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOHangerMachine01;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 lbl_805D53A0;

s32 is_valid_slot__17TOHangerMachine01FiUs(int arg0, u16 arg1) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        return 1;
    }
    return (u32)__cntlzw((u32)(lbl_805D53A0 - (u16)arg1)) >> 5;
}

void TOHangerMachine01__sub_80169168(void) {  }

}
