#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_801D6F60 { u8 pad[0x16]; s16 v; };

struct Obj_801D7030 { u8 pad[0xB]; u8 v; };

struct Obj_801D6F94 { u8 pad[0xE]; u8 v; };

struct Obj_801D6FC8 { u8 pad[0xD]; u8 v; };

struct Obj_801D6FFC { u8 pad[0xC]; u8 v; };

struct Obj_801D7064 { u8 pad[0xA]; u8 v; };

struct Obj_801D70CC { u8 pad[0x8]; u8 v; };

struct Obj_801D7098 { u8 pad[0x9]; u8 v; };

struct Obj_801D7100 { u8 pad[0x7]; u8 v; };

extern "C" {
u8 ret_801D78EC(Obj_801D6F60 *p);
s16 TLobby__sub_801D6F60(Obj_801D6F60 *p);
u8 ret_801D790C(Obj_801D7030 *p);
u8 TLobby__sub_801D7030(Obj_801D7030 *p);
u8 ret_801D78F4(Obj_801D6F94 *p);
u8 TLobby__sub_801D6F94(Obj_801D6F94 *p);
u8 ret_801D78FC(Obj_801D6FC8 *p);
u8 TLobby__sub_801D6FC8(Obj_801D6FC8 *p);
u8 ret_801D7904(Obj_801D6FFC *p);
u8 TLobby__sub_801D6FFC(Obj_801D6FFC *p);
u8 ret_801D7914(Obj_801D7064 *p);
u8 get_rule_field_a__6TLobbyFPv(Obj_801D7064 *p);
u8 ret_801D7924(Obj_801D70CC *p);
u8 TLobby__sub_801D70CC(Obj_801D70CC *p);
u8 ret_801D791C(Obj_801D7098 *p);
u8 TLobby__sub_801D7098(Obj_801D7098 *p);
u8 ret_801D792C(Obj_801D7100 *p);
u8 TLobby__sub_801D7100(Obj_801D7100 *p);
s32 is_invalid_slot__10TObjPlayerFUc(u8);
u8 TLobby__sub_801D6DDC(void *arg0);
}

extern "C" {

s16 clamp_player_index__6TLobbyFPv(void *arg0);
u8 get_clamped_level__6TLobbyFPv(void *arg0);
void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1);
void set_clamped_value_1c__6TLobbyFPvi(void *arg0, s32 arg1);
void set_validated_field_0x11__6TLobbyFPvUc(void *arg0, u8 arg1);
void set_volume__6TLobbyFPvUc(void *arg0, u8 arg1);
s32 get_max_level__10TObjPlayerFv();
s32 is_invalid_slot__10TObjPlayerFUc(u8);
u8 ret_801D78E4();

void set_volume__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r4;

    var_r4 = arg1;
    if (var_r4 > 0x63U) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x10) = var_r4;
}

u8 TLobby__sub_801D6DDC(void *arg0) {
    u8 v;
    s32 t;
    t = M2C_FIELD(arg0, u8 *, 0x11);
    v = t;
    if (is_invalid_slot__10TObjPlayerFUc(t) == 0 && v > 0x1DU) {
        v = 0;
    }
    return v;
}

void set_validated_field_0x11__6TLobbyFPvUc(void *arg0, u8 arg1) {
    u8 var_r31;

    var_r31 = arg1;
    if ((is_invalid_slot__10TObjPlayerFUc(var_r31) == 0) && (var_r31 > 0x1DU)) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, u8 *, 0x11) = var_r31;
}

s16 clamp_player_index__6TLobbyFPv(void *arg0) {
    s16 var_r31;

    var_r31 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((var_r31 < 0) || (var_r31 > get_max_level__10TObjPlayerFv())) {
        var_r31 = 0;
    }
    return var_r31;
}

void set_clamped_index__6TLobbyFPvs(void *arg0, s16 arg1) {
    s16 var_r31;

    var_r31 = arg1;
    if ((var_r31 < 0) || (var_r31 > get_max_level__10TObjPlayerFv())) {
        var_r31 = 0;
    }
    M2C_FIELD(arg0, s16 *, 0x14) = var_r31;
}

void set_clamped_value_1c__6TLobbyFPvi(void *arg0, s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if ((var_r4 < 0) || (var_r4 > 0x278D0)) {
        var_r4 = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = var_r4;
}

u8 get_clamped_level__6TLobbyFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x18);
    if (temp_r0 >= 0x1E) {
        return ret_801D78E4();
    }
    return (u8) temp_r0;
}
s16 TLobby__sub_801D6F60(Obj_801D6F60 *p) {
    if (p->v >= 200) {
        return ret_801D78EC(p);
    }
    return p->v;
}

u8 TLobby__sub_801D6F94(Obj_801D6F94 *p) {
    if (p->v >= 2) {
        return ret_801D78F4(p);
    }
    return p->v;
}

u8 TLobby__sub_801D6FC8(Obj_801D6FC8 *p) {
    if (p->v >= 2) {
        return ret_801D78FC(p);
    }
    return p->v;
}

u8 TLobby__sub_801D6FFC(Obj_801D6FFC *p) {
    if (p->v >= 3) {
        return ret_801D7904(p);
    }
    return p->v;
}

u8 TLobby__sub_801D7030(Obj_801D7030 *p) {
    if (p->v >= 2) {
        return ret_801D790C(p);
    }
    return p->v;
}
u8 get_rule_field_a__6TLobbyFPv(Obj_801D7064 *p) {
    if (p->v >= 2) {
        return ret_801D7914(p);
    }
    return p->v;
}

u8 TLobby__sub_801D7098(Obj_801D7098 *p) {
    if (p->v >= 2) {
        return ret_801D791C(p);
    }
    return p->v;
}

u8 TLobby__sub_801D70CC(Obj_801D70CC *p) {
    if (p->v >= 2) {
        return ret_801D7924(p);
    }
    return p->v;
}
u8 TLobby__sub_801D7100(Obj_801D7100 *p) {
    if (p->v >= 3) {
        return ret_801D792C(p);
    }
    return p->v;
}

}
