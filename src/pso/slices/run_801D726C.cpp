#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 ret_801D78E4();

void fn_801D726C(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 0x1EU) {
        var_r4 = ret_801D78E4();
    }
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) var_r4;
}

u8 ret_801D78EC();

void fn_801D72B0(void *arg0, s16 arg1) {
    s16 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 0xC8) {
        var_r4 = (s16) ret_801D78EC();
    }
    M2C_FIELD(arg0, s16 *, 0x16) = var_r4;
}

u8 ret_801D78F4();

void set_field_0xE__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D78F4();
    }
    M2C_FIELD(arg0, u8 *, 0xE) = var_r4;
}

u8 ret_801D78FC();

void set_field_d__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D78FC();
    }
    M2C_FIELD(arg0, u8 *, 0xD) = var_r4;
}

u8 ret_801D7904();

void set_clamped_field_c__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 3U) {
        var_r4 = ret_801D7904();
    }
    M2C_FIELD(arg0, u8 *, 0xC) = var_r4;
}

u8 ret_801D790C();

void set_field_b__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D790C();
    }
    M2C_FIELD(arg0, u8 *, 0xB) = var_r4;
}

u8 ret_801D7914();

void set_field_a__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D7914();
    }
    M2C_FIELD(arg0, u8 *, 0xA) = var_r4;
}

u8 ret_801D791C();

void TLobby__sub_801D7430(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D791C();
    }
    M2C_FIELD(arg0, u8 *, 9) = var_r4;
}

u8 ret_801D7924();

void set_difficulty__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D7924();
    }
    M2C_FIELD(arg0, u8 *, 8) = var_r4;
}

u8 ret_801D792C();

void TLobby__sub_801D74B0(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 3U) {
        var_r4 = ret_801D792C();
    }
    M2C_FIELD(arg0, u8 *, 7) = var_r4;
}

u8 ret_801D7934();

void set_field_0x6__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D7934();
    }
    M2C_FIELD(arg0, u8 *, 6) = var_r4;
}

u8 ret_801D793C();

void set_field_5__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D793C();
    }
    M2C_FIELD(arg0, u8 *, 5) = var_r4;
}

u8 ret_801D7944();

void set_clamped_field_4__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 3U) {
        var_r4 = ret_801D7944();
    }
    M2C_FIELD(arg0, u8 *, 4) = var_r4;
}

u8 ret_801D794C();

void set_field_3__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = ret_801D794C();
    }
    M2C_FIELD(arg0, u8 *, 3) = var_r4;
}

u8 ret_801D7954();

void set_field_2__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 4U) {
        var_r4 = ret_801D7954();
    }
    M2C_FIELD(arg0, u8 *, 2) = var_r4;
}

u8 ret_801D795C();

void TLobby__sub_801D7630(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 3U) {
        var_r4 = ret_801D795C();
    }
    M2C_FIELD(arg0, u8 *, 1) = var_r4;
}

u8 TItemDrop__sub_80107B04();

void set_section_id__6TLobbyFPvUc(u8 *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 >= 2U) {
        var_r4 = TItemDrop__sub_80107B04();
    }
    *arg0 = var_r4;
}

}
