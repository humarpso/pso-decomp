#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8028DE78_lbl_804D9164 {
    M2C_UNK value;
    u8 remaining[0x410];
};

extern "C" {
extern RecoveredGlobal_8028DE78_lbl_804D9164 lbl_804D9164;
u8 *TCharaMaking__sub_8028DE78(s32 arg0);
}

extern "C" {

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0);
s32 query_state__12TCharaMakingFv(void);
void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1);
void update_body_parts__12TCharaMakingFPv(u8 *arg0);
f32 TCharaMaking__sub_8028DCCC(void *);
M2C_UNK TCharaMaking__sub_8028DD18(M2C_UNK, M2C_UNK, f32, M2C_UNK);
M2C_UNK TCharaMaking__sub_8028DF98(void *);
M2C_UNK TCharaMaking__sub_8028E2B8(void *, void *, void *, void *);
M2C_UNK TLobby__sub_803DA16C(void *);
s32 TObjCMMainMenu__sub_8028EBCC(void*);
M2C_UNK create__12TChCrLoadReqFPv(void *);

extern u32 lbl_805D6524;

s32 query_state__12TCharaMakingFv(void) {
    if ((u32) lbl_805D6524 == 0U) {
        return -1;
    }
    return TObjCMMainMenu__sub_8028EBCC((void*)lbl_805D6524);
}

extern const f32 TCharaMaking__data_805DD92C;

void setup_from_data__12TCharaMakingFii(M2C_UNK arg0, M2C_UNK arg1) {
    TCharaMaking__sub_8028DD18(arg0, arg1, TCharaMaking__data_805DD92C, 0);
}

typedef char RecoveredGlobal_8028DE78_lbl_804D9164_size[sizeof(RecoveredGlobal_8028DE78_lbl_804D9164) == 0x414 ? 1 : -1];
u8 *TCharaMaking__sub_8028DE78(s32 arg0) {
    s32 var_r3;
    var_r3 = arg0;
    if ((var_r3 < 0) || (var_r3 >= 0xD)) {
        var_r3 = 0;
    }
    return (u8 *)&lbl_804D9164.value + (var_r3 * 0x50);
}

void free_loaded_buffers__12TCharaMakingFPv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x8B8) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 1)) {
            TLobby__sub_803DA16C(arg0 + 0xA1C);
        }
        M2C_FIELD(arg0, s32 *, 0x8B8) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xA24) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 2)) {
            TLobby__sub_803DA16C(arg0 + 0xB88);
        }
        M2C_FIELD(arg0, s32 *, 0xA24) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB90) != 0) {
        if (!(M2C_FIELD(arg0, s32 *, 0xCFC) & 4)) {
            TLobby__sub_803DA16C(arg0 + 0xCF4);
        }
        M2C_FIELD(arg0, s32 *, 0xB90) = 0;
    }
}

void update_body_parts__12TCharaMakingFPv(u8 *arg0) {
    TCharaMaking__sub_8028DF98(arg0 + 0x85C);
    M2C_FIELD(arg0, f32 *, 0xD48) = TCharaMaking__sub_8028DCCC(arg0 + 0x85C);
    TCharaMaking__sub_8028E2B8(arg0 + 0x8B8, arg0 + 0xA24, arg0 + 0xB90, arg0 + 0x85C);
    create__12TChCrLoadReqFPv(arg0);
}

}
