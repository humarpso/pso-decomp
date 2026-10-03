#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_801CDBA0 { u8 pad[0x1C]; f32 pos[3]; u8 pad2[0x2C - 0x28]; };

extern "C" {
s32 obj_isState2_324(void *);
s16 obj_getField1c(void *);
void *get_position_ptr__10TObjPlayerFPv(void *);
s32 calc_angle_to__10TObjPlayerFPvPv(void *, void *);
M2C_UNK update__10TNpcPlayerFPv(void *);
M2C_UNK TNpcPlayer__sub_80152B08(void *);
u8 *resolve_hittable_target(u16, s16);
s16 calc_scaled_value__10TObjPlayerFii(void *, int);
s16 TObjPlayer__sub_801D2F0C(void *);
void send_attack_stage3_request__10TObjPlayerFPv(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801CDC68(void);
void TObjPlayer__sub_801CDD00(void);
int try_apply_status_action_1__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void send_attack_stage3_request__10TObjPlayerFPv(u8 *arg0) {
    s16 sp8[4];
    s16 temp_r31;
    u8 *temp_r5;
    void *position;
    s32 var_r4;
    u8 *temp_r3;
    u8 *temp_r4;
    temp_r4 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x424));
    if (temp_r4 != NULL) {
        temp_r3 = (u8 *)(resolve_hittable_target(M2C_FIELD(temp_r4, u16 *, 0x508), M2C_FIELD(temp_r4, s16 *, 0x50A)));
        if (temp_r3 != NULL) {
            position = get_position_ptr__10TObjPlayerFPv(arg0);
            temp_r5 = M2C_FIELD(temp_r3, u8 **, 0xA4);
            var_r4 = calc_angle_to__10TObjPlayerFPvPv(position, &((Rec_801CDBA0 *)temp_r5)[M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x424), s16 *, 0x50A)].pos);
        } else {
            var_r4 = M2C_FIELD(arg0, s32 *, 0x60);
        }
        temp_r31 = calc_scaled_value__10TObjPlayerFii((void *) (arg0), (int) (var_r4));
        if ((arg0 == NULL) || (obj_isState2_324((void *) (arg0)) == 0)) {
            TNpcPlayer__sub_80152B08((void *) (&sp8));
            sp8[1] = obj_getField1c((void *) (arg0));
            sp8[2] = temp_r31;
            sp8[3] = TObjPlayer__sub_801D2F0C((void *) (arg0 + 0x7CC));
            update__10TNpcPlayerFPv((void *) (&sp8));
        }
    }
}

}
