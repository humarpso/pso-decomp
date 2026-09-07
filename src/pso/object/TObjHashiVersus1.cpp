#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8019153C_lbl_804B7C78 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8019153C_lbl_804B7C78_size[sizeof(RecoveredGlobal_8019153C_lbl_804B7C78) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8019153C_lbl_804B7C78 lbl_804B7C78;
extern u32 TObjHashiVersus1__data_805D5C14;
void TObjHashiVersus1__sub_8019153C(void);
}

extern "C" {

void *TObjHashiVersus1__create(void *arg0);
void *__dt__16TObjHashiVersus1Fv(void *arg0, s16 arg1);
void release_static_instance__16TObjHashiVersus1Fv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
void *TObjHashiVersus1__ct(void *, void *, void *);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__13TObjHashiBaseFv(void *, M2C_UNK);
void *__nw__7TObjectFUl(int);

extern void *tl_05;

void *TObjHashiVersus1__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xD4);
    if (o != NULL) {
        o = TObjHashiVersus1__ct(o, tl_05, arg0);
    }
    return o;
}

extern u32 TObjHashiVersus1__data_805D5C14;

void release_static_instance__16TObjHashiVersus1Fv(void) {
    if ((u32) TObjHashiVersus1__data_805D5C14 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjHashiVersus1__data_805D5C14, 1);
        TObjHashiVersus1__data_805D5C14 = 0U;
    }
}

extern M2C_UNK __vt__16TObjHashiVersus1[];

void TObjHashiVersus1__sub_8019153C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804B7C78.value, 0, 0, 0));
    }
    (*(s32 *)&TObjHashiVersus1__data_805D5C14) = var_r0;
}

void *__dt__16TObjHashiVersus1Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjHashiVersus1;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__13TObjHashiBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
