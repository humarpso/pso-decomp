#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8014C4B4_lbl_804AAA30 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8014C4B4_lbl_804AAA30_size[sizeof(RecoveredGlobal_8014C4B4_lbl_804AAA30) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8014C4B4_lbl_804AAA30 lbl_804AAA30;
extern u32 TObjNpcMaleTall__data_805D5808;
void TObjNpcMaleTall__sub_8014C4B4(void);
}

extern "C" {

void TObjPlayer__sub_8014C5EC(void *arg0);
void *__dt__15TObjNpcMaleTallFv(void *arg0, s16 arg1);
void destroy_instance__15TObjNpcMaleTallFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcMaleTall__data_805D5808;

void destroy_instance__15TObjNpcMaleTallFv(void) {
    if ((u32) TObjNpcMaleTall__data_805D5808 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcMaleTall__data_805D5808, 1);
        TObjNpcMaleTall__data_805D5808 = 0U;
    }
}

extern M2C_UNK __vt__15TObjNpcMaleTall[];

void TObjNpcMaleTall__sub_8014C4B4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804AAA30.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcMaleTall__data_805D5808) = var_r0;
}

void *__dt__15TObjNpcMaleTallFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjNpcMaleTall;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjPlayer__sub_8014C5EC(void *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2) {
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        return;
    }
    M2C_FIELD(arg0, s16 *, 0xB8) = 1;
}

}
