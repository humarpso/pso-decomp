#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 obj_testFlags30(void *, int);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
int run_action_state_phase__10TObjPlayerFisi(void*, void*, void*);
void complete_hurt_reaction__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

int check_flag30_bit20__10TObjPlayerFi(void*);
int run_action_state_phase__10TObjPlayerFisi(void*, void*, void*);
void do_action_19_5_if_flag30__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801CB2F0(void);
void TObjPlayer__sub_801CB360(void);

void complete_hurt_reaction__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (obj_testFlags30(arg0, (int) (0x800)) != 0) {
            clear_flags__11TAdRicoRingFPvUi((void *) (arg0 + 0x858), (int) (1));
            run_action_state_phase__10TObjPlayerFisi((void*)((void *) (arg0)), (void*)((int) (0xF)), (void*)((int) (5)));
            return;
        }
        update_position_from_target__10TObjPlayerFPv((void *) (arg0));
    }
}

}
