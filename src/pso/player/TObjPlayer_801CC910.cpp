#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_band_state__10TObjPlayerFPv(u8 *arg0);
void update_target_approach__10TObjPlayerFPv(u8 *arg0);
M2C_UNK send_6x37_photon_blast__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CC9E4(void);
M2C_UNK set_action_flag_40__10TObjPlayerFPv(void *);
M2C_UNK get_dist__10TObjPlayerFPv(void *);
s32 objInBand__FP7GameObjf(void *);
int try_apply_status_action__10TObjPlayerFi(void*);
int try_apply_status_action_default__10TObjPlayerFPv(void* p);
M2C_UNK update_position_from_target__10TObjPlayerFPv();

#include "types.h"
extern "C" {
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {

void update_band_state__10TObjPlayerFPv(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 2) {
        get_dist__10TObjPlayerFPv((void *) (arg0 + 0x4AC));
        if (objInBand__FP7GameObjf((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            set_action_flag_40__10TObjPlayerFPv((void *) (arg0));
        }
    }
}

}
void update_target_approach__10TObjPlayerFPv(u8 *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        update_position_from_target__10TObjPlayerFPv();
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 2) {
        get_dist__10TObjPlayerFPv((void *) (arg0 + 0x4AC));
        if (objInBand__FP7GameObjf((void *) (arg0)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 3;
            set_action_flag_40__10TObjPlayerFPv((void *) (arg0));
            send_6x37_photon_blast__10TObjPlayerFPv((void *) (arg0));
        }
    }
}

}

}
