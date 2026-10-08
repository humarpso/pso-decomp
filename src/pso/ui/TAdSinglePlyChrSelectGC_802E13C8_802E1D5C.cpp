#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include "pso/ui/TAdSinglePlyChrSelectGC.h"
union MemberActionStorage_802E1DF8 { s32 words[3]; void (TAdSinglePlyChrSelectGC::*action)(); };

struct RecoveredGlobal_802E1DF8_lbl_804E32A4 {
    M2C_UNK value;
    u8 remaining[0x254];
};

extern "C" {
extern RecoveredGlobal_802E1DF8_lbl_804E32A4 lbl_804E32A4;
void change_state__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

s32 count_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 count_selected_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0);
s32 TAdSinglePlyChrSelectGC__sub_8001C5F0();
s32 get_flag_count__23TAdSinglePlyChrSelectGCFv();
s32 get_selected_count__23TAdSinglePlyChrSelectGCFv();

s32 count_selected_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x400) {
        var_r31 = get_selected_count__23TAdSinglePlyChrSelectGCFv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x800) {
        var_r31 += get_flag_count__23TAdSinglePlyChrSelectGCFv();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) & 0x1000) {
        var_r31 += TAdSinglePlyChrSelectGC__sub_8001C5F0();
    }
    return var_r31;
}

s32 count_flags__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 temp_r4;
    s32 var_r3;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x44);
    var_r3 = 0;
    if (temp_r4 & 0x400) {
        var_r3 = 1;
    }
    if (temp_r4 & 0x800) {
        var_r3 += 1;
    }
    if (temp_r4 & 0x1000) {
        return var_r3 + 1;
    }
    return var_r3;
}
typedef char MemberActionStorage_802E1DF8_size[sizeof(MemberActionStorage_802E1DF8) == 12 ? 1 : -1];
typedef char RecoveredGlobal_802E1DF8_lbl_804E32A4_size[sizeof(RecoveredGlobal_802E1DF8_lbl_804E32A4) == 0x258 ? 1 : -1];
void change_state__23TAdSinglePlyChrSelectGCFPvi(u8 *arg0, s32 arg1) {
    MemberActionStorage_802E1DF8 member_action;
    u8 *temp_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        temp_r6 = (u8 *)((void *)((u8 *)(&lbl_804E32A4.value) + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x18)));
        member_action.words[0] = M2C_FIELD(temp_r6, s32 *, 0);
        member_action.words[1] = M2C_FIELD(temp_r6, s32 *, 4);
        member_action.words[2] = M2C_FIELD(temp_r6, s32 *, 8);
        if (member_action.action != 0) {
            (((TAdSinglePlyChrSelectGC *)((void *) (arg0)))->*member_action.action)();
        }
    }
}

}
