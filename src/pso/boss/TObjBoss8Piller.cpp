#include "pso/TObjBoss8Piller.h"

TObjBoss8Piller::~TObjBoss8Piller() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8030B048_lbl_804E7688 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8030B048_lbl_804E7688_size[sizeof(RecoveredGlobal_8030B048_lbl_804E7688) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8030B048_lbl_804E7688 lbl_804E7688;
extern u32 TObjBoss8Piller__data_805D6A78;
void TObjBoss8Piller__sub_8030B048(void);
}

extern "C" {

void free_held_object__15TObjBoss8PillerFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjBoss8Piller__data_805D6A78;

void free_held_object__15TObjBoss8PillerFv(void) {
    if ((u32) TObjBoss8Piller__data_805D6A78 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjBoss8Piller__data_805D6A78, 1);
        TObjBoss8Piller__data_805D6A78 = 0U;
    }
}
void TObjBoss8Piller__sub_8030B048(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804E7688.value, 0, 0, 0));
    }
    (*(s32 *)&TObjBoss8Piller__data_805D6A78) = var_r0;
}

}
