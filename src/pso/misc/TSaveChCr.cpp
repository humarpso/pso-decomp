#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_20 { u8 bytes[0x20]; };

struct RecoveredGlobal_80339F98_lbl_80477CBC {
    M2C_UNK value;
    u8 remaining[0x20];
};

extern "C" {
s32 get_localized_text_entry(s32, s32);
extern RecoveredGlobal_80339F98_lbl_80477CBC TSaveChCr__message_text_ids;
void set_message_by_index__9TSaveChCrFii(s32 arg0, s32 arg1);
M2C_UNK complete_reveal__14TWindowMessageFPv(u32);
M2C_UNK send_and_handle__6TLobbyFPvii(u32, u32, M2C_UNK);
u32 update_window_mode_from_progress__6TLobbyFiPv(M2C_UNK *, M2C_UNK *);
extern M2C_UNK lbl_80477CAC[];
extern M2C_UNK lbl_80477CB4[];
void open_message_window__9TSaveChCrFPvUi(void *arg0, u32 arg1);
}

extern "C" {

s32 TSaveChCr__sub_80339F30(void);
void close_and_advance__9TSaveChCrFPvPv(void* p, void* a1);
s32 poll_memcard_status(void *arg0);
s32 probe_and_check_card__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 probe_card_slot__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_80339DBC(void *);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
int close_window__9TSaveChCrFPv(void*);
s32 poll_memcard_status__23TAdSinglePlyChrSelectGCFPv();

s32 poll_memcard_status(void *arg0) {
    s32 var_r31;

    if (probe_card_slot__15TAdPlayerLoadGCFi(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 1;
    }
    if (probe_and_check_card__15TAdPlayerLoadGCFi(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 4;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 4;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x2C);
    }
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    if (poll_memcard_status__23TAdSinglePlyChrSelectGCFPv() == 0) {
        var_r31 |= 4;
    }
    if (TAdSinglePlyChrSelectGC__sub_80339DBC(arg0) == 0) {
        var_r31 |= 4;
    }
    return var_r31;
}

s32 TSaveChCr__sub_80339F30(void) {
    return TObjCMProportion__sub_8029916C(4) ? 1 : 0;
}

void close_and_advance__9TSaveChCrFPvPv(void* p, void* a1) { close_window__9TSaveChCrFPv(p); set_message_by_index__9TSaveChCrFii((s32)(p), (s32)(a1)); }
typedef char RecoveredGlobal_80339F98_lbl_80477CBC_size[sizeof(RecoveredGlobal_80339F98_lbl_80477CBC) == 0x24 ? 1 : -1];
void set_message_by_index__9TSaveChCrFii(s32 arg0, s32 arg1) {
    M2CCopy_20 sp8;
    u8 *temp_r4;
    sp8 = *(const M2CCopy_20 *)((s32) ((u8 *)(&TSaveChCr__message_text_ids.value) + -4) + 4);
    temp_r4 = (u8 *)(&sp8) + (arg1 * 8);
    open_message_window__9TSaveChCrFPvUi((void *)((void *) (arg0)), (u32)((int) (get_localized_text_entry(M2C_FIELD(temp_r4, s32 *, 0), M2C_FIELD(temp_r4, s32 *, 4)))));
}
void open_message_window__9TSaveChCrFPvUi(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x3C) = update_window_mode_from_progress__6TLobbyFiPv(lbl_80477CAC, lbl_80477CB4);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            if (arg1 != 0U) {
                send_and_handle__6TLobbyFPvii(M2C_FIELD(arg0, u32 *, 0x3C), arg1, 3);
            }
            complete_reveal__14TWindowMessageFPv(M2C_FIELD(arg0, u32 *, 0x3C));
        }
    }
}

}
