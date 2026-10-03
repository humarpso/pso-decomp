#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_8028E6B4 { s32 id; u8 pad[4]; void *name; u8 pad2[4]; };

extern "C" {
s32 is_ready__22TQuestVmDownLoadServerFv(void);
s32 TLobby__sub_801E3E9C(s32, void *, void *, s32);
extern s32 lbl_8045122C[];
extern u8 lbl_80451280[];
extern void *lbl_804D3910[];
extern Ent_8028E6B4 lbl_804D88B8[];
extern u8 lbl_8051BC64[];
void TCharaMaking__sub_8028E6B4(void);
}

extern "C" {

s32 is_end__12TCharaMakingFv(void);
s32 get_display_index__12TCharaMakingFPv(void *arg0);
s32 is_quest_active();
s32 get_main_phase();

s32 is_end__12TCharaMakingFv(void) {
    if ((get_main_phase() == 0xF) || (is_quest_active() != 0)) {
        return 1;
    }
    return 0;
}

s32 get_display_index__12TCharaMakingFPv(void *arg0) {
    s8 temp;

    if (!(M2C_FIELD(arg0, s8 *, 0x32) & 0xA)) {
        return M2C_FIELD(arg0, s8 *, 0x31);
    }
    if ((M2C_FIELD(arg0, s8 *, 0x33) <= 0) ||
        ((temp = M2C_FIELD(arg0, s8 *, 0x1C)) < 0) ||
        (temp >= 7)) {
        return M2C_FIELD(arg0, s8 *, 0x31);
    }
    if (is_end__12TCharaMakingFv() != 0) {
        return 0x12 - M2C_FIELD(arg0, s8 *, 0x1C);
    }
    return M2C_FIELD(arg0, s8 *, 0x31);
}
void TCharaMaking__sub_8028E6B4(void) {
    s32 i;
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        return;
    }
    for (i = 0; i < 0x13; i++) {
        if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
            return;
        }
        if (TLobby__sub_801E3E9C(lbl_804D88B8[i].id, lbl_804D88B8[i].name, lbl_804D3910[i], lbl_8045122C[i]) != 0) {
            if (is_ready__22TQuestVmDownLoadServerFv() == 0) {
                return;
            }
            return;
        }
    }
    if (is_ready__22TQuestVmDownLoadServerFv() != 0) {
        return;
    }
    if (TLobby__sub_801E3E9C(0xDB, lbl_80451280, lbl_8051BC64, 0x17A) != 0) {
        if (is_ready__22TQuestVmDownLoadServerFv() == 0) {
            return;
        }
    }
}

}
