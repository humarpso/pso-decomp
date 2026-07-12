#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s8 TObjPlayer__sub_801AFDB0();
s32 send_field_state_if_active__10TObjPlayerFii(s32, s32);
s32 TObjPlayer__sub_801D8E90(s32);
s32 TObjPlayer__sub_800113E4(void *, s16);
s32 obj_isState3_324(void *);
s32 TObjPlayer__sub_80102C78(void *, s16);
s32 TTecCtrl__sub_801B0EE8();
s32 TObjPlayer__sub_801B19EC(void *);
s32 check_camera_mode__10TObjPlayerFv();
int TObjPlayer__sub_801B3FD8(void* p);
int attach_battle_ctrl_sub__10TObjPlayerFPv(void* p);
int forward_1BF500_at_63c__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801B4044(void* p);
int clear_flag0_bit1__10TObjPlayerFPv(void*);
int set_flag_2__10TObjPlayerFPv(void*);
int reset_ring__10TObjPlayerFPv(void*);
int clear_target_lock__10TObjPlayerFPv(void*);

int TObjPlayer__sub_801B40D0(void) { return 0; }
int TObjPlayer__sub_801B4118(void) { return 0; }
int TObjPlayer__sub_801B417C(void) { return 0; }

}
