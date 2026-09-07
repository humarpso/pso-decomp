#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802AA354_lbl_804DE000 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AA354_lbl_804DE000_size[sizeof(RecoveredGlobal_802AA354_lbl_804DE000) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802AA354_lbl_804DE000 lbl_804DE000;
extern u32 TOBiwaMushi__data_805D66E0;
void TOBiwaMushi__sub_802AA354(void);
}

extern "C" {

void *TOBiwaMushi__create(void *arg0);
void *__dt__11TOBiwaMushiFv(void *arg0, s16 arg1);
void free_shared_data__11TOBiwaMushiFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOBiwaMushi__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOBiwaMushi__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOBiwaMushi__ct(o, arg0);
    }
    return o;
}

extern u32 TOBiwaMushi__data_805D66E0;

void free_shared_data__11TOBiwaMushiFv(void) {
    if ((u32) TOBiwaMushi__data_805D66E0 != 0U) {
        TLobby__sub_8001FE7C((void*)TOBiwaMushi__data_805D66E0, 1);
        TOBiwaMushi__data_805D66E0 = 0U;
    }
}

extern M2C_UNK __vt__11TOBiwaMushi[];

void TOBiwaMushi__sub_802AA354(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DE000.value, 0, 0, 0));
    }
    (*(s32 *)&TOBiwaMushi__data_805D66E0) = var_r0;
}

void *__dt__11TOBiwaMushiFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TOBiwaMushi;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
