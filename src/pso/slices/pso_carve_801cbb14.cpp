#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 obj_testFlags30(s32, s32);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
M2C_UNK update_position_from_target__10TObjPlayerFPv(void *);
s32 run_action_state_phase__10TObjPlayerFisi(s32, s32, s32);
void complete_guard_reaction__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

s32 obj_testFlags30(s32, s32);
s32 check_flag30_bit20__10TObjPlayerFi();
s32 is_status_flag_200__10TObjPlayerFPv(s32);
s32 run_action_state_phase__10TObjPlayerFisi(s32, s32, s32);
void send_object_id_packet__10TObjPlayerFi(s32 arg0);
s32 obj_isState2_324();
s16 obj_getField1c(s32);
M2C_UNK init_shield_attack_packet__10TObjPlayerFPv(M2C_UNK *);
M2C_UNK draw_font_and_send__10TObjPlayerFPv(M2C_UNK *);
int TFontSmallLobby__sub_801C0228(void*);
void TObjPlayer__sub_801CBB10(void);
void TObjPlayer__sub_801CBB80(void);

void complete_guard_reaction__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (obj_testFlags30((s32)(arg0), (s32)((int) (0x800))) != 0) {
            clear_flags__11TAdRicoRingFPvUi((void *) (arg0 + 0x858), (int) (1));
            run_action_state_phase__10TObjPlayerFisi((s32)((void *) (arg0)), (s32)((int) (0xF)), (s32)((int) (5)));
            return;
        }
        update_position_from_target__10TObjPlayerFPv((void *) (arg0));
    }
}

}
