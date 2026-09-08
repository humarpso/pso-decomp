#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_4873a87e26d6)(s32, M2C_UNK *, M2C_UNK);
struct RecoveredGlobal_803CFEA0_lbl_8047DAE4 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047E170;
extern s32 lbl_805D767C;
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
s32 TLobby__sub_803D3E90(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_803CFEA0_lbl_8047DAE4_size[sizeof(RecoveredGlobal_803CFEA0_lbl_8047DAE4) == 0x18 ? 1 : -1];
s32 TLobby__sub_803D3E90(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, &lbl_8047E170.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x10);
}

}
