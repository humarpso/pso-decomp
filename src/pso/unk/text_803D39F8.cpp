#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef M2C_UNK (*RecoveredCallback_4873a87e26d6)(s32, M2C_UNK *, M2C_UNK);
struct RecoveredGlobal_803D39F8_lbl_8047E0C8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_803CFEA0_lbl_8047DAE4 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef s32 M2C_UNK;
typedef M2C_UNK (*RecoveredCallback_803D3B2C)(s32, M2C_UNK *, M2C_UNK);
struct S_803D3B2C { u8 pad; s8 f; };

struct G_803D3B2C { M2C_UNK value; u8 remaining[0x14]; };

struct G_803D3A4C { s32 value; u8 remaining[0x14]; };

struct S_803D3A4C {
    s32 f0;
    s32 unit;
    s32 total;
    s32 count;
    s32 pos;
    s32 size;
    s32 stride;
};

extern "C" {
extern RecoveredGlobal_803D39F8_lbl_8047E0C8 lbl_8047E0C8;
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
extern s32 lbl_805D767C;
s32 get_handle_field_checked__6TLobbyFPv(u8 *arg0);
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047E0F8;
extern s32 lbl_805D767C;
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
s32 TLobby__sub_803D3AD8(u8 *arg0);
extern RecoveredGlobal_803D39F8_lbl_8047E0C8 lbl_8047E0C8;
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
extern s32 lbl_805D767C;
s32 get_handle_value_checked_b__6TLobbyFPv(S_803D3B2C *arg0);
extern G_803D3A4C lbl_8047E0E0;
extern RecoveredCallback_4873a87e26d6 lbl_805D7678;
extern s32 lbl_805D767C;
void set_list_unit__6TLobbyFPvi(S_803D3A4C *s, s32 unit);
}

extern "C" {

typedef char RecoveredGlobal_803D39F8_lbl_8047E0C8_size[sizeof(RecoveredGlobal_803D39F8_lbl_8047E0C8) == 0x18 ? 1 : -1];
s32 get_handle_field_checked__6TLobbyFPv(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, &lbl_8047E0C8.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x14);
}
typedef char RecoveredGlobal_803CFEA0_lbl_8047DAE4_size[sizeof(RecoveredGlobal_803CFEA0_lbl_8047DAE4) == 0x18 ? 1 : -1];

typedef s32 (*RecoveredCallback_4873a87e26d6)(s32, s32 *, s32);
void set_list_unit__6TLobbyFPvi(S_803D3A4C *s, s32 unit) {
    if (s == NULL) {
        if (lbl_805D7678 != NULL) {
            lbl_805D7678(lbl_805D767C, &lbl_8047E0E0.value, 0);
        }
    } else {
        s32 old = s->pos * s->unit;
        s->unit = unit;
        s->count = (s->unit - 1 + s->total) / s->unit;
        s->pos = old / s->unit;
        s->size = s->stride * unit;
    }
}

s32 TLobby__sub_803D3AD8(u8 *arg0) {
    if (arg0 == NULL) {
        if (((M2C_UNK (*)(s32, M2C_UNK *, M2C_UNK)) lbl_805D7678) != NULL) {
            lbl_805D7678(lbl_805D767C, &lbl_8047E0F8.value, 0);
        }
        return 0;
    }
    return M2C_FIELD(arg0, s32 *, 0x4);
}
s32 get_handle_value_checked_b__6TLobbyFPv(S_803D3B2C *arg0) {
    if (arg0 == 0) {
        if ((*(RecoveredCallback_803D3B2C *)&lbl_805D7678) != 0) {
            (*(RecoveredCallback_803D3B2C *)&lbl_805D7678)(lbl_805D767C, &(*(G_803D3B2C *)&lbl_8047E0C8).value, 0);
        }
        return 0;
    }
    return arg0->f;
}

}
