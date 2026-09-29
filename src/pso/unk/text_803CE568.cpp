#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_4873a87e26d6)(s32, M2C_UNK *, M2C_UNK);

extern "C" {
extern M2C_UNK lbl_8047D7AC[];
extern M2C_UNK lbl_8047D7C8[];
extern RecoveredCallback_4873a87e26d6 lbl_805D75F8;
extern s32 lbl_805D75FC;
s32 TLobby__sub_803CEEB8(u8 *arg0);
extern M2C_UNK lbl_8047D7E4[];
extern M2C_UNK lbl_8047D800[];
extern RecoveredCallback_4873a87e26d6 lbl_805D75F8;
extern s32 lbl_805D75FC;
void TLobby__sub_803CEFC8(u8 *arg0);
extern M2C_UNK lbl_8047D8B8[];
extern M2C_UNK lbl_8047D8D4[];
extern RecoveredCallback_4873a87e26d6 lbl_805D75F8;
extern s32 lbl_805D75FC;
s32 TLobby__sub_803CF1A8(u8 *arg0);
extern M2C_UNK lbl_8047D8EC[];
extern M2C_UNK lbl_8047D908[];
extern RecoveredCallback_4873a87e26d6 lbl_805D75F8;
extern s32 lbl_805D75FC;
void TLobby__sub_803CF250(u8 *arg0);
}

extern "C" {

s32 TLobby__sub_803CEEB8(u8 *arg0) {
    s32 (*temp_r12)(s32);
    s32 var_r31;
    var_r31 = 3;
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D7AC, 0);
        }
        return 3;
    }
    temp_r12 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), s32 (**)(s32), 0x2C);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(M2C_FIELD(arg0, s32 *, 4));
    } else if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
        lbl_805D75F8(lbl_805D75FC, lbl_8047D7C8, 0);
    }
    return var_r31;
}
void TLobby__sub_803CEFC8(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D7E4, 0);
        }
    } else {
        temp_r12 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), M2C_UNK (**)(s32), 0x28);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 4));
            return;
        }
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D800, 0);
        }
    }
}
s32 TLobby__sub_803CF1A8(u8 *arg0) {
    s32 (*temp_r12)(s32);
    s32 var_r31;
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D8B8, 0);
        }
        return 0;
    }
    temp_r12 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), s32 (**)(s32), 0x1C);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(M2C_FIELD(arg0, s32 *, 4));
    } else {
        var_r31 = 0;
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D8D4, 0);
        }
    }
    return var_r31;
}
void TLobby__sub_803CF250(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D8EC, 0);
        }
    } else {
        temp_r12 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), M2C_UNK (**)(s32), 0x14);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 4) = 0;
            M2C_FIELD(arg0, u8 **, 0) = NULL;
            return;
        }
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D908, 0);
        }
    }
}

}
