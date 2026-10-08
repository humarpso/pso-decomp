#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
M2C_UNK vec3_add_to(void *, void *, f32);
M2C_UNK subtract_vector(void *, void *);
extern s32 lbl_805D4DF0;
void project_sound_origin_from_camera(s32 arg0, u8 *arg1, f32 farg0);
}

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
int freeze_all_players__10TObjPlayerFv(void*);
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
int get_target_state_b__9TObjEneDDFPv(void* p) { return freeze_all_players__10TObjPlayerFv(p); }

void project_sound_origin_from_camera(s32 arg0, u8 *arg1, f32 farg0) {
    f32 temp_f1;
    VecCopy__FP3VecPC3Vec((void *) (arg1), (void *) (arg0));
    subtract_vector((void *) (arg1), (void *) (lbl_805D4DF0 + 0x178));
    { f32 s = update_scale__15TObjBoss2TunnelFPv((void *) (arg1)); temp_f1 = s * farg0; }
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * temp_f1);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * temp_f1);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * temp_f1);
    vec3_add_to((void *) (arg1), (void *) (lbl_805D4DF0 + 0x178), (f32) (temp_f1));
}

int query_teammate_state__9TObjEneDDFPv(void* p) { return is_any_teammate_in_state__10TObjPlayerFv(p); }
int update_lobby_state__9TObjEneDDFPv(void* p) { return TLobby__sub_800C6C10(p); }
u8 is_phase_e__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xE);
}
u8 is_main_phase_15__9TObjEneDDFv(void) {
    return (u8) (get_main_phase() == 0xF);
}

}
