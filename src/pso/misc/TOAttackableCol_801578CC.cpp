#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOAttackableCol__sub_801575AC(void *, s32);
s32 TObjPlayer__sub_801B4A18(void *, s32);
u8 TODoorAncient08__sub_80229220(u16);
int TLobby__sub_8020C5E0(void*);
int queue_destruction__7TObjectFv(void*);
void render__15TOAttackableColFv(void);

void release__15TOAttackableColFPv(void* p) { TLobby__sub_8020C5E0(p); queue_destruction__7TObjectFv(p); }
void TOAttackableCol__sub_80157900(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x34C);
    if (((temp_r0 < 0) || (temp_r0 >= 0x100) || (TODoorAncient08__sub_80229220((u16) temp_r0) == 1)) && ((TObjPlayer__sub_801B4A18(arg0, -1), (((s32) M2C_FIELD(arg0, s32 *, 0x33C) > 0) == 0)) || (((s32) M2C_FIELD(arg0, s32 *, 0x344) == 0) && (temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x348), ((temp_r0_2 < 0) == 0)) && (temp_r0_2 < 0x100) && (TODoorAncient08__sub_80229220((u16) temp_r0_2) == 1)))) {
        M2C_FIELD(arg0, s32 *, 0x33C) = 0;
        TOAttackableCol__sub_801575AC(arg0, 1);
    }
}

}
