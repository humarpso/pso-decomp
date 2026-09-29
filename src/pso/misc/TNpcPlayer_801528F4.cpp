#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TNpcPlayer__sub_801528F4(s32 arg0, s32 arg1);
void TNpcPlayer__sub_8015296C(s32 arg0, s32 arg1, s16 arg2);
s32 TNpcPlayer__sub_80152900(s32 arg0, s32 arg1);
int TNpcPlayer__sub_80152950(s16 *table, s32 idx, s32 value);
}

extern "C" {

s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
void TNpcPlayer__sub_80152A30(void);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
int TNpcPlayer__sub_80152ACC(void*);
int TNpcPlayer__sub_80152B5C(void*);
int TNpcPlayer__sub_80152BEC(void*);
void TNpcPlayer__sub_80152D64(void* p);
int TObjPlayer__sub_80102CE0(void*);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
void* init__10TNpcPlayerFPv(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void reset_model__10TNpcPlayerFPv(void* p);
void update__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
void update_players__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

int TNpcPlayer__sub_801528F4(s32 arg0, s32 arg1) {
    return M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0);
}

s32 TNpcPlayer__sub_80152900(s32 arg0, s32 arg1) {
    if (((s32 (*)(void))TNpcPlayer__sub_80152950)() != 0) {
        M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0) = 0;
        return 1;
    }
    return 0;
}

int TNpcPlayer__sub_80152950(s16 *table, s32 idx, s32 value) {
    return value <= table[idx] ? 1 : 0;
}

void TNpcPlayer__sub_8015296C(s32 arg0, s32 arg1, s16 arg2) {
    M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0) = arg2;
}

s32 TNpcPlayer__sub_80152978(void* p) { return *(s32*)((char*)p + 0x80); }
s32 get_condition__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x90); }

}
