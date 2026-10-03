#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
struct Base_A { char pad[0x18]; };
struct V_A : public Base_A {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m15();
};

extern "C" {

void start_action_21__10TObjPlayerFPv(void *arg0);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
M2C_UNK refresh_equipment_slot__10TObjPlayerFv(void *);
s32 get_idle_animation__10TObjPlayerFPv(void *);
M2C_UNK cleanup_idle_entry__10TObjPlayerFPv(void *);
M2C_UNK run_action_state_phase__10TObjPlayerFisi(void *, s16, M2C_UNK);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
M2C_UNK set_action_state__10TObjPlayerFPvss(void *, M2C_UNK, s32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(void *, M2C_UNK);

extern const f32 TObjPlayer__data_805DC36C;

void start_action_21__10TObjPlayerFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x33C) = 0x15;
    run_action_state_phase__10TObjPlayerFisi(arg0, M2C_FIELD(arg0, s16 *, 0x326), 6);
    cleanup_idle_entry__10TObjPlayerFPv(arg0);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
    M2C_FIELD(arg0, f32 *, 0x624) = (f32) TObjPlayer__data_805DC36C;
    refresh_equipment_slot__10TObjPlayerFv(arg0);
    ((V_A *) arg0)->m15();
    if (is_locally_controlled__10TObjPlayerFPv(arg0) != 0) {
        send_field_state_if_active__10TObjPlayerFii(arg0, 0x40003206);
    }
    M2C_FIELD(arg0, s16 *, 0x328) = 1;
    set_action_state__10TObjPlayerFPvss(arg0, 0x15, get_idle_animation__10TObjPlayerFPv(arg0));
}

}
