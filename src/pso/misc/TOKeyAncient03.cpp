#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_split_screen();
s32 TOKey__sub_8016A280(void *);
s32 TOKey__sub_8016A310(void *);
s32 TOKeyCave01__vt13(u8 *arg0);
}

extern "C" {

void TOKeyAncient03__vt16(s32 arg0);
void TOKeyAncient03__vt17(s32 arg0);
void TOKeyCave01__vt23(void);
void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1);
void cleanup_refs__14TOKeyAncient03Fv(void);
void *create__14TOKeyAncient03FPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
void *TOKeyAncient03__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK free__11TOBoss4RockFUi(void*);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

void TOKeyAncient03__vt17(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4004B20D, arg0 + 0x38, 0, 0);
}

void TOKeyAncient03__vt16(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4004B20D, arg0 + 0x38, 0, 0);
}

extern void *tl_05;

void *create__14TOKeyAncient03FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyAncient03__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 lbl_805D5A10;
extern void *TOKeyAncient03__data_805D5A14;

void cleanup_refs__14TOKeyAncient03Fv(void) {
    if ((void *) TOKeyAncient03__data_805D5A14 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TOKeyAncient03__data_805D5A14, s32 *, 4));
        if ((void *) TOKeyAncient03__data_805D5A14 != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyAncient03__data_805D5A14);
            TOKeyAncient03__data_805D5A14 = NULL;
        }
    }
    if ((u32) lbl_805D5A10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A10, 1);
        lbl_805D5A10 = 0U;
    }
}

extern M2C_UNK __vt__14TOKeyAncient03[];

void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TOKeyAncient03;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TOKeyCave01__vt23(void) {  }
s32 TOKeyCave01__vt13(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = TOKey__sub_8016A280((void *) (arg0));
        } else {
            var_r3 = TOKey__sub_8016A310((void *) (arg0));
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = TOKey__sub_8016A280((void *) (arg0));
        break;
    }
    return var_r31;
}

}
