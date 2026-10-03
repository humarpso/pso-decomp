#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 obj_testFlags30(void *, int);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK set_type__10TObjPlayerFPvi(void *, int);
s16 get_action_animation__10TObjPlayerFPv();
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
int run_action_state_phase__10TObjPlayerFisi(void*, void*, void*);
s32 get_getup_protection_ticks__10TObjPlayerFPv();
void complete_fall_reaction__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

int check_flag30_bit20__10TObjPlayerFi(void*);
int run_action_state_phase__10TObjPlayerFisi(void*, void*, void*);
void check_and_trigger_19_5__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CAEAC(void);
void TObjPlayer__sub_801CAF6C(void);

void complete_fall_reaction__10TObjPlayerFPv(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 1:
        if (((s16) M2C_FIELD(arg0, s16 *, 0xB8) == get_action_animation__10TObjPlayerFPv()) && (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) && (obj_testFlags30((void *) (arg0), (int) (0x800)) != 0)) {
            set_flags__10TObjPlayerFPvUi((void *) (arg0 + 0x858), (int) (1));
            run_action_state_phase__10TObjPlayerFisi((void*)((void *) (arg0)), (void*)((int) (0xF)), (void*)((int) (5)));
        }
        break;
    case 2:
        if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
            set_type__10TObjPlayerFPvi((void *) (arg0 + 0x644), (int) (get_getup_protection_ticks__10TObjPlayerFPv()));
            update_position_from_target__10TObjPlayerFPv((void *) (arg0));
        }
        break;
    }
}

}
