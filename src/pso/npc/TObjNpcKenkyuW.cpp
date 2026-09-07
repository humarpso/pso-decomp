#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802A3C30_lbl_804DCE48 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802A3C30_lbl_804DCE48_size[sizeof(RecoveredGlobal_802A3C30_lbl_804DCE48) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802A3C30_lbl_804DCE48 lbl_804DCE48;
extern u32 TObjNpcKenkyuW__data_805D6658;
void TObjNpcKenkyuW__sub_802A3C30(void);
}

extern "C" {

void *__dt__14TObjNpcKenkyuWFv(void *arg0, s16 arg1);
void destroy_instance__14TObjNpcKenkyuWFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcKenkyuW__data_805D6658;

void destroy_instance__14TObjNpcKenkyuWFv(void) {
    if ((u32) TObjNpcKenkyuW__data_805D6658 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcKenkyuW__data_805D6658, 1);
        TObjNpcKenkyuW__data_805D6658 = 0U;
    }
}

extern M2C_UNK __vt__14TObjNpcKenkyuW[];

void TObjNpcKenkyuW__sub_802A3C30(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DCE48.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcKenkyuW__data_805D6658) = var_r0;
}

void *__dt__14TObjNpcKenkyuWFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TObjNpcKenkyuW;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
