#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803560F0_lbl_804F142C {
    M2C_UNK value;
    u8 remaining[0x10];
};

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 TAdPlyPltAnimGC__ct(int, void *, void *);
extern RecoveredGlobal_803560F0_lbl_804F142C lbl_804F142C;
s32 TAdPlyPltAnimGC__sub_803560F0(s32 arg0, s32 arg1);
}

extern "C" {

void TAdPlyPltAnimGC__sub_8035615C(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D6F18;

typedef char RecoveredGlobal_803560F0_lbl_804F142C_size[sizeof(RecoveredGlobal_803560F0_lbl_804F142C) == 0x14 ? 1 : -1];
s32 TAdPlyPltAnimGC__sub_803560F0(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r3;
    s32 var_r0;
    temp_r30 = arg1 * 4;
    if ((u32) M2C_FIELD(&lbl_804F142C.value, M2C_UNK *, temp_r30) == 0U) {
        temp_r3 = __nw__7TObjectFUl((int) (0x7C));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = TAdPlyPltAnimGC__ct((int) (temp_r3), (void *) (arg0), (void *) (arg1));
        }
        M2C_FIELD(&lbl_804F142C.value, M2C_UNK *, temp_r30) = var_r0;
    }
    return M2C_FIELD(&lbl_804F142C.value, M2C_UNK *, temp_r30);
}

void TAdPlyPltAnimGC__sub_8035615C(void) {
    if ((u32) lbl_805D6F18 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6F18);
        lbl_805D6F18 = 0U;
    }
}

}
