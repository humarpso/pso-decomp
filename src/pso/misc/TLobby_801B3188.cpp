#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct ReturnLobby { u8 bytes[0x28]; };

extern "C" {
u16 obj_getField1c(void *);
M2C_UNK set_state_flags__10TObjPlayerFPvUi(void *, int);
M2C_UNK get_dest_area__17TObjAreaWarpQuestFPv(void *);
M2C_UNK TTecLuker__sub_801BAB1C(s32, int);
int set_battle_flag__10TObjPlayerFPvi(void*, int);
M2C_UNK TObjPlayer__sub_801C5F84(u16, int, int);
s32 TObjPlayer__sub_801D8D14(void *);
s32 get_hospital_position__10TObjPlayerFPv(void *);
s32 TNpcPlayer__sub_8034DE40();
s32 TNpcPlayer__sub_8034DE70();
M2C_UNK apply_to_players__10TNpcPlayerFiPvi(s32, int, int);
extern ReturnLobby lbl_80515BA0;
void TObjPlayer__sub_801B31D8(s32 arg0);
}

extern "C" {

int player_flag_1__6TLobbyFPv(void* p);
int check_player_state_flag_2__6TLobbyFPv(void* p);
void handle_6x34(void);
int TObjPlayer__sub_8001BEF8(void*, int);
int set_battle_flag__10TObjPlayerFPvi(void*, int);

int player_flag_1__6TLobbyFPv(void* p) { return set_battle_flag__10TObjPlayerFPvi(p, 1); }
int check_player_state_flag_2__6TLobbyFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x858, 2); }
void handle_6x34(void) {  }
void TObjPlayer__sub_801B31D8(s32 arg0) {
    s32 temp_r30;
    s32 temp_r31;
    TTecLuker__sub_801BAB1C(arg0, 0);
    temp_r31 = get_hospital_position__10TObjPlayerFPv((void *) (arg0));
    temp_r30 = TObjPlayer__sub_801D8D14((void *) (arg0));
    TObjPlayer__sub_801C5F84(obj_getField1c((void *)arg0), temp_r30, temp_r31);
    set_state_flags__10TObjPlayerFPvUi((void *) (arg0), (int) (0x800));
    set_battle_flag__10TObjPlayerFPvi((void*)((void *) (arg0)), (int)((int) (0)));
    temp_r30 = TNpcPlayer__sub_8034DE40();
    temp_r31 = TNpcPlayer__sub_8034DE70();
    apply_to_players__10TNpcPlayerFiPvi(get_dest_area__17TObjAreaWarpQuestFPv(&lbl_80515BA0), temp_r31, temp_r30);
}

}
