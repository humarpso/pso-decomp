#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801EDA70_lbl_80449AC8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EDA70_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDA70_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EDB4C_lbl_80449AAC {
    s32 value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EDB4C_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDB4C_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EDBDC_lbl_80449A94 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801EDBDC_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDBDC_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_801EDC24_lbl_80449A88 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_801EDC24_TLobby__data_80512220 {
    u32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDC24_TLobby__data_80512360 {
    s8 value;
    u8 remaining[0x2B];
};

struct RecoveredGlobal_800F8A78_lbl_80501178 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_801EDD0C_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801EDD44_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801ED938_TLobby__data_80512220 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_801ED938_TLobby__data_80512360 {
    M2C_UNK value;
    u8 remaining[0x28];
};

extern "C" {
extern s32 lbl_805D5550;
void TLobby__sub_801EDF04(s32 arg0);
extern RecoveredGlobal_801EDA70_lbl_80449AC8 lbl_80449AC8;
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EDA70(void);
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AAC;
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EDB4C(void);
extern RecoveredGlobal_801EDBDC_lbl_80449A94 lbl_80449A94;
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EDBDC(void);
extern RecoveredGlobal_801EDC24_lbl_80449A88 lbl_80449A88;
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EDC24(void);
M2C_UNK memset(void *, int, int);
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EDC68(void);
M2C_UNK send_field1c_packet__6TLobbyFi();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
extern u32 TLobby__data_80512220[];
void TLobby__sub_801EDD0C(void);
M2C_UNK send_font_state__6TLobbyFi();
u32 TPlayerBattleCtrl4P__sub_801BA74C(int);
extern u32 TLobby__data_80512220[];
void TLobby__sub_801EDD44(void);
void init_battle_ctrl__6TLobbyFii(s32, s32);
s32 is_not_split_screen__13TRaderMapCoreFv(void);
void init_instance_with_text__19TPlayerBattleCtrl4PFii(s32, s32);
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801ED938(void);
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AE4;
void TLobby__sub_801ED994(void);
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449ADC;
void TLobby__sub_801ED9DC(void);
extern RecoveredGlobal_801EDA70_lbl_80449AC8 lbl_80449AD4;
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
void TLobby__sub_801EDA24(void);
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AC0;
void TLobby__sub_801EDABC(void);
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AB8;
void TLobby__sub_801EDB04(void);
extern u32 TLobby__data_80512220[];
extern RecoveredGlobal_801EDA70_TLobby__data_80512360 TLobby__data_80512360;
extern RecoveredGlobal_801EDB4C_lbl_80449AAC lbl_80449AA4;
void TLobby__sub_801EDB94(void);
void TLobby__sub_801F3C70(s16, s32, s32, s32, s32);
extern int* TLobby__data_805D5E78;
void TLobby__sub_801EDD7C(u32 first);
}

extern "C" {

int TLobby__sub_801EDDDC(void);
int TLobby__sub_801EDE00(void);
void apply_player_count__6TLobbyFv(void);
void store_status__6TLobbyFi(int a0);
int TLobby__sub_801B0974(void);
M2C_UNK clamp_and_store_layout_index__6TLobbyFi(u32);
u32 get_layout_id__20TWindowSubStatusDispFv(M2C_UNK);
s32 is_split_screen();
int set_mode__13TRaderMapCoreFi(void*);
M2C_UNK set_selected_layout__6TLobbyFi(u32);

extern u32 TLobby__data_80512220[];

void apply_player_count__6TLobbyFv(void) {
    u32 temp_r30;
    u32 temp_r31;

    temp_r30 = TLobby__data_80512220[0];
    temp_r31 = get_layout_id__20TWindowSubStatusDispFv(-1);
    if (is_split_screen() == 1) {
        if (temp_r30 < temp_r31) {
            clamp_and_store_layout_index__6TLobbyFi(temp_r30);
            return;
        }
        clamp_and_store_layout_index__6TLobbyFi(0U);
        return;
    }
    if (temp_r30 < temp_r31) {
        set_selected_layout__6TLobbyFi(temp_r30);
        return;
    }
    set_selected_layout__6TLobbyFi(0U);
}

typedef char RecoveredGlobal_801EDA70_lbl_80449AC8_size[sizeof(RecoveredGlobal_801EDA70_lbl_80449AC8) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801EDA70_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDA70_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EDA70_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDA70_TLobby__data_80512360) == 0x2C ? 1 : -1];

typedef char RecoveredGlobal_801ED938_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801ED938_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801ED938_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801ED938_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801ED938(void) {
    s32 temp_r31;
    temp_r31 = (*(RecoveredGlobal_801ED938_TLobby__data_80512220 *)&TLobby__data_80512220).value;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        init_instance_with_text__19TPlayerBattleCtrl4PFii((s32) &(*(RecoveredGlobal_801ED938_TLobby__data_80512360 *)&TLobby__data_80512360).value, temp_r31);
        return;
    }
    init_battle_ctrl__6TLobbyFii((s32) &(*(RecoveredGlobal_801ED938_TLobby__data_80512360 *)&TLobby__data_80512360).value, temp_r31);
}

void TLobby__sub_801ED994(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x9) = (s8) (&lbl_80449AE4.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x9) = (s8) lbl_80449AE4.value;
}

void TLobby__sub_801ED9DC(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x8) = (s8) (&lbl_80449ADC.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x8) = (s8) lbl_80449ADC.value;
}

void TLobby__sub_801EDA24(void) {
    if ((u32) (*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&TLobby__data_80512360.value, s8 *, 0x7) = (s8) M2C_FIELD(((u8 *)(&lbl_80449AD4.value) + ((*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0);
        return;
    }
    M2C_FIELD(&TLobby__data_80512360.value, s8 *, 0x7) = (s8) M2C_FIELD(&lbl_80449AD4.value, s32 *, 0x4);
}

void TLobby__sub_801EDA70(void) {
    if ((u32) (*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 2U) {
        M2C_FIELD(&TLobby__data_80512360.value, s8 *, 6) = (s8) M2C_FIELD(((u8 *)(&lbl_80449AC8.value) + ((*(RecoveredGlobal_801EDA70_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0);
        return;
    }
    M2C_FIELD(&TLobby__data_80512360.value, s8 *, 6) = (s8) M2C_FIELD(&lbl_80449AC8.value, s32 *, 8);
}

typedef char RecoveredGlobal_801EDB4C_lbl_80449AAC_size[sizeof(RecoveredGlobal_801EDB4C_lbl_80449AAC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801EDB4C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDB4C_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EDB4C_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDB4C_TLobby__data_80512360) == 0x2C ? 1 : -1];

void TLobby__sub_801EDABC(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x5) = (s8) (&lbl_80449AC0.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x5) = (s8) lbl_80449AC0.value;
}

void TLobby__sub_801EDB04(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x4) = (s8) (&lbl_80449AB8.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x4) = (s8) lbl_80449AB8.value;
}

void TLobby__sub_801EDB4C(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 2U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 3) = (s8) (&lbl_80449AAC.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 3) = (s8) lbl_80449AAC.value;
}

typedef char RecoveredGlobal_801EDBDC_lbl_80449A94_size[sizeof(RecoveredGlobal_801EDBDC_lbl_80449A94) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_801EDBDC_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDBDC_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EDBDC_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDBDC_TLobby__data_80512360) == 0x2C ? 1 : -1];

void TLobby__sub_801EDB94(void) {
    if ((u32) (*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 0x1U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x2) = (s8) (&lbl_80449AA4.value)[(*(RecoveredGlobal_801EDB4C_TLobby__data_80512220 *)&TLobby__data_80512220).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDB4C_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 0x2) = (s8) lbl_80449AA4.value;
}

void TLobby__sub_801EDBDC(void) {
    if ((u32) (*(RecoveredGlobal_801EDBDC_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 3U) {
        M2C_FIELD(&(*(RecoveredGlobal_801EDBDC_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 1) = (s8) (&lbl_80449A94.value)[(*(RecoveredGlobal_801EDBDC_TLobby__data_80512220 *)&TLobby__data_80512220).value];
        return;
    }
    M2C_FIELD(&(*(RecoveredGlobal_801EDBDC_TLobby__data_80512360 *)&TLobby__data_80512360).value, s8 *, 1) = (s8) lbl_80449A94.value;
}

typedef char RecoveredGlobal_801EDC24_lbl_80449A88_size[sizeof(RecoveredGlobal_801EDC24_lbl_80449A88) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_801EDC24_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDC24_TLobby__data_80512220) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_801EDC24_TLobby__data_80512360_size[sizeof(RecoveredGlobal_801EDC24_TLobby__data_80512360) == 0x2C ? 1 : -1];
void TLobby__sub_801EDC24(void) {
    s8 var_r0;
    if ((u32) (*(RecoveredGlobal_801EDC24_TLobby__data_80512220 *)&TLobby__data_80512220).value <= 2U) {
        var_r0 = (s8) M2C_FIELD(((u8 *)(&lbl_80449A88.value) + ((*(RecoveredGlobal_801EDC24_TLobby__data_80512220 *)&TLobby__data_80512220).value * 4)), s32 *, 0);
    } else {
        var_r0 = (s8) M2C_FIELD(&lbl_80449A88.value, s32 *, 8);
    }
    (*(RecoveredGlobal_801EDC24_TLobby__data_80512360 *)&TLobby__data_80512360).value = var_r0;
}

typedef char RecoveredGlobal_800F8A78_lbl_80501178_size[sizeof(RecoveredGlobal_800F8A78_lbl_80501178) == 0x10 ? 1 : -1];
void TLobby__sub_801EDC68(void) {
    memset((void *) (&(*(RecoveredGlobal_800F8A78_lbl_80501178 *)&TLobby__data_80512360).value), (int) (0), (int) (0x2c));
}

typedef char RecoveredGlobal_801EDD0C_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDD0C_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EDD0C(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((int) ((*(RecoveredGlobal_801EDD0C_TLobby__data_80512220 *)&TLobby__data_80512220).value)) != 0U) {
        send_field1c_packet__6TLobbyFi();
    }
}

typedef char RecoveredGlobal_801EDD44_TLobby__data_80512220_size[sizeof(RecoveredGlobal_801EDD44_TLobby__data_80512220) == 0x20 ? 1 : -1];
void TLobby__sub_801EDD44(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C((int) ((*(RecoveredGlobal_801EDD44_TLobby__data_80512220 *)&TLobby__data_80512220).value)) != 0U) {
        send_font_state__6TLobbyFi();
    }
}

void TLobby__sub_801EDD7C(u32 first) {
    u32 i = first;
    s32 a = (*(s32 **)&TLobby__data_805D5E78)[(u8)i++];
    s32 b = (*(s32 **)&TLobby__data_805D5E78)[(u8)i++];
    s16 c = (*(s32 **)&TLobby__data_805D5E78)[(u8)i++];
    s32 d = (*(s32 **)&TLobby__data_805D5E78)[(u8)i++];
    s32 e = (*(s32 **)&TLobby__data_805D5E78)[(u8)i];
    TLobby__sub_801F3C70(c, a, b, d, e);
}

int TLobby__sub_801EDDDC(void) { return set_mode__13TRaderMapCoreFi((void*)(0)); }
int TLobby__sub_801EDE00(void) { return set_mode__13TRaderMapCoreFi((void*)(1)); }

    extern int* TLobby__data_805D5E78;
void store_status__6TLobbyFi(int a0) { TLobby__data_805D5E78[(unsigned char)(a0)] = TLobby__sub_801B0974(); }
void TLobby__sub_801EDF04(s32 arg0) {
    s32 var_r5;
    var_r5 = lbl_805D5550;
    if (var_r5 < 0) {
        var_r5 = 0;
    }
    if (var_r5 > 3) {
        var_r5 = 3;
    }
    M2C_FIELD((*(s32 *)&TLobby__data_805D5E78), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = var_r5;
}

}
