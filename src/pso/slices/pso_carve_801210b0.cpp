#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
void set_weapon_trail_joints(s32 arg0, s32 arg1, s8 arg2, s8 arg3);
}

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TObjPlayer__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_equip_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
void set_model_param__10TObjPlayerFPvs(void* p, s16 v);
void set_model_id__10TObjPlayerFPvs(void* p, s16 v);
int is_status_subsystem_ready__10TObjPlayerFPv(void* p);
void* get_extended_state__10TObjPlayerFPv(void* p);
int query_extended_state__10TObjPlayerFPv(void* p);
void set_action_type__10TObjPlayerFPvs(void* p, s16 v);
void* get_state_ptr__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80121180(void*);
int TObjPlayer__sub_801D2F4C(void*);

void set_weapon_trail_joints(s32 arg0, s32 arg1, s8 arg2, s8 arg3) {
    u8 *temp_r3;
    temp_r3 = (u8 *)(arg0 + arg1);
    M2C_FIELD(temp_r3, s8 *, 0x19C) = arg2;
    M2C_FIELD(temp_r3, s8 *, 0x1A0) = arg3;
}

}
