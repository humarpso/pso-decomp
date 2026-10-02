#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int TObjPlayer__sub_80019248(void*);
s32 obj_getField1c(void *);
M2C_UNK TObjPlayer__sub_803518E0(void *, void *, int);
void TObjPlayer__sub_801AEFAC(u8 *arg0);
s32 obj_getField1c(void *);
s32 get_card_window__17TWindowSubComCardFUi(u32);
s32 TObjPlayer__sub_801AEF80(u8 *arg0);
}

extern "C" {

s32 check_camera_mode__10TObjPlayerFv();
s32 TLobby__sub_8030A7B0();
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();
s32 reset_volopt_state__10TObjPlayerFv(s32);
s32 check_flag_100__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(u16);
s32 TObjPlayer__sub_80354C7C(s32);
s32 TObjPlayer__sub_80354E3C();
s32 TLobby__sub_800822E8(s32, s32);
s32 update_movement_by_screen__10TObjPlayerFv(s32);
s32 TObjPlayer__sub_801AF868(s32);
s32 is_technique_ready__8TTecCtrlFv();
s32 check_flag_800000__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801BF19C(s32);
s32 TObjPlayer__sub_801BF1DC(s32);
s32 TObjPlayer__sub_801BF3E8(s32);
int test_flag_2000000__10TObjPlayerFPv(void*);
int TObjPlayer__sub_801BEF60(void*, void*);
int TObjPlayer__sub_801BEF68(void*);
void stop_force_if_alive__10TObjPlayerFPv(void* p);
void update_battle_control_if_unlocked__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801AEB80(void);
int get_max_level__10TObjPlayerFv(void);

s32 TObjPlayer__sub_801AEF80(u8 *arg0) {
    return M2C_FIELD(get_card_window__17TWindowSubComCardFUi((u32) ((u16)obj_getField1c(arg0))), s32 *, 0x244);
}

void TObjPlayer__sub_801AEFAC(u8 *arg0) {
    if (((s32)TObjPlayer__sub_80019248((void*)(arg0))) != 0) {
        TObjPlayer__sub_803518E0((void *) (arg0 + 0x550), (void *) (obj_getField1c((void *) (arg0))), (int) ((s16) M2C_FIELD(arg0, s32 *, 0x3D0)));
    }
}

}
