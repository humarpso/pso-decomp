#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_velocity_if_free__10TObjPlayerFPv(void *arg0);
void clear_flag__10TObjPlayerFPv(void* p);
s32 try_change_action__10TObjPlayerFi(s32 arg0);
int TObjPlayer__sub_8001053C(void*);
void *TObjPlayer__sub_801B5EA4(void *);
M2C_UNK set_action_id__10TObjPlayerFPvs(s32, M2C_UNK);
s16 get_action_id__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801D0BC0(s32, s16, M2C_UNK);
void apply_velocity__10TObjPlayerFPv(void *);
s32 is_status_locked__10TObjPlayerFPv();
int obj_clearFlags30(void*, void*);

s32 try_change_action__10TObjPlayerFi(s32 arg0) {
    if (is_status_locked__10TObjPlayerFPv() != 0) {
        if (get_action_id__10TObjPlayerFPv(arg0 + 0x5F0) == 0x10) {
            TObjPlayer__sub_801D0BC0(arg0, 0x10, 5);
        } else {
            obj_clearFlags30((void*)(arg0), (void*)(0x10000));
            TObjPlayer__sub_801D0BC0(arg0, get_action_id__10TObjPlayerFPv(arg0 + 0x5F0), 5);
            set_action_id__10TObjPlayerFPvs(arg0 + 0x5F0, 0);
        }
        return 1;
    }
    return 0;
}

void clear_flag__10TObjPlayerFPv(void* p) { obj_clearFlags30((void*)(p), (void*)((void*)65536)); TObjPlayer__sub_8001053C(p); }

void apply_velocity_if_free__10TObjPlayerFPv(void *arg0) {
    void *x;
    x = TObjPlayer__sub_801B5EA4(arg0);
    if (x == NULL) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
