#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TLobby__sub_803FA150(M2C_UNK arg0, u8 *arg1);
}

extern "C" {

void TLobby__sub_803F8794(void);
void TLobby__sub_803F87C4(void);
void TLobby__sub_803F87C8(u8 *arg0);
void TLobby__sub_803F87DC(void);
void TLobby__sub_803F8864(void);
void TLobby__sub_803F88E0(void);
void TLobby__sub_803F892C(void);
void TLobby__sub_803F8958(void);
void TLobby__sub_803F89A0(void);
void TLobby__sub_803F89D8(void);
void TLobby__sub_803F8A08(void);
void TLobby__sub_803F8A24(void);
void TLobby__sub_803F8A9C(void);
void TLobby__sub_803F8B78(void);
s32 TLobby__sub_803F9CF4(s32 arg0);
void TLobby__sub_803FA234(void);
void TLobby__sub_803FA238(u8 *arg0);
void TLobby__sub_803FA280(void);
s32 TLobby__sub_803FD490(s16 arg0);
s32 TLobby__sub_803FD4B4(s16 arg0);
s32 TLobby__sub_803FD4D8(s16 arg0);
s32 TLobby__sub_803FD4FC(s16 arg0);
s32 TLobby__sub_803FE844(void);
void TLobby__sub_803FE84C(void);
s32 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1);
void TLobby__sub_803FF374(u8 *arg0);
void TLobby__sub_80400988(void);
void TLobby__sub_80400B98(u8 *arg0);
s32 TLobby__sub_80414870(u8 *arg0);
s32 TLobby__sub_8041549C(s16 arg0);
s32 TLobby__sub_804154C0(s16 arg0);
s32 TLobby__sub_804154E4(s16 arg0);
s32 TLobby__sub_80415508(s16 arg0);
void clear_position__6TLobbyFPv(u8 *arg0);
s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0);
u16 get_field_4__6TLobbyFPv(u8 *arg0);
s32 get_field_534__6TLobbyFPv(u8 *arg0);
s32 get_field_d8__6TLobbyFPv(u8 *arg0);
s32 get_queue_diff__6TLobbyFPv(u8 *arg0);
s32 get_remaining__6TLobbyFi(s32 arg0);
s32 get_score__6TLobbyFPv(u8 *arg0);
void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1);
void init_packet_header__6TLobbyFPvi(u8 *arg0, s32 arg1);
void init_params__6TLobbyFPv(u8 *arg0);
s32 mark_ready__6TLobbyFPv(u8 *arg0);
void reset_slot_index__6TLobbyFPv(u8 *arg0);
void set_active__6TLobbyFPv(u8 *arg0);
s32 set_active_flag__6TLobbyFPv(u8 *arg0);
s32 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_flags_and_state__6TLobbyFPv(u8 *arg0);
s32 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1);
s32 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1);
void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1);

void TLobby__sub_803F8794(void) {

}

extern s16 lbl_805D47FC;
extern s32 lbl_805D4800;
extern s32 lbl_805D7A44;

void init_params__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 4) = (s16) lbl_805D47FC;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) lbl_805D4800;
    M2C_FIELD(arg0, s16 *, 0xA0) = 0x64;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D7A44;
}

void TLobby__sub_803F87C4(void) {

}

extern s16 lbl_805D47FA;
extern s32 lbl_805D7A40;

void TLobby__sub_803F87C8(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0) = (s16) lbl_805D47FA;
    M2C_FIELD(arg0, s32 *, 8) = (s32) lbl_805D7A40;
}

void TLobby__sub_803F87DC(void) {

}

void TLobby__sub_803F8864(void) {

}

void TLobby__sub_803F88E0(void) {

}

void TLobby__sub_803F892C(void) {

}

void TLobby__sub_803F8958(void) {

}

void TLobby__sub_803F89A0(void) {

}

void TLobby__sub_803F89D8(void) {

}

void TLobby__sub_803F8A08(void) {

}

void TLobby__sub_803F8A24(void) {

}

void TLobby__sub_803F8A9C(void) {

}

void TLobby__sub_803F8B78(void) {

}

extern s32 lbl_805D4810;

s32 TLobby__sub_803F9CF4(s32 arg0) {
    if ((arg0 < 0) || (arg0 > 0x1F)) {
        return -1;
    }
    lbl_805D4810 = arg0;
    return 0;
}

s32 TLobby__sub_803FA150(M2C_UNK arg0, u8 *arg1) {
    M2C_FIELD(arg1, s16 *, 4) = (s16) (M2C_FIELD(arg1, s16 *, 4) & 0xFFFFFFFB);
    M2C_FIELD(arg1, s16 *, 0) = (s16) (M2C_FIELD(arg1, s16 *, 0) & 0xFFFFFFFB);
    M2C_FIELD(arg1, s16 *, 0x1C) = (s16) (M2C_FIELD(arg1, s16 *, 0x1C) & 0xFFFFFFFB);
    return 0;
}

void TLobby__sub_803FA234(void) {

}

void TLobby__sub_803FA238(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

void TLobby__sub_803FA280(void) {

}

extern u16 lbl_805D7A78;

s32 get_remaining__6TLobbyFi(s32 arg0) {
    return lbl_805D7A78 - arg0;
}

s32 set_active_flag__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA0) = 2;
    M2C_FIELD(arg0, u8 *, 0xA2) = (u8) (M2C_FIELD(arg0, u8 *, 0xA2) | 0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x20);
    return 0;
}

s32 set_flags_and_state__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) & 0xFFFFFFBF);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x80);
    if ((u8) M2C_FIELD(arg0, u8 *, 0) < 1U) {
        M2C_FIELD(arg0, u8 *, 0) = 1U;
    }
    return 0;
}

s32 TLobby__sub_803FD490(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4B4(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4D8(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FD4FC(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x112;
    }
    return 0;
}

s32 TLobby__sub_803FE844(void) {
    return 0;
}

void TLobby__sub_803FE84C(void) {

}

s32 set_target_index__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFF7FF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x800);
    }
    return 0;
}

s32 set_filter_index__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFDFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x200);
    }
    return 0;
}

s32 set_filter_id__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFF7FF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x800);
    }
    return 0;
}

s32 set_target_slot__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFDFF);
    } else {
        M2C_FIELD(arg0, s32 *, 0x18) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 0x200);
    }
    return 0;
}

s32 set_target_id__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFFF7);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 8);
    }
    return 0;
}

s32 TLobby__sub_803FF2CC(u8 *arg0, s32 arg1) {
    if (arg1 == -1) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) & 0xFFFFFFF7);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
        M2C_FIELD(arg0, s16 *, 4) = (s16) (M2C_FIELD(arg0, s16 *, 4) | 8);
    }
    return 0;
}

void TLobby__sub_803FF374(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    M2C_FIELD(arg0, s8 *, 0xB) = 0;
}

void TLobby__sub_80400988(void) {

}

void TLobby__sub_80400B98(u8 *arg0) {
    *M2C_FIELD(arg0, s8 **, 0xC) = 1;
}

u16 get_field_4__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, u16 *, 4);
}

s32 mark_ready__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x38) = 2;
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 0x20);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x20);
    return 0;
}

void set_active__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s8 *, 0x38) = 1;
    M2C_FIELD(arg0, u8 *, 0x3A) = (u8) (M2C_FIELD(arg0, u8 *, 0x3A) | 0x10);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (M2C_FIELD(arg0, u8 *, 2) | 0x10);
    M2C_FIELD(arg0, u8 *, 0x3B) = (u8) M2C_FIELD(arg0, u8 *, 0x3C);
}

void init_msg__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 4;
}

void init_packet_header__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 3;
}

void set_value_and_enable__6TLobbyFPvi(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, s8 *, 4) = 1;
}

s32 TLobby__sub_80414870(u8 *arg0) {
    u8 temp_r3;

    if ((u8) M2C_FIELD(arg0, u8 *, 0) != 0xFE) {
        return 0;
    }
    temp_r3 = M2C_FIELD(arg0, u8 *, 1);
    if (!(temp_r3 & 0x80) || (temp_r3 & 0x40)) {
        return 0;
    }
    return 1;
}

s32 TLobby__sub_8041549C(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_804154C0(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_804154E4(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

s32 TLobby__sub_80415508(s16 arg0) {
    if ((arg0 != 0) && (arg0 != 1)) {
        return -0x110;
    }
    return 0;
}

void clear_position__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x25C) = 0;
    M2C_FIELD(arg0, s16 *, 0x25E) = 0;
    M2C_FIELD(arg0, s16 *, 0x260) = 0;
    M2C_FIELD(arg0, s16 *, 0x262) = 0;
}

void reset_slot_index__6TLobbyFPv(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x320) = -1;
    M2C_FIELD(arg0, s32 *, 0x328) = (s32) M2C_FIELD(arg0, s32 *, 0x324);
}

s32 get_field_534__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534);
}

s32 get_field_d8__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xD8);
}

s32 get_score__6TLobbyFPv(u8 *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0x204) >> 7U) & 1) {
        return M2C_FIELD(arg0, s32 *, 0x34);
    }
    return M2C_FIELD(arg0, s32 *, 0x20) + M2C_FIELD(arg0, s32 *, 0x34);
}

s32 get_queue_diff__6TLobbyFPv(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x534) - M2C_FIELD(arg0, s32 *, 0xD8);
}

s32 get_adjusted_slot_count__6TLobbyFPv(u8 *arg0) {
    if (((u8) M2C_FIELD(arg0, u8 *, 0x204) >> 7U) & 1) {
        return M2C_FIELD(arg0, s32 *, 0x530);
    }
    return M2C_FIELD(arg0, s32 *, 0x530) - M2C_FIELD(arg0, s32 *, 0x20);
}

}
