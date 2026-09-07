#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80173614_lbl_804B3A70 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80173614_lbl_804B3A70_size[sizeof(RecoveredGlobal_80173614_lbl_804B3A70) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80173614_lbl_804B3A70 lbl_804B3A70;
extern u32 TORevlightCave01__data_805D5A78;
void TORevlightCave01__sub_80173614(void);
}

extern "C" {

void *create__16TORevlightCave01FPv(void *arg0);
void release_static_instance__16TORevlightCave01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TORevlightCave01__ct(void *, void *, void *);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *create__16TORevlightCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD0);
    if (o != NULL) {
        o = TORevlightCave01__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TORevlightCave01__data_805D5A78;

void release_static_instance__16TORevlightCave01Fv(void) {
    if ((u32) TORevlightCave01__data_805D5A78 != 0U) {
        TLobby__sub_8001FE7C((void*)TORevlightCave01__data_805D5A78, 1);
        TORevlightCave01__data_805D5A78 = 0U;
    }
}
void TORevlightCave01__sub_80173614(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B3A70.value, 0, 0, 0));
    }
    (*(s32 *)&TORevlightCave01__data_805D5A78) = var_r0;
}

}
