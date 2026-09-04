#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_v2_mode__9TObjEneDDFv(void);
int get_target_state_a__9TObjEneDDFPv(void* p);
int get_target_state_b__9TObjEneDDFPv(void* p);
u8 is_main_phase_15__9TObjEneDDFv(void);
u8 is_phase_e__9TObjEneDDFv(void);
int query_teammate_state__9TObjEneDDFPv(void* p);
int update_lobby_state__9TObjEneDDFPv(void* p);
int TLobby__sub_800C6C10(void*);
int TObjPlayer__sub_801BA42C(void*);
int TObjPlayer__sub_801BA494(void*);
s32 get_main_phase();
int is_any_teammate_in_state__10TObjPlayerFv(void*);

extern s32 enable_v2_features;
extern s32 lbl_805D5550;

s32 check_v2_mode__9TObjEneDDFv(void) {
    if (((s32) enable_v2_features != 0) && ((s32) lbl_805D5550 == 3)) {
        return 1;
    }
    return 0;
}

int get_target_state_a__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_801BA42C(p); }
int get_target_state_b__9TObjEneDDFPv(void* p) { return TObjPlayer__sub_801BA494(p); }

int query_teammate_state__9TObjEneDDFPv(void* p) { return is_any_teammate_in_state__10TObjPlayerFv(p); }
int update_lobby_state__9TObjEneDDFPv(void* p) { return TLobby__sub_800C6C10(p); }
u8 is_phase_e__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xE);
}
u8 is_main_phase_15__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xF);
}

}
