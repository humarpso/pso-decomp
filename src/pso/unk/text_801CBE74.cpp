#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_8000F7FC_lbl_80515F48 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct RecoveredGlobal_8000F9E4_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F90C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F9CC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8FC_lbl_804FE120 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F8EC_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8000F91C_lbl_804FE120 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
M2C_UNK TObjPlayer__sub_801B1A84(M2C_UNK *);
extern RecoveredGlobal_8000F7FC_lbl_80515F48 TObjPlayer__sub_801D0F40;
void TObjPlayer__sub_801CBF7C(void);
s32 is_locally_controlled__10TObjPlayerFPv();
s32 obj_testFlags30(s32, s32);
u32 activate_d04_slot__10TObjPlayerFPv(s32);
s32 TObjPlayer__sub_801D2B08(s32, s32);
void TFontSmallLobby__sub_801D63DC(s32, f32);
s32 reset_key_machine_state__10TObjPlayerFv();
void TObjPlayer__vt73(s32 arg0, f32 farg0);
u32 get_player_by_client_id(u32);
void clear_flag_200__10TObjPlayerFPv(u32);
void TObjPlayer__sub_801CBFA4(u16 *p);
u16 obj_getField1c(void *);
s32 TLobby__sub_800822E8(void *, s32);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
s32 is_single_screen__10TObjPlayerFv(void);
s32 TObjPlayer__sub_801AFF0C(void *);
void TObjPlayer__sub_801D0F70(void *);
void run_action_state_phase__10TObjPlayerFisi(void *, s32, s32);
extern void *lbl_8050EA10[];
void TObjPlayer__sub_801CC010(s16 arg0, u16 *arg1);
}

extern "C" {

typedef char RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_8000F764_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_8000F7FC_lbl_80515F48_size[sizeof(RecoveredGlobal_8000F7FC_lbl_80515F48) == 0x28 ? 1 : -1];

void TObjPlayer__vt73(s32 arg0, f32 farg0) {
    if (is_locally_controlled__10TObjPlayerFPv() == 0 || obj_testFlags30(arg0, 0x800) != 0 ||
        activate_d04_slot__10TObjPlayerFPv(arg0) == 0 || TObjPlayer__sub_801D2B08(arg0 + 0x500, 1) != 0 ||
        reset_key_machine_state__10TObjPlayerFv() == 0) {
        return;
    }
    TFontSmallLobby__sub_801D63DC(arg0 + 0x4AC, farg0);
}

void TObjPlayer__sub_801CBF7C(void) {
    TObjPlayer__sub_801B1A84((M2C_UNK *)(&TObjPlayer__sub_801D0F40.value));
}
void TObjPlayer__sub_801CBFA4(u16 *p) {
    s32 i;
    u32 obj;
    if (p != NULL) {
        i = 0;
        while (*p != 0xFFFF) {
            u32 id = *p++;
            if (id >= 12) {
                break;
            }
            obj = get_player_by_client_id(id);
            if (obj != 0) {
                clear_flag_200__10TObjPlayerFPv(obj);
            }
            i++;
            if (i >= 12) {
                break;
            }
        }
    }
}
void TObjPlayer__sub_801CC010(s16 arg0, u16 *arg1) {
    s32 i;
    void *obj;
    void **tbl;
    tbl = lbl_8050EA10;
    i = 0;
    do {
        obj = *tbl;
        if (obj != NULL && TObjPlayer__sub_801AFF0C(obj) != 0 && TLobby__sub_800822E8(obj, 0x8000) == 0 &&
            (is_single_screen__10TObjPlayerFv() != 0 ||
             (is_single_screen__10TObjPlayerFv() == 0 && arg0 == get_stat_by_key_state__10TObjPlayerFPv(obj)))) {
            TObjPlayer__sub_801D0F70(obj);
            if (arg1 != NULL) {
                *arg1 = obj_getField1c(obj);
                arg1++;
            }
            run_action_state_phase__10TObjPlayerFisi(obj, 0x13, 0);
        }
        i++;
        tbl++;
    } while (i < 4);
}

typedef char RecoveredGlobal_8000F90C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F90C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8FC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8FC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F8EC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F8EC_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F91C_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F91C_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9E4_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9E4_lbl_804FE120) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8000F9CC_lbl_804FE120_size[sizeof(RecoveredGlobal_8000F9CC_lbl_804FE120) == 0x18 ? 1 : -1];

}
