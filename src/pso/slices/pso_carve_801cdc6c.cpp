#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjPlayer__sub_8001BEF8(void *, int);
s32 is_anim_finished__10TObjPlayerFPv();
s16 TObjPlayer__sub_801D0458(void *);
M2C_UNK TObjPlayer__sub_801D0BC0(void *, int, int);
M2C_UNK clear_status_bit6__10TObjPlayerFPv(void *);
M2C_UNK get_anim_field_c__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801CDC6C(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_801CDC68(void);
void TObjPlayer__sub_801CDD00(void);
int try_apply_status_action_1__10TObjPlayerFPv(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void TObjPlayer__sub_801CDC6C(u8 *arg0) {
    if ((s16) M2C_FIELD(arg0, s16 *, 0x328) == 4) {
        if (is_anim_finished__10TObjPlayerFPv() != 0) {
            TObjPlayer__sub_801D0BC0((void *) (arg0), (int) (1), (int) (5));
        }
    } else if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x10) {
        if (TObjPlayer__sub_8001BEF8((void *)(get_anim_field_c__10TObjPlayerFPv((void *) (arg0 + 0x7CC))), (int) (1)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x328) = 4;
            M2C_FIELD(arg0, s16 *, 0xB8) = TObjPlayer__sub_801D0458((void *) (arg0));
            clear_status_bit6__10TObjPlayerFPv((void *) (arg0));
        }
    }
}

}
