#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

extern "C" {
M2C_UNK TFontSmallLobby__sub_801C0228();
u8 *TObjPlayer__sub_801D0EA0(u8 *arg0, u8 *arg1);
}

extern "C" {

int update_lobby_chair__10TObjPlayerFPv(void* p);
int get_chair_state__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0D58(void* p);
void TObjPlayer__sub_801D0D7C(void* p);
void TObjPlayer__sub_801D0D8C(void* p);
void clear_state_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0DAC(void* p);
int start_action18_sub__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D0DF4(void* p);
void TObjPlayer__sub_801D0E18(void* p);
int get_action_flag__10TObjPlayerFPv(void* p);
int forward_1D1044_at_34c__10TObjPlayerFPv(void* p);
int is_action_flag_28__10TObjPlayerFPv(void* p);
void set_anim_flag__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801D0E74(void* p);
void TObjPlayer__sub_801D0E84(void* p);
int get_flag__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D1024(void*);
int TObjPlayer__sub_801D102C(void*);
int TObjPlayer__sub_801D1034(void*);
int TObjPlayer__sub_801D103C(void*);
int TObjPlayer__sub_801D1044(void*);
int TBoss7LaserPtcl__sub_8035AF14(void*);
int fn_8035AF18(void*);

u8 *TObjPlayer__sub_801D0EA0(u8 *arg0, u8 *arg1) {
    TFontSmallLobby__sub_801C0228();
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    *(M2CCopy_C *)((s32) arg0 + 0x14) = *(const M2CCopy_C *)((s32) arg1 + 0x14);
    return arg0;
}

}
