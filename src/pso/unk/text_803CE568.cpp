#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_4873a87e26d6)(s32, M2C_UNK *, M2C_UNK);

struct Ent_803CF958 { u32 a; char name[12]; };

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
extern M2C_UNK lbl_8047D850[];
extern M2C_UNK lbl_8047D86C[];
extern RecoveredCallback_4873a87e26d6 lbl_805D75F8;
extern s32 lbl_805D75FC;
s32 TLobby__sub_803CF058(u8 *arg0, s32 arg1, s32 arg2);
extern M2C_UNK lbl_8047D884[];
extern M2C_UNK lbl_8047D8A0[];
extern RecoveredCallback_4873a87e26d6 lbl_805D75F8;
extern s32 lbl_805D75FC;
s32 TLobby__sub_803CF100(u8 *arg0, s32 arg1, s32 arg2);
s32 strncmp(void *, void *, int);
void *memcpy(void *, void *, u32);
u32 strlen(void *);
extern s32 lbl_8047D9D4[];
extern s32 lbl_8047D9FC[];
extern s8 lbl_80581B5C[];
extern Ent_803CF958 lbl_80581B68[];
extern RecoveredCallback_4873a87e26d6 lbl_805D75F8;
extern s32 lbl_805D75FC;
void TLobby__sub_803CF958(char *arg0);
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

s32 TLobby__sub_803CF058(u8 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_r12)(s32, s32, s32);
    s32 var_r31;
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D850, 0);
        }
        return 0;
    }
    temp_r12 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), s32 (**)(s32, s32, s32), 0x20);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
    } else {
        var_r31 = 0;
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D86C, 0);
        }
    }
    return var_r31;
}

s32 TLobby__sub_803CF100(u8 *arg0, s32 arg1, s32 arg2) {
    s32 (*temp_r12)(s32, s32, s32);
    s32 var_r31;
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D884, 0);
        }
        return 0;
    }
    temp_r12 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0), s32 (**)(s32, s32, s32), 0x18);
    if (temp_r12 != NULL) {
        var_r31 = temp_r12(M2C_FIELD(arg0, s32 *, 4), arg1, arg2);
    } else {
        var_r31 = 0;
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D75F8) != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D8A0, 0);
        }
    }
    return var_r31;
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
typedef s32 (*RecoveredCallback_4873a87e26d6)(s32, s32 *, s32);
#pragma dont_inline off
#pragma inline_depth(4)
inline s32 find_803CF958(char *s, s32 len) {
    Ent_803CF958 *p;
    s32 i;
    for (p = lbl_80581B68, i = 0; i < 32; i++, p++) {
        if (strncmp(s, p->name, len) == 0) {
            return 1;
        }
    }
    return 0;
}
void TLobby__sub_803CF958(char *arg0) {
    s32 len;
    u32 j;
    u32 n;
    if (arg0 == NULL) {
        if (lbl_805D75F8 != NULL) {
            lbl_805D75F8(lbl_805D75FC, lbl_8047D9D4, 0);
        }
        return;
    }
    len = strlen(arg0);
    if (len == 0) {
        lbl_80581B5C[0] = 0;
        return;
    }
    n = strlen(arg0) + 1;
    for (j = 0; j < n; j++) {
        if (arg0[j] >= 'a' && arg0[j] <= 'z') {
            arg0[j] -= 0x20;
        }
    }
    if (find_803CF958(arg0, len) == 1) {
        memcpy(lbl_80581B5C, arg0, len + 1);
        return;
    }
    if (lbl_805D75F8 != NULL) {
        lbl_805D75F8(lbl_805D75FC, lbl_8047D9FC, 0);
    }
}

}
