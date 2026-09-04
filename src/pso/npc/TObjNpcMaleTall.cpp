#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
