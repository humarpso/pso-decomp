#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_settings_to_default__6TLobbyFPv(u8 *arg0);
s32 TItemDrop__sub_80107B04();
M2C_UNK TLobby__sub_801D6DC4(void *, M2C_UNK);
M2C_UNK set_validated_field_0x11__6TLobbyFPvUc(void *, M2C_UNK);
M2C_UNK set_clamped_index__6TLobbyFPvs(void *, M2C_UNK);
M2C_UNK TLobby__sub_801D6F08(void *, M2C_UNK);
M2C_UNK set_field_0xE__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_d__6TLobbyFPvUc(void *, s32);
M2C_UNK set_clamped_field_c__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_b__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_a__6TLobbyFPvUc(void *, s32);
M2C_UNK set_byte9_clamped__6TLobbyFPvUc(void *, s32);
M2C_UNK set_difficulty__6TLobbyFPvUc(void *, s32);
M2C_UNK TLobby__sub_801D74B0(void *, s32);
M2C_UNK set_field_0x6__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_5__6TLobbyFPvUc(void *, s32);
M2C_UNK set_clamped_field_4__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_3__6TLobbyFPvUc(void *, s32);
M2C_UNK set_field_2__6TLobbyFPvUc(void *, s32);
M2C_UNK set_validated_field_0x1__6TLobbyFPvUc(void *, s32);
M2C_UNK set_section_id__6TLobbyFPvUc(void *, s32);
s32 ret_801D78F4(void *);
s32 ret_801D78FC(void *);
s32 ret_801D7904(void *);
s32 ret_801D790C(void *);
s32 ret_801D7914(void *);
s32 ret_801D791C(void *);
s32 ret_801D7924(void *);
s32 ret_801D792C(void *);
s32 ret_801D7934(void *);
s32 ret_801D793C(void *);
s32 ret_801D7944(void *);
s32 ret_801D794C(void *);
s32 ret_801D7954(void *);
s32 ret_801D795C(void *);

void reset_settings_to_default__6TLobbyFPv(u8 *arg0) {
    s32 temp_r0;
    s32 var_ctr;
    s32 var_r4;

    set_section_id__6TLobbyFPvUc(arg0, TItemDrop__sub_80107B04());
    set_validated_field_0x1__6TLobbyFPvUc(arg0, ret_801D795C(arg0));
    set_field_2__6TLobbyFPvUc(arg0, ret_801D7954(arg0));
    set_field_3__6TLobbyFPvUc(arg0, ret_801D794C(arg0));
    set_clamped_field_4__6TLobbyFPvUc(arg0, ret_801D7944(arg0));
    set_field_5__6TLobbyFPvUc(arg0, ret_801D793C(arg0));
    set_field_0x6__6TLobbyFPvUc(arg0, ret_801D7934(arg0));
    TLobby__sub_801D74B0(arg0, ret_801D792C(arg0));
    set_difficulty__6TLobbyFPvUc(arg0, ret_801D7924(arg0));
    set_byte9_clamped__6TLobbyFPvUc(arg0, ret_801D791C(arg0));
    set_field_a__6TLobbyFPvUc(arg0, ret_801D7914(arg0));
    set_field_b__6TLobbyFPvUc(arg0, ret_801D790C(arg0));
    set_clamped_field_c__6TLobbyFPvUc(arg0, ret_801D7904(arg0));
    set_field_d__6TLobbyFPvUc(arg0, ret_801D78FC(arg0));
    set_field_0xE__6TLobbyFPvUc(arg0, ret_801D78F4(arg0));
    TLobby__sub_801D6DC4(arg0, 0);
    set_validated_field_0x11__6TLobbyFPvUc(arg0, 0xFF);
    set_clamped_index__6TLobbyFPvs(arg0, 0);
    TLobby__sub_801D6F08(arg0, 0xA);
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    for (var_r4 = 0; var_r4 < 4; var_r4++) {
        *(arg0 + var_r4 + 0x20) = 0x14;
    }
    M2C_FIELD(arg0, s8 *, 0xF) = 0;
}

}
